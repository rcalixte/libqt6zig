#pragma once
#ifndef SRCC_LIBVIRTUALQIDENTITYPROXYMODEL_H
#define SRCC_LIBVIRTUALQIDENTITYPROXYMODEL_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QIdentityProxyModel so that we can call protected methods
class VirtualQIdentityProxyModel final : public QIdentityProxyModel {

  public:
    // Virtual class boolean flag
    bool isVirtualQIdentityProxyModel = true;

    // Virtual class public types (including callbacks)
    using QIdentityProxyModel_MetaObject_Callback = QMetaObject* (*)();
    using QIdentityProxyModel_Metacast_Callback = void* (*)(QIdentityProxyModel*, const char*);
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
    using QIdentityProxyModel_MimeTypes_Callback = const char** (*)();
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
    QIdentityProxyModel_MetaObject_Callback qidentityproxymodel_metaobject_callback = nullptr;
    QIdentityProxyModel_Metacast_Callback qidentityproxymodel_metacast_callback = nullptr;
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
    mutable bool qidentityproxymodel_metaobject_isbase = false;
    mutable bool qidentityproxymodel_metacast_isbase = false;
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

    // Callback setters
    inline void setQIdentityProxyModel_MetaObject_Callback(QIdentityProxyModel_MetaObject_Callback cb) { qidentityproxymodel_metaobject_callback = cb; }
    inline void setQIdentityProxyModel_Metacast_Callback(QIdentityProxyModel_Metacast_Callback cb) { qidentityproxymodel_metacast_callback = cb; }
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
    inline void setQIdentityProxyModel_MetaObject_IsBase(bool value) const { qidentityproxymodel_metaobject_isbase = value; }
    inline void setQIdentityProxyModel_Metacast_IsBase(bool value) const { qidentityproxymodel_metacast_isbase = value; }
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
    virtual const QMetaObject* metaObject() const override {
        if (qidentityproxymodel_metaobject_isbase) {
            qidentityproxymodel_metaobject_isbase = false;
            return QIdentityProxyModel::metaObject();
        }
        auto metaobject_cb = qidentityproxymodel_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QIdentityProxyModel::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qidentityproxymodel_metacast_isbase) {
            qidentityproxymodel_metacast_isbase = false;
            return QIdentityProxyModel::qt_metacast(param1);
        }
        auto metacast_cb = qidentityproxymodel_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QIdentityProxyModel::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qidentityproxymodel_metacall_isbase) {
            qidentityproxymodel_metacall_isbase = false;
            return QIdentityProxyModel::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qidentityproxymodel_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QIdentityProxyModel::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual int columnCount(const QModelIndex& parent) const override {
        if (qidentityproxymodel_columncount_isbase) {
            qidentityproxymodel_columncount_isbase = false;
            return QIdentityProxyModel::columnCount(parent);
        }
        auto columncount_cb = qidentityproxymodel_columncount_callback;
        if (columncount_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            int callback_ret = columncount_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QIdentityProxyModel::columnCount(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
        if (qidentityproxymodel_index_isbase) {
            qidentityproxymodel_index_isbase = false;
            return QIdentityProxyModel::index(row, column, parent);
        }
        auto index_cb = qidentityproxymodel_index_callback;
        if (index_cb) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            QModelIndex* callback_ret = index_cb(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        }
        return QIdentityProxyModel::index(row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex mapFromSource(const QModelIndex& sourceIndex) const override {
        if (qidentityproxymodel_mapfromsource_isbase) {
            qidentityproxymodel_mapfromsource_isbase = false;
            return QIdentityProxyModel::mapFromSource(sourceIndex);
        }
        auto mapfromsource_cb = qidentityproxymodel_mapfromsource_callback;
        if (mapfromsource_cb) {
            const QModelIndex& sourceIndex_ret = sourceIndex;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceIndex_ret);

            QModelIndex* callback_ret = mapfromsource_cb(this, cbval1);
            return *callback_ret;
        }
        return QIdentityProxyModel::mapFromSource(sourceIndex);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex mapToSource(const QModelIndex& proxyIndex) const override {
        if (qidentityproxymodel_maptosource_isbase) {
            qidentityproxymodel_maptosource_isbase = false;
            return QIdentityProxyModel::mapToSource(proxyIndex);
        }
        auto maptosource_cb = qidentityproxymodel_maptosource_callback;
        if (maptosource_cb) {
            const QModelIndex& proxyIndex_ret = proxyIndex;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&proxyIndex_ret);

            QModelIndex* callback_ret = maptosource_cb(this, cbval1);
            return *callback_ret;
        }
        return QIdentityProxyModel::mapToSource(proxyIndex);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex parent(const QModelIndex& child) const override {
        if (qidentityproxymodel_parent_isbase) {
            qidentityproxymodel_parent_isbase = false;
            return QIdentityProxyModel::parent(child);
        }
        auto parent_cb = qidentityproxymodel_parent_callback;
        if (parent_cb) {
            const QModelIndex& child_ret = child;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&child_ret);

            QModelIndex* callback_ret = parent_cb(this, cbval1);
            return *callback_ret;
        }
        return QIdentityProxyModel::parent(child);
    }

    // Virtual method for C ABI access and custom callback
    virtual int rowCount(const QModelIndex& parent) const override {
        if (qidentityproxymodel_rowcount_isbase) {
            qidentityproxymodel_rowcount_isbase = false;
            return QIdentityProxyModel::rowCount(parent);
        }
        auto rowcount_cb = qidentityproxymodel_rowcount_callback;
        if (rowcount_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            int callback_ret = rowcount_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QIdentityProxyModel::rowCount(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
        if (qidentityproxymodel_headerdata_isbase) {
            qidentityproxymodel_headerdata_isbase = false;
            return QIdentityProxyModel::headerData(section, orientation, role);
        }
        auto headerdata_cb = qidentityproxymodel_headerdata_callback;
        if (headerdata_cb) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            int cbval3 = role;

            QVariant* callback_ret = headerdata_cb(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        }
        return QIdentityProxyModel::headerData(section, orientation, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
        if (qidentityproxymodel_dropmimedata_isbase) {
            qidentityproxymodel_dropmimedata_isbase = false;
            return QIdentityProxyModel::dropMimeData(data, action, row, column, parent);
        }
        auto dropmimedata_cb = qidentityproxymodel_dropmimedata_callback;
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
        return QIdentityProxyModel::dropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
        if (qidentityproxymodel_sibling_isbase) {
            qidentityproxymodel_sibling_isbase = false;
            return QIdentityProxyModel::sibling(row, column, idx);
        }
        auto sibling_cb = qidentityproxymodel_sibling_callback;
        if (sibling_cb) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& idx_ret = idx;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&idx_ret);

            QModelIndex* callback_ret = sibling_cb(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        }
        return QIdentityProxyModel::sibling(row, column, idx);
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelection mapSelectionFromSource(const QItemSelection& selection) const override {
        if (qidentityproxymodel_mapselectionfromsource_isbase) {
            qidentityproxymodel_mapselectionfromsource_isbase = false;
            return QIdentityProxyModel::mapSelectionFromSource(selection);
        }
        auto mapselectionfromsource_cb = qidentityproxymodel_mapselectionfromsource_callback;
        if (mapselectionfromsource_cb) {
            const QItemSelection& selection_ret = selection;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selection_ret);

            QItemSelection* callback_ret = mapselectionfromsource_cb(this, cbval1);
            return *callback_ret;
        }
        return QIdentityProxyModel::mapSelectionFromSource(selection);
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelection mapSelectionToSource(const QItemSelection& selection) const override {
        if (qidentityproxymodel_mapselectiontosource_isbase) {
            qidentityproxymodel_mapselectiontosource_isbase = false;
            return QIdentityProxyModel::mapSelectionToSource(selection);
        }
        auto mapselectiontosource_cb = qidentityproxymodel_mapselectiontosource_callback;
        if (mapselectiontosource_cb) {
            const QItemSelection& selection_ret = selection;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selection_ret);

            QItemSelection* callback_ret = mapselectiontosource_cb(this, cbval1);
            return *callback_ret;
        }
        return QIdentityProxyModel::mapSelectionToSource(selection);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
        if (qidentityproxymodel_match_isbase) {
            qidentityproxymodel_match_isbase = false;
            return QIdentityProxyModel::match(start, role, value, hits, flags);
        }
        auto match_cb = qidentityproxymodel_match_callback;
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
        return QIdentityProxyModel::match(start, role, value, hits, flags);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSourceModel(QAbstractItemModel* sourceModel) override {
        if (qidentityproxymodel_setsourcemodel_isbase) {
            qidentityproxymodel_setsourcemodel_isbase = false;
            QIdentityProxyModel::setSourceModel(sourceModel);
            return;
        }
        auto setsourcemodel_cb = qidentityproxymodel_setsourcemodel_callback;
        if (setsourcemodel_cb) {
            QAbstractItemModel* cbval1 = sourceModel;

            setsourcemodel_cb(this, cbval1);
            return;
        }
        QIdentityProxyModel::setSourceModel(sourceModel);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
        if (qidentityproxymodel_insertcolumns_isbase) {
            qidentityproxymodel_insertcolumns_isbase = false;
            return QIdentityProxyModel::insertColumns(column, count, parent);
        }
        auto insertcolumns_cb = qidentityproxymodel_insertcolumns_callback;
        if (insertcolumns_cb) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = insertcolumns_cb(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QIdentityProxyModel::insertColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
        if (qidentityproxymodel_insertrows_isbase) {
            qidentityproxymodel_insertrows_isbase = false;
            return QIdentityProxyModel::insertRows(row, count, parent);
        }
        auto insertrows_cb = qidentityproxymodel_insertrows_callback;
        if (insertrows_cb) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = insertrows_cb(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QIdentityProxyModel::insertRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
        if (qidentityproxymodel_removecolumns_isbase) {
            qidentityproxymodel_removecolumns_isbase = false;
            return QIdentityProxyModel::removeColumns(column, count, parent);
        }
        auto removecolumns_cb = qidentityproxymodel_removecolumns_callback;
        if (removecolumns_cb) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = removecolumns_cb(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QIdentityProxyModel::removeColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
        if (qidentityproxymodel_removerows_isbase) {
            qidentityproxymodel_removerows_isbase = false;
            return QIdentityProxyModel::removeRows(row, count, parent);
        }
        auto removerows_cb = qidentityproxymodel_removerows_callback;
        if (removerows_cb) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = removerows_cb(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QIdentityProxyModel::removeRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (qidentityproxymodel_moverows_isbase) {
            qidentityproxymodel_moverows_isbase = false;
            return QIdentityProxyModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
        }
        auto moverows_cb = qidentityproxymodel_moverows_callback;
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
        return QIdentityProxyModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (qidentityproxymodel_movecolumns_isbase) {
            qidentityproxymodel_movecolumns_isbase = false;
            return QIdentityProxyModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
        }
        auto movecolumns_cb = qidentityproxymodel_movecolumns_callback;
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
        return QIdentityProxyModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool submit() override {
        if (qidentityproxymodel_submit_isbase) {
            qidentityproxymodel_submit_isbase = false;
            return QIdentityProxyModel::submit();
        }
        auto submit_cb = qidentityproxymodel_submit_callback;
        if (submit_cb) {
            bool callback_ret = submit_cb();
            return callback_ret;
        }
        return QIdentityProxyModel::submit();
    }

    // Virtual method for C ABI access and custom callback
    virtual void revert() override {
        if (qidentityproxymodel_revert_isbase) {
            qidentityproxymodel_revert_isbase = false;
            QIdentityProxyModel::revert();
            return;
        }
        auto revert_cb = qidentityproxymodel_revert_callback;
        if (revert_cb) {
            revert_cb();
            return;
        }
        QIdentityProxyModel::revert();
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(const QModelIndex& proxyIndex, int role) const override {
        if (qidentityproxymodel_data_isbase) {
            qidentityproxymodel_data_isbase = false;
            return QIdentityProxyModel::data(proxyIndex, role);
        }
        auto data_cb = qidentityproxymodel_data_callback;
        if (data_cb) {
            const QModelIndex& proxyIndex_ret = proxyIndex;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&proxyIndex_ret);
            int cbval2 = role;

            QVariant* callback_ret = data_cb(this, cbval1, cbval2);
            return *callback_ret;
        }
        return QIdentityProxyModel::data(proxyIndex, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
        if (qidentityproxymodel_itemdata_isbase) {
            qidentityproxymodel_itemdata_isbase = false;
            return QIdentityProxyModel::itemData(index);
        }
        auto itemdata_cb = qidentityproxymodel_itemdata_callback;
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
        return QIdentityProxyModel::itemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
        if (qidentityproxymodel_flags_isbase) {
            qidentityproxymodel_flags_isbase = false;
            return QIdentityProxyModel::flags(index);
        }
        auto flags_cb = qidentityproxymodel_flags_callback;
        if (flags_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            int callback_ret = flags_cb(this, cbval1);
            return static_cast<Qt::ItemFlags>(callback_ret);
        }
        return QIdentityProxyModel::flags(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
        if (qidentityproxymodel_setdata_isbase) {
            qidentityproxymodel_setdata_isbase = false;
            return QIdentityProxyModel::setData(index, value, role);
        }
        auto setdata_cb = qidentityproxymodel_setdata_callback;
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
        return QIdentityProxyModel::setData(index, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
        if (qidentityproxymodel_setitemdata_isbase) {
            qidentityproxymodel_setitemdata_isbase = false;
            return QIdentityProxyModel::setItemData(index, roles);
        }
        auto setitemdata_cb = qidentityproxymodel_setitemdata_callback;
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
        return QIdentityProxyModel::setItemData(index, roles);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
        if (qidentityproxymodel_setheaderdata_isbase) {
            qidentityproxymodel_setheaderdata_isbase = false;
            return QIdentityProxyModel::setHeaderData(section, orientation, value, role);
        }
        auto setheaderdata_cb = qidentityproxymodel_setheaderdata_callback;
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
        return QIdentityProxyModel::setHeaderData(section, orientation, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool clearItemData(const QModelIndex& index) override {
        if (qidentityproxymodel_clearitemdata_isbase) {
            qidentityproxymodel_clearitemdata_isbase = false;
            return QIdentityProxyModel::clearItemData(index);
        }
        auto clearitemdata_cb = qidentityproxymodel_clearitemdata_callback;
        if (clearitemdata_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            bool callback_ret = clearitemdata_cb(this, cbval1);
            return callback_ret;
        }
        return QIdentityProxyModel::clearItemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex buddy(const QModelIndex& index) const override {
        if (qidentityproxymodel_buddy_isbase) {
            qidentityproxymodel_buddy_isbase = false;
            return QIdentityProxyModel::buddy(index);
        }
        auto buddy_cb = qidentityproxymodel_buddy_callback;
        if (buddy_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QModelIndex* callback_ret = buddy_cb(this, cbval1);
            return *callback_ret;
        }
        return QIdentityProxyModel::buddy(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canFetchMore(const QModelIndex& parent) const override {
        if (qidentityproxymodel_canfetchmore_isbase) {
            qidentityproxymodel_canfetchmore_isbase = false;
            return QIdentityProxyModel::canFetchMore(parent);
        }
        auto canfetchmore_cb = qidentityproxymodel_canfetchmore_callback;
        if (canfetchmore_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = canfetchmore_cb(this, cbval1);
            return callback_ret;
        }
        return QIdentityProxyModel::canFetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void fetchMore(const QModelIndex& parent) override {
        if (qidentityproxymodel_fetchmore_isbase) {
            qidentityproxymodel_fetchmore_isbase = false;
            QIdentityProxyModel::fetchMore(parent);
            return;
        }
        auto fetchmore_cb = qidentityproxymodel_fetchmore_callback;
        if (fetchmore_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            fetchmore_cb(this, cbval1);
            return;
        }
        QIdentityProxyModel::fetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void sort(int column, Qt::SortOrder order) override {
        if (qidentityproxymodel_sort_isbase) {
            qidentityproxymodel_sort_isbase = false;
            QIdentityProxyModel::sort(column, order);
            return;
        }
        auto sort_cb = qidentityproxymodel_sort_callback;
        if (sort_cb) {
            int cbval1 = column;
            int cbval2 = static_cast<int>(order);

            sort_cb(this, cbval1, cbval2);
            return;
        }
        QIdentityProxyModel::sort(column, order);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize span(const QModelIndex& index) const override {
        if (qidentityproxymodel_span_isbase) {
            qidentityproxymodel_span_isbase = false;
            return QIdentityProxyModel::span(index);
        }
        auto span_cb = qidentityproxymodel_span_callback;
        if (span_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QSize* callback_ret = span_cb(this, cbval1);
            return *callback_ret;
        }
        return QIdentityProxyModel::span(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasChildren(const QModelIndex& parent) const override {
        if (qidentityproxymodel_haschildren_isbase) {
            qidentityproxymodel_haschildren_isbase = false;
            return QIdentityProxyModel::hasChildren(parent);
        }
        auto haschildren_cb = qidentityproxymodel_haschildren_callback;
        if (haschildren_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = haschildren_cb(this, cbval1);
            return callback_ret;
        }
        return QIdentityProxyModel::hasChildren(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* mimeData(const QList<QModelIndex>& indexes) const override {
        if (qidentityproxymodel_mimedata_isbase) {
            qidentityproxymodel_mimedata_isbase = false;
            return QIdentityProxyModel::mimeData(indexes);
        }
        auto mimedata_cb = qidentityproxymodel_mimedata_callback;
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
        return QIdentityProxyModel::mimeData(indexes);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
        if (qidentityproxymodel_candropmimedata_isbase) {
            qidentityproxymodel_candropmimedata_isbase = false;
            return QIdentityProxyModel::canDropMimeData(data, action, row, column, parent);
        }
        auto candropmimedata_cb = qidentityproxymodel_candropmimedata_callback;
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
        return QIdentityProxyModel::canDropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> mimeTypes() const override {
        if (qidentityproxymodel_mimetypes_isbase) {
            qidentityproxymodel_mimetypes_isbase = false;
            return QIdentityProxyModel::mimeTypes();
        }
        auto mimetypes_cb = qidentityproxymodel_mimetypes_callback;
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
        return QIdentityProxyModel::mimeTypes();
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDragActions() const override {
        if (qidentityproxymodel_supporteddragactions_isbase) {
            qidentityproxymodel_supporteddragactions_isbase = false;
            return QIdentityProxyModel::supportedDragActions();
        }
        auto supporteddragactions_cb = qidentityproxymodel_supporteddragactions_callback;
        if (supporteddragactions_cb) {
            int callback_ret = supporteddragactions_cb();
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return QIdentityProxyModel::supportedDragActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (qidentityproxymodel_supporteddropactions_isbase) {
            qidentityproxymodel_supporteddropactions_isbase = false;
            return QIdentityProxyModel::supportedDropActions();
        }
        auto supporteddropactions_cb = qidentityproxymodel_supporteddropactions_callback;
        if (supporteddropactions_cb) {
            int callback_ret = supporteddropactions_cb();
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return QIdentityProxyModel::supportedDropActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual QHash<int, QByteArray> roleNames() const override {
        if (qidentityproxymodel_rolenames_isbase) {
            qidentityproxymodel_rolenames_isbase = false;
            return QIdentityProxyModel::roleNames();
        }
        auto rolenames_cb = qidentityproxymodel_rolenames_callback;
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
        return QIdentityProxyModel::roleNames();
    }

    // Virtual method for C ABI access and custom callback
    virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
        if (qidentityproxymodel_multidata_isbase) {
            qidentityproxymodel_multidata_isbase = false;
            QIdentityProxyModel::multiData(index, roleDataSpan);
            return;
        }
        auto multidata_cb = qidentityproxymodel_multidata_callback;
        if (multidata_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelRoleDataSpan* cbval2 = new QModelRoleDataSpan(roleDataSpan);

            multidata_cb(this, cbval1, cbval2);
            return;
        }
        QIdentityProxyModel::multiData(index, roleDataSpan);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetInternalData() override {
        if (qidentityproxymodel_resetinternaldata_isbase) {
            qidentityproxymodel_resetinternaldata_isbase = false;
            QIdentityProxyModel::resetInternalData();
            return;
        }
        auto resetinternaldata_cb = qidentityproxymodel_resetinternaldata_callback;
        if (resetinternaldata_cb) {
            resetinternaldata_cb();
            return;
        }
        QIdentityProxyModel::resetInternalData();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qidentityproxymodel_event_isbase) {
            qidentityproxymodel_event_isbase = false;
            return QIdentityProxyModel::event(event);
        }
        auto event_cb = qidentityproxymodel_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QIdentityProxyModel::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qidentityproxymodel_eventfilter_isbase) {
            qidentityproxymodel_eventfilter_isbase = false;
            return QIdentityProxyModel::eventFilter(watched, event);
        }
        auto eventfilter_cb = qidentityproxymodel_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QIdentityProxyModel::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qidentityproxymodel_timerevent_isbase) {
            qidentityproxymodel_timerevent_isbase = false;
            QIdentityProxyModel::timerEvent(event);
            return;
        }
        auto timerevent_cb = qidentityproxymodel_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QIdentityProxyModel::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qidentityproxymodel_childevent_isbase) {
            qidentityproxymodel_childevent_isbase = false;
            QIdentityProxyModel::childEvent(event);
            return;
        }
        auto childevent_cb = qidentityproxymodel_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QIdentityProxyModel::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qidentityproxymodel_customevent_isbase) {
            qidentityproxymodel_customevent_isbase = false;
            QIdentityProxyModel::customEvent(event);
            return;
        }
        auto customevent_cb = qidentityproxymodel_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QIdentityProxyModel::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qidentityproxymodel_connectnotify_isbase) {
            qidentityproxymodel_connectnotify_isbase = false;
            QIdentityProxyModel::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qidentityproxymodel_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QIdentityProxyModel::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qidentityproxymodel_disconnectnotify_isbase) {
            qidentityproxymodel_disconnectnotify_isbase = false;
            QIdentityProxyModel::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qidentityproxymodel_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QIdentityProxyModel::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void setHandleSourceLayoutChanges(bool handleSourceLayoutChanges) {
        if (qidentityproxymodel_sethandlesourcelayoutchanges_isbase) {
            qidentityproxymodel_sethandlesourcelayoutchanges_isbase = false;
            QIdentityProxyModel::setHandleSourceLayoutChanges(handleSourceLayoutChanges);
            return;
        }
        auto sethandlesourcelayoutchanges_cb = qidentityproxymodel_sethandlesourcelayoutchanges_callback;
        if (sethandlesourcelayoutchanges_cb) {
            bool cbval1 = handleSourceLayoutChanges;

            sethandlesourcelayoutchanges_cb(this, cbval1);
            return;
        }
        QIdentityProxyModel::setHandleSourceLayoutChanges(handleSourceLayoutChanges);
    }

    // Virtual method for C ABI access and custom callback
    void setHandleSourceDataChanges(bool handleSourceDataChanges) {
        if (qidentityproxymodel_sethandlesourcedatachanges_isbase) {
            qidentityproxymodel_sethandlesourcedatachanges_isbase = false;
            QIdentityProxyModel::setHandleSourceDataChanges(handleSourceDataChanges);
            return;
        }
        auto sethandlesourcedatachanges_cb = qidentityproxymodel_sethandlesourcedatachanges_callback;
        if (sethandlesourcedatachanges_cb) {
            bool cbval1 = handleSourceDataChanges;

            sethandlesourcedatachanges_cb(this, cbval1);
            return;
        }
        QIdentityProxyModel::setHandleSourceDataChanges(handleSourceDataChanges);
    }

    // Virtual method for C ABI access and custom callback
    QModelIndex createSourceIndex(int row, int col, void* internalPtr) const {
        if (qidentityproxymodel_createsourceindex_isbase) {
            qidentityproxymodel_createsourceindex_isbase = false;
            return QIdentityProxyModel::createSourceIndex(row, col, internalPtr);
        }
        auto createsourceindex_cb = qidentityproxymodel_createsourceindex_callback;
        if (createsourceindex_cb) {
            int cbval1 = row;
            int cbval2 = col;
            void* cbval3 = internalPtr;

            QModelIndex* callback_ret = createsourceindex_cb(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        }
        return QIdentityProxyModel::createSourceIndex(row, col, internalPtr);
    }

    // Virtual method for C ABI access and custom callback
    QModelIndex createIndex(int row, int column) const {
        if (qidentityproxymodel_createindex_isbase) {
            qidentityproxymodel_createindex_isbase = false;
            return QIdentityProxyModel::createIndex(row, column);
        }
        auto createindex_cb = qidentityproxymodel_createindex_callback;
        if (createindex_cb) {
            int cbval1 = row;
            int cbval2 = column;

            QModelIndex* callback_ret = createindex_cb(this, cbval1, cbval2);
            return *callback_ret;
        }
        return QIdentityProxyModel::createIndex(row, column);
    }

    // Virtual method for C ABI access and custom callback
    void encodeData(const QList<QModelIndex>& indexes, QDataStream& stream) const {
        if (qidentityproxymodel_encodedata_isbase) {
            qidentityproxymodel_encodedata_isbase = false;
            QIdentityProxyModel::encodeData(indexes, stream);
            return;
        }
        auto encodedata_cb = qidentityproxymodel_encodedata_callback;
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
        QIdentityProxyModel::encodeData(indexes, stream);
    }

    // Virtual method for C ABI access and custom callback
    bool decodeData(int row, int column, const QModelIndex& parent, QDataStream& stream) {
        if (qidentityproxymodel_decodedata_isbase) {
            qidentityproxymodel_decodedata_isbase = false;
            return QIdentityProxyModel::decodeData(row, column, parent, stream);
        }
        auto decodedata_cb = qidentityproxymodel_decodedata_callback;
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
        return QIdentityProxyModel::decodeData(row, column, parent, stream);
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertRows(const QModelIndex& parent, int first, int last) {
        if (qidentityproxymodel_begininsertrows_isbase) {
            qidentityproxymodel_begininsertrows_isbase = false;
            QIdentityProxyModel::beginInsertRows(parent, first, last);
            return;
        }
        auto begininsertrows_cb = qidentityproxymodel_begininsertrows_callback;
        if (begininsertrows_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            begininsertrows_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        QIdentityProxyModel::beginInsertRows(parent, first, last);
    }

    // Virtual method for C ABI access and custom callback
    void endInsertRows() {
        if (qidentityproxymodel_endinsertrows_isbase) {
            qidentityproxymodel_endinsertrows_isbase = false;
            QIdentityProxyModel::endInsertRows();
            return;
        }
        auto endinsertrows_cb = qidentityproxymodel_endinsertrows_callback;
        if (endinsertrows_cb) {
            endinsertrows_cb();
            return;
        }
        QIdentityProxyModel::endInsertRows();
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveRows(const QModelIndex& parent, int first, int last) {
        if (qidentityproxymodel_beginremoverows_isbase) {
            qidentityproxymodel_beginremoverows_isbase = false;
            QIdentityProxyModel::beginRemoveRows(parent, first, last);
            return;
        }
        auto beginremoverows_cb = qidentityproxymodel_beginremoverows_callback;
        if (beginremoverows_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            beginremoverows_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        QIdentityProxyModel::beginRemoveRows(parent, first, last);
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveRows() {
        if (qidentityproxymodel_endremoverows_isbase) {
            qidentityproxymodel_endremoverows_isbase = false;
            QIdentityProxyModel::endRemoveRows();
            return;
        }
        auto endremoverows_cb = qidentityproxymodel_endremoverows_callback;
        if (endremoverows_cb) {
            endremoverows_cb();
            return;
        }
        QIdentityProxyModel::endRemoveRows();
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveRows(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationRow) {
        if (qidentityproxymodel_beginmoverows_isbase) {
            qidentityproxymodel_beginmoverows_isbase = false;
            return QIdentityProxyModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
        }
        auto beginmoverows_cb = qidentityproxymodel_beginmoverows_callback;
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
        return QIdentityProxyModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
    }

    // Virtual method for C ABI access and custom callback
    void endMoveRows() {
        if (qidentityproxymodel_endmoverows_isbase) {
            qidentityproxymodel_endmoverows_isbase = false;
            QIdentityProxyModel::endMoveRows();
            return;
        }
        auto endmoverows_cb = qidentityproxymodel_endmoverows_callback;
        if (endmoverows_cb) {
            endmoverows_cb();
            return;
        }
        QIdentityProxyModel::endMoveRows();
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertColumns(const QModelIndex& parent, int first, int last) {
        if (qidentityproxymodel_begininsertcolumns_isbase) {
            qidentityproxymodel_begininsertcolumns_isbase = false;
            QIdentityProxyModel::beginInsertColumns(parent, first, last);
            return;
        }
        auto begininsertcolumns_cb = qidentityproxymodel_begininsertcolumns_callback;
        if (begininsertcolumns_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            begininsertcolumns_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        QIdentityProxyModel::beginInsertColumns(parent, first, last);
    }

    // Virtual method for C ABI access and custom callback
    void endInsertColumns() {
        if (qidentityproxymodel_endinsertcolumns_isbase) {
            qidentityproxymodel_endinsertcolumns_isbase = false;
            QIdentityProxyModel::endInsertColumns();
            return;
        }
        auto endinsertcolumns_cb = qidentityproxymodel_endinsertcolumns_callback;
        if (endinsertcolumns_cb) {
            endinsertcolumns_cb();
            return;
        }
        QIdentityProxyModel::endInsertColumns();
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveColumns(const QModelIndex& parent, int first, int last) {
        if (qidentityproxymodel_beginremovecolumns_isbase) {
            qidentityproxymodel_beginremovecolumns_isbase = false;
            QIdentityProxyModel::beginRemoveColumns(parent, first, last);
            return;
        }
        auto beginremovecolumns_cb = qidentityproxymodel_beginremovecolumns_callback;
        if (beginremovecolumns_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            beginremovecolumns_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        QIdentityProxyModel::beginRemoveColumns(parent, first, last);
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveColumns() {
        if (qidentityproxymodel_endremovecolumns_isbase) {
            qidentityproxymodel_endremovecolumns_isbase = false;
            QIdentityProxyModel::endRemoveColumns();
            return;
        }
        auto endremovecolumns_cb = qidentityproxymodel_endremovecolumns_callback;
        if (endremovecolumns_cb) {
            endremovecolumns_cb();
            return;
        }
        QIdentityProxyModel::endRemoveColumns();
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveColumns(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationColumn) {
        if (qidentityproxymodel_beginmovecolumns_isbase) {
            qidentityproxymodel_beginmovecolumns_isbase = false;
            return QIdentityProxyModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
        }
        auto beginmovecolumns_cb = qidentityproxymodel_beginmovecolumns_callback;
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
        return QIdentityProxyModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
    }

    // Virtual method for C ABI access and custom callback
    void endMoveColumns() {
        if (qidentityproxymodel_endmovecolumns_isbase) {
            qidentityproxymodel_endmovecolumns_isbase = false;
            QIdentityProxyModel::endMoveColumns();
            return;
        }
        auto endmovecolumns_cb = qidentityproxymodel_endmovecolumns_callback;
        if (endmovecolumns_cb) {
            endmovecolumns_cb();
            return;
        }
        QIdentityProxyModel::endMoveColumns();
    }

    // Virtual method for C ABI access and custom callback
    void beginResetModel() {
        if (qidentityproxymodel_beginresetmodel_isbase) {
            qidentityproxymodel_beginresetmodel_isbase = false;
            QIdentityProxyModel::beginResetModel();
            return;
        }
        auto beginresetmodel_cb = qidentityproxymodel_beginresetmodel_callback;
        if (beginresetmodel_cb) {
            beginresetmodel_cb();
            return;
        }
        QIdentityProxyModel::beginResetModel();
    }

    // Virtual method for C ABI access and custom callback
    void endResetModel() {
        if (qidentityproxymodel_endresetmodel_isbase) {
            qidentityproxymodel_endresetmodel_isbase = false;
            QIdentityProxyModel::endResetModel();
            return;
        }
        auto endresetmodel_cb = qidentityproxymodel_endresetmodel_callback;
        if (endresetmodel_cb) {
            endresetmodel_cb();
            return;
        }
        QIdentityProxyModel::endResetModel();
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndex(const QModelIndex& from, const QModelIndex& to) {
        if (qidentityproxymodel_changepersistentindex_isbase) {
            qidentityproxymodel_changepersistentindex_isbase = false;
            QIdentityProxyModel::changePersistentIndex(from, to);
            return;
        }
        auto changepersistentindex_cb = qidentityproxymodel_changepersistentindex_callback;
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
        QIdentityProxyModel::changePersistentIndex(from, to);
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndexList(const QList<QModelIndex>& from, const QList<QModelIndex>& to) {
        if (qidentityproxymodel_changepersistentindexlist_isbase) {
            qidentityproxymodel_changepersistentindexlist_isbase = false;
            QIdentityProxyModel::changePersistentIndexList(from, to);
            return;
        }
        auto changepersistentindexlist_cb = qidentityproxymodel_changepersistentindexlist_callback;
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
        QIdentityProxyModel::changePersistentIndexList(from, to);
    }

    // Virtual method for C ABI access and custom callback
    QList<QModelIndex> persistentIndexList() const {
        if (qidentityproxymodel_persistentindexlist_isbase) {
            qidentityproxymodel_persistentindexlist_isbase = false;
            return QIdentityProxyModel::persistentIndexList();
        }
        auto persistentindexlist_cb = qidentityproxymodel_persistentindexlist_callback;
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
        return QIdentityProxyModel::persistentIndexList();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qidentityproxymodel_sender_isbase) {
            qidentityproxymodel_sender_isbase = false;
            return QIdentityProxyModel::sender();
        }
        auto sender_cb = qidentityproxymodel_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QIdentityProxyModel::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qidentityproxymodel_sendersignalindex_isbase) {
            qidentityproxymodel_sendersignalindex_isbase = false;
            return QIdentityProxyModel::senderSignalIndex();
        }
        auto sendersignalindex_cb = qidentityproxymodel_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QIdentityProxyModel::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qidentityproxymodel_receivers_isbase) {
            qidentityproxymodel_receivers_isbase = false;
            return QIdentityProxyModel::receivers(signal);
        }
        auto receivers_cb = qidentityproxymodel_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QIdentityProxyModel::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qidentityproxymodel_issignalconnected_isbase) {
            qidentityproxymodel_issignalconnected_isbase = false;
            return QIdentityProxyModel::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qidentityproxymodel_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QIdentityProxyModel::isSignalConnected(signal);
    }

    // Friend functions
    friend void QIdentityProxyModel_ResetInternalData(QIdentityProxyModel* self);
    friend void QIdentityProxyModel_SuperResetInternalData(QIdentityProxyModel* self);
    friend void QIdentityProxyModel_TimerEvent(QIdentityProxyModel* self, QTimerEvent* event);
    friend void QIdentityProxyModel_SuperTimerEvent(QIdentityProxyModel* self, QTimerEvent* event);
    friend void QIdentityProxyModel_ChildEvent(QIdentityProxyModel* self, QChildEvent* event);
    friend void QIdentityProxyModel_SuperChildEvent(QIdentityProxyModel* self, QChildEvent* event);
    friend void QIdentityProxyModel_CustomEvent(QIdentityProxyModel* self, QEvent* event);
    friend void QIdentityProxyModel_SuperCustomEvent(QIdentityProxyModel* self, QEvent* event);
    friend void QIdentityProxyModel_ConnectNotify(QIdentityProxyModel* self, const QMetaMethod* signal);
    friend void QIdentityProxyModel_SuperConnectNotify(QIdentityProxyModel* self, const QMetaMethod* signal);
    friend void QIdentityProxyModel_DisconnectNotify(QIdentityProxyModel* self, const QMetaMethod* signal);
    friend void QIdentityProxyModel_SuperDisconnectNotify(QIdentityProxyModel* self, const QMetaMethod* signal);
    friend void QIdentityProxyModel_SetHandleSourceLayoutChanges(QIdentityProxyModel* self, bool handleSourceLayoutChanges);
    friend void QIdentityProxyModel_SuperSetHandleSourceLayoutChanges(QIdentityProxyModel* self, bool handleSourceLayoutChanges);
    friend void QIdentityProxyModel_SetHandleSourceDataChanges(QIdentityProxyModel* self, bool handleSourceDataChanges);
    friend void QIdentityProxyModel_SuperSetHandleSourceDataChanges(QIdentityProxyModel* self, bool handleSourceDataChanges);
    friend QModelIndex* QIdentityProxyModel_CreateSourceIndex(const QIdentityProxyModel* self, int row, int col, void* internalPtr);
    friend QModelIndex* QIdentityProxyModel_SuperCreateSourceIndex(const QIdentityProxyModel* self, int row, int col, void* internalPtr);
    friend QModelIndex* QIdentityProxyModel_CreateIndex(const QIdentityProxyModel* self, int row, int column);
    friend QModelIndex* QIdentityProxyModel_SuperCreateIndex(const QIdentityProxyModel* self, int row, int column);
    friend void QIdentityProxyModel_EncodeData(const QIdentityProxyModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
    friend void QIdentityProxyModel_SuperEncodeData(const QIdentityProxyModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
    friend bool QIdentityProxyModel_DecodeData(QIdentityProxyModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
    friend bool QIdentityProxyModel_SuperDecodeData(QIdentityProxyModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
    friend void QIdentityProxyModel_BeginInsertRows(QIdentityProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void QIdentityProxyModel_SuperBeginInsertRows(QIdentityProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void QIdentityProxyModel_EndInsertRows(QIdentityProxyModel* self);
    friend void QIdentityProxyModel_SuperEndInsertRows(QIdentityProxyModel* self);
    friend void QIdentityProxyModel_BeginRemoveRows(QIdentityProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void QIdentityProxyModel_SuperBeginRemoveRows(QIdentityProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void QIdentityProxyModel_EndRemoveRows(QIdentityProxyModel* self);
    friend void QIdentityProxyModel_SuperEndRemoveRows(QIdentityProxyModel* self);
    friend bool QIdentityProxyModel_BeginMoveRows(QIdentityProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
    friend bool QIdentityProxyModel_SuperBeginMoveRows(QIdentityProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
    friend void QIdentityProxyModel_EndMoveRows(QIdentityProxyModel* self);
    friend void QIdentityProxyModel_SuperEndMoveRows(QIdentityProxyModel* self);
    friend void QIdentityProxyModel_BeginInsertColumns(QIdentityProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void QIdentityProxyModel_SuperBeginInsertColumns(QIdentityProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void QIdentityProxyModel_EndInsertColumns(QIdentityProxyModel* self);
    friend void QIdentityProxyModel_SuperEndInsertColumns(QIdentityProxyModel* self);
    friend void QIdentityProxyModel_BeginRemoveColumns(QIdentityProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void QIdentityProxyModel_SuperBeginRemoveColumns(QIdentityProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void QIdentityProxyModel_EndRemoveColumns(QIdentityProxyModel* self);
    friend void QIdentityProxyModel_SuperEndRemoveColumns(QIdentityProxyModel* self);
    friend bool QIdentityProxyModel_BeginMoveColumns(QIdentityProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
    friend bool QIdentityProxyModel_SuperBeginMoveColumns(QIdentityProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
    friend void QIdentityProxyModel_EndMoveColumns(QIdentityProxyModel* self);
    friend void QIdentityProxyModel_SuperEndMoveColumns(QIdentityProxyModel* self);
    friend void QIdentityProxyModel_BeginResetModel(QIdentityProxyModel* self);
    friend void QIdentityProxyModel_SuperBeginResetModel(QIdentityProxyModel* self);
    friend void QIdentityProxyModel_EndResetModel(QIdentityProxyModel* self);
    friend void QIdentityProxyModel_SuperEndResetModel(QIdentityProxyModel* self);
    friend void QIdentityProxyModel_ChangePersistentIndex(QIdentityProxyModel* self, const QModelIndex* from, const QModelIndex* to);
    friend void QIdentityProxyModel_SuperChangePersistentIndex(QIdentityProxyModel* self, const QModelIndex* from, const QModelIndex* to);
    friend void QIdentityProxyModel_ChangePersistentIndexList(QIdentityProxyModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
    friend void QIdentityProxyModel_SuperChangePersistentIndexList(QIdentityProxyModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
    friend libqt_list /* of QModelIndex* */ QIdentityProxyModel_PersistentIndexList(const QIdentityProxyModel* self);
    friend libqt_list /* of QModelIndex* */ QIdentityProxyModel_SuperPersistentIndexList(const QIdentityProxyModel* self);
    friend QObject* QIdentityProxyModel_Sender(const QIdentityProxyModel* self);
    friend QObject* QIdentityProxyModel_SuperSender(const QIdentityProxyModel* self);
    friend int QIdentityProxyModel_SenderSignalIndex(const QIdentityProxyModel* self);
    friend int QIdentityProxyModel_SuperSenderSignalIndex(const QIdentityProxyModel* self);
    friend int QIdentityProxyModel_Receivers(const QIdentityProxyModel* self, const char* signal);
    friend int QIdentityProxyModel_SuperReceivers(const QIdentityProxyModel* self, const char* signal);
    friend bool QIdentityProxyModel_IsSignalConnected(const QIdentityProxyModel* self, const QMetaMethod* signal);
    friend bool QIdentityProxyModel_SuperIsSignalConnected(const QIdentityProxyModel* self, const QMetaMethod* signal);
};

#endif
