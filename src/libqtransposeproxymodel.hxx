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
    using QTransposeProxyModel_MetaObject_Callback = QMetaObject* (*)();
    using QTransposeProxyModel_Metacast_Callback = void* (*)(QTransposeProxyModel*, const char*);
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
    using QTransposeProxyModel_Match_Callback = libqt_list /* of QModelIndex* */ (*)(const QTransposeProxyModel*, QModelIndex*, int, QVariant*, int, int);
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
    using QTransposeProxyModel_PersistentIndexList_Callback = libqt_list /* of QModelIndex* */ (*)();
    using QTransposeProxyModel_Sender_Callback = QObject* (*)();
    using QTransposeProxyModel_SenderSignalIndex_Callback = int (*)();
    using QTransposeProxyModel_Receivers_Callback = int (*)(const QTransposeProxyModel*, const char*);
    using QTransposeProxyModel_IsSignalConnected_Callback = bool (*)(const QTransposeProxyModel*, QMetaMethod*);

  protected:
    // Instance callback storage
    QTransposeProxyModel_MetaObject_Callback qtransposeproxymodel_metaobject_callback = nullptr;
    QTransposeProxyModel_Metacast_Callback qtransposeproxymodel_metacast_callback = nullptr;
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
    mutable bool qtransposeproxymodel_metaobject_isbase = false;
    mutable bool qtransposeproxymodel_metacast_isbase = false;
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

    // Callback setters
    inline void setQTransposeProxyModel_MetaObject_Callback(QTransposeProxyModel_MetaObject_Callback cb) { qtransposeproxymodel_metaobject_callback = cb; }
    inline void setQTransposeProxyModel_Metacast_Callback(QTransposeProxyModel_Metacast_Callback cb) { qtransposeproxymodel_metacast_callback = cb; }
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
    inline void setQTransposeProxyModel_MetaObject_IsBase(bool value) const { qtransposeproxymodel_metaobject_isbase = value; }
    inline void setQTransposeProxyModel_Metacast_IsBase(bool value) const { qtransposeproxymodel_metacast_isbase = value; }
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
    virtual const QMetaObject* metaObject() const override {
        if (qtransposeproxymodel_metaobject_isbase) {
            qtransposeproxymodel_metaobject_isbase = false;
            return QTransposeProxyModel::metaObject();
        }
        auto metaobject_cb = qtransposeproxymodel_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QTransposeProxyModel::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qtransposeproxymodel_metacast_isbase) {
            qtransposeproxymodel_metacast_isbase = false;
            return QTransposeProxyModel::qt_metacast(param1);
        }
        auto metacast_cb = qtransposeproxymodel_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QTransposeProxyModel::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qtransposeproxymodel_metacall_isbase) {
            qtransposeproxymodel_metacall_isbase = false;
            return QTransposeProxyModel::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qtransposeproxymodel_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QTransposeProxyModel::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSourceModel(QAbstractItemModel* newSourceModel) override {
        if (qtransposeproxymodel_setsourcemodel_isbase) {
            qtransposeproxymodel_setsourcemodel_isbase = false;
            QTransposeProxyModel::setSourceModel(newSourceModel);
            return;
        }
        auto setsourcemodel_cb = qtransposeproxymodel_setsourcemodel_callback;
        if (setsourcemodel_cb) {
            QAbstractItemModel* cbval1 = newSourceModel;

            setsourcemodel_cb(this, cbval1);
            return;
        }
        QTransposeProxyModel::setSourceModel(newSourceModel);
    }

    // Virtual method for C ABI access and custom callback
    virtual int rowCount(const QModelIndex& parent) const override {
        if (qtransposeproxymodel_rowcount_isbase) {
            qtransposeproxymodel_rowcount_isbase = false;
            return QTransposeProxyModel::rowCount(parent);
        }
        auto rowcount_cb = qtransposeproxymodel_rowcount_callback;
        if (rowcount_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            int callback_ret = rowcount_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QTransposeProxyModel::rowCount(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual int columnCount(const QModelIndex& parent) const override {
        if (qtransposeproxymodel_columncount_isbase) {
            qtransposeproxymodel_columncount_isbase = false;
            return QTransposeProxyModel::columnCount(parent);
        }
        auto columncount_cb = qtransposeproxymodel_columncount_callback;
        if (columncount_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            int callback_ret = columncount_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QTransposeProxyModel::columnCount(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
        if (qtransposeproxymodel_headerdata_isbase) {
            qtransposeproxymodel_headerdata_isbase = false;
            return QTransposeProxyModel::headerData(section, orientation, role);
        }
        auto headerdata_cb = qtransposeproxymodel_headerdata_callback;
        if (headerdata_cb) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            int cbval3 = role;

            QVariant* callback_ret = headerdata_cb(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        }
        return QTransposeProxyModel::headerData(section, orientation, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
        if (qtransposeproxymodel_setheaderdata_isbase) {
            qtransposeproxymodel_setheaderdata_isbase = false;
            return QTransposeProxyModel::setHeaderData(section, orientation, value, role);
        }
        auto setheaderdata_cb = qtransposeproxymodel_setheaderdata_callback;
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
        return QTransposeProxyModel::setHeaderData(section, orientation, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
        if (qtransposeproxymodel_setitemdata_isbase) {
            qtransposeproxymodel_setitemdata_isbase = false;
            return QTransposeProxyModel::setItemData(index, roles);
        }
        auto setitemdata_cb = qtransposeproxymodel_setitemdata_callback;
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
        return QTransposeProxyModel::setItemData(index, roles);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize span(const QModelIndex& index) const override {
        if (qtransposeproxymodel_span_isbase) {
            qtransposeproxymodel_span_isbase = false;
            return QTransposeProxyModel::span(index);
        }
        auto span_cb = qtransposeproxymodel_span_callback;
        if (span_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QSize* callback_ret = span_cb(this, cbval1);
            return *callback_ret;
        }
        return QTransposeProxyModel::span(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
        if (qtransposeproxymodel_itemdata_isbase) {
            qtransposeproxymodel_itemdata_isbase = false;
            return QTransposeProxyModel::itemData(index);
        }
        auto itemdata_cb = qtransposeproxymodel_itemdata_callback;
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
        return QTransposeProxyModel::itemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex mapFromSource(const QModelIndex& sourceIndex) const override {
        if (qtransposeproxymodel_mapfromsource_isbase) {
            qtransposeproxymodel_mapfromsource_isbase = false;
            return QTransposeProxyModel::mapFromSource(sourceIndex);
        }
        auto mapfromsource_cb = qtransposeproxymodel_mapfromsource_callback;
        if (mapfromsource_cb) {
            const QModelIndex& sourceIndex_ret = sourceIndex;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceIndex_ret);

            QModelIndex* callback_ret = mapfromsource_cb(this, cbval1);
            return *callback_ret;
        }
        return QTransposeProxyModel::mapFromSource(sourceIndex);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex mapToSource(const QModelIndex& proxyIndex) const override {
        if (qtransposeproxymodel_maptosource_isbase) {
            qtransposeproxymodel_maptosource_isbase = false;
            return QTransposeProxyModel::mapToSource(proxyIndex);
        }
        auto maptosource_cb = qtransposeproxymodel_maptosource_callback;
        if (maptosource_cb) {
            const QModelIndex& proxyIndex_ret = proxyIndex;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&proxyIndex_ret);

            QModelIndex* callback_ret = maptosource_cb(this, cbval1);
            return *callback_ret;
        }
        return QTransposeProxyModel::mapToSource(proxyIndex);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex parent(const QModelIndex& index) const override {
        if (qtransposeproxymodel_parent_isbase) {
            qtransposeproxymodel_parent_isbase = false;
            return QTransposeProxyModel::parent(index);
        }
        auto parent_cb = qtransposeproxymodel_parent_callback;
        if (parent_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QModelIndex* callback_ret = parent_cb(this, cbval1);
            return *callback_ret;
        }
        return QTransposeProxyModel::parent(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
        if (qtransposeproxymodel_index_isbase) {
            qtransposeproxymodel_index_isbase = false;
            return QTransposeProxyModel::index(row, column, parent);
        }
        auto index_cb = qtransposeproxymodel_index_callback;
        if (index_cb) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            QModelIndex* callback_ret = index_cb(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        }
        return QTransposeProxyModel::index(row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
        if (qtransposeproxymodel_insertrows_isbase) {
            qtransposeproxymodel_insertrows_isbase = false;
            return QTransposeProxyModel::insertRows(row, count, parent);
        }
        auto insertrows_cb = qtransposeproxymodel_insertrows_callback;
        if (insertrows_cb) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = insertrows_cb(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QTransposeProxyModel::insertRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
        if (qtransposeproxymodel_removerows_isbase) {
            qtransposeproxymodel_removerows_isbase = false;
            return QTransposeProxyModel::removeRows(row, count, parent);
        }
        auto removerows_cb = qtransposeproxymodel_removerows_callback;
        if (removerows_cb) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = removerows_cb(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QTransposeProxyModel::removeRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (qtransposeproxymodel_moverows_isbase) {
            qtransposeproxymodel_moverows_isbase = false;
            return QTransposeProxyModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
        }
        auto moverows_cb = qtransposeproxymodel_moverows_callback;
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
        return QTransposeProxyModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
        if (qtransposeproxymodel_insertcolumns_isbase) {
            qtransposeproxymodel_insertcolumns_isbase = false;
            return QTransposeProxyModel::insertColumns(column, count, parent);
        }
        auto insertcolumns_cb = qtransposeproxymodel_insertcolumns_callback;
        if (insertcolumns_cb) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = insertcolumns_cb(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QTransposeProxyModel::insertColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
        if (qtransposeproxymodel_removecolumns_isbase) {
            qtransposeproxymodel_removecolumns_isbase = false;
            return QTransposeProxyModel::removeColumns(column, count, parent);
        }
        auto removecolumns_cb = qtransposeproxymodel_removecolumns_callback;
        if (removecolumns_cb) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = removecolumns_cb(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QTransposeProxyModel::removeColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (qtransposeproxymodel_movecolumns_isbase) {
            qtransposeproxymodel_movecolumns_isbase = false;
            return QTransposeProxyModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
        }
        auto movecolumns_cb = qtransposeproxymodel_movecolumns_callback;
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
        return QTransposeProxyModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual void sort(int column, Qt::SortOrder order) override {
        if (qtransposeproxymodel_sort_isbase) {
            qtransposeproxymodel_sort_isbase = false;
            QTransposeProxyModel::sort(column, order);
            return;
        }
        auto sort_cb = qtransposeproxymodel_sort_callback;
        if (sort_cb) {
            int cbval1 = column;
            int cbval2 = static_cast<int>(order);

            sort_cb(this, cbval1, cbval2);
            return;
        }
        QTransposeProxyModel::sort(column, order);
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelection mapSelectionToSource(const QItemSelection& selection) const override {
        if (qtransposeproxymodel_mapselectiontosource_isbase) {
            qtransposeproxymodel_mapselectiontosource_isbase = false;
            return QTransposeProxyModel::mapSelectionToSource(selection);
        }
        auto mapselectiontosource_cb = qtransposeproxymodel_mapselectiontosource_callback;
        if (mapselectiontosource_cb) {
            const QItemSelection& selection_ret = selection;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selection_ret);

            QItemSelection* callback_ret = mapselectiontosource_cb(this, cbval1);
            return *callback_ret;
        }
        return QTransposeProxyModel::mapSelectionToSource(selection);
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelection mapSelectionFromSource(const QItemSelection& selection) const override {
        if (qtransposeproxymodel_mapselectionfromsource_isbase) {
            qtransposeproxymodel_mapselectionfromsource_isbase = false;
            return QTransposeProxyModel::mapSelectionFromSource(selection);
        }
        auto mapselectionfromsource_cb = qtransposeproxymodel_mapselectionfromsource_callback;
        if (mapselectionfromsource_cb) {
            const QItemSelection& selection_ret = selection;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selection_ret);

            QItemSelection* callback_ret = mapselectionfromsource_cb(this, cbval1);
            return *callback_ret;
        }
        return QTransposeProxyModel::mapSelectionFromSource(selection);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool submit() override {
        if (qtransposeproxymodel_submit_isbase) {
            qtransposeproxymodel_submit_isbase = false;
            return QTransposeProxyModel::submit();
        }
        auto submit_cb = qtransposeproxymodel_submit_callback;
        if (submit_cb) {
            bool callback_ret = submit_cb();
            return callback_ret;
        }
        return QTransposeProxyModel::submit();
    }

    // Virtual method for C ABI access and custom callback
    virtual void revert() override {
        if (qtransposeproxymodel_revert_isbase) {
            qtransposeproxymodel_revert_isbase = false;
            QTransposeProxyModel::revert();
            return;
        }
        auto revert_cb = qtransposeproxymodel_revert_callback;
        if (revert_cb) {
            revert_cb();
            return;
        }
        QTransposeProxyModel::revert();
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(const QModelIndex& proxyIndex, int role) const override {
        if (qtransposeproxymodel_data_isbase) {
            qtransposeproxymodel_data_isbase = false;
            return QTransposeProxyModel::data(proxyIndex, role);
        }
        auto data_cb = qtransposeproxymodel_data_callback;
        if (data_cb) {
            const QModelIndex& proxyIndex_ret = proxyIndex;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&proxyIndex_ret);
            int cbval2 = role;

            QVariant* callback_ret = data_cb(this, cbval1, cbval2);
            return *callback_ret;
        }
        return QTransposeProxyModel::data(proxyIndex, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
        if (qtransposeproxymodel_flags_isbase) {
            qtransposeproxymodel_flags_isbase = false;
            return QTransposeProxyModel::flags(index);
        }
        auto flags_cb = qtransposeproxymodel_flags_callback;
        if (flags_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            int callback_ret = flags_cb(this, cbval1);
            return static_cast<Qt::ItemFlags>(callback_ret);
        }
        return QTransposeProxyModel::flags(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
        if (qtransposeproxymodel_setdata_isbase) {
            qtransposeproxymodel_setdata_isbase = false;
            return QTransposeProxyModel::setData(index, value, role);
        }
        auto setdata_cb = qtransposeproxymodel_setdata_callback;
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
        return QTransposeProxyModel::setData(index, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool clearItemData(const QModelIndex& index) override {
        if (qtransposeproxymodel_clearitemdata_isbase) {
            qtransposeproxymodel_clearitemdata_isbase = false;
            return QTransposeProxyModel::clearItemData(index);
        }
        auto clearitemdata_cb = qtransposeproxymodel_clearitemdata_callback;
        if (clearitemdata_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            bool callback_ret = clearitemdata_cb(this, cbval1);
            return callback_ret;
        }
        return QTransposeProxyModel::clearItemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex buddy(const QModelIndex& index) const override {
        if (qtransposeproxymodel_buddy_isbase) {
            qtransposeproxymodel_buddy_isbase = false;
            return QTransposeProxyModel::buddy(index);
        }
        auto buddy_cb = qtransposeproxymodel_buddy_callback;
        if (buddy_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QModelIndex* callback_ret = buddy_cb(this, cbval1);
            return *callback_ret;
        }
        return QTransposeProxyModel::buddy(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canFetchMore(const QModelIndex& parent) const override {
        if (qtransposeproxymodel_canfetchmore_isbase) {
            qtransposeproxymodel_canfetchmore_isbase = false;
            return QTransposeProxyModel::canFetchMore(parent);
        }
        auto canfetchmore_cb = qtransposeproxymodel_canfetchmore_callback;
        if (canfetchmore_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = canfetchmore_cb(this, cbval1);
            return callback_ret;
        }
        return QTransposeProxyModel::canFetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void fetchMore(const QModelIndex& parent) override {
        if (qtransposeproxymodel_fetchmore_isbase) {
            qtransposeproxymodel_fetchmore_isbase = false;
            QTransposeProxyModel::fetchMore(parent);
            return;
        }
        auto fetchmore_cb = qtransposeproxymodel_fetchmore_callback;
        if (fetchmore_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            fetchmore_cb(this, cbval1);
            return;
        }
        QTransposeProxyModel::fetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasChildren(const QModelIndex& parent) const override {
        if (qtransposeproxymodel_haschildren_isbase) {
            qtransposeproxymodel_haschildren_isbase = false;
            return QTransposeProxyModel::hasChildren(parent);
        }
        auto haschildren_cb = qtransposeproxymodel_haschildren_callback;
        if (haschildren_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = haschildren_cb(this, cbval1);
            return callback_ret;
        }
        return QTransposeProxyModel::hasChildren(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
        if (qtransposeproxymodel_sibling_isbase) {
            qtransposeproxymodel_sibling_isbase = false;
            return QTransposeProxyModel::sibling(row, column, idx);
        }
        auto sibling_cb = qtransposeproxymodel_sibling_callback;
        if (sibling_cb) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& idx_ret = idx;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&idx_ret);

            QModelIndex* callback_ret = sibling_cb(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        }
        return QTransposeProxyModel::sibling(row, column, idx);
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* mimeData(const QList<QModelIndex>& indexes) const override {
        if (qtransposeproxymodel_mimedata_isbase) {
            qtransposeproxymodel_mimedata_isbase = false;
            return QTransposeProxyModel::mimeData(indexes);
        }
        auto mimedata_cb = qtransposeproxymodel_mimedata_callback;
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
        return QTransposeProxyModel::mimeData(indexes);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
        if (qtransposeproxymodel_candropmimedata_isbase) {
            qtransposeproxymodel_candropmimedata_isbase = false;
            return QTransposeProxyModel::canDropMimeData(data, action, row, column, parent);
        }
        auto candropmimedata_cb = qtransposeproxymodel_candropmimedata_callback;
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
        return QTransposeProxyModel::canDropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
        if (qtransposeproxymodel_dropmimedata_isbase) {
            qtransposeproxymodel_dropmimedata_isbase = false;
            return QTransposeProxyModel::dropMimeData(data, action, row, column, parent);
        }
        auto dropmimedata_cb = qtransposeproxymodel_dropmimedata_callback;
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
        return QTransposeProxyModel::dropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> mimeTypes() const override {
        if (qtransposeproxymodel_mimetypes_isbase) {
            qtransposeproxymodel_mimetypes_isbase = false;
            return QTransposeProxyModel::mimeTypes();
        }
        auto mimetypes_cb = qtransposeproxymodel_mimetypes_callback;
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
        return QTransposeProxyModel::mimeTypes();
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDragActions() const override {
        if (qtransposeproxymodel_supporteddragactions_isbase) {
            qtransposeproxymodel_supporteddragactions_isbase = false;
            return QTransposeProxyModel::supportedDragActions();
        }
        auto supporteddragactions_cb = qtransposeproxymodel_supporteddragactions_callback;
        if (supporteddragactions_cb) {
            int callback_ret = supporteddragactions_cb();
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return QTransposeProxyModel::supportedDragActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (qtransposeproxymodel_supporteddropactions_isbase) {
            qtransposeproxymodel_supporteddropactions_isbase = false;
            return QTransposeProxyModel::supportedDropActions();
        }
        auto supporteddropactions_cb = qtransposeproxymodel_supporteddropactions_callback;
        if (supporteddropactions_cb) {
            int callback_ret = supporteddropactions_cb();
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return QTransposeProxyModel::supportedDropActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual QHash<int, QByteArray> roleNames() const override {
        if (qtransposeproxymodel_rolenames_isbase) {
            qtransposeproxymodel_rolenames_isbase = false;
            return QTransposeProxyModel::roleNames();
        }
        auto rolenames_cb = qtransposeproxymodel_rolenames_callback;
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
        return QTransposeProxyModel::roleNames();
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
        if (qtransposeproxymodel_match_isbase) {
            qtransposeproxymodel_match_isbase = false;
            return QTransposeProxyModel::match(start, role, value, hits, flags);
        }
        auto match_cb = qtransposeproxymodel_match_callback;
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
        return QTransposeProxyModel::match(start, role, value, hits, flags);
    }

    // Virtual method for C ABI access and custom callback
    virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
        if (qtransposeproxymodel_multidata_isbase) {
            qtransposeproxymodel_multidata_isbase = false;
            QTransposeProxyModel::multiData(index, roleDataSpan);
            return;
        }
        auto multidata_cb = qtransposeproxymodel_multidata_callback;
        if (multidata_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelRoleDataSpan* cbval2 = new QModelRoleDataSpan(roleDataSpan);

            multidata_cb(this, cbval1, cbval2);
            return;
        }
        QTransposeProxyModel::multiData(index, roleDataSpan);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetInternalData() override {
        if (qtransposeproxymodel_resetinternaldata_isbase) {
            qtransposeproxymodel_resetinternaldata_isbase = false;
            QTransposeProxyModel::resetInternalData();
            return;
        }
        auto resetinternaldata_cb = qtransposeproxymodel_resetinternaldata_callback;
        if (resetinternaldata_cb) {
            resetinternaldata_cb();
            return;
        }
        QTransposeProxyModel::resetInternalData();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qtransposeproxymodel_event_isbase) {
            qtransposeproxymodel_event_isbase = false;
            return QTransposeProxyModel::event(event);
        }
        auto event_cb = qtransposeproxymodel_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QTransposeProxyModel::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qtransposeproxymodel_eventfilter_isbase) {
            qtransposeproxymodel_eventfilter_isbase = false;
            return QTransposeProxyModel::eventFilter(watched, event);
        }
        auto eventfilter_cb = qtransposeproxymodel_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QTransposeProxyModel::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qtransposeproxymodel_timerevent_isbase) {
            qtransposeproxymodel_timerevent_isbase = false;
            QTransposeProxyModel::timerEvent(event);
            return;
        }
        auto timerevent_cb = qtransposeproxymodel_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QTransposeProxyModel::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qtransposeproxymodel_childevent_isbase) {
            qtransposeproxymodel_childevent_isbase = false;
            QTransposeProxyModel::childEvent(event);
            return;
        }
        auto childevent_cb = qtransposeproxymodel_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QTransposeProxyModel::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qtransposeproxymodel_customevent_isbase) {
            qtransposeproxymodel_customevent_isbase = false;
            QTransposeProxyModel::customEvent(event);
            return;
        }
        auto customevent_cb = qtransposeproxymodel_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QTransposeProxyModel::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qtransposeproxymodel_connectnotify_isbase) {
            qtransposeproxymodel_connectnotify_isbase = false;
            QTransposeProxyModel::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qtransposeproxymodel_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QTransposeProxyModel::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qtransposeproxymodel_disconnectnotify_isbase) {
            qtransposeproxymodel_disconnectnotify_isbase = false;
            QTransposeProxyModel::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qtransposeproxymodel_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QTransposeProxyModel::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QModelIndex createSourceIndex(int row, int col, void* internalPtr) const {
        if (qtransposeproxymodel_createsourceindex_isbase) {
            qtransposeproxymodel_createsourceindex_isbase = false;
            return QTransposeProxyModel::createSourceIndex(row, col, internalPtr);
        }
        auto createsourceindex_cb = qtransposeproxymodel_createsourceindex_callback;
        if (createsourceindex_cb) {
            int cbval1 = row;
            int cbval2 = col;
            void* cbval3 = internalPtr;

            QModelIndex* callback_ret = createsourceindex_cb(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        }
        return QTransposeProxyModel::createSourceIndex(row, col, internalPtr);
    }

    // Virtual method for C ABI access and custom callback
    QModelIndex createIndex(int row, int column) const {
        if (qtransposeproxymodel_createindex_isbase) {
            qtransposeproxymodel_createindex_isbase = false;
            return QTransposeProxyModel::createIndex(row, column);
        }
        auto createindex_cb = qtransposeproxymodel_createindex_callback;
        if (createindex_cb) {
            int cbval1 = row;
            int cbval2 = column;

            QModelIndex* callback_ret = createindex_cb(this, cbval1, cbval2);
            return *callback_ret;
        }
        return QTransposeProxyModel::createIndex(row, column);
    }

    // Virtual method for C ABI access and custom callback
    void encodeData(const QList<QModelIndex>& indexes, QDataStream& stream) const {
        if (qtransposeproxymodel_encodedata_isbase) {
            qtransposeproxymodel_encodedata_isbase = false;
            QTransposeProxyModel::encodeData(indexes, stream);
            return;
        }
        auto encodedata_cb = qtransposeproxymodel_encodedata_callback;
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
        QTransposeProxyModel::encodeData(indexes, stream);
    }

    // Virtual method for C ABI access and custom callback
    bool decodeData(int row, int column, const QModelIndex& parent, QDataStream& stream) {
        if (qtransposeproxymodel_decodedata_isbase) {
            qtransposeproxymodel_decodedata_isbase = false;
            return QTransposeProxyModel::decodeData(row, column, parent, stream);
        }
        auto decodedata_cb = qtransposeproxymodel_decodedata_callback;
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
        return QTransposeProxyModel::decodeData(row, column, parent, stream);
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertRows(const QModelIndex& parent, int first, int last) {
        if (qtransposeproxymodel_begininsertrows_isbase) {
            qtransposeproxymodel_begininsertrows_isbase = false;
            QTransposeProxyModel::beginInsertRows(parent, first, last);
            return;
        }
        auto begininsertrows_cb = qtransposeproxymodel_begininsertrows_callback;
        if (begininsertrows_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            begininsertrows_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        QTransposeProxyModel::beginInsertRows(parent, first, last);
    }

    // Virtual method for C ABI access and custom callback
    void endInsertRows() {
        if (qtransposeproxymodel_endinsertrows_isbase) {
            qtransposeproxymodel_endinsertrows_isbase = false;
            QTransposeProxyModel::endInsertRows();
            return;
        }
        auto endinsertrows_cb = qtransposeproxymodel_endinsertrows_callback;
        if (endinsertrows_cb) {
            endinsertrows_cb();
            return;
        }
        QTransposeProxyModel::endInsertRows();
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveRows(const QModelIndex& parent, int first, int last) {
        if (qtransposeproxymodel_beginremoverows_isbase) {
            qtransposeproxymodel_beginremoverows_isbase = false;
            QTransposeProxyModel::beginRemoveRows(parent, first, last);
            return;
        }
        auto beginremoverows_cb = qtransposeproxymodel_beginremoverows_callback;
        if (beginremoverows_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            beginremoverows_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        QTransposeProxyModel::beginRemoveRows(parent, first, last);
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveRows() {
        if (qtransposeproxymodel_endremoverows_isbase) {
            qtransposeproxymodel_endremoverows_isbase = false;
            QTransposeProxyModel::endRemoveRows();
            return;
        }
        auto endremoverows_cb = qtransposeproxymodel_endremoverows_callback;
        if (endremoverows_cb) {
            endremoverows_cb();
            return;
        }
        QTransposeProxyModel::endRemoveRows();
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveRows(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationRow) {
        if (qtransposeproxymodel_beginmoverows_isbase) {
            qtransposeproxymodel_beginmoverows_isbase = false;
            return QTransposeProxyModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
        }
        auto beginmoverows_cb = qtransposeproxymodel_beginmoverows_callback;
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
        return QTransposeProxyModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
    }

    // Virtual method for C ABI access and custom callback
    void endMoveRows() {
        if (qtransposeproxymodel_endmoverows_isbase) {
            qtransposeproxymodel_endmoverows_isbase = false;
            QTransposeProxyModel::endMoveRows();
            return;
        }
        auto endmoverows_cb = qtransposeproxymodel_endmoverows_callback;
        if (endmoverows_cb) {
            endmoverows_cb();
            return;
        }
        QTransposeProxyModel::endMoveRows();
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertColumns(const QModelIndex& parent, int first, int last) {
        if (qtransposeproxymodel_begininsertcolumns_isbase) {
            qtransposeproxymodel_begininsertcolumns_isbase = false;
            QTransposeProxyModel::beginInsertColumns(parent, first, last);
            return;
        }
        auto begininsertcolumns_cb = qtransposeproxymodel_begininsertcolumns_callback;
        if (begininsertcolumns_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            begininsertcolumns_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        QTransposeProxyModel::beginInsertColumns(parent, first, last);
    }

    // Virtual method for C ABI access and custom callback
    void endInsertColumns() {
        if (qtransposeproxymodel_endinsertcolumns_isbase) {
            qtransposeproxymodel_endinsertcolumns_isbase = false;
            QTransposeProxyModel::endInsertColumns();
            return;
        }
        auto endinsertcolumns_cb = qtransposeproxymodel_endinsertcolumns_callback;
        if (endinsertcolumns_cb) {
            endinsertcolumns_cb();
            return;
        }
        QTransposeProxyModel::endInsertColumns();
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveColumns(const QModelIndex& parent, int first, int last) {
        if (qtransposeproxymodel_beginremovecolumns_isbase) {
            qtransposeproxymodel_beginremovecolumns_isbase = false;
            QTransposeProxyModel::beginRemoveColumns(parent, first, last);
            return;
        }
        auto beginremovecolumns_cb = qtransposeproxymodel_beginremovecolumns_callback;
        if (beginremovecolumns_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            beginremovecolumns_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        QTransposeProxyModel::beginRemoveColumns(parent, first, last);
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveColumns() {
        if (qtransposeproxymodel_endremovecolumns_isbase) {
            qtransposeproxymodel_endremovecolumns_isbase = false;
            QTransposeProxyModel::endRemoveColumns();
            return;
        }
        auto endremovecolumns_cb = qtransposeproxymodel_endremovecolumns_callback;
        if (endremovecolumns_cb) {
            endremovecolumns_cb();
            return;
        }
        QTransposeProxyModel::endRemoveColumns();
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveColumns(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationColumn) {
        if (qtransposeproxymodel_beginmovecolumns_isbase) {
            qtransposeproxymodel_beginmovecolumns_isbase = false;
            return QTransposeProxyModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
        }
        auto beginmovecolumns_cb = qtransposeproxymodel_beginmovecolumns_callback;
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
        return QTransposeProxyModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
    }

    // Virtual method for C ABI access and custom callback
    void endMoveColumns() {
        if (qtransposeproxymodel_endmovecolumns_isbase) {
            qtransposeproxymodel_endmovecolumns_isbase = false;
            QTransposeProxyModel::endMoveColumns();
            return;
        }
        auto endmovecolumns_cb = qtransposeproxymodel_endmovecolumns_callback;
        if (endmovecolumns_cb) {
            endmovecolumns_cb();
            return;
        }
        QTransposeProxyModel::endMoveColumns();
    }

    // Virtual method for C ABI access and custom callback
    void beginResetModel() {
        if (qtransposeproxymodel_beginresetmodel_isbase) {
            qtransposeproxymodel_beginresetmodel_isbase = false;
            QTransposeProxyModel::beginResetModel();
            return;
        }
        auto beginresetmodel_cb = qtransposeproxymodel_beginresetmodel_callback;
        if (beginresetmodel_cb) {
            beginresetmodel_cb();
            return;
        }
        QTransposeProxyModel::beginResetModel();
    }

    // Virtual method for C ABI access and custom callback
    void endResetModel() {
        if (qtransposeproxymodel_endresetmodel_isbase) {
            qtransposeproxymodel_endresetmodel_isbase = false;
            QTransposeProxyModel::endResetModel();
            return;
        }
        auto endresetmodel_cb = qtransposeproxymodel_endresetmodel_callback;
        if (endresetmodel_cb) {
            endresetmodel_cb();
            return;
        }
        QTransposeProxyModel::endResetModel();
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndex(const QModelIndex& from, const QModelIndex& to) {
        if (qtransposeproxymodel_changepersistentindex_isbase) {
            qtransposeproxymodel_changepersistentindex_isbase = false;
            QTransposeProxyModel::changePersistentIndex(from, to);
            return;
        }
        auto changepersistentindex_cb = qtransposeproxymodel_changepersistentindex_callback;
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
        QTransposeProxyModel::changePersistentIndex(from, to);
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndexList(const QList<QModelIndex>& from, const QList<QModelIndex>& to) {
        if (qtransposeproxymodel_changepersistentindexlist_isbase) {
            qtransposeproxymodel_changepersistentindexlist_isbase = false;
            QTransposeProxyModel::changePersistentIndexList(from, to);
            return;
        }
        auto changepersistentindexlist_cb = qtransposeproxymodel_changepersistentindexlist_callback;
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
        QTransposeProxyModel::changePersistentIndexList(from, to);
    }

    // Virtual method for C ABI access and custom callback
    QList<QModelIndex> persistentIndexList() const {
        if (qtransposeproxymodel_persistentindexlist_isbase) {
            qtransposeproxymodel_persistentindexlist_isbase = false;
            return QTransposeProxyModel::persistentIndexList();
        }
        auto persistentindexlist_cb = qtransposeproxymodel_persistentindexlist_callback;
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
        return QTransposeProxyModel::persistentIndexList();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qtransposeproxymodel_sender_isbase) {
            qtransposeproxymodel_sender_isbase = false;
            return QTransposeProxyModel::sender();
        }
        auto sender_cb = qtransposeproxymodel_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QTransposeProxyModel::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qtransposeproxymodel_sendersignalindex_isbase) {
            qtransposeproxymodel_sendersignalindex_isbase = false;
            return QTransposeProxyModel::senderSignalIndex();
        }
        auto sendersignalindex_cb = qtransposeproxymodel_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QTransposeProxyModel::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qtransposeproxymodel_receivers_isbase) {
            qtransposeproxymodel_receivers_isbase = false;
            return QTransposeProxyModel::receivers(signal);
        }
        auto receivers_cb = qtransposeproxymodel_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QTransposeProxyModel::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qtransposeproxymodel_issignalconnected_isbase) {
            qtransposeproxymodel_issignalconnected_isbase = false;
            return QTransposeProxyModel::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qtransposeproxymodel_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QTransposeProxyModel::isSignalConnected(signal);
    }

    // Friend functions
    friend void QTransposeProxyModel_ResetInternalData(QTransposeProxyModel* self);
    friend void QTransposeProxyModel_SuperResetInternalData(QTransposeProxyModel* self);
    friend void QTransposeProxyModel_TimerEvent(QTransposeProxyModel* self, QTimerEvent* event);
    friend void QTransposeProxyModel_SuperTimerEvent(QTransposeProxyModel* self, QTimerEvent* event);
    friend void QTransposeProxyModel_ChildEvent(QTransposeProxyModel* self, QChildEvent* event);
    friend void QTransposeProxyModel_SuperChildEvent(QTransposeProxyModel* self, QChildEvent* event);
    friend void QTransposeProxyModel_CustomEvent(QTransposeProxyModel* self, QEvent* event);
    friend void QTransposeProxyModel_SuperCustomEvent(QTransposeProxyModel* self, QEvent* event);
    friend void QTransposeProxyModel_ConnectNotify(QTransposeProxyModel* self, const QMetaMethod* signal);
    friend void QTransposeProxyModel_SuperConnectNotify(QTransposeProxyModel* self, const QMetaMethod* signal);
    friend void QTransposeProxyModel_DisconnectNotify(QTransposeProxyModel* self, const QMetaMethod* signal);
    friend void QTransposeProxyModel_SuperDisconnectNotify(QTransposeProxyModel* self, const QMetaMethod* signal);
    friend QModelIndex* QTransposeProxyModel_CreateSourceIndex(const QTransposeProxyModel* self, int row, int col, void* internalPtr);
    friend QModelIndex* QTransposeProxyModel_SuperCreateSourceIndex(const QTransposeProxyModel* self, int row, int col, void* internalPtr);
    friend QModelIndex* QTransposeProxyModel_CreateIndex(const QTransposeProxyModel* self, int row, int column);
    friend QModelIndex* QTransposeProxyModel_SuperCreateIndex(const QTransposeProxyModel* self, int row, int column);
    friend void QTransposeProxyModel_EncodeData(const QTransposeProxyModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
    friend void QTransposeProxyModel_SuperEncodeData(const QTransposeProxyModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
    friend bool QTransposeProxyModel_DecodeData(QTransposeProxyModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
    friend bool QTransposeProxyModel_SuperDecodeData(QTransposeProxyModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
    friend void QTransposeProxyModel_BeginInsertRows(QTransposeProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void QTransposeProxyModel_SuperBeginInsertRows(QTransposeProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void QTransposeProxyModel_EndInsertRows(QTransposeProxyModel* self);
    friend void QTransposeProxyModel_SuperEndInsertRows(QTransposeProxyModel* self);
    friend void QTransposeProxyModel_BeginRemoveRows(QTransposeProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void QTransposeProxyModel_SuperBeginRemoveRows(QTransposeProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void QTransposeProxyModel_EndRemoveRows(QTransposeProxyModel* self);
    friend void QTransposeProxyModel_SuperEndRemoveRows(QTransposeProxyModel* self);
    friend bool QTransposeProxyModel_BeginMoveRows(QTransposeProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
    friend bool QTransposeProxyModel_SuperBeginMoveRows(QTransposeProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
    friend void QTransposeProxyModel_EndMoveRows(QTransposeProxyModel* self);
    friend void QTransposeProxyModel_SuperEndMoveRows(QTransposeProxyModel* self);
    friend void QTransposeProxyModel_BeginInsertColumns(QTransposeProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void QTransposeProxyModel_SuperBeginInsertColumns(QTransposeProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void QTransposeProxyModel_EndInsertColumns(QTransposeProxyModel* self);
    friend void QTransposeProxyModel_SuperEndInsertColumns(QTransposeProxyModel* self);
    friend void QTransposeProxyModel_BeginRemoveColumns(QTransposeProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void QTransposeProxyModel_SuperBeginRemoveColumns(QTransposeProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void QTransposeProxyModel_EndRemoveColumns(QTransposeProxyModel* self);
    friend void QTransposeProxyModel_SuperEndRemoveColumns(QTransposeProxyModel* self);
    friend bool QTransposeProxyModel_BeginMoveColumns(QTransposeProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
    friend bool QTransposeProxyModel_SuperBeginMoveColumns(QTransposeProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
    friend void QTransposeProxyModel_EndMoveColumns(QTransposeProxyModel* self);
    friend void QTransposeProxyModel_SuperEndMoveColumns(QTransposeProxyModel* self);
    friend void QTransposeProxyModel_BeginResetModel(QTransposeProxyModel* self);
    friend void QTransposeProxyModel_SuperBeginResetModel(QTransposeProxyModel* self);
    friend void QTransposeProxyModel_EndResetModel(QTransposeProxyModel* self);
    friend void QTransposeProxyModel_SuperEndResetModel(QTransposeProxyModel* self);
    friend void QTransposeProxyModel_ChangePersistentIndex(QTransposeProxyModel* self, const QModelIndex* from, const QModelIndex* to);
    friend void QTransposeProxyModel_SuperChangePersistentIndex(QTransposeProxyModel* self, const QModelIndex* from, const QModelIndex* to);
    friend void QTransposeProxyModel_ChangePersistentIndexList(QTransposeProxyModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
    friend void QTransposeProxyModel_SuperChangePersistentIndexList(QTransposeProxyModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
    friend libqt_list /* of QModelIndex* */ QTransposeProxyModel_PersistentIndexList(const QTransposeProxyModel* self);
    friend libqt_list /* of QModelIndex* */ QTransposeProxyModel_SuperPersistentIndexList(const QTransposeProxyModel* self);
    friend QObject* QTransposeProxyModel_Sender(const QTransposeProxyModel* self);
    friend QObject* QTransposeProxyModel_SuperSender(const QTransposeProxyModel* self);
    friend int QTransposeProxyModel_SenderSignalIndex(const QTransposeProxyModel* self);
    friend int QTransposeProxyModel_SuperSenderSignalIndex(const QTransposeProxyModel* self);
    friend int QTransposeProxyModel_Receivers(const QTransposeProxyModel* self, const char* signal);
    friend int QTransposeProxyModel_SuperReceivers(const QTransposeProxyModel* self, const char* signal);
    friend bool QTransposeProxyModel_IsSignalConnected(const QTransposeProxyModel* self, const QMetaMethod* signal);
    friend bool QTransposeProxyModel_SuperIsSignalConnected(const QTransposeProxyModel* self, const QMetaMethod* signal);
};

#endif
