#pragma once
#ifndef SRCC_LIBVIRTUALQABSTRACTPROXYMODEL_H
#define SRCC_LIBVIRTUALQABSTRACTPROXYMODEL_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QAbstractProxyModel so that we can call protected methods
class VirtualQAbstractProxyModel : public QAbstractProxyModel {

  public:
    // Virtual class boolean flag
    bool isVirtualQAbstractProxyModel = true;

    // Virtual class public types (including callbacks)
    using QAbstractProxyModel_Metacall_Callback = int (*)(QAbstractProxyModel*, int, int, void**);
    using QAbstractProxyModel_SetSourceModel_Callback = void (*)(QAbstractProxyModel*, QAbstractItemModel*);
    using QAbstractProxyModel_MapToSource_Callback = QModelIndex* (*)(const QAbstractProxyModel*, QModelIndex*);
    using QAbstractProxyModel_MapFromSource_Callback = QModelIndex* (*)(const QAbstractProxyModel*, QModelIndex*);
    using QAbstractProxyModel_MapSelectionToSource_Callback = QItemSelection* (*)(const QAbstractProxyModel*, QItemSelection*);
    using QAbstractProxyModel_MapSelectionFromSource_Callback = QItemSelection* (*)(const QAbstractProxyModel*, QItemSelection*);
    using QAbstractProxyModel_Submit_Callback = bool (*)();
    using QAbstractProxyModel_Revert_Callback = void (*)();
    using QAbstractProxyModel_Data_Callback = QVariant* (*)(const QAbstractProxyModel*, QModelIndex*, int);
    using QAbstractProxyModel_HeaderData_Callback = QVariant* (*)(const QAbstractProxyModel*, int, int, int);
    using QAbstractProxyModel_ItemData_Callback = libqt_map /* of int to QVariant* */ (*)(const QAbstractProxyModel*, QModelIndex*);
    using QAbstractProxyModel_Flags_Callback = int (*)(const QAbstractProxyModel*, QModelIndex*);
    using QAbstractProxyModel_SetData_Callback = bool (*)(QAbstractProxyModel*, QModelIndex*, QVariant*, int);
    using QAbstractProxyModel_SetItemData_Callback = bool (*)(QAbstractProxyModel*, QModelIndex*, libqt_map /* of int to QVariant* */);
    using QAbstractProxyModel_SetHeaderData_Callback = bool (*)(QAbstractProxyModel*, int, int, QVariant*, int);
    using QAbstractProxyModel_ClearItemData_Callback = bool (*)(QAbstractProxyModel*, QModelIndex*);
    using QAbstractProxyModel_Buddy_Callback = QModelIndex* (*)(const QAbstractProxyModel*, QModelIndex*);
    using QAbstractProxyModel_CanFetchMore_Callback = bool (*)(const QAbstractProxyModel*, QModelIndex*);
    using QAbstractProxyModel_FetchMore_Callback = void (*)(QAbstractProxyModel*, QModelIndex*);
    using QAbstractProxyModel_Sort_Callback = void (*)(QAbstractProxyModel*, int, int);
    using QAbstractProxyModel_Span_Callback = QSize* (*)(const QAbstractProxyModel*, QModelIndex*);
    using QAbstractProxyModel_HasChildren_Callback = bool (*)(const QAbstractProxyModel*, QModelIndex*);
    using QAbstractProxyModel_Sibling_Callback = QModelIndex* (*)(const QAbstractProxyModel*, int, int, QModelIndex*);
    using QAbstractProxyModel_MimeData_Callback = QMimeData* (*)(const QAbstractProxyModel*, libqt_list /* of QModelIndex* */);
    using QAbstractProxyModel_CanDropMimeData_Callback = bool (*)(const QAbstractProxyModel*, QMimeData*, int, int, int, QModelIndex*);
    using QAbstractProxyModel_DropMimeData_Callback = bool (*)(QAbstractProxyModel*, QMimeData*, int, int, int, QModelIndex*);
    using QAbstractProxyModel_MimeTypes_Callback = const char** (*)();
    using QAbstractProxyModel_SupportedDragActions_Callback = int (*)();
    using QAbstractProxyModel_SupportedDropActions_Callback = int (*)();
    using QAbstractProxyModel_RoleNames_Callback = libqt_map /* of int to libqt_string */ (*)();
    using QAbstractProxyModel_Index_Callback = QModelIndex* (*)(const QAbstractProxyModel*, int, int, QModelIndex*);
    using QAbstractProxyModel_Parent_Callback = QModelIndex* (*)(const QAbstractProxyModel*, QModelIndex*);
    using QAbstractProxyModel_RowCount_Callback = int (*)(const QAbstractProxyModel*, QModelIndex*);
    using QAbstractProxyModel_ColumnCount_Callback = int (*)(const QAbstractProxyModel*, QModelIndex*);
    using QAbstractProxyModel_InsertRows_Callback = bool (*)(QAbstractProxyModel*, int, int, QModelIndex*);
    using QAbstractProxyModel_InsertColumns_Callback = bool (*)(QAbstractProxyModel*, int, int, QModelIndex*);
    using QAbstractProxyModel_RemoveRows_Callback = bool (*)(QAbstractProxyModel*, int, int, QModelIndex*);
    using QAbstractProxyModel_RemoveColumns_Callback = bool (*)(QAbstractProxyModel*, int, int, QModelIndex*);
    using QAbstractProxyModel_MoveRows_Callback = bool (*)(QAbstractProxyModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QAbstractProxyModel_MoveColumns_Callback = bool (*)(QAbstractProxyModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QAbstractProxyModel_Match_Callback = QModelIndex** (*)(const QAbstractProxyModel*, QModelIndex*, int, QVariant*, int, int);
    using QAbstractProxyModel_MultiData_Callback = void (*)(const QAbstractProxyModel*, QModelIndex*, QModelRoleDataSpan*);
    using QAbstractProxyModel_ResetInternalData_Callback = void (*)();
    using QAbstractProxyModel_Event_Callback = bool (*)(QAbstractProxyModel*, QEvent*);
    using QAbstractProxyModel_EventFilter_Callback = bool (*)(QAbstractProxyModel*, QObject*, QEvent*);
    using QAbstractProxyModel_TimerEvent_Callback = void (*)(QAbstractProxyModel*, QTimerEvent*);
    using QAbstractProxyModel_ChildEvent_Callback = void (*)(QAbstractProxyModel*, QChildEvent*);
    using QAbstractProxyModel_CustomEvent_Callback = void (*)(QAbstractProxyModel*, QEvent*);
    using QAbstractProxyModel_ConnectNotify_Callback = void (*)(QAbstractProxyModel*, QMetaMethod*);
    using QAbstractProxyModel_DisconnectNotify_Callback = void (*)(QAbstractProxyModel*, QMetaMethod*);
    using QAbstractProxyModel_CreateSourceIndex_Callback = QModelIndex* (*)(const QAbstractProxyModel*, int, int, void*);
    using QAbstractProxyModel_CreateIndex_Callback = QModelIndex* (*)(const QAbstractProxyModel*, int, int);
    using QAbstractProxyModel_EncodeData_Callback = void (*)(const QAbstractProxyModel*, libqt_list /* of QModelIndex* */, QDataStream*);
    using QAbstractProxyModel_DecodeData_Callback = bool (*)(QAbstractProxyModel*, int, int, QModelIndex*, QDataStream*);
    using QAbstractProxyModel_BeginInsertRows_Callback = void (*)(QAbstractProxyModel*, QModelIndex*, int, int);
    using QAbstractProxyModel_EndInsertRows_Callback = void (*)();
    using QAbstractProxyModel_BeginRemoveRows_Callback = void (*)(QAbstractProxyModel*, QModelIndex*, int, int);
    using QAbstractProxyModel_EndRemoveRows_Callback = void (*)();
    using QAbstractProxyModel_BeginMoveRows_Callback = bool (*)(QAbstractProxyModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QAbstractProxyModel_EndMoveRows_Callback = void (*)();
    using QAbstractProxyModel_BeginInsertColumns_Callback = void (*)(QAbstractProxyModel*, QModelIndex*, int, int);
    using QAbstractProxyModel_EndInsertColumns_Callback = void (*)();
    using QAbstractProxyModel_BeginRemoveColumns_Callback = void (*)(QAbstractProxyModel*, QModelIndex*, int, int);
    using QAbstractProxyModel_EndRemoveColumns_Callback = void (*)();
    using QAbstractProxyModel_BeginMoveColumns_Callback = bool (*)(QAbstractProxyModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QAbstractProxyModel_EndMoveColumns_Callback = void (*)();
    using QAbstractProxyModel_BeginResetModel_Callback = void (*)();
    using QAbstractProxyModel_EndResetModel_Callback = void (*)();
    using QAbstractProxyModel_ChangePersistentIndex_Callback = void (*)(QAbstractProxyModel*, QModelIndex*, QModelIndex*);
    using QAbstractProxyModel_ChangePersistentIndexList_Callback = void (*)(QAbstractProxyModel*, libqt_list /* of QModelIndex* */, libqt_list /* of QModelIndex* */);
    using QAbstractProxyModel_PersistentIndexList_Callback = QModelIndex** (*)();
    using QAbstractProxyModel_Sender_Callback = QObject* (*)();
    using QAbstractProxyModel_SenderSignalIndex_Callback = int (*)();
    using QAbstractProxyModel_Receivers_Callback = int (*)(const QAbstractProxyModel*, const char*);
    using QAbstractProxyModel_IsSignalConnected_Callback = bool (*)(const QAbstractProxyModel*, QMetaMethod*);

  protected:
    // Instance callback storage
    QAbstractProxyModel_Metacall_Callback qabstractproxymodel_metacall_callback = nullptr;
    QAbstractProxyModel_SetSourceModel_Callback qabstractproxymodel_setsourcemodel_callback = nullptr;
    QAbstractProxyModel_MapToSource_Callback qabstractproxymodel_maptosource_callback = nullptr;
    QAbstractProxyModel_MapFromSource_Callback qabstractproxymodel_mapfromsource_callback = nullptr;
    QAbstractProxyModel_MapSelectionToSource_Callback qabstractproxymodel_mapselectiontosource_callback = nullptr;
    QAbstractProxyModel_MapSelectionFromSource_Callback qabstractproxymodel_mapselectionfromsource_callback = nullptr;
    QAbstractProxyModel_Submit_Callback qabstractproxymodel_submit_callback = nullptr;
    QAbstractProxyModel_Revert_Callback qabstractproxymodel_revert_callback = nullptr;
    QAbstractProxyModel_Data_Callback qabstractproxymodel_data_callback = nullptr;
    QAbstractProxyModel_HeaderData_Callback qabstractproxymodel_headerdata_callback = nullptr;
    QAbstractProxyModel_ItemData_Callback qabstractproxymodel_itemdata_callback = nullptr;
    QAbstractProxyModel_Flags_Callback qabstractproxymodel_flags_callback = nullptr;
    QAbstractProxyModel_SetData_Callback qabstractproxymodel_setdata_callback = nullptr;
    QAbstractProxyModel_SetItemData_Callback qabstractproxymodel_setitemdata_callback = nullptr;
    QAbstractProxyModel_SetHeaderData_Callback qabstractproxymodel_setheaderdata_callback = nullptr;
    QAbstractProxyModel_ClearItemData_Callback qabstractproxymodel_clearitemdata_callback = nullptr;
    QAbstractProxyModel_Buddy_Callback qabstractproxymodel_buddy_callback = nullptr;
    QAbstractProxyModel_CanFetchMore_Callback qabstractproxymodel_canfetchmore_callback = nullptr;
    QAbstractProxyModel_FetchMore_Callback qabstractproxymodel_fetchmore_callback = nullptr;
    QAbstractProxyModel_Sort_Callback qabstractproxymodel_sort_callback = nullptr;
    QAbstractProxyModel_Span_Callback qabstractproxymodel_span_callback = nullptr;
    QAbstractProxyModel_HasChildren_Callback qabstractproxymodel_haschildren_callback = nullptr;
    QAbstractProxyModel_Sibling_Callback qabstractproxymodel_sibling_callback = nullptr;
    QAbstractProxyModel_MimeData_Callback qabstractproxymodel_mimedata_callback = nullptr;
    QAbstractProxyModel_CanDropMimeData_Callback qabstractproxymodel_candropmimedata_callback = nullptr;
    QAbstractProxyModel_DropMimeData_Callback qabstractproxymodel_dropmimedata_callback = nullptr;
    QAbstractProxyModel_MimeTypes_Callback qabstractproxymodel_mimetypes_callback = nullptr;
    QAbstractProxyModel_SupportedDragActions_Callback qabstractproxymodel_supporteddragactions_callback = nullptr;
    QAbstractProxyModel_SupportedDropActions_Callback qabstractproxymodel_supporteddropactions_callback = nullptr;
    QAbstractProxyModel_RoleNames_Callback qabstractproxymodel_rolenames_callback = nullptr;
    QAbstractProxyModel_Index_Callback qabstractproxymodel_index_callback = nullptr;
    QAbstractProxyModel_Parent_Callback qabstractproxymodel_parent_callback = nullptr;
    QAbstractProxyModel_RowCount_Callback qabstractproxymodel_rowcount_callback = nullptr;
    QAbstractProxyModel_ColumnCount_Callback qabstractproxymodel_columncount_callback = nullptr;
    QAbstractProxyModel_InsertRows_Callback qabstractproxymodel_insertrows_callback = nullptr;
    QAbstractProxyModel_InsertColumns_Callback qabstractproxymodel_insertcolumns_callback = nullptr;
    QAbstractProxyModel_RemoveRows_Callback qabstractproxymodel_removerows_callback = nullptr;
    QAbstractProxyModel_RemoveColumns_Callback qabstractproxymodel_removecolumns_callback = nullptr;
    QAbstractProxyModel_MoveRows_Callback qabstractproxymodel_moverows_callback = nullptr;
    QAbstractProxyModel_MoveColumns_Callback qabstractproxymodel_movecolumns_callback = nullptr;
    QAbstractProxyModel_Match_Callback qabstractproxymodel_match_callback = nullptr;
    QAbstractProxyModel_MultiData_Callback qabstractproxymodel_multidata_callback = nullptr;
    QAbstractProxyModel_ResetInternalData_Callback qabstractproxymodel_resetinternaldata_callback = nullptr;
    QAbstractProxyModel_Event_Callback qabstractproxymodel_event_callback = nullptr;
    QAbstractProxyModel_EventFilter_Callback qabstractproxymodel_eventfilter_callback = nullptr;
    QAbstractProxyModel_TimerEvent_Callback qabstractproxymodel_timerevent_callback = nullptr;
    QAbstractProxyModel_ChildEvent_Callback qabstractproxymodel_childevent_callback = nullptr;
    QAbstractProxyModel_CustomEvent_Callback qabstractproxymodel_customevent_callback = nullptr;
    QAbstractProxyModel_ConnectNotify_Callback qabstractproxymodel_connectnotify_callback = nullptr;
    QAbstractProxyModel_DisconnectNotify_Callback qabstractproxymodel_disconnectnotify_callback = nullptr;
    QAbstractProxyModel_CreateSourceIndex_Callback qabstractproxymodel_createsourceindex_callback = nullptr;
    QAbstractProxyModel_CreateIndex_Callback qabstractproxymodel_createindex_callback = nullptr;
    QAbstractProxyModel_EncodeData_Callback qabstractproxymodel_encodedata_callback = nullptr;
    QAbstractProxyModel_DecodeData_Callback qabstractproxymodel_decodedata_callback = nullptr;
    QAbstractProxyModel_BeginInsertRows_Callback qabstractproxymodel_begininsertrows_callback = nullptr;
    QAbstractProxyModel_EndInsertRows_Callback qabstractproxymodel_endinsertrows_callback = nullptr;
    QAbstractProxyModel_BeginRemoveRows_Callback qabstractproxymodel_beginremoverows_callback = nullptr;
    QAbstractProxyModel_EndRemoveRows_Callback qabstractproxymodel_endremoverows_callback = nullptr;
    QAbstractProxyModel_BeginMoveRows_Callback qabstractproxymodel_beginmoverows_callback = nullptr;
    QAbstractProxyModel_EndMoveRows_Callback qabstractproxymodel_endmoverows_callback = nullptr;
    QAbstractProxyModel_BeginInsertColumns_Callback qabstractproxymodel_begininsertcolumns_callback = nullptr;
    QAbstractProxyModel_EndInsertColumns_Callback qabstractproxymodel_endinsertcolumns_callback = nullptr;
    QAbstractProxyModel_BeginRemoveColumns_Callback qabstractproxymodel_beginremovecolumns_callback = nullptr;
    QAbstractProxyModel_EndRemoveColumns_Callback qabstractproxymodel_endremovecolumns_callback = nullptr;
    QAbstractProxyModel_BeginMoveColumns_Callback qabstractproxymodel_beginmovecolumns_callback = nullptr;
    QAbstractProxyModel_EndMoveColumns_Callback qabstractproxymodel_endmovecolumns_callback = nullptr;
    QAbstractProxyModel_BeginResetModel_Callback qabstractproxymodel_beginresetmodel_callback = nullptr;
    QAbstractProxyModel_EndResetModel_Callback qabstractproxymodel_endresetmodel_callback = nullptr;
    QAbstractProxyModel_ChangePersistentIndex_Callback qabstractproxymodel_changepersistentindex_callback = nullptr;
    QAbstractProxyModel_ChangePersistentIndexList_Callback qabstractproxymodel_changepersistentindexlist_callback = nullptr;
    QAbstractProxyModel_PersistentIndexList_Callback qabstractproxymodel_persistentindexlist_callback = nullptr;
    QAbstractProxyModel_Sender_Callback qabstractproxymodel_sender_callback = nullptr;
    QAbstractProxyModel_SenderSignalIndex_Callback qabstractproxymodel_sendersignalindex_callback = nullptr;
    QAbstractProxyModel_Receivers_Callback qabstractproxymodel_receivers_callback = nullptr;
    QAbstractProxyModel_IsSignalConnected_Callback qabstractproxymodel_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qabstractproxymodel_metacall_isbase = false;
    mutable bool qabstractproxymodel_setsourcemodel_isbase = false;
    mutable bool qabstractproxymodel_maptosource_isbase = false;
    mutable bool qabstractproxymodel_mapfromsource_isbase = false;
    mutable bool qabstractproxymodel_mapselectiontosource_isbase = false;
    mutable bool qabstractproxymodel_mapselectionfromsource_isbase = false;
    mutable bool qabstractproxymodel_submit_isbase = false;
    mutable bool qabstractproxymodel_revert_isbase = false;
    mutable bool qabstractproxymodel_data_isbase = false;
    mutable bool qabstractproxymodel_headerdata_isbase = false;
    mutable bool qabstractproxymodel_itemdata_isbase = false;
    mutable bool qabstractproxymodel_flags_isbase = false;
    mutable bool qabstractproxymodel_setdata_isbase = false;
    mutable bool qabstractproxymodel_setitemdata_isbase = false;
    mutable bool qabstractproxymodel_setheaderdata_isbase = false;
    mutable bool qabstractproxymodel_clearitemdata_isbase = false;
    mutable bool qabstractproxymodel_buddy_isbase = false;
    mutable bool qabstractproxymodel_canfetchmore_isbase = false;
    mutable bool qabstractproxymodel_fetchmore_isbase = false;
    mutable bool qabstractproxymodel_sort_isbase = false;
    mutable bool qabstractproxymodel_span_isbase = false;
    mutable bool qabstractproxymodel_haschildren_isbase = false;
    mutable bool qabstractproxymodel_sibling_isbase = false;
    mutable bool qabstractproxymodel_mimedata_isbase = false;
    mutable bool qabstractproxymodel_candropmimedata_isbase = false;
    mutable bool qabstractproxymodel_dropmimedata_isbase = false;
    mutable bool qabstractproxymodel_mimetypes_isbase = false;
    mutable bool qabstractproxymodel_supporteddragactions_isbase = false;
    mutable bool qabstractproxymodel_supporteddropactions_isbase = false;
    mutable bool qabstractproxymodel_rolenames_isbase = false;
    mutable bool qabstractproxymodel_index_isbase = false;
    mutable bool qabstractproxymodel_parent_isbase = false;
    mutable bool qabstractproxymodel_rowcount_isbase = false;
    mutable bool qabstractproxymodel_columncount_isbase = false;
    mutable bool qabstractproxymodel_insertrows_isbase = false;
    mutable bool qabstractproxymodel_insertcolumns_isbase = false;
    mutable bool qabstractproxymodel_removerows_isbase = false;
    mutable bool qabstractproxymodel_removecolumns_isbase = false;
    mutable bool qabstractproxymodel_moverows_isbase = false;
    mutable bool qabstractproxymodel_movecolumns_isbase = false;
    mutable bool qabstractproxymodel_match_isbase = false;
    mutable bool qabstractproxymodel_multidata_isbase = false;
    mutable bool qabstractproxymodel_resetinternaldata_isbase = false;
    mutable bool qabstractproxymodel_event_isbase = false;
    mutable bool qabstractproxymodel_eventfilter_isbase = false;
    mutable bool qabstractproxymodel_timerevent_isbase = false;
    mutable bool qabstractproxymodel_childevent_isbase = false;
    mutable bool qabstractproxymodel_customevent_isbase = false;
    mutable bool qabstractproxymodel_connectnotify_isbase = false;
    mutable bool qabstractproxymodel_disconnectnotify_isbase = false;
    mutable bool qabstractproxymodel_createsourceindex_isbase = false;
    mutable bool qabstractproxymodel_createindex_isbase = false;
    mutable bool qabstractproxymodel_encodedata_isbase = false;
    mutable bool qabstractproxymodel_decodedata_isbase = false;
    mutable bool qabstractproxymodel_begininsertrows_isbase = false;
    mutable bool qabstractproxymodel_endinsertrows_isbase = false;
    mutable bool qabstractproxymodel_beginremoverows_isbase = false;
    mutable bool qabstractproxymodel_endremoverows_isbase = false;
    mutable bool qabstractproxymodel_beginmoverows_isbase = false;
    mutable bool qabstractproxymodel_endmoverows_isbase = false;
    mutable bool qabstractproxymodel_begininsertcolumns_isbase = false;
    mutable bool qabstractproxymodel_endinsertcolumns_isbase = false;
    mutable bool qabstractproxymodel_beginremovecolumns_isbase = false;
    mutable bool qabstractproxymodel_endremovecolumns_isbase = false;
    mutable bool qabstractproxymodel_beginmovecolumns_isbase = false;
    mutable bool qabstractproxymodel_endmovecolumns_isbase = false;
    mutable bool qabstractproxymodel_beginresetmodel_isbase = false;
    mutable bool qabstractproxymodel_endresetmodel_isbase = false;
    mutable bool qabstractproxymodel_changepersistentindex_isbase = false;
    mutable bool qabstractproxymodel_changepersistentindexlist_isbase = false;
    mutable bool qabstractproxymodel_persistentindexlist_isbase = false;
    mutable bool qabstractproxymodel_sender_isbase = false;
    mutable bool qabstractproxymodel_sendersignalindex_isbase = false;
    mutable bool qabstractproxymodel_receivers_isbase = false;
    mutable bool qabstractproxymodel_issignalconnected_isbase = false;

  public:
    VirtualQAbstractProxyModel() : QAbstractProxyModel() {};
    VirtualQAbstractProxyModel(QObject* parent) : QAbstractProxyModel(parent) {};

    ~VirtualQAbstractProxyModel() {
        qabstractproxymodel_metacall_callback = nullptr;
        qabstractproxymodel_setsourcemodel_callback = nullptr;
        qabstractproxymodel_maptosource_callback = nullptr;
        qabstractproxymodel_mapfromsource_callback = nullptr;
        qabstractproxymodel_mapselectiontosource_callback = nullptr;
        qabstractproxymodel_mapselectionfromsource_callback = nullptr;
        qabstractproxymodel_submit_callback = nullptr;
        qabstractproxymodel_revert_callback = nullptr;
        qabstractproxymodel_data_callback = nullptr;
        qabstractproxymodel_headerdata_callback = nullptr;
        qabstractproxymodel_itemdata_callback = nullptr;
        qabstractproxymodel_flags_callback = nullptr;
        qabstractproxymodel_setdata_callback = nullptr;
        qabstractproxymodel_setitemdata_callback = nullptr;
        qabstractproxymodel_setheaderdata_callback = nullptr;
        qabstractproxymodel_clearitemdata_callback = nullptr;
        qabstractproxymodel_buddy_callback = nullptr;
        qabstractproxymodel_canfetchmore_callback = nullptr;
        qabstractproxymodel_fetchmore_callback = nullptr;
        qabstractproxymodel_sort_callback = nullptr;
        qabstractproxymodel_span_callback = nullptr;
        qabstractproxymodel_haschildren_callback = nullptr;
        qabstractproxymodel_sibling_callback = nullptr;
        qabstractproxymodel_mimedata_callback = nullptr;
        qabstractproxymodel_candropmimedata_callback = nullptr;
        qabstractproxymodel_dropmimedata_callback = nullptr;
        qabstractproxymodel_mimetypes_callback = nullptr;
        qabstractproxymodel_supporteddragactions_callback = nullptr;
        qabstractproxymodel_supporteddropactions_callback = nullptr;
        qabstractproxymodel_rolenames_callback = nullptr;
        qabstractproxymodel_index_callback = nullptr;
        qabstractproxymodel_parent_callback = nullptr;
        qabstractproxymodel_rowcount_callback = nullptr;
        qabstractproxymodel_columncount_callback = nullptr;
        qabstractproxymodel_insertrows_callback = nullptr;
        qabstractproxymodel_insertcolumns_callback = nullptr;
        qabstractproxymodel_removerows_callback = nullptr;
        qabstractproxymodel_removecolumns_callback = nullptr;
        qabstractproxymodel_moverows_callback = nullptr;
        qabstractproxymodel_movecolumns_callback = nullptr;
        qabstractproxymodel_match_callback = nullptr;
        qabstractproxymodel_multidata_callback = nullptr;
        qabstractproxymodel_resetinternaldata_callback = nullptr;
        qabstractproxymodel_event_callback = nullptr;
        qabstractproxymodel_eventfilter_callback = nullptr;
        qabstractproxymodel_timerevent_callback = nullptr;
        qabstractproxymodel_childevent_callback = nullptr;
        qabstractproxymodel_customevent_callback = nullptr;
        qabstractproxymodel_connectnotify_callback = nullptr;
        qabstractproxymodel_disconnectnotify_callback = nullptr;
        qabstractproxymodel_createsourceindex_callback = nullptr;
        qabstractproxymodel_createindex_callback = nullptr;
        qabstractproxymodel_encodedata_callback = nullptr;
        qabstractproxymodel_decodedata_callback = nullptr;
        qabstractproxymodel_begininsertrows_callback = nullptr;
        qabstractproxymodel_endinsertrows_callback = nullptr;
        qabstractproxymodel_beginremoverows_callback = nullptr;
        qabstractproxymodel_endremoverows_callback = nullptr;
        qabstractproxymodel_beginmoverows_callback = nullptr;
        qabstractproxymodel_endmoverows_callback = nullptr;
        qabstractproxymodel_begininsertcolumns_callback = nullptr;
        qabstractproxymodel_endinsertcolumns_callback = nullptr;
        qabstractproxymodel_beginremovecolumns_callback = nullptr;
        qabstractproxymodel_endremovecolumns_callback = nullptr;
        qabstractproxymodel_beginmovecolumns_callback = nullptr;
        qabstractproxymodel_endmovecolumns_callback = nullptr;
        qabstractproxymodel_beginresetmodel_callback = nullptr;
        qabstractproxymodel_endresetmodel_callback = nullptr;
        qabstractproxymodel_changepersistentindex_callback = nullptr;
        qabstractproxymodel_changepersistentindexlist_callback = nullptr;
        qabstractproxymodel_persistentindexlist_callback = nullptr;
        qabstractproxymodel_sender_callback = nullptr;
        qabstractproxymodel_sendersignalindex_callback = nullptr;
        qabstractproxymodel_receivers_callback = nullptr;
        qabstractproxymodel_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQAbstractProxyModel_Metacall_Callback(QAbstractProxyModel_Metacall_Callback cb) { qabstractproxymodel_metacall_callback = cb; }
    inline void setQAbstractProxyModel_SetSourceModel_Callback(QAbstractProxyModel_SetSourceModel_Callback cb) { qabstractproxymodel_setsourcemodel_callback = cb; }
    inline void setQAbstractProxyModel_MapToSource_Callback(QAbstractProxyModel_MapToSource_Callback cb) { qabstractproxymodel_maptosource_callback = cb; }
    inline void setQAbstractProxyModel_MapFromSource_Callback(QAbstractProxyModel_MapFromSource_Callback cb) { qabstractproxymodel_mapfromsource_callback = cb; }
    inline void setQAbstractProxyModel_MapSelectionToSource_Callback(QAbstractProxyModel_MapSelectionToSource_Callback cb) { qabstractproxymodel_mapselectiontosource_callback = cb; }
    inline void setQAbstractProxyModel_MapSelectionFromSource_Callback(QAbstractProxyModel_MapSelectionFromSource_Callback cb) { qabstractproxymodel_mapselectionfromsource_callback = cb; }
    inline void setQAbstractProxyModel_Submit_Callback(QAbstractProxyModel_Submit_Callback cb) { qabstractproxymodel_submit_callback = cb; }
    inline void setQAbstractProxyModel_Revert_Callback(QAbstractProxyModel_Revert_Callback cb) { qabstractproxymodel_revert_callback = cb; }
    inline void setQAbstractProxyModel_Data_Callback(QAbstractProxyModel_Data_Callback cb) { qabstractproxymodel_data_callback = cb; }
    inline void setQAbstractProxyModel_HeaderData_Callback(QAbstractProxyModel_HeaderData_Callback cb) { qabstractproxymodel_headerdata_callback = cb; }
    inline void setQAbstractProxyModel_ItemData_Callback(QAbstractProxyModel_ItemData_Callback cb) { qabstractproxymodel_itemdata_callback = cb; }
    inline void setQAbstractProxyModel_Flags_Callback(QAbstractProxyModel_Flags_Callback cb) { qabstractproxymodel_flags_callback = cb; }
    inline void setQAbstractProxyModel_SetData_Callback(QAbstractProxyModel_SetData_Callback cb) { qabstractproxymodel_setdata_callback = cb; }
    inline void setQAbstractProxyModel_SetItemData_Callback(QAbstractProxyModel_SetItemData_Callback cb) { qabstractproxymodel_setitemdata_callback = cb; }
    inline void setQAbstractProxyModel_SetHeaderData_Callback(QAbstractProxyModel_SetHeaderData_Callback cb) { qabstractproxymodel_setheaderdata_callback = cb; }
    inline void setQAbstractProxyModel_ClearItemData_Callback(QAbstractProxyModel_ClearItemData_Callback cb) { qabstractproxymodel_clearitemdata_callback = cb; }
    inline void setQAbstractProxyModel_Buddy_Callback(QAbstractProxyModel_Buddy_Callback cb) { qabstractproxymodel_buddy_callback = cb; }
    inline void setQAbstractProxyModel_CanFetchMore_Callback(QAbstractProxyModel_CanFetchMore_Callback cb) { qabstractproxymodel_canfetchmore_callback = cb; }
    inline void setQAbstractProxyModel_FetchMore_Callback(QAbstractProxyModel_FetchMore_Callback cb) { qabstractproxymodel_fetchmore_callback = cb; }
    inline void setQAbstractProxyModel_Sort_Callback(QAbstractProxyModel_Sort_Callback cb) { qabstractproxymodel_sort_callback = cb; }
    inline void setQAbstractProxyModel_Span_Callback(QAbstractProxyModel_Span_Callback cb) { qabstractproxymodel_span_callback = cb; }
    inline void setQAbstractProxyModel_HasChildren_Callback(QAbstractProxyModel_HasChildren_Callback cb) { qabstractproxymodel_haschildren_callback = cb; }
    inline void setQAbstractProxyModel_Sibling_Callback(QAbstractProxyModel_Sibling_Callback cb) { qabstractproxymodel_sibling_callback = cb; }
    inline void setQAbstractProxyModel_MimeData_Callback(QAbstractProxyModel_MimeData_Callback cb) { qabstractproxymodel_mimedata_callback = cb; }
    inline void setQAbstractProxyModel_CanDropMimeData_Callback(QAbstractProxyModel_CanDropMimeData_Callback cb) { qabstractproxymodel_candropmimedata_callback = cb; }
    inline void setQAbstractProxyModel_DropMimeData_Callback(QAbstractProxyModel_DropMimeData_Callback cb) { qabstractproxymodel_dropmimedata_callback = cb; }
    inline void setQAbstractProxyModel_MimeTypes_Callback(QAbstractProxyModel_MimeTypes_Callback cb) { qabstractproxymodel_mimetypes_callback = cb; }
    inline void setQAbstractProxyModel_SupportedDragActions_Callback(QAbstractProxyModel_SupportedDragActions_Callback cb) { qabstractproxymodel_supporteddragactions_callback = cb; }
    inline void setQAbstractProxyModel_SupportedDropActions_Callback(QAbstractProxyModel_SupportedDropActions_Callback cb) { qabstractproxymodel_supporteddropactions_callback = cb; }
    inline void setQAbstractProxyModel_RoleNames_Callback(QAbstractProxyModel_RoleNames_Callback cb) { qabstractproxymodel_rolenames_callback = cb; }
    inline void setQAbstractProxyModel_Index_Callback(QAbstractProxyModel_Index_Callback cb) { qabstractproxymodel_index_callback = cb; }
    inline void setQAbstractProxyModel_Parent_Callback(QAbstractProxyModel_Parent_Callback cb) { qabstractproxymodel_parent_callback = cb; }
    inline void setQAbstractProxyModel_RowCount_Callback(QAbstractProxyModel_RowCount_Callback cb) { qabstractproxymodel_rowcount_callback = cb; }
    inline void setQAbstractProxyModel_ColumnCount_Callback(QAbstractProxyModel_ColumnCount_Callback cb) { qabstractproxymodel_columncount_callback = cb; }
    inline void setQAbstractProxyModel_InsertRows_Callback(QAbstractProxyModel_InsertRows_Callback cb) { qabstractproxymodel_insertrows_callback = cb; }
    inline void setQAbstractProxyModel_InsertColumns_Callback(QAbstractProxyModel_InsertColumns_Callback cb) { qabstractproxymodel_insertcolumns_callback = cb; }
    inline void setQAbstractProxyModel_RemoveRows_Callback(QAbstractProxyModel_RemoveRows_Callback cb) { qabstractproxymodel_removerows_callback = cb; }
    inline void setQAbstractProxyModel_RemoveColumns_Callback(QAbstractProxyModel_RemoveColumns_Callback cb) { qabstractproxymodel_removecolumns_callback = cb; }
    inline void setQAbstractProxyModel_MoveRows_Callback(QAbstractProxyModel_MoveRows_Callback cb) { qabstractproxymodel_moverows_callback = cb; }
    inline void setQAbstractProxyModel_MoveColumns_Callback(QAbstractProxyModel_MoveColumns_Callback cb) { qabstractproxymodel_movecolumns_callback = cb; }
    inline void setQAbstractProxyModel_Match_Callback(QAbstractProxyModel_Match_Callback cb) { qabstractproxymodel_match_callback = cb; }
    inline void setQAbstractProxyModel_MultiData_Callback(QAbstractProxyModel_MultiData_Callback cb) { qabstractproxymodel_multidata_callback = cb; }
    inline void setQAbstractProxyModel_ResetInternalData_Callback(QAbstractProxyModel_ResetInternalData_Callback cb) { qabstractproxymodel_resetinternaldata_callback = cb; }
    inline void setQAbstractProxyModel_Event_Callback(QAbstractProxyModel_Event_Callback cb) { qabstractproxymodel_event_callback = cb; }
    inline void setQAbstractProxyModel_EventFilter_Callback(QAbstractProxyModel_EventFilter_Callback cb) { qabstractproxymodel_eventfilter_callback = cb; }
    inline void setQAbstractProxyModel_TimerEvent_Callback(QAbstractProxyModel_TimerEvent_Callback cb) { qabstractproxymodel_timerevent_callback = cb; }
    inline void setQAbstractProxyModel_ChildEvent_Callback(QAbstractProxyModel_ChildEvent_Callback cb) { qabstractproxymodel_childevent_callback = cb; }
    inline void setQAbstractProxyModel_CustomEvent_Callback(QAbstractProxyModel_CustomEvent_Callback cb) { qabstractproxymodel_customevent_callback = cb; }
    inline void setQAbstractProxyModel_ConnectNotify_Callback(QAbstractProxyModel_ConnectNotify_Callback cb) { qabstractproxymodel_connectnotify_callback = cb; }
    inline void setQAbstractProxyModel_DisconnectNotify_Callback(QAbstractProxyModel_DisconnectNotify_Callback cb) { qabstractproxymodel_disconnectnotify_callback = cb; }
    inline void setQAbstractProxyModel_CreateSourceIndex_Callback(QAbstractProxyModel_CreateSourceIndex_Callback cb) { qabstractproxymodel_createsourceindex_callback = cb; }
    inline void setQAbstractProxyModel_CreateIndex_Callback(QAbstractProxyModel_CreateIndex_Callback cb) { qabstractproxymodel_createindex_callback = cb; }
    inline void setQAbstractProxyModel_EncodeData_Callback(QAbstractProxyModel_EncodeData_Callback cb) { qabstractproxymodel_encodedata_callback = cb; }
    inline void setQAbstractProxyModel_DecodeData_Callback(QAbstractProxyModel_DecodeData_Callback cb) { qabstractproxymodel_decodedata_callback = cb; }
    inline void setQAbstractProxyModel_BeginInsertRows_Callback(QAbstractProxyModel_BeginInsertRows_Callback cb) { qabstractproxymodel_begininsertrows_callback = cb; }
    inline void setQAbstractProxyModel_EndInsertRows_Callback(QAbstractProxyModel_EndInsertRows_Callback cb) { qabstractproxymodel_endinsertrows_callback = cb; }
    inline void setQAbstractProxyModel_BeginRemoveRows_Callback(QAbstractProxyModel_BeginRemoveRows_Callback cb) { qabstractproxymodel_beginremoverows_callback = cb; }
    inline void setQAbstractProxyModel_EndRemoveRows_Callback(QAbstractProxyModel_EndRemoveRows_Callback cb) { qabstractproxymodel_endremoverows_callback = cb; }
    inline void setQAbstractProxyModel_BeginMoveRows_Callback(QAbstractProxyModel_BeginMoveRows_Callback cb) { qabstractproxymodel_beginmoverows_callback = cb; }
    inline void setQAbstractProxyModel_EndMoveRows_Callback(QAbstractProxyModel_EndMoveRows_Callback cb) { qabstractproxymodel_endmoverows_callback = cb; }
    inline void setQAbstractProxyModel_BeginInsertColumns_Callback(QAbstractProxyModel_BeginInsertColumns_Callback cb) { qabstractproxymodel_begininsertcolumns_callback = cb; }
    inline void setQAbstractProxyModel_EndInsertColumns_Callback(QAbstractProxyModel_EndInsertColumns_Callback cb) { qabstractproxymodel_endinsertcolumns_callback = cb; }
    inline void setQAbstractProxyModel_BeginRemoveColumns_Callback(QAbstractProxyModel_BeginRemoveColumns_Callback cb) { qabstractproxymodel_beginremovecolumns_callback = cb; }
    inline void setQAbstractProxyModel_EndRemoveColumns_Callback(QAbstractProxyModel_EndRemoveColumns_Callback cb) { qabstractproxymodel_endremovecolumns_callback = cb; }
    inline void setQAbstractProxyModel_BeginMoveColumns_Callback(QAbstractProxyModel_BeginMoveColumns_Callback cb) { qabstractproxymodel_beginmovecolumns_callback = cb; }
    inline void setQAbstractProxyModel_EndMoveColumns_Callback(QAbstractProxyModel_EndMoveColumns_Callback cb) { qabstractproxymodel_endmovecolumns_callback = cb; }
    inline void setQAbstractProxyModel_BeginResetModel_Callback(QAbstractProxyModel_BeginResetModel_Callback cb) { qabstractproxymodel_beginresetmodel_callback = cb; }
    inline void setQAbstractProxyModel_EndResetModel_Callback(QAbstractProxyModel_EndResetModel_Callback cb) { qabstractproxymodel_endresetmodel_callback = cb; }
    inline void setQAbstractProxyModel_ChangePersistentIndex_Callback(QAbstractProxyModel_ChangePersistentIndex_Callback cb) { qabstractproxymodel_changepersistentindex_callback = cb; }
    inline void setQAbstractProxyModel_ChangePersistentIndexList_Callback(QAbstractProxyModel_ChangePersistentIndexList_Callback cb) { qabstractproxymodel_changepersistentindexlist_callback = cb; }
    inline void setQAbstractProxyModel_PersistentIndexList_Callback(QAbstractProxyModel_PersistentIndexList_Callback cb) { qabstractproxymodel_persistentindexlist_callback = cb; }
    inline void setQAbstractProxyModel_Sender_Callback(QAbstractProxyModel_Sender_Callback cb) { qabstractproxymodel_sender_callback = cb; }
    inline void setQAbstractProxyModel_SenderSignalIndex_Callback(QAbstractProxyModel_SenderSignalIndex_Callback cb) { qabstractproxymodel_sendersignalindex_callback = cb; }
    inline void setQAbstractProxyModel_Receivers_Callback(QAbstractProxyModel_Receivers_Callback cb) { qabstractproxymodel_receivers_callback = cb; }
    inline void setQAbstractProxyModel_IsSignalConnected_Callback(QAbstractProxyModel_IsSignalConnected_Callback cb) { qabstractproxymodel_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQAbstractProxyModel_Metacall_IsBase(bool value) const { qabstractproxymodel_metacall_isbase = value; }
    inline void setQAbstractProxyModel_SetSourceModel_IsBase(bool value) const { qabstractproxymodel_setsourcemodel_isbase = value; }
    inline void setQAbstractProxyModel_MapToSource_IsBase(bool value) const { qabstractproxymodel_maptosource_isbase = value; }
    inline void setQAbstractProxyModel_MapFromSource_IsBase(bool value) const { qabstractproxymodel_mapfromsource_isbase = value; }
    inline void setQAbstractProxyModel_MapSelectionToSource_IsBase(bool value) const { qabstractproxymodel_mapselectiontosource_isbase = value; }
    inline void setQAbstractProxyModel_MapSelectionFromSource_IsBase(bool value) const { qabstractproxymodel_mapselectionfromsource_isbase = value; }
    inline void setQAbstractProxyModel_Submit_IsBase(bool value) const { qabstractproxymodel_submit_isbase = value; }
    inline void setQAbstractProxyModel_Revert_IsBase(bool value) const { qabstractproxymodel_revert_isbase = value; }
    inline void setQAbstractProxyModel_Data_IsBase(bool value) const { qabstractproxymodel_data_isbase = value; }
    inline void setQAbstractProxyModel_HeaderData_IsBase(bool value) const { qabstractproxymodel_headerdata_isbase = value; }
    inline void setQAbstractProxyModel_ItemData_IsBase(bool value) const { qabstractproxymodel_itemdata_isbase = value; }
    inline void setQAbstractProxyModel_Flags_IsBase(bool value) const { qabstractproxymodel_flags_isbase = value; }
    inline void setQAbstractProxyModel_SetData_IsBase(bool value) const { qabstractproxymodel_setdata_isbase = value; }
    inline void setQAbstractProxyModel_SetItemData_IsBase(bool value) const { qabstractproxymodel_setitemdata_isbase = value; }
    inline void setQAbstractProxyModel_SetHeaderData_IsBase(bool value) const { qabstractproxymodel_setheaderdata_isbase = value; }
    inline void setQAbstractProxyModel_ClearItemData_IsBase(bool value) const { qabstractproxymodel_clearitemdata_isbase = value; }
    inline void setQAbstractProxyModel_Buddy_IsBase(bool value) const { qabstractproxymodel_buddy_isbase = value; }
    inline void setQAbstractProxyModel_CanFetchMore_IsBase(bool value) const { qabstractproxymodel_canfetchmore_isbase = value; }
    inline void setQAbstractProxyModel_FetchMore_IsBase(bool value) const { qabstractproxymodel_fetchmore_isbase = value; }
    inline void setQAbstractProxyModel_Sort_IsBase(bool value) const { qabstractproxymodel_sort_isbase = value; }
    inline void setQAbstractProxyModel_Span_IsBase(bool value) const { qabstractproxymodel_span_isbase = value; }
    inline void setQAbstractProxyModel_HasChildren_IsBase(bool value) const { qabstractproxymodel_haschildren_isbase = value; }
    inline void setQAbstractProxyModel_Sibling_IsBase(bool value) const { qabstractproxymodel_sibling_isbase = value; }
    inline void setQAbstractProxyModel_MimeData_IsBase(bool value) const { qabstractproxymodel_mimedata_isbase = value; }
    inline void setQAbstractProxyModel_CanDropMimeData_IsBase(bool value) const { qabstractproxymodel_candropmimedata_isbase = value; }
    inline void setQAbstractProxyModel_DropMimeData_IsBase(bool value) const { qabstractproxymodel_dropmimedata_isbase = value; }
    inline void setQAbstractProxyModel_MimeTypes_IsBase(bool value) const { qabstractproxymodel_mimetypes_isbase = value; }
    inline void setQAbstractProxyModel_SupportedDragActions_IsBase(bool value) const { qabstractproxymodel_supporteddragactions_isbase = value; }
    inline void setQAbstractProxyModel_SupportedDropActions_IsBase(bool value) const { qabstractproxymodel_supporteddropactions_isbase = value; }
    inline void setQAbstractProxyModel_RoleNames_IsBase(bool value) const { qabstractproxymodel_rolenames_isbase = value; }
    inline void setQAbstractProxyModel_Index_IsBase(bool value) const { qabstractproxymodel_index_isbase = value; }
    inline void setQAbstractProxyModel_Parent_IsBase(bool value) const { qabstractproxymodel_parent_isbase = value; }
    inline void setQAbstractProxyModel_RowCount_IsBase(bool value) const { qabstractproxymodel_rowcount_isbase = value; }
    inline void setQAbstractProxyModel_ColumnCount_IsBase(bool value) const { qabstractproxymodel_columncount_isbase = value; }
    inline void setQAbstractProxyModel_InsertRows_IsBase(bool value) const { qabstractproxymodel_insertrows_isbase = value; }
    inline void setQAbstractProxyModel_InsertColumns_IsBase(bool value) const { qabstractproxymodel_insertcolumns_isbase = value; }
    inline void setQAbstractProxyModel_RemoveRows_IsBase(bool value) const { qabstractproxymodel_removerows_isbase = value; }
    inline void setQAbstractProxyModel_RemoveColumns_IsBase(bool value) const { qabstractproxymodel_removecolumns_isbase = value; }
    inline void setQAbstractProxyModel_MoveRows_IsBase(bool value) const { qabstractproxymodel_moverows_isbase = value; }
    inline void setQAbstractProxyModel_MoveColumns_IsBase(bool value) const { qabstractproxymodel_movecolumns_isbase = value; }
    inline void setQAbstractProxyModel_Match_IsBase(bool value) const { qabstractproxymodel_match_isbase = value; }
    inline void setQAbstractProxyModel_MultiData_IsBase(bool value) const { qabstractproxymodel_multidata_isbase = value; }
    inline void setQAbstractProxyModel_ResetInternalData_IsBase(bool value) const { qabstractproxymodel_resetinternaldata_isbase = value; }
    inline void setQAbstractProxyModel_Event_IsBase(bool value) const { qabstractproxymodel_event_isbase = value; }
    inline void setQAbstractProxyModel_EventFilter_IsBase(bool value) const { qabstractproxymodel_eventfilter_isbase = value; }
    inline void setQAbstractProxyModel_TimerEvent_IsBase(bool value) const { qabstractproxymodel_timerevent_isbase = value; }
    inline void setQAbstractProxyModel_ChildEvent_IsBase(bool value) const { qabstractproxymodel_childevent_isbase = value; }
    inline void setQAbstractProxyModel_CustomEvent_IsBase(bool value) const { qabstractproxymodel_customevent_isbase = value; }
    inline void setQAbstractProxyModel_ConnectNotify_IsBase(bool value) const { qabstractproxymodel_connectnotify_isbase = value; }
    inline void setQAbstractProxyModel_DisconnectNotify_IsBase(bool value) const { qabstractproxymodel_disconnectnotify_isbase = value; }
    inline void setQAbstractProxyModel_CreateSourceIndex_IsBase(bool value) const { qabstractproxymodel_createsourceindex_isbase = value; }
    inline void setQAbstractProxyModel_CreateIndex_IsBase(bool value) const { qabstractproxymodel_createindex_isbase = value; }
    inline void setQAbstractProxyModel_EncodeData_IsBase(bool value) const { qabstractproxymodel_encodedata_isbase = value; }
    inline void setQAbstractProxyModel_DecodeData_IsBase(bool value) const { qabstractproxymodel_decodedata_isbase = value; }
    inline void setQAbstractProxyModel_BeginInsertRows_IsBase(bool value) const { qabstractproxymodel_begininsertrows_isbase = value; }
    inline void setQAbstractProxyModel_EndInsertRows_IsBase(bool value) const { qabstractproxymodel_endinsertrows_isbase = value; }
    inline void setQAbstractProxyModel_BeginRemoveRows_IsBase(bool value) const { qabstractproxymodel_beginremoverows_isbase = value; }
    inline void setQAbstractProxyModel_EndRemoveRows_IsBase(bool value) const { qabstractproxymodel_endremoverows_isbase = value; }
    inline void setQAbstractProxyModel_BeginMoveRows_IsBase(bool value) const { qabstractproxymodel_beginmoverows_isbase = value; }
    inline void setQAbstractProxyModel_EndMoveRows_IsBase(bool value) const { qabstractproxymodel_endmoverows_isbase = value; }
    inline void setQAbstractProxyModel_BeginInsertColumns_IsBase(bool value) const { qabstractproxymodel_begininsertcolumns_isbase = value; }
    inline void setQAbstractProxyModel_EndInsertColumns_IsBase(bool value) const { qabstractproxymodel_endinsertcolumns_isbase = value; }
    inline void setQAbstractProxyModel_BeginRemoveColumns_IsBase(bool value) const { qabstractproxymodel_beginremovecolumns_isbase = value; }
    inline void setQAbstractProxyModel_EndRemoveColumns_IsBase(bool value) const { qabstractproxymodel_endremovecolumns_isbase = value; }
    inline void setQAbstractProxyModel_BeginMoveColumns_IsBase(bool value) const { qabstractproxymodel_beginmovecolumns_isbase = value; }
    inline void setQAbstractProxyModel_EndMoveColumns_IsBase(bool value) const { qabstractproxymodel_endmovecolumns_isbase = value; }
    inline void setQAbstractProxyModel_BeginResetModel_IsBase(bool value) const { qabstractproxymodel_beginresetmodel_isbase = value; }
    inline void setQAbstractProxyModel_EndResetModel_IsBase(bool value) const { qabstractproxymodel_endresetmodel_isbase = value; }
    inline void setQAbstractProxyModel_ChangePersistentIndex_IsBase(bool value) const { qabstractproxymodel_changepersistentindex_isbase = value; }
    inline void setQAbstractProxyModel_ChangePersistentIndexList_IsBase(bool value) const { qabstractproxymodel_changepersistentindexlist_isbase = value; }
    inline void setQAbstractProxyModel_PersistentIndexList_IsBase(bool value) const { qabstractproxymodel_persistentindexlist_isbase = value; }
    inline void setQAbstractProxyModel_Sender_IsBase(bool value) const { qabstractproxymodel_sender_isbase = value; }
    inline void setQAbstractProxyModel_SenderSignalIndex_IsBase(bool value) const { qabstractproxymodel_sendersignalindex_isbase = value; }
    inline void setQAbstractProxyModel_Receivers_IsBase(bool value) const { qabstractproxymodel_receivers_isbase = value; }
    inline void setQAbstractProxyModel_IsSignalConnected_IsBase(bool value) const { qabstractproxymodel_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qabstractproxymodel_metacall_isbase) {
            qabstractproxymodel_metacall_isbase = false;
            return QAbstractProxyModel::qt_metacall(param1, param2, param3);
        } else if (qabstractproxymodel_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qabstractproxymodel_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QAbstractProxyModel::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSourceModel(QAbstractItemModel* sourceModel) override {
        if (qabstractproxymodel_setsourcemodel_isbase) {
            qabstractproxymodel_setsourcemodel_isbase = false;
            QAbstractProxyModel::setSourceModel(sourceModel);
        } else if (qabstractproxymodel_setsourcemodel_callback != nullptr) {
            QAbstractItemModel* cbval1 = sourceModel;

            qabstractproxymodel_setsourcemodel_callback(this, cbval1);
        } else {
            QAbstractProxyModel::setSourceModel(sourceModel);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex mapToSource(const QModelIndex& proxyIndex) const override {
        if (qabstractproxymodel_maptosource_callback != nullptr) {
            const QModelIndex& proxyIndex_ret = proxyIndex;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&proxyIndex_ret);

            QModelIndex* callback_ret = qabstractproxymodel_maptosource_callback(this, cbval1);
            return *callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex mapFromSource(const QModelIndex& sourceIndex) const override {
        if (qabstractproxymodel_mapfromsource_callback != nullptr) {
            const QModelIndex& sourceIndex_ret = sourceIndex;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceIndex_ret);

            QModelIndex* callback_ret = qabstractproxymodel_mapfromsource_callback(this, cbval1);
            return *callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelection mapSelectionToSource(const QItemSelection& selection) const override {
        if (qabstractproxymodel_mapselectiontosource_isbase) {
            qabstractproxymodel_mapselectiontosource_isbase = false;
            return QAbstractProxyModel::mapSelectionToSource(selection);
        } else if (qabstractproxymodel_mapselectiontosource_callback != nullptr) {
            const QItemSelection& selection_ret = selection;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selection_ret);

            QItemSelection* callback_ret = qabstractproxymodel_mapselectiontosource_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QAbstractProxyModel::mapSelectionToSource(selection);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelection mapSelectionFromSource(const QItemSelection& selection) const override {
        if (qabstractproxymodel_mapselectionfromsource_isbase) {
            qabstractproxymodel_mapselectionfromsource_isbase = false;
            return QAbstractProxyModel::mapSelectionFromSource(selection);
        } else if (qabstractproxymodel_mapselectionfromsource_callback != nullptr) {
            const QItemSelection& selection_ret = selection;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selection_ret);

            QItemSelection* callback_ret = qabstractproxymodel_mapselectionfromsource_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QAbstractProxyModel::mapSelectionFromSource(selection);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool submit() override {
        if (qabstractproxymodel_submit_isbase) {
            qabstractproxymodel_submit_isbase = false;
            return QAbstractProxyModel::submit();
        } else if (qabstractproxymodel_submit_callback != nullptr) {
            bool callback_ret = qabstractproxymodel_submit_callback();
            return callback_ret;
        } else {
            return QAbstractProxyModel::submit();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void revert() override {
        if (qabstractproxymodel_revert_isbase) {
            qabstractproxymodel_revert_isbase = false;
            QAbstractProxyModel::revert();
        } else if (qabstractproxymodel_revert_callback != nullptr) {
            qabstractproxymodel_revert_callback();
        } else {
            QAbstractProxyModel::revert();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(const QModelIndex& proxyIndex, int role) const override {
        if (qabstractproxymodel_data_isbase) {
            qabstractproxymodel_data_isbase = false;
            return QAbstractProxyModel::data(proxyIndex, role);
        } else if (qabstractproxymodel_data_callback != nullptr) {
            const QModelIndex& proxyIndex_ret = proxyIndex;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&proxyIndex_ret);
            int cbval2 = role;

            QVariant* callback_ret = qabstractproxymodel_data_callback(this, cbval1, cbval2);
            return *callback_ret;
        } else {
            return QAbstractProxyModel::data(proxyIndex, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
        if (qabstractproxymodel_headerdata_isbase) {
            qabstractproxymodel_headerdata_isbase = false;
            return QAbstractProxyModel::headerData(section, orientation, role);
        } else if (qabstractproxymodel_headerdata_callback != nullptr) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            int cbval3 = role;

            QVariant* callback_ret = qabstractproxymodel_headerdata_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return QAbstractProxyModel::headerData(section, orientation, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
        if (qabstractproxymodel_itemdata_isbase) {
            qabstractproxymodel_itemdata_isbase = false;
            return QAbstractProxyModel::itemData(index);
        } else if (qabstractproxymodel_itemdata_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            libqt_map /* of int to QVariant* */ callback_ret = qabstractproxymodel_itemdata_callback(this, cbval1);
            QMap<int, QVariant> callback_ret_QMap;
            int* callback_ret_karr = static_cast<int*>(callback_ret.keys);
            QVariant** callback_ret_varr = static_cast<QVariant**>(callback_ret.values);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QMap[static_cast<int>(callback_ret_karr[i])] = *(callback_ret_varr[i]);
            }
            return callback_ret_QMap;
        } else {
            return QAbstractProxyModel::itemData(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
        if (qabstractproxymodel_flags_isbase) {
            qabstractproxymodel_flags_isbase = false;
            return QAbstractProxyModel::flags(index);
        } else if (qabstractproxymodel_flags_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            int callback_ret = qabstractproxymodel_flags_callback(this, cbval1);
            return static_cast<Qt::ItemFlags>(callback_ret);
        } else {
            return QAbstractProxyModel::flags(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
        if (qabstractproxymodel_setdata_isbase) {
            qabstractproxymodel_setdata_isbase = false;
            return QAbstractProxyModel::setData(index, value, role);
        } else if (qabstractproxymodel_setdata_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            int cbval3 = role;

            bool callback_ret = qabstractproxymodel_setdata_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QAbstractProxyModel::setData(index, value, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
        if (qabstractproxymodel_setitemdata_isbase) {
            qabstractproxymodel_setitemdata_isbase = false;
            return QAbstractProxyModel::setItemData(index, roles);
        } else if (qabstractproxymodel_setitemdata_callback != nullptr) {
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

            bool callback_ret = qabstractproxymodel_setitemdata_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QAbstractProxyModel::setItemData(index, roles);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
        if (qabstractproxymodel_setheaderdata_isbase) {
            qabstractproxymodel_setheaderdata_isbase = false;
            return QAbstractProxyModel::setHeaderData(section, orientation, value, role);
        } else if (qabstractproxymodel_setheaderdata_callback != nullptr) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = role;

            bool callback_ret = qabstractproxymodel_setheaderdata_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        } else {
            return QAbstractProxyModel::setHeaderData(section, orientation, value, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool clearItemData(const QModelIndex& index) override {
        if (qabstractproxymodel_clearitemdata_isbase) {
            qabstractproxymodel_clearitemdata_isbase = false;
            return QAbstractProxyModel::clearItemData(index);
        } else if (qabstractproxymodel_clearitemdata_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            bool callback_ret = qabstractproxymodel_clearitemdata_callback(this, cbval1);
            return callback_ret;
        } else {
            return QAbstractProxyModel::clearItemData(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex buddy(const QModelIndex& index) const override {
        if (qabstractproxymodel_buddy_isbase) {
            qabstractproxymodel_buddy_isbase = false;
            return QAbstractProxyModel::buddy(index);
        } else if (qabstractproxymodel_buddy_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QModelIndex* callback_ret = qabstractproxymodel_buddy_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QAbstractProxyModel::buddy(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canFetchMore(const QModelIndex& parent) const override {
        if (qabstractproxymodel_canfetchmore_isbase) {
            qabstractproxymodel_canfetchmore_isbase = false;
            return QAbstractProxyModel::canFetchMore(parent);
        } else if (qabstractproxymodel_canfetchmore_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = qabstractproxymodel_canfetchmore_callback(this, cbval1);
            return callback_ret;
        } else {
            return QAbstractProxyModel::canFetchMore(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void fetchMore(const QModelIndex& parent) override {
        if (qabstractproxymodel_fetchmore_isbase) {
            qabstractproxymodel_fetchmore_isbase = false;
            QAbstractProxyModel::fetchMore(parent);
        } else if (qabstractproxymodel_fetchmore_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            qabstractproxymodel_fetchmore_callback(this, cbval1);
        } else {
            QAbstractProxyModel::fetchMore(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void sort(int column, Qt::SortOrder order) override {
        if (qabstractproxymodel_sort_isbase) {
            qabstractproxymodel_sort_isbase = false;
            QAbstractProxyModel::sort(column, order);
        } else if (qabstractproxymodel_sort_callback != nullptr) {
            int cbval1 = column;
            int cbval2 = static_cast<int>(order);

            qabstractproxymodel_sort_callback(this, cbval1, cbval2);
        } else {
            QAbstractProxyModel::sort(column, order);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize span(const QModelIndex& index) const override {
        if (qabstractproxymodel_span_isbase) {
            qabstractproxymodel_span_isbase = false;
            return QAbstractProxyModel::span(index);
        } else if (qabstractproxymodel_span_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QSize* callback_ret = qabstractproxymodel_span_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QAbstractProxyModel::span(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasChildren(const QModelIndex& parent) const override {
        if (qabstractproxymodel_haschildren_isbase) {
            qabstractproxymodel_haschildren_isbase = false;
            return QAbstractProxyModel::hasChildren(parent);
        } else if (qabstractproxymodel_haschildren_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = qabstractproxymodel_haschildren_callback(this, cbval1);
            return callback_ret;
        } else {
            return QAbstractProxyModel::hasChildren(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
        if (qabstractproxymodel_sibling_isbase) {
            qabstractproxymodel_sibling_isbase = false;
            return QAbstractProxyModel::sibling(row, column, idx);
        } else if (qabstractproxymodel_sibling_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& idx_ret = idx;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&idx_ret);

            QModelIndex* callback_ret = qabstractproxymodel_sibling_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return QAbstractProxyModel::sibling(row, column, idx);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* mimeData(const QList<QModelIndex>& indexes) const override {
        if (qabstractproxymodel_mimedata_isbase) {
            qabstractproxymodel_mimedata_isbase = false;
            return QAbstractProxyModel::mimeData(indexes);
        } else if (qabstractproxymodel_mimedata_callback != nullptr) {
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

            QMimeData* callback_ret = qabstractproxymodel_mimedata_callback(this, cbval1);
            return callback_ret;
        } else {
            return QAbstractProxyModel::mimeData(indexes);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
        if (qabstractproxymodel_candropmimedata_isbase) {
            qabstractproxymodel_candropmimedata_isbase = false;
            return QAbstractProxyModel::canDropMimeData(data, action, row, column, parent);
        } else if (qabstractproxymodel_candropmimedata_callback != nullptr) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = qabstractproxymodel_candropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return QAbstractProxyModel::canDropMimeData(data, action, row, column, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
        if (qabstractproxymodel_dropmimedata_isbase) {
            qabstractproxymodel_dropmimedata_isbase = false;
            return QAbstractProxyModel::dropMimeData(data, action, row, column, parent);
        } else if (qabstractproxymodel_dropmimedata_callback != nullptr) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = qabstractproxymodel_dropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return QAbstractProxyModel::dropMimeData(data, action, row, column, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> mimeTypes() const override {
        if (qabstractproxymodel_mimetypes_isbase) {
            qabstractproxymodel_mimetypes_isbase = false;
            return QAbstractProxyModel::mimeTypes();
        } else if (qabstractproxymodel_mimetypes_callback != nullptr) {
            const char** callback_ret = qabstractproxymodel_mimetypes_callback();
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
            return QAbstractProxyModel::mimeTypes();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDragActions() const override {
        if (qabstractproxymodel_supporteddragactions_isbase) {
            qabstractproxymodel_supporteddragactions_isbase = false;
            return QAbstractProxyModel::supportedDragActions();
        } else if (qabstractproxymodel_supporteddragactions_callback != nullptr) {
            int callback_ret = qabstractproxymodel_supporteddragactions_callback();
            return static_cast<Qt::DropActions>(callback_ret);
        } else {
            return QAbstractProxyModel::supportedDragActions();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (qabstractproxymodel_supporteddropactions_isbase) {
            qabstractproxymodel_supporteddropactions_isbase = false;
            return QAbstractProxyModel::supportedDropActions();
        } else if (qabstractproxymodel_supporteddropactions_callback != nullptr) {
            int callback_ret = qabstractproxymodel_supporteddropactions_callback();
            return static_cast<Qt::DropActions>(callback_ret);
        } else {
            return QAbstractProxyModel::supportedDropActions();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QHash<int, QByteArray> roleNames() const override {
        if (qabstractproxymodel_rolenames_isbase) {
            qabstractproxymodel_rolenames_isbase = false;
            return QAbstractProxyModel::roleNames();
        } else if (qabstractproxymodel_rolenames_callback != nullptr) {
            libqt_map /* of int to libqt_string */ callback_ret = qabstractproxymodel_rolenames_callback();
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
            return QAbstractProxyModel::roleNames();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
        if (qabstractproxymodel_index_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            QModelIndex* callback_ret = qabstractproxymodel_index_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex parent(const QModelIndex& child) const override {
        if (qabstractproxymodel_parent_callback != nullptr) {
            const QModelIndex& child_ret = child;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&child_ret);

            QModelIndex* callback_ret = qabstractproxymodel_parent_callback(this, cbval1);
            return *callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int rowCount(const QModelIndex& parent) const override {
        if (qabstractproxymodel_rowcount_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            int callback_ret = qabstractproxymodel_rowcount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int columnCount(const QModelIndex& parent) const override {
        if (qabstractproxymodel_columncount_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            int callback_ret = qabstractproxymodel_columncount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
        if (qabstractproxymodel_insertrows_isbase) {
            qabstractproxymodel_insertrows_isbase = false;
            return QAbstractProxyModel::insertRows(row, count, parent);
        } else if (qabstractproxymodel_insertrows_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = qabstractproxymodel_insertrows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QAbstractProxyModel::insertRows(row, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
        if (qabstractproxymodel_insertcolumns_isbase) {
            qabstractproxymodel_insertcolumns_isbase = false;
            return QAbstractProxyModel::insertColumns(column, count, parent);
        } else if (qabstractproxymodel_insertcolumns_callback != nullptr) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = qabstractproxymodel_insertcolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QAbstractProxyModel::insertColumns(column, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
        if (qabstractproxymodel_removerows_isbase) {
            qabstractproxymodel_removerows_isbase = false;
            return QAbstractProxyModel::removeRows(row, count, parent);
        } else if (qabstractproxymodel_removerows_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = qabstractproxymodel_removerows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QAbstractProxyModel::removeRows(row, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
        if (qabstractproxymodel_removecolumns_isbase) {
            qabstractproxymodel_removecolumns_isbase = false;
            return QAbstractProxyModel::removeColumns(column, count, parent);
        } else if (qabstractproxymodel_removecolumns_callback != nullptr) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = qabstractproxymodel_removecolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QAbstractProxyModel::removeColumns(column, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (qabstractproxymodel_moverows_isbase) {
            qabstractproxymodel_moverows_isbase = false;
            return QAbstractProxyModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
        } else if (qabstractproxymodel_moverows_callback != nullptr) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceRow;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;

            bool callback_ret = qabstractproxymodel_moverows_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return QAbstractProxyModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (qabstractproxymodel_movecolumns_isbase) {
            qabstractproxymodel_movecolumns_isbase = false;
            return QAbstractProxyModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
        } else if (qabstractproxymodel_movecolumns_callback != nullptr) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceColumn;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;

            bool callback_ret = qabstractproxymodel_movecolumns_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return QAbstractProxyModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
        if (qabstractproxymodel_match_isbase) {
            qabstractproxymodel_match_isbase = false;
            return QAbstractProxyModel::match(start, role, value, hits, flags);
        } else if (qabstractproxymodel_match_callback != nullptr) {
            const QModelIndex& start_ret = start;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&start_ret);
            int cbval2 = role;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = hits;
            int cbval5 = static_cast<int>(flags);

            QModelIndex** callback_ret = qabstractproxymodel_match_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            QList<QModelIndex> callback_ret_QList;
            // Iterate until null pointer sentinel
            for (QModelIndex** ptridx = callback_ret; *ptridx != nullptr; ptridx++) {
                callback_ret_QList.push_back(**ptridx);
            }
            free(callback_ret);
            return callback_ret_QList;
        } else {
            return QAbstractProxyModel::match(start, role, value, hits, flags);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
        if (qabstractproxymodel_multidata_isbase) {
            qabstractproxymodel_multidata_isbase = false;
            QAbstractProxyModel::multiData(index, roleDataSpan);
        } else if (qabstractproxymodel_multidata_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelRoleDataSpan* cbval2 = new QModelRoleDataSpan(roleDataSpan);

            qabstractproxymodel_multidata_callback(this, cbval1, cbval2);
        } else {
            QAbstractProxyModel::multiData(index, roleDataSpan);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetInternalData() override {
        if (qabstractproxymodel_resetinternaldata_isbase) {
            qabstractproxymodel_resetinternaldata_isbase = false;
            QAbstractProxyModel::resetInternalData();
        } else if (qabstractproxymodel_resetinternaldata_callback != nullptr) {
            qabstractproxymodel_resetinternaldata_callback();
        } else {
            QAbstractProxyModel::resetInternalData();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qabstractproxymodel_event_isbase) {
            qabstractproxymodel_event_isbase = false;
            return QAbstractProxyModel::event(event);
        } else if (qabstractproxymodel_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qabstractproxymodel_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QAbstractProxyModel::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qabstractproxymodel_eventfilter_isbase) {
            qabstractproxymodel_eventfilter_isbase = false;
            return QAbstractProxyModel::eventFilter(watched, event);
        } else if (qabstractproxymodel_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qabstractproxymodel_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QAbstractProxyModel::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qabstractproxymodel_timerevent_isbase) {
            qabstractproxymodel_timerevent_isbase = false;
            QAbstractProxyModel::timerEvent(event);
        } else if (qabstractproxymodel_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qabstractproxymodel_timerevent_callback(this, cbval1);
        } else {
            QAbstractProxyModel::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qabstractproxymodel_childevent_isbase) {
            qabstractproxymodel_childevent_isbase = false;
            QAbstractProxyModel::childEvent(event);
        } else if (qabstractproxymodel_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qabstractproxymodel_childevent_callback(this, cbval1);
        } else {
            QAbstractProxyModel::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qabstractproxymodel_customevent_isbase) {
            qabstractproxymodel_customevent_isbase = false;
            QAbstractProxyModel::customEvent(event);
        } else if (qabstractproxymodel_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qabstractproxymodel_customevent_callback(this, cbval1);
        } else {
            QAbstractProxyModel::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qabstractproxymodel_connectnotify_isbase) {
            qabstractproxymodel_connectnotify_isbase = false;
            QAbstractProxyModel::connectNotify(signal);
        } else if (qabstractproxymodel_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qabstractproxymodel_connectnotify_callback(this, cbval1);
        } else {
            QAbstractProxyModel::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qabstractproxymodel_disconnectnotify_isbase) {
            qabstractproxymodel_disconnectnotify_isbase = false;
            QAbstractProxyModel::disconnectNotify(signal);
        } else if (qabstractproxymodel_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qabstractproxymodel_disconnectnotify_callback(this, cbval1);
        } else {
            QAbstractProxyModel::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QModelIndex createSourceIndex(int row, int col, void* internalPtr) const {
        if (qabstractproxymodel_createsourceindex_isbase) {
            qabstractproxymodel_createsourceindex_isbase = false;
            return QAbstractProxyModel::createSourceIndex(row, col, internalPtr);
        } else if (qabstractproxymodel_createsourceindex_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = col;
            void* cbval3 = internalPtr;

            QModelIndex* callback_ret = qabstractproxymodel_createsourceindex_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return QAbstractProxyModel::createSourceIndex(row, col, internalPtr);
        }
    }

    // Virtual method for C ABI access and custom callback
    QModelIndex createIndex(int row, int column) const {
        if (qabstractproxymodel_createindex_isbase) {
            qabstractproxymodel_createindex_isbase = false;
            return QAbstractProxyModel::createIndex(row, column);
        } else if (qabstractproxymodel_createindex_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;

            QModelIndex* callback_ret = qabstractproxymodel_createindex_callback(this, cbval1, cbval2);
            return *callback_ret;
        } else {
            return QAbstractProxyModel::createIndex(row, column);
        }
    }

    // Virtual method for C ABI access and custom callback
    void encodeData(const QList<QModelIndex>& indexes, QDataStream& stream) const {
        if (qabstractproxymodel_encodedata_isbase) {
            qabstractproxymodel_encodedata_isbase = false;
            QAbstractProxyModel::encodeData(indexes, stream);
        } else if (qabstractproxymodel_encodedata_callback != nullptr) {
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

            qabstractproxymodel_encodedata_callback(this, cbval1, cbval2);
        } else {
            QAbstractProxyModel::encodeData(indexes, stream);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool decodeData(int row, int column, const QModelIndex& parent, QDataStream& stream) {
        if (qabstractproxymodel_decodedata_isbase) {
            qabstractproxymodel_decodedata_isbase = false;
            return QAbstractProxyModel::decodeData(row, column, parent, stream);
        } else if (qabstractproxymodel_decodedata_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            QDataStream& stream_ret = stream;
            // Cast returned reference into pointer
            QDataStream* cbval4 = &stream_ret;

            bool callback_ret = qabstractproxymodel_decodedata_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        } else {
            return QAbstractProxyModel::decodeData(row, column, parent, stream);
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertRows(const QModelIndex& parent, int first, int last) {
        if (qabstractproxymodel_begininsertrows_isbase) {
            qabstractproxymodel_begininsertrows_isbase = false;
            QAbstractProxyModel::beginInsertRows(parent, first, last);
        } else if (qabstractproxymodel_begininsertrows_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            qabstractproxymodel_begininsertrows_callback(this, cbval1, cbval2, cbval3);
        } else {
            QAbstractProxyModel::beginInsertRows(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endInsertRows() {
        if (qabstractproxymodel_endinsertrows_isbase) {
            qabstractproxymodel_endinsertrows_isbase = false;
            QAbstractProxyModel::endInsertRows();
        } else if (qabstractproxymodel_endinsertrows_callback != nullptr) {
            qabstractproxymodel_endinsertrows_callback();
        } else {
            QAbstractProxyModel::endInsertRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveRows(const QModelIndex& parent, int first, int last) {
        if (qabstractproxymodel_beginremoverows_isbase) {
            qabstractproxymodel_beginremoverows_isbase = false;
            QAbstractProxyModel::beginRemoveRows(parent, first, last);
        } else if (qabstractproxymodel_beginremoverows_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            qabstractproxymodel_beginremoverows_callback(this, cbval1, cbval2, cbval3);
        } else {
            QAbstractProxyModel::beginRemoveRows(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveRows() {
        if (qabstractproxymodel_endremoverows_isbase) {
            qabstractproxymodel_endremoverows_isbase = false;
            QAbstractProxyModel::endRemoveRows();
        } else if (qabstractproxymodel_endremoverows_callback != nullptr) {
            qabstractproxymodel_endremoverows_callback();
        } else {
            QAbstractProxyModel::endRemoveRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveRows(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationRow) {
        if (qabstractproxymodel_beginmoverows_isbase) {
            qabstractproxymodel_beginmoverows_isbase = false;
            return QAbstractProxyModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
        } else if (qabstractproxymodel_beginmoverows_callback != nullptr) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceFirst;
            int cbval3 = sourceLast;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationRow;

            bool callback_ret = qabstractproxymodel_beginmoverows_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return QAbstractProxyModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endMoveRows() {
        if (qabstractproxymodel_endmoverows_isbase) {
            qabstractproxymodel_endmoverows_isbase = false;
            QAbstractProxyModel::endMoveRows();
        } else if (qabstractproxymodel_endmoverows_callback != nullptr) {
            qabstractproxymodel_endmoverows_callback();
        } else {
            QAbstractProxyModel::endMoveRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertColumns(const QModelIndex& parent, int first, int last) {
        if (qabstractproxymodel_begininsertcolumns_isbase) {
            qabstractproxymodel_begininsertcolumns_isbase = false;
            QAbstractProxyModel::beginInsertColumns(parent, first, last);
        } else if (qabstractproxymodel_begininsertcolumns_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            qabstractproxymodel_begininsertcolumns_callback(this, cbval1, cbval2, cbval3);
        } else {
            QAbstractProxyModel::beginInsertColumns(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endInsertColumns() {
        if (qabstractproxymodel_endinsertcolumns_isbase) {
            qabstractproxymodel_endinsertcolumns_isbase = false;
            QAbstractProxyModel::endInsertColumns();
        } else if (qabstractproxymodel_endinsertcolumns_callback != nullptr) {
            qabstractproxymodel_endinsertcolumns_callback();
        } else {
            QAbstractProxyModel::endInsertColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveColumns(const QModelIndex& parent, int first, int last) {
        if (qabstractproxymodel_beginremovecolumns_isbase) {
            qabstractproxymodel_beginremovecolumns_isbase = false;
            QAbstractProxyModel::beginRemoveColumns(parent, first, last);
        } else if (qabstractproxymodel_beginremovecolumns_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            qabstractproxymodel_beginremovecolumns_callback(this, cbval1, cbval2, cbval3);
        } else {
            QAbstractProxyModel::beginRemoveColumns(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveColumns() {
        if (qabstractproxymodel_endremovecolumns_isbase) {
            qabstractproxymodel_endremovecolumns_isbase = false;
            QAbstractProxyModel::endRemoveColumns();
        } else if (qabstractproxymodel_endremovecolumns_callback != nullptr) {
            qabstractproxymodel_endremovecolumns_callback();
        } else {
            QAbstractProxyModel::endRemoveColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveColumns(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationColumn) {
        if (qabstractproxymodel_beginmovecolumns_isbase) {
            qabstractproxymodel_beginmovecolumns_isbase = false;
            return QAbstractProxyModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
        } else if (qabstractproxymodel_beginmovecolumns_callback != nullptr) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceFirst;
            int cbval3 = sourceLast;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationColumn;

            bool callback_ret = qabstractproxymodel_beginmovecolumns_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return QAbstractProxyModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endMoveColumns() {
        if (qabstractproxymodel_endmovecolumns_isbase) {
            qabstractproxymodel_endmovecolumns_isbase = false;
            QAbstractProxyModel::endMoveColumns();
        } else if (qabstractproxymodel_endmovecolumns_callback != nullptr) {
            qabstractproxymodel_endmovecolumns_callback();
        } else {
            QAbstractProxyModel::endMoveColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginResetModel() {
        if (qabstractproxymodel_beginresetmodel_isbase) {
            qabstractproxymodel_beginresetmodel_isbase = false;
            QAbstractProxyModel::beginResetModel();
        } else if (qabstractproxymodel_beginresetmodel_callback != nullptr) {
            qabstractproxymodel_beginresetmodel_callback();
        } else {
            QAbstractProxyModel::beginResetModel();
        }
    }

    // Virtual method for C ABI access and custom callback
    void endResetModel() {
        if (qabstractproxymodel_endresetmodel_isbase) {
            qabstractproxymodel_endresetmodel_isbase = false;
            QAbstractProxyModel::endResetModel();
        } else if (qabstractproxymodel_endresetmodel_callback != nullptr) {
            qabstractproxymodel_endresetmodel_callback();
        } else {
            QAbstractProxyModel::endResetModel();
        }
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndex(const QModelIndex& from, const QModelIndex& to) {
        if (qabstractproxymodel_changepersistentindex_isbase) {
            qabstractproxymodel_changepersistentindex_isbase = false;
            QAbstractProxyModel::changePersistentIndex(from, to);
        } else if (qabstractproxymodel_changepersistentindex_callback != nullptr) {
            const QModelIndex& from_ret = from;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&from_ret);
            const QModelIndex& to_ret = to;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&to_ret);

            qabstractproxymodel_changepersistentindex_callback(this, cbval1, cbval2);
        } else {
            QAbstractProxyModel::changePersistentIndex(from, to);
        }
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndexList(const QList<QModelIndex>& from, const QList<QModelIndex>& to) {
        if (qabstractproxymodel_changepersistentindexlist_isbase) {
            qabstractproxymodel_changepersistentindexlist_isbase = false;
            QAbstractProxyModel::changePersistentIndexList(from, to);
        } else if (qabstractproxymodel_changepersistentindexlist_callback != nullptr) {
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

            qabstractproxymodel_changepersistentindexlist_callback(this, cbval1, cbval2);
        } else {
            QAbstractProxyModel::changePersistentIndexList(from, to);
        }
    }

    // Virtual method for C ABI access and custom callback
    QList<QModelIndex> persistentIndexList() const {
        if (qabstractproxymodel_persistentindexlist_isbase) {
            qabstractproxymodel_persistentindexlist_isbase = false;
            return QAbstractProxyModel::persistentIndexList();
        } else if (qabstractproxymodel_persistentindexlist_callback != nullptr) {
            QModelIndex** callback_ret = qabstractproxymodel_persistentindexlist_callback();
            QList<QModelIndex> callback_ret_QList;
            // Iterate until null pointer sentinel
            for (QModelIndex** ptridx = callback_ret; *ptridx != nullptr; ptridx++) {
                callback_ret_QList.push_back(**ptridx);
            }
            free(callback_ret);
            return callback_ret_QList;
        } else {
            return QAbstractProxyModel::persistentIndexList();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qabstractproxymodel_sender_isbase) {
            qabstractproxymodel_sender_isbase = false;
            return QAbstractProxyModel::sender();
        } else if (qabstractproxymodel_sender_callback != nullptr) {
            QObject* callback_ret = qabstractproxymodel_sender_callback();
            return callback_ret;
        } else {
            return QAbstractProxyModel::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qabstractproxymodel_sendersignalindex_isbase) {
            qabstractproxymodel_sendersignalindex_isbase = false;
            return QAbstractProxyModel::senderSignalIndex();
        } else if (qabstractproxymodel_sendersignalindex_callback != nullptr) {
            int callback_ret = qabstractproxymodel_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QAbstractProxyModel::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qabstractproxymodel_receivers_isbase) {
            qabstractproxymodel_receivers_isbase = false;
            return QAbstractProxyModel::receivers(signal);
        } else if (qabstractproxymodel_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qabstractproxymodel_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QAbstractProxyModel::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qabstractproxymodel_issignalconnected_isbase) {
            qabstractproxymodel_issignalconnected_isbase = false;
            return QAbstractProxyModel::isSignalConnected(signal);
        } else if (qabstractproxymodel_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qabstractproxymodel_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QAbstractProxyModel::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QAbstractProxyModel_ResetInternalData(QAbstractProxyModel* self);
    friend void QAbstractProxyModel_QBaseResetInternalData(QAbstractProxyModel* self);
    friend void QAbstractProxyModel_TimerEvent(QAbstractProxyModel* self, QTimerEvent* event);
    friend void QAbstractProxyModel_QBaseTimerEvent(QAbstractProxyModel* self, QTimerEvent* event);
    friend void QAbstractProxyModel_ChildEvent(QAbstractProxyModel* self, QChildEvent* event);
    friend void QAbstractProxyModel_QBaseChildEvent(QAbstractProxyModel* self, QChildEvent* event);
    friend void QAbstractProxyModel_CustomEvent(QAbstractProxyModel* self, QEvent* event);
    friend void QAbstractProxyModel_QBaseCustomEvent(QAbstractProxyModel* self, QEvent* event);
    friend void QAbstractProxyModel_ConnectNotify(QAbstractProxyModel* self, const QMetaMethod* signal);
    friend void QAbstractProxyModel_QBaseConnectNotify(QAbstractProxyModel* self, const QMetaMethod* signal);
    friend void QAbstractProxyModel_DisconnectNotify(QAbstractProxyModel* self, const QMetaMethod* signal);
    friend void QAbstractProxyModel_QBaseDisconnectNotify(QAbstractProxyModel* self, const QMetaMethod* signal);
    friend QModelIndex* QAbstractProxyModel_CreateSourceIndex(const QAbstractProxyModel* self, int row, int col, void* internalPtr);
    friend QModelIndex* QAbstractProxyModel_QBaseCreateSourceIndex(const QAbstractProxyModel* self, int row, int col, void* internalPtr);
    friend QModelIndex* QAbstractProxyModel_CreateIndex(const QAbstractProxyModel* self, int row, int column);
    friend QModelIndex* QAbstractProxyModel_QBaseCreateIndex(const QAbstractProxyModel* self, int row, int column);
    friend void QAbstractProxyModel_EncodeData(const QAbstractProxyModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
    friend void QAbstractProxyModel_QBaseEncodeData(const QAbstractProxyModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
    friend bool QAbstractProxyModel_DecodeData(QAbstractProxyModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
    friend bool QAbstractProxyModel_QBaseDecodeData(QAbstractProxyModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
    friend void QAbstractProxyModel_BeginInsertRows(QAbstractProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void QAbstractProxyModel_QBaseBeginInsertRows(QAbstractProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void QAbstractProxyModel_EndInsertRows(QAbstractProxyModel* self);
    friend void QAbstractProxyModel_QBaseEndInsertRows(QAbstractProxyModel* self);
    friend void QAbstractProxyModel_BeginRemoveRows(QAbstractProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void QAbstractProxyModel_QBaseBeginRemoveRows(QAbstractProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void QAbstractProxyModel_EndRemoveRows(QAbstractProxyModel* self);
    friend void QAbstractProxyModel_QBaseEndRemoveRows(QAbstractProxyModel* self);
    friend bool QAbstractProxyModel_BeginMoveRows(QAbstractProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
    friend bool QAbstractProxyModel_QBaseBeginMoveRows(QAbstractProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
    friend void QAbstractProxyModel_EndMoveRows(QAbstractProxyModel* self);
    friend void QAbstractProxyModel_QBaseEndMoveRows(QAbstractProxyModel* self);
    friend void QAbstractProxyModel_BeginInsertColumns(QAbstractProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void QAbstractProxyModel_QBaseBeginInsertColumns(QAbstractProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void QAbstractProxyModel_EndInsertColumns(QAbstractProxyModel* self);
    friend void QAbstractProxyModel_QBaseEndInsertColumns(QAbstractProxyModel* self);
    friend void QAbstractProxyModel_BeginRemoveColumns(QAbstractProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void QAbstractProxyModel_QBaseBeginRemoveColumns(QAbstractProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void QAbstractProxyModel_EndRemoveColumns(QAbstractProxyModel* self);
    friend void QAbstractProxyModel_QBaseEndRemoveColumns(QAbstractProxyModel* self);
    friend bool QAbstractProxyModel_BeginMoveColumns(QAbstractProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
    friend bool QAbstractProxyModel_QBaseBeginMoveColumns(QAbstractProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
    friend void QAbstractProxyModel_EndMoveColumns(QAbstractProxyModel* self);
    friend void QAbstractProxyModel_QBaseEndMoveColumns(QAbstractProxyModel* self);
    friend void QAbstractProxyModel_BeginResetModel(QAbstractProxyModel* self);
    friend void QAbstractProxyModel_QBaseBeginResetModel(QAbstractProxyModel* self);
    friend void QAbstractProxyModel_EndResetModel(QAbstractProxyModel* self);
    friend void QAbstractProxyModel_QBaseEndResetModel(QAbstractProxyModel* self);
    friend void QAbstractProxyModel_ChangePersistentIndex(QAbstractProxyModel* self, const QModelIndex* from, const QModelIndex* to);
    friend void QAbstractProxyModel_QBaseChangePersistentIndex(QAbstractProxyModel* self, const QModelIndex* from, const QModelIndex* to);
    friend void QAbstractProxyModel_ChangePersistentIndexList(QAbstractProxyModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
    friend void QAbstractProxyModel_QBaseChangePersistentIndexList(QAbstractProxyModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
    friend libqt_list /* of QModelIndex* */ QAbstractProxyModel_PersistentIndexList(const QAbstractProxyModel* self);
    friend libqt_list /* of QModelIndex* */ QAbstractProxyModel_QBasePersistentIndexList(const QAbstractProxyModel* self);
    friend QObject* QAbstractProxyModel_Sender(const QAbstractProxyModel* self);
    friend QObject* QAbstractProxyModel_QBaseSender(const QAbstractProxyModel* self);
    friend int QAbstractProxyModel_SenderSignalIndex(const QAbstractProxyModel* self);
    friend int QAbstractProxyModel_QBaseSenderSignalIndex(const QAbstractProxyModel* self);
    friend int QAbstractProxyModel_Receivers(const QAbstractProxyModel* self, const char* signal);
    friend int QAbstractProxyModel_QBaseReceivers(const QAbstractProxyModel* self, const char* signal);
    friend bool QAbstractProxyModel_IsSignalConnected(const QAbstractProxyModel* self, const QMetaMethod* signal);
    friend bool QAbstractProxyModel_QBaseIsSignalConnected(const QAbstractProxyModel* self, const QMetaMethod* signal);
};

#endif
