#pragma once
#ifndef SRCC_LIBVIRTUALQFILESYSTEMMODEL_H
#define SRCC_LIBVIRTUALQFILESYSTEMMODEL_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QFileSystemModel so that we can call protected methods
class VirtualQFileSystemModel final : public QFileSystemModel {

  public:
    // Virtual class boolean flag
    bool isVirtualQFileSystemModel = true;

    // Virtual class public types (including callbacks)
    using QFileSystemModel_MetaObject_Callback = QMetaObject* (*)();
    using QFileSystemModel_Metacast_Callback = void* (*)(QFileSystemModel*, const char*);
    using QFileSystemModel_Metacall_Callback = int (*)(QFileSystemModel*, int, int, void**);
    using QFileSystemModel_Index_Callback = QModelIndex* (*)(const QFileSystemModel*, int, int, QModelIndex*);
    using QFileSystemModel_Parent_Callback = QModelIndex* (*)(const QFileSystemModel*, QModelIndex*);
    using QFileSystemModel_Sibling_Callback = QModelIndex* (*)(const QFileSystemModel*, int, int, QModelIndex*);
    using QFileSystemModel_HasChildren_Callback = bool (*)(const QFileSystemModel*, QModelIndex*);
    using QFileSystemModel_CanFetchMore_Callback = bool (*)(const QFileSystemModel*, QModelIndex*);
    using QFileSystemModel_FetchMore_Callback = void (*)(QFileSystemModel*, QModelIndex*);
    using QFileSystemModel_RowCount_Callback = int (*)(const QFileSystemModel*, QModelIndex*);
    using QFileSystemModel_ColumnCount_Callback = int (*)(const QFileSystemModel*, QModelIndex*);
    using QFileSystemModel_Data_Callback = QVariant* (*)(const QFileSystemModel*, QModelIndex*, int);
    using QFileSystemModel_SetData_Callback = bool (*)(QFileSystemModel*, QModelIndex*, QVariant*, int);
    using QFileSystemModel_HeaderData_Callback = QVariant* (*)(const QFileSystemModel*, int, int, int);
    using QFileSystemModel_Flags_Callback = int (*)(const QFileSystemModel*, QModelIndex*);
    using QFileSystemModel_Sort_Callback = void (*)(QFileSystemModel*, int, int);
    using QFileSystemModel_MimeTypes_Callback = const char** (*)();
    using QFileSystemModel_MimeData_Callback = QMimeData* (*)(const QFileSystemModel*, libqt_list /* of QModelIndex* */);
    using QFileSystemModel_DropMimeData_Callback = bool (*)(QFileSystemModel*, QMimeData*, int, int, int, QModelIndex*);
    using QFileSystemModel_SupportedDropActions_Callback = int (*)();
    using QFileSystemModel_RoleNames_Callback = libqt_map /* of int to libqt_string */ (*)();
    using QFileSystemModel_TimerEvent_Callback = void (*)(QFileSystemModel*, QTimerEvent*);
    using QFileSystemModel_Event_Callback = bool (*)(QFileSystemModel*, QEvent*);
    using QFileSystemModel_SetHeaderData_Callback = bool (*)(QFileSystemModel*, int, int, QVariant*, int);
    using QFileSystemModel_ItemData_Callback = libqt_map /* of int to QVariant* */ (*)(const QFileSystemModel*, QModelIndex*);
    using QFileSystemModel_SetItemData_Callback = bool (*)(QFileSystemModel*, QModelIndex*, libqt_map /* of int to QVariant* */);
    using QFileSystemModel_ClearItemData_Callback = bool (*)(QFileSystemModel*, QModelIndex*);
    using QFileSystemModel_CanDropMimeData_Callback = bool (*)(const QFileSystemModel*, QMimeData*, int, int, int, QModelIndex*);
    using QFileSystemModel_SupportedDragActions_Callback = int (*)();
    using QFileSystemModel_InsertRows_Callback = bool (*)(QFileSystemModel*, int, int, QModelIndex*);
    using QFileSystemModel_InsertColumns_Callback = bool (*)(QFileSystemModel*, int, int, QModelIndex*);
    using QFileSystemModel_RemoveRows_Callback = bool (*)(QFileSystemModel*, int, int, QModelIndex*);
    using QFileSystemModel_RemoveColumns_Callback = bool (*)(QFileSystemModel*, int, int, QModelIndex*);
    using QFileSystemModel_MoveRows_Callback = bool (*)(QFileSystemModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QFileSystemModel_MoveColumns_Callback = bool (*)(QFileSystemModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QFileSystemModel_Buddy_Callback = QModelIndex* (*)(const QFileSystemModel*, QModelIndex*);
    using QFileSystemModel_Match_Callback = libqt_list /* of QModelIndex* */ (*)(const QFileSystemModel*, QModelIndex*, int, QVariant*, int, int);
    using QFileSystemModel_Span_Callback = QSize* (*)(const QFileSystemModel*, QModelIndex*);
    using QFileSystemModel_MultiData_Callback = void (*)(const QFileSystemModel*, QModelIndex*, QModelRoleDataSpan*);
    using QFileSystemModel_Submit_Callback = bool (*)();
    using QFileSystemModel_Revert_Callback = void (*)();
    using QFileSystemModel_ResetInternalData_Callback = void (*)();
    using QFileSystemModel_EventFilter_Callback = bool (*)(QFileSystemModel*, QObject*, QEvent*);
    using QFileSystemModel_ChildEvent_Callback = void (*)(QFileSystemModel*, QChildEvent*);
    using QFileSystemModel_CustomEvent_Callback = void (*)(QFileSystemModel*, QEvent*);
    using QFileSystemModel_ConnectNotify_Callback = void (*)(QFileSystemModel*, QMetaMethod*);
    using QFileSystemModel_DisconnectNotify_Callback = void (*)(QFileSystemModel*, QMetaMethod*);
    using QFileSystemModel_CreateIndex_Callback = QModelIndex* (*)(const QFileSystemModel*, int, int);
    using QFileSystemModel_EncodeData_Callback = void (*)(const QFileSystemModel*, libqt_list /* of QModelIndex* */, QDataStream*);
    using QFileSystemModel_DecodeData_Callback = bool (*)(QFileSystemModel*, int, int, QModelIndex*, QDataStream*);
    using QFileSystemModel_BeginInsertRows_Callback = void (*)(QFileSystemModel*, QModelIndex*, int, int);
    using QFileSystemModel_EndInsertRows_Callback = void (*)();
    using QFileSystemModel_BeginRemoveRows_Callback = void (*)(QFileSystemModel*, QModelIndex*, int, int);
    using QFileSystemModel_EndRemoveRows_Callback = void (*)();
    using QFileSystemModel_BeginMoveRows_Callback = bool (*)(QFileSystemModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QFileSystemModel_EndMoveRows_Callback = void (*)();
    using QFileSystemModel_BeginInsertColumns_Callback = void (*)(QFileSystemModel*, QModelIndex*, int, int);
    using QFileSystemModel_EndInsertColumns_Callback = void (*)();
    using QFileSystemModel_BeginRemoveColumns_Callback = void (*)(QFileSystemModel*, QModelIndex*, int, int);
    using QFileSystemModel_EndRemoveColumns_Callback = void (*)();
    using QFileSystemModel_BeginMoveColumns_Callback = bool (*)(QFileSystemModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QFileSystemModel_EndMoveColumns_Callback = void (*)();
    using QFileSystemModel_BeginResetModel_Callback = void (*)();
    using QFileSystemModel_EndResetModel_Callback = void (*)();
    using QFileSystemModel_ChangePersistentIndex_Callback = void (*)(QFileSystemModel*, QModelIndex*, QModelIndex*);
    using QFileSystemModel_ChangePersistentIndexList_Callback = void (*)(QFileSystemModel*, libqt_list /* of QModelIndex* */, libqt_list /* of QModelIndex* */);
    using QFileSystemModel_PersistentIndexList_Callback = libqt_list /* of QModelIndex* */ (*)();
    using QFileSystemModel_Sender_Callback = QObject* (*)();
    using QFileSystemModel_SenderSignalIndex_Callback = int (*)();
    using QFileSystemModel_Receivers_Callback = int (*)(const QFileSystemModel*, const char*);
    using QFileSystemModel_IsSignalConnected_Callback = bool (*)(const QFileSystemModel*, QMetaMethod*);

  protected:
    // Instance callback storage
    QFileSystemModel_MetaObject_Callback qfilesystemmodel_metaobject_callback = nullptr;
    QFileSystemModel_Metacast_Callback qfilesystemmodel_metacast_callback = nullptr;
    QFileSystemModel_Metacall_Callback qfilesystemmodel_metacall_callback = nullptr;
    QFileSystemModel_Index_Callback qfilesystemmodel_index_callback = nullptr;
    QFileSystemModel_Parent_Callback qfilesystemmodel_parent_callback = nullptr;
    QFileSystemModel_Sibling_Callback qfilesystemmodel_sibling_callback = nullptr;
    QFileSystemModel_HasChildren_Callback qfilesystemmodel_haschildren_callback = nullptr;
    QFileSystemModel_CanFetchMore_Callback qfilesystemmodel_canfetchmore_callback = nullptr;
    QFileSystemModel_FetchMore_Callback qfilesystemmodel_fetchmore_callback = nullptr;
    QFileSystemModel_RowCount_Callback qfilesystemmodel_rowcount_callback = nullptr;
    QFileSystemModel_ColumnCount_Callback qfilesystemmodel_columncount_callback = nullptr;
    QFileSystemModel_Data_Callback qfilesystemmodel_data_callback = nullptr;
    QFileSystemModel_SetData_Callback qfilesystemmodel_setdata_callback = nullptr;
    QFileSystemModel_HeaderData_Callback qfilesystemmodel_headerdata_callback = nullptr;
    QFileSystemModel_Flags_Callback qfilesystemmodel_flags_callback = nullptr;
    QFileSystemModel_Sort_Callback qfilesystemmodel_sort_callback = nullptr;
    QFileSystemModel_MimeTypes_Callback qfilesystemmodel_mimetypes_callback = nullptr;
    QFileSystemModel_MimeData_Callback qfilesystemmodel_mimedata_callback = nullptr;
    QFileSystemModel_DropMimeData_Callback qfilesystemmodel_dropmimedata_callback = nullptr;
    QFileSystemModel_SupportedDropActions_Callback qfilesystemmodel_supporteddropactions_callback = nullptr;
    QFileSystemModel_RoleNames_Callback qfilesystemmodel_rolenames_callback = nullptr;
    QFileSystemModel_TimerEvent_Callback qfilesystemmodel_timerevent_callback = nullptr;
    QFileSystemModel_Event_Callback qfilesystemmodel_event_callback = nullptr;
    QFileSystemModel_SetHeaderData_Callback qfilesystemmodel_setheaderdata_callback = nullptr;
    QFileSystemModel_ItemData_Callback qfilesystemmodel_itemdata_callback = nullptr;
    QFileSystemModel_SetItemData_Callback qfilesystemmodel_setitemdata_callback = nullptr;
    QFileSystemModel_ClearItemData_Callback qfilesystemmodel_clearitemdata_callback = nullptr;
    QFileSystemModel_CanDropMimeData_Callback qfilesystemmodel_candropmimedata_callback = nullptr;
    QFileSystemModel_SupportedDragActions_Callback qfilesystemmodel_supporteddragactions_callback = nullptr;
    QFileSystemModel_InsertRows_Callback qfilesystemmodel_insertrows_callback = nullptr;
    QFileSystemModel_InsertColumns_Callback qfilesystemmodel_insertcolumns_callback = nullptr;
    QFileSystemModel_RemoveRows_Callback qfilesystemmodel_removerows_callback = nullptr;
    QFileSystemModel_RemoveColumns_Callback qfilesystemmodel_removecolumns_callback = nullptr;
    QFileSystemModel_MoveRows_Callback qfilesystemmodel_moverows_callback = nullptr;
    QFileSystemModel_MoveColumns_Callback qfilesystemmodel_movecolumns_callback = nullptr;
    QFileSystemModel_Buddy_Callback qfilesystemmodel_buddy_callback = nullptr;
    QFileSystemModel_Match_Callback qfilesystemmodel_match_callback = nullptr;
    QFileSystemModel_Span_Callback qfilesystemmodel_span_callback = nullptr;
    QFileSystemModel_MultiData_Callback qfilesystemmodel_multidata_callback = nullptr;
    QFileSystemModel_Submit_Callback qfilesystemmodel_submit_callback = nullptr;
    QFileSystemModel_Revert_Callback qfilesystemmodel_revert_callback = nullptr;
    QFileSystemModel_ResetInternalData_Callback qfilesystemmodel_resetinternaldata_callback = nullptr;
    QFileSystemModel_EventFilter_Callback qfilesystemmodel_eventfilter_callback = nullptr;
    QFileSystemModel_ChildEvent_Callback qfilesystemmodel_childevent_callback = nullptr;
    QFileSystemModel_CustomEvent_Callback qfilesystemmodel_customevent_callback = nullptr;
    QFileSystemModel_ConnectNotify_Callback qfilesystemmodel_connectnotify_callback = nullptr;
    QFileSystemModel_DisconnectNotify_Callback qfilesystemmodel_disconnectnotify_callback = nullptr;
    QFileSystemModel_CreateIndex_Callback qfilesystemmodel_createindex_callback = nullptr;
    QFileSystemModel_EncodeData_Callback qfilesystemmodel_encodedata_callback = nullptr;
    QFileSystemModel_DecodeData_Callback qfilesystemmodel_decodedata_callback = nullptr;
    QFileSystemModel_BeginInsertRows_Callback qfilesystemmodel_begininsertrows_callback = nullptr;
    QFileSystemModel_EndInsertRows_Callback qfilesystemmodel_endinsertrows_callback = nullptr;
    QFileSystemModel_BeginRemoveRows_Callback qfilesystemmodel_beginremoverows_callback = nullptr;
    QFileSystemModel_EndRemoveRows_Callback qfilesystemmodel_endremoverows_callback = nullptr;
    QFileSystemModel_BeginMoveRows_Callback qfilesystemmodel_beginmoverows_callback = nullptr;
    QFileSystemModel_EndMoveRows_Callback qfilesystemmodel_endmoverows_callback = nullptr;
    QFileSystemModel_BeginInsertColumns_Callback qfilesystemmodel_begininsertcolumns_callback = nullptr;
    QFileSystemModel_EndInsertColumns_Callback qfilesystemmodel_endinsertcolumns_callback = nullptr;
    QFileSystemModel_BeginRemoveColumns_Callback qfilesystemmodel_beginremovecolumns_callback = nullptr;
    QFileSystemModel_EndRemoveColumns_Callback qfilesystemmodel_endremovecolumns_callback = nullptr;
    QFileSystemModel_BeginMoveColumns_Callback qfilesystemmodel_beginmovecolumns_callback = nullptr;
    QFileSystemModel_EndMoveColumns_Callback qfilesystemmodel_endmovecolumns_callback = nullptr;
    QFileSystemModel_BeginResetModel_Callback qfilesystemmodel_beginresetmodel_callback = nullptr;
    QFileSystemModel_EndResetModel_Callback qfilesystemmodel_endresetmodel_callback = nullptr;
    QFileSystemModel_ChangePersistentIndex_Callback qfilesystemmodel_changepersistentindex_callback = nullptr;
    QFileSystemModel_ChangePersistentIndexList_Callback qfilesystemmodel_changepersistentindexlist_callback = nullptr;
    QFileSystemModel_PersistentIndexList_Callback qfilesystemmodel_persistentindexlist_callback = nullptr;
    QFileSystemModel_Sender_Callback qfilesystemmodel_sender_callback = nullptr;
    QFileSystemModel_SenderSignalIndex_Callback qfilesystemmodel_sendersignalindex_callback = nullptr;
    QFileSystemModel_Receivers_Callback qfilesystemmodel_receivers_callback = nullptr;
    QFileSystemModel_IsSignalConnected_Callback qfilesystemmodel_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qfilesystemmodel_metaobject_isbase = false;
    mutable bool qfilesystemmodel_metacast_isbase = false;
    mutable bool qfilesystemmodel_metacall_isbase = false;
    mutable bool qfilesystemmodel_index_isbase = false;
    mutable bool qfilesystemmodel_parent_isbase = false;
    mutable bool qfilesystemmodel_sibling_isbase = false;
    mutable bool qfilesystemmodel_haschildren_isbase = false;
    mutable bool qfilesystemmodel_canfetchmore_isbase = false;
    mutable bool qfilesystemmodel_fetchmore_isbase = false;
    mutable bool qfilesystemmodel_rowcount_isbase = false;
    mutable bool qfilesystemmodel_columncount_isbase = false;
    mutable bool qfilesystemmodel_data_isbase = false;
    mutable bool qfilesystemmodel_setdata_isbase = false;
    mutable bool qfilesystemmodel_headerdata_isbase = false;
    mutable bool qfilesystemmodel_flags_isbase = false;
    mutable bool qfilesystemmodel_sort_isbase = false;
    mutable bool qfilesystemmodel_mimetypes_isbase = false;
    mutable bool qfilesystemmodel_mimedata_isbase = false;
    mutable bool qfilesystemmodel_dropmimedata_isbase = false;
    mutable bool qfilesystemmodel_supporteddropactions_isbase = false;
    mutable bool qfilesystemmodel_rolenames_isbase = false;
    mutable bool qfilesystemmodel_timerevent_isbase = false;
    mutable bool qfilesystemmodel_event_isbase = false;
    mutable bool qfilesystemmodel_setheaderdata_isbase = false;
    mutable bool qfilesystemmodel_itemdata_isbase = false;
    mutable bool qfilesystemmodel_setitemdata_isbase = false;
    mutable bool qfilesystemmodel_clearitemdata_isbase = false;
    mutable bool qfilesystemmodel_candropmimedata_isbase = false;
    mutable bool qfilesystemmodel_supporteddragactions_isbase = false;
    mutable bool qfilesystemmodel_insertrows_isbase = false;
    mutable bool qfilesystemmodel_insertcolumns_isbase = false;
    mutable bool qfilesystemmodel_removerows_isbase = false;
    mutable bool qfilesystemmodel_removecolumns_isbase = false;
    mutable bool qfilesystemmodel_moverows_isbase = false;
    mutable bool qfilesystemmodel_movecolumns_isbase = false;
    mutable bool qfilesystemmodel_buddy_isbase = false;
    mutable bool qfilesystemmodel_match_isbase = false;
    mutable bool qfilesystemmodel_span_isbase = false;
    mutable bool qfilesystemmodel_multidata_isbase = false;
    mutable bool qfilesystemmodel_submit_isbase = false;
    mutable bool qfilesystemmodel_revert_isbase = false;
    mutable bool qfilesystemmodel_resetinternaldata_isbase = false;
    mutable bool qfilesystemmodel_eventfilter_isbase = false;
    mutable bool qfilesystemmodel_childevent_isbase = false;
    mutable bool qfilesystemmodel_customevent_isbase = false;
    mutable bool qfilesystemmodel_connectnotify_isbase = false;
    mutable bool qfilesystemmodel_disconnectnotify_isbase = false;
    mutable bool qfilesystemmodel_createindex_isbase = false;
    mutable bool qfilesystemmodel_encodedata_isbase = false;
    mutable bool qfilesystemmodel_decodedata_isbase = false;
    mutable bool qfilesystemmodel_begininsertrows_isbase = false;
    mutable bool qfilesystemmodel_endinsertrows_isbase = false;
    mutable bool qfilesystemmodel_beginremoverows_isbase = false;
    mutable bool qfilesystemmodel_endremoverows_isbase = false;
    mutable bool qfilesystemmodel_beginmoverows_isbase = false;
    mutable bool qfilesystemmodel_endmoverows_isbase = false;
    mutable bool qfilesystemmodel_begininsertcolumns_isbase = false;
    mutable bool qfilesystemmodel_endinsertcolumns_isbase = false;
    mutable bool qfilesystemmodel_beginremovecolumns_isbase = false;
    mutable bool qfilesystemmodel_endremovecolumns_isbase = false;
    mutable bool qfilesystemmodel_beginmovecolumns_isbase = false;
    mutable bool qfilesystemmodel_endmovecolumns_isbase = false;
    mutable bool qfilesystemmodel_beginresetmodel_isbase = false;
    mutable bool qfilesystemmodel_endresetmodel_isbase = false;
    mutable bool qfilesystemmodel_changepersistentindex_isbase = false;
    mutable bool qfilesystemmodel_changepersistentindexlist_isbase = false;
    mutable bool qfilesystemmodel_persistentindexlist_isbase = false;
    mutable bool qfilesystemmodel_sender_isbase = false;
    mutable bool qfilesystemmodel_sendersignalindex_isbase = false;
    mutable bool qfilesystemmodel_receivers_isbase = false;
    mutable bool qfilesystemmodel_issignalconnected_isbase = false;

  public:
    VirtualQFileSystemModel() : QFileSystemModel() {};
    VirtualQFileSystemModel(QObject* parent) : QFileSystemModel(parent) {};

    // Callback setters
    inline void setQFileSystemModel_MetaObject_Callback(QFileSystemModel_MetaObject_Callback cb) { qfilesystemmodel_metaobject_callback = cb; }
    inline void setQFileSystemModel_Metacast_Callback(QFileSystemModel_Metacast_Callback cb) { qfilesystemmodel_metacast_callback = cb; }
    inline void setQFileSystemModel_Metacall_Callback(QFileSystemModel_Metacall_Callback cb) { qfilesystemmodel_metacall_callback = cb; }
    inline void setQFileSystemModel_Index_Callback(QFileSystemModel_Index_Callback cb) { qfilesystemmodel_index_callback = cb; }
    inline void setQFileSystemModel_Parent_Callback(QFileSystemModel_Parent_Callback cb) { qfilesystemmodel_parent_callback = cb; }
    inline void setQFileSystemModel_Sibling_Callback(QFileSystemModel_Sibling_Callback cb) { qfilesystemmodel_sibling_callback = cb; }
    inline void setQFileSystemModel_HasChildren_Callback(QFileSystemModel_HasChildren_Callback cb) { qfilesystemmodel_haschildren_callback = cb; }
    inline void setQFileSystemModel_CanFetchMore_Callback(QFileSystemModel_CanFetchMore_Callback cb) { qfilesystemmodel_canfetchmore_callback = cb; }
    inline void setQFileSystemModel_FetchMore_Callback(QFileSystemModel_FetchMore_Callback cb) { qfilesystemmodel_fetchmore_callback = cb; }
    inline void setQFileSystemModel_RowCount_Callback(QFileSystemModel_RowCount_Callback cb) { qfilesystemmodel_rowcount_callback = cb; }
    inline void setQFileSystemModel_ColumnCount_Callback(QFileSystemModel_ColumnCount_Callback cb) { qfilesystemmodel_columncount_callback = cb; }
    inline void setQFileSystemModel_Data_Callback(QFileSystemModel_Data_Callback cb) { qfilesystemmodel_data_callback = cb; }
    inline void setQFileSystemModel_SetData_Callback(QFileSystemModel_SetData_Callback cb) { qfilesystemmodel_setdata_callback = cb; }
    inline void setQFileSystemModel_HeaderData_Callback(QFileSystemModel_HeaderData_Callback cb) { qfilesystemmodel_headerdata_callback = cb; }
    inline void setQFileSystemModel_Flags_Callback(QFileSystemModel_Flags_Callback cb) { qfilesystemmodel_flags_callback = cb; }
    inline void setQFileSystemModel_Sort_Callback(QFileSystemModel_Sort_Callback cb) { qfilesystemmodel_sort_callback = cb; }
    inline void setQFileSystemModel_MimeTypes_Callback(QFileSystemModel_MimeTypes_Callback cb) { qfilesystemmodel_mimetypes_callback = cb; }
    inline void setQFileSystemModel_MimeData_Callback(QFileSystemModel_MimeData_Callback cb) { qfilesystemmodel_mimedata_callback = cb; }
    inline void setQFileSystemModel_DropMimeData_Callback(QFileSystemModel_DropMimeData_Callback cb) { qfilesystemmodel_dropmimedata_callback = cb; }
    inline void setQFileSystemModel_SupportedDropActions_Callback(QFileSystemModel_SupportedDropActions_Callback cb) { qfilesystemmodel_supporteddropactions_callback = cb; }
    inline void setQFileSystemModel_RoleNames_Callback(QFileSystemModel_RoleNames_Callback cb) { qfilesystemmodel_rolenames_callback = cb; }
    inline void setQFileSystemModel_TimerEvent_Callback(QFileSystemModel_TimerEvent_Callback cb) { qfilesystemmodel_timerevent_callback = cb; }
    inline void setQFileSystemModel_Event_Callback(QFileSystemModel_Event_Callback cb) { qfilesystemmodel_event_callback = cb; }
    inline void setQFileSystemModel_SetHeaderData_Callback(QFileSystemModel_SetHeaderData_Callback cb) { qfilesystemmodel_setheaderdata_callback = cb; }
    inline void setQFileSystemModel_ItemData_Callback(QFileSystemModel_ItemData_Callback cb) { qfilesystemmodel_itemdata_callback = cb; }
    inline void setQFileSystemModel_SetItemData_Callback(QFileSystemModel_SetItemData_Callback cb) { qfilesystemmodel_setitemdata_callback = cb; }
    inline void setQFileSystemModel_ClearItemData_Callback(QFileSystemModel_ClearItemData_Callback cb) { qfilesystemmodel_clearitemdata_callback = cb; }
    inline void setQFileSystemModel_CanDropMimeData_Callback(QFileSystemModel_CanDropMimeData_Callback cb) { qfilesystemmodel_candropmimedata_callback = cb; }
    inline void setQFileSystemModel_SupportedDragActions_Callback(QFileSystemModel_SupportedDragActions_Callback cb) { qfilesystemmodel_supporteddragactions_callback = cb; }
    inline void setQFileSystemModel_InsertRows_Callback(QFileSystemModel_InsertRows_Callback cb) { qfilesystemmodel_insertrows_callback = cb; }
    inline void setQFileSystemModel_InsertColumns_Callback(QFileSystemModel_InsertColumns_Callback cb) { qfilesystemmodel_insertcolumns_callback = cb; }
    inline void setQFileSystemModel_RemoveRows_Callback(QFileSystemModel_RemoveRows_Callback cb) { qfilesystemmodel_removerows_callback = cb; }
    inline void setQFileSystemModel_RemoveColumns_Callback(QFileSystemModel_RemoveColumns_Callback cb) { qfilesystemmodel_removecolumns_callback = cb; }
    inline void setQFileSystemModel_MoveRows_Callback(QFileSystemModel_MoveRows_Callback cb) { qfilesystemmodel_moverows_callback = cb; }
    inline void setQFileSystemModel_MoveColumns_Callback(QFileSystemModel_MoveColumns_Callback cb) { qfilesystemmodel_movecolumns_callback = cb; }
    inline void setQFileSystemModel_Buddy_Callback(QFileSystemModel_Buddy_Callback cb) { qfilesystemmodel_buddy_callback = cb; }
    inline void setQFileSystemModel_Match_Callback(QFileSystemModel_Match_Callback cb) { qfilesystemmodel_match_callback = cb; }
    inline void setQFileSystemModel_Span_Callback(QFileSystemModel_Span_Callback cb) { qfilesystemmodel_span_callback = cb; }
    inline void setQFileSystemModel_MultiData_Callback(QFileSystemModel_MultiData_Callback cb) { qfilesystemmodel_multidata_callback = cb; }
    inline void setQFileSystemModel_Submit_Callback(QFileSystemModel_Submit_Callback cb) { qfilesystemmodel_submit_callback = cb; }
    inline void setQFileSystemModel_Revert_Callback(QFileSystemModel_Revert_Callback cb) { qfilesystemmodel_revert_callback = cb; }
    inline void setQFileSystemModel_ResetInternalData_Callback(QFileSystemModel_ResetInternalData_Callback cb) { qfilesystemmodel_resetinternaldata_callback = cb; }
    inline void setQFileSystemModel_EventFilter_Callback(QFileSystemModel_EventFilter_Callback cb) { qfilesystemmodel_eventfilter_callback = cb; }
    inline void setQFileSystemModel_ChildEvent_Callback(QFileSystemModel_ChildEvent_Callback cb) { qfilesystemmodel_childevent_callback = cb; }
    inline void setQFileSystemModel_CustomEvent_Callback(QFileSystemModel_CustomEvent_Callback cb) { qfilesystemmodel_customevent_callback = cb; }
    inline void setQFileSystemModel_ConnectNotify_Callback(QFileSystemModel_ConnectNotify_Callback cb) { qfilesystemmodel_connectnotify_callback = cb; }
    inline void setQFileSystemModel_DisconnectNotify_Callback(QFileSystemModel_DisconnectNotify_Callback cb) { qfilesystemmodel_disconnectnotify_callback = cb; }
    inline void setQFileSystemModel_CreateIndex_Callback(QFileSystemModel_CreateIndex_Callback cb) { qfilesystemmodel_createindex_callback = cb; }
    inline void setQFileSystemModel_EncodeData_Callback(QFileSystemModel_EncodeData_Callback cb) { qfilesystemmodel_encodedata_callback = cb; }
    inline void setQFileSystemModel_DecodeData_Callback(QFileSystemModel_DecodeData_Callback cb) { qfilesystemmodel_decodedata_callback = cb; }
    inline void setQFileSystemModel_BeginInsertRows_Callback(QFileSystemModel_BeginInsertRows_Callback cb) { qfilesystemmodel_begininsertrows_callback = cb; }
    inline void setQFileSystemModel_EndInsertRows_Callback(QFileSystemModel_EndInsertRows_Callback cb) { qfilesystemmodel_endinsertrows_callback = cb; }
    inline void setQFileSystemModel_BeginRemoveRows_Callback(QFileSystemModel_BeginRemoveRows_Callback cb) { qfilesystemmodel_beginremoverows_callback = cb; }
    inline void setQFileSystemModel_EndRemoveRows_Callback(QFileSystemModel_EndRemoveRows_Callback cb) { qfilesystemmodel_endremoverows_callback = cb; }
    inline void setQFileSystemModel_BeginMoveRows_Callback(QFileSystemModel_BeginMoveRows_Callback cb) { qfilesystemmodel_beginmoverows_callback = cb; }
    inline void setQFileSystemModel_EndMoveRows_Callback(QFileSystemModel_EndMoveRows_Callback cb) { qfilesystemmodel_endmoverows_callback = cb; }
    inline void setQFileSystemModel_BeginInsertColumns_Callback(QFileSystemModel_BeginInsertColumns_Callback cb) { qfilesystemmodel_begininsertcolumns_callback = cb; }
    inline void setQFileSystemModel_EndInsertColumns_Callback(QFileSystemModel_EndInsertColumns_Callback cb) { qfilesystemmodel_endinsertcolumns_callback = cb; }
    inline void setQFileSystemModel_BeginRemoveColumns_Callback(QFileSystemModel_BeginRemoveColumns_Callback cb) { qfilesystemmodel_beginremovecolumns_callback = cb; }
    inline void setQFileSystemModel_EndRemoveColumns_Callback(QFileSystemModel_EndRemoveColumns_Callback cb) { qfilesystemmodel_endremovecolumns_callback = cb; }
    inline void setQFileSystemModel_BeginMoveColumns_Callback(QFileSystemModel_BeginMoveColumns_Callback cb) { qfilesystemmodel_beginmovecolumns_callback = cb; }
    inline void setQFileSystemModel_EndMoveColumns_Callback(QFileSystemModel_EndMoveColumns_Callback cb) { qfilesystemmodel_endmovecolumns_callback = cb; }
    inline void setQFileSystemModel_BeginResetModel_Callback(QFileSystemModel_BeginResetModel_Callback cb) { qfilesystemmodel_beginresetmodel_callback = cb; }
    inline void setQFileSystemModel_EndResetModel_Callback(QFileSystemModel_EndResetModel_Callback cb) { qfilesystemmodel_endresetmodel_callback = cb; }
    inline void setQFileSystemModel_ChangePersistentIndex_Callback(QFileSystemModel_ChangePersistentIndex_Callback cb) { qfilesystemmodel_changepersistentindex_callback = cb; }
    inline void setQFileSystemModel_ChangePersistentIndexList_Callback(QFileSystemModel_ChangePersistentIndexList_Callback cb) { qfilesystemmodel_changepersistentindexlist_callback = cb; }
    inline void setQFileSystemModel_PersistentIndexList_Callback(QFileSystemModel_PersistentIndexList_Callback cb) { qfilesystemmodel_persistentindexlist_callback = cb; }
    inline void setQFileSystemModel_Sender_Callback(QFileSystemModel_Sender_Callback cb) { qfilesystemmodel_sender_callback = cb; }
    inline void setQFileSystemModel_SenderSignalIndex_Callback(QFileSystemModel_SenderSignalIndex_Callback cb) { qfilesystemmodel_sendersignalindex_callback = cb; }
    inline void setQFileSystemModel_Receivers_Callback(QFileSystemModel_Receivers_Callback cb) { qfilesystemmodel_receivers_callback = cb; }
    inline void setQFileSystemModel_IsSignalConnected_Callback(QFileSystemModel_IsSignalConnected_Callback cb) { qfilesystemmodel_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQFileSystemModel_MetaObject_IsBase(bool value) const { qfilesystemmodel_metaobject_isbase = value; }
    inline void setQFileSystemModel_Metacast_IsBase(bool value) const { qfilesystemmodel_metacast_isbase = value; }
    inline void setQFileSystemModel_Metacall_IsBase(bool value) const { qfilesystemmodel_metacall_isbase = value; }
    inline void setQFileSystemModel_Index_IsBase(bool value) const { qfilesystemmodel_index_isbase = value; }
    inline void setQFileSystemModel_Parent_IsBase(bool value) const { qfilesystemmodel_parent_isbase = value; }
    inline void setQFileSystemModel_Sibling_IsBase(bool value) const { qfilesystemmodel_sibling_isbase = value; }
    inline void setQFileSystemModel_HasChildren_IsBase(bool value) const { qfilesystemmodel_haschildren_isbase = value; }
    inline void setQFileSystemModel_CanFetchMore_IsBase(bool value) const { qfilesystemmodel_canfetchmore_isbase = value; }
    inline void setQFileSystemModel_FetchMore_IsBase(bool value) const { qfilesystemmodel_fetchmore_isbase = value; }
    inline void setQFileSystemModel_RowCount_IsBase(bool value) const { qfilesystemmodel_rowcount_isbase = value; }
    inline void setQFileSystemModel_ColumnCount_IsBase(bool value) const { qfilesystemmodel_columncount_isbase = value; }
    inline void setQFileSystemModel_Data_IsBase(bool value) const { qfilesystemmodel_data_isbase = value; }
    inline void setQFileSystemModel_SetData_IsBase(bool value) const { qfilesystemmodel_setdata_isbase = value; }
    inline void setQFileSystemModel_HeaderData_IsBase(bool value) const { qfilesystemmodel_headerdata_isbase = value; }
    inline void setQFileSystemModel_Flags_IsBase(bool value) const { qfilesystemmodel_flags_isbase = value; }
    inline void setQFileSystemModel_Sort_IsBase(bool value) const { qfilesystemmodel_sort_isbase = value; }
    inline void setQFileSystemModel_MimeTypes_IsBase(bool value) const { qfilesystemmodel_mimetypes_isbase = value; }
    inline void setQFileSystemModel_MimeData_IsBase(bool value) const { qfilesystemmodel_mimedata_isbase = value; }
    inline void setQFileSystemModel_DropMimeData_IsBase(bool value) const { qfilesystemmodel_dropmimedata_isbase = value; }
    inline void setQFileSystemModel_SupportedDropActions_IsBase(bool value) const { qfilesystemmodel_supporteddropactions_isbase = value; }
    inline void setQFileSystemModel_RoleNames_IsBase(bool value) const { qfilesystemmodel_rolenames_isbase = value; }
    inline void setQFileSystemModel_TimerEvent_IsBase(bool value) const { qfilesystemmodel_timerevent_isbase = value; }
    inline void setQFileSystemModel_Event_IsBase(bool value) const { qfilesystemmodel_event_isbase = value; }
    inline void setQFileSystemModel_SetHeaderData_IsBase(bool value) const { qfilesystemmodel_setheaderdata_isbase = value; }
    inline void setQFileSystemModel_ItemData_IsBase(bool value) const { qfilesystemmodel_itemdata_isbase = value; }
    inline void setQFileSystemModel_SetItemData_IsBase(bool value) const { qfilesystemmodel_setitemdata_isbase = value; }
    inline void setQFileSystemModel_ClearItemData_IsBase(bool value) const { qfilesystemmodel_clearitemdata_isbase = value; }
    inline void setQFileSystemModel_CanDropMimeData_IsBase(bool value) const { qfilesystemmodel_candropmimedata_isbase = value; }
    inline void setQFileSystemModel_SupportedDragActions_IsBase(bool value) const { qfilesystemmodel_supporteddragactions_isbase = value; }
    inline void setQFileSystemModel_InsertRows_IsBase(bool value) const { qfilesystemmodel_insertrows_isbase = value; }
    inline void setQFileSystemModel_InsertColumns_IsBase(bool value) const { qfilesystemmodel_insertcolumns_isbase = value; }
    inline void setQFileSystemModel_RemoveRows_IsBase(bool value) const { qfilesystemmodel_removerows_isbase = value; }
    inline void setQFileSystemModel_RemoveColumns_IsBase(bool value) const { qfilesystemmodel_removecolumns_isbase = value; }
    inline void setQFileSystemModel_MoveRows_IsBase(bool value) const { qfilesystemmodel_moverows_isbase = value; }
    inline void setQFileSystemModel_MoveColumns_IsBase(bool value) const { qfilesystemmodel_movecolumns_isbase = value; }
    inline void setQFileSystemModel_Buddy_IsBase(bool value) const { qfilesystemmodel_buddy_isbase = value; }
    inline void setQFileSystemModel_Match_IsBase(bool value) const { qfilesystemmodel_match_isbase = value; }
    inline void setQFileSystemModel_Span_IsBase(bool value) const { qfilesystemmodel_span_isbase = value; }
    inline void setQFileSystemModel_MultiData_IsBase(bool value) const { qfilesystemmodel_multidata_isbase = value; }
    inline void setQFileSystemModel_Submit_IsBase(bool value) const { qfilesystemmodel_submit_isbase = value; }
    inline void setQFileSystemModel_Revert_IsBase(bool value) const { qfilesystemmodel_revert_isbase = value; }
    inline void setQFileSystemModel_ResetInternalData_IsBase(bool value) const { qfilesystemmodel_resetinternaldata_isbase = value; }
    inline void setQFileSystemModel_EventFilter_IsBase(bool value) const { qfilesystemmodel_eventfilter_isbase = value; }
    inline void setQFileSystemModel_ChildEvent_IsBase(bool value) const { qfilesystemmodel_childevent_isbase = value; }
    inline void setQFileSystemModel_CustomEvent_IsBase(bool value) const { qfilesystemmodel_customevent_isbase = value; }
    inline void setQFileSystemModel_ConnectNotify_IsBase(bool value) const { qfilesystemmodel_connectnotify_isbase = value; }
    inline void setQFileSystemModel_DisconnectNotify_IsBase(bool value) const { qfilesystemmodel_disconnectnotify_isbase = value; }
    inline void setQFileSystemModel_CreateIndex_IsBase(bool value) const { qfilesystemmodel_createindex_isbase = value; }
    inline void setQFileSystemModel_EncodeData_IsBase(bool value) const { qfilesystemmodel_encodedata_isbase = value; }
    inline void setQFileSystemModel_DecodeData_IsBase(bool value) const { qfilesystemmodel_decodedata_isbase = value; }
    inline void setQFileSystemModel_BeginInsertRows_IsBase(bool value) const { qfilesystemmodel_begininsertrows_isbase = value; }
    inline void setQFileSystemModel_EndInsertRows_IsBase(bool value) const { qfilesystemmodel_endinsertrows_isbase = value; }
    inline void setQFileSystemModel_BeginRemoveRows_IsBase(bool value) const { qfilesystemmodel_beginremoverows_isbase = value; }
    inline void setQFileSystemModel_EndRemoveRows_IsBase(bool value) const { qfilesystemmodel_endremoverows_isbase = value; }
    inline void setQFileSystemModel_BeginMoveRows_IsBase(bool value) const { qfilesystemmodel_beginmoverows_isbase = value; }
    inline void setQFileSystemModel_EndMoveRows_IsBase(bool value) const { qfilesystemmodel_endmoverows_isbase = value; }
    inline void setQFileSystemModel_BeginInsertColumns_IsBase(bool value) const { qfilesystemmodel_begininsertcolumns_isbase = value; }
    inline void setQFileSystemModel_EndInsertColumns_IsBase(bool value) const { qfilesystemmodel_endinsertcolumns_isbase = value; }
    inline void setQFileSystemModel_BeginRemoveColumns_IsBase(bool value) const { qfilesystemmodel_beginremovecolumns_isbase = value; }
    inline void setQFileSystemModel_EndRemoveColumns_IsBase(bool value) const { qfilesystemmodel_endremovecolumns_isbase = value; }
    inline void setQFileSystemModel_BeginMoveColumns_IsBase(bool value) const { qfilesystemmodel_beginmovecolumns_isbase = value; }
    inline void setQFileSystemModel_EndMoveColumns_IsBase(bool value) const { qfilesystemmodel_endmovecolumns_isbase = value; }
    inline void setQFileSystemModel_BeginResetModel_IsBase(bool value) const { qfilesystemmodel_beginresetmodel_isbase = value; }
    inline void setQFileSystemModel_EndResetModel_IsBase(bool value) const { qfilesystemmodel_endresetmodel_isbase = value; }
    inline void setQFileSystemModel_ChangePersistentIndex_IsBase(bool value) const { qfilesystemmodel_changepersistentindex_isbase = value; }
    inline void setQFileSystemModel_ChangePersistentIndexList_IsBase(bool value) const { qfilesystemmodel_changepersistentindexlist_isbase = value; }
    inline void setQFileSystemModel_PersistentIndexList_IsBase(bool value) const { qfilesystemmodel_persistentindexlist_isbase = value; }
    inline void setQFileSystemModel_Sender_IsBase(bool value) const { qfilesystemmodel_sender_isbase = value; }
    inline void setQFileSystemModel_SenderSignalIndex_IsBase(bool value) const { qfilesystemmodel_sendersignalindex_isbase = value; }
    inline void setQFileSystemModel_Receivers_IsBase(bool value) const { qfilesystemmodel_receivers_isbase = value; }
    inline void setQFileSystemModel_IsSignalConnected_IsBase(bool value) const { qfilesystemmodel_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qfilesystemmodel_metaobject_isbase) {
            qfilesystemmodel_metaobject_isbase = false;
            return QFileSystemModel::metaObject();
        }
        auto metaobject_cb = qfilesystemmodel_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QFileSystemModel::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qfilesystemmodel_metacast_isbase) {
            qfilesystemmodel_metacast_isbase = false;
            return QFileSystemModel::qt_metacast(param1);
        }
        auto metacast_cb = qfilesystemmodel_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QFileSystemModel::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qfilesystemmodel_metacall_isbase) {
            qfilesystemmodel_metacall_isbase = false;
            return QFileSystemModel::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qfilesystemmodel_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QFileSystemModel::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
        if (qfilesystemmodel_index_isbase) {
            qfilesystemmodel_index_isbase = false;
            return QFileSystemModel::index(row, column, parent);
        }
        auto index_cb = qfilesystemmodel_index_callback;
        if (index_cb) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            QModelIndex* callback_ret = index_cb(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        }
        return QFileSystemModel::index(row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex parent(const QModelIndex& child) const override {
        if (qfilesystemmodel_parent_isbase) {
            qfilesystemmodel_parent_isbase = false;
            return QFileSystemModel::parent(child);
        }
        auto parent_cb = qfilesystemmodel_parent_callback;
        if (parent_cb) {
            const QModelIndex& child_ret = child;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&child_ret);

            QModelIndex* callback_ret = parent_cb(this, cbval1);
            return *callback_ret;
        }
        return QFileSystemModel::parent(child);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
        if (qfilesystemmodel_sibling_isbase) {
            qfilesystemmodel_sibling_isbase = false;
            return QFileSystemModel::sibling(row, column, idx);
        }
        auto sibling_cb = qfilesystemmodel_sibling_callback;
        if (sibling_cb) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& idx_ret = idx;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&idx_ret);

            QModelIndex* callback_ret = sibling_cb(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        }
        return QFileSystemModel::sibling(row, column, idx);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasChildren(const QModelIndex& parent) const override {
        if (qfilesystemmodel_haschildren_isbase) {
            qfilesystemmodel_haschildren_isbase = false;
            return QFileSystemModel::hasChildren(parent);
        }
        auto haschildren_cb = qfilesystemmodel_haschildren_callback;
        if (haschildren_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = haschildren_cb(this, cbval1);
            return callback_ret;
        }
        return QFileSystemModel::hasChildren(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canFetchMore(const QModelIndex& parent) const override {
        if (qfilesystemmodel_canfetchmore_isbase) {
            qfilesystemmodel_canfetchmore_isbase = false;
            return QFileSystemModel::canFetchMore(parent);
        }
        auto canfetchmore_cb = qfilesystemmodel_canfetchmore_callback;
        if (canfetchmore_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = canfetchmore_cb(this, cbval1);
            return callback_ret;
        }
        return QFileSystemModel::canFetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void fetchMore(const QModelIndex& parent) override {
        if (qfilesystemmodel_fetchmore_isbase) {
            qfilesystemmodel_fetchmore_isbase = false;
            QFileSystemModel::fetchMore(parent);
            return;
        }
        auto fetchmore_cb = qfilesystemmodel_fetchmore_callback;
        if (fetchmore_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            fetchmore_cb(this, cbval1);
            return;
        }
        QFileSystemModel::fetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual int rowCount(const QModelIndex& parent) const override {
        if (qfilesystemmodel_rowcount_isbase) {
            qfilesystemmodel_rowcount_isbase = false;
            return QFileSystemModel::rowCount(parent);
        }
        auto rowcount_cb = qfilesystemmodel_rowcount_callback;
        if (rowcount_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            int callback_ret = rowcount_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QFileSystemModel::rowCount(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual int columnCount(const QModelIndex& parent) const override {
        if (qfilesystemmodel_columncount_isbase) {
            qfilesystemmodel_columncount_isbase = false;
            return QFileSystemModel::columnCount(parent);
        }
        auto columncount_cb = qfilesystemmodel_columncount_callback;
        if (columncount_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            int callback_ret = columncount_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QFileSystemModel::columnCount(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(const QModelIndex& index, int role) const override {
        if (qfilesystemmodel_data_isbase) {
            qfilesystemmodel_data_isbase = false;
            return QFileSystemModel::data(index, role);
        }
        auto data_cb = qfilesystemmodel_data_callback;
        if (data_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = role;

            QVariant* callback_ret = data_cb(this, cbval1, cbval2);
            return *callback_ret;
        }
        return QFileSystemModel::data(index, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
        if (qfilesystemmodel_setdata_isbase) {
            qfilesystemmodel_setdata_isbase = false;
            return QFileSystemModel::setData(index, value, role);
        }
        auto setdata_cb = qfilesystemmodel_setdata_callback;
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
        return QFileSystemModel::setData(index, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
        if (qfilesystemmodel_headerdata_isbase) {
            qfilesystemmodel_headerdata_isbase = false;
            return QFileSystemModel::headerData(section, orientation, role);
        }
        auto headerdata_cb = qfilesystemmodel_headerdata_callback;
        if (headerdata_cb) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            int cbval3 = role;

            QVariant* callback_ret = headerdata_cb(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        }
        return QFileSystemModel::headerData(section, orientation, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
        if (qfilesystemmodel_flags_isbase) {
            qfilesystemmodel_flags_isbase = false;
            return QFileSystemModel::flags(index);
        }
        auto flags_cb = qfilesystemmodel_flags_callback;
        if (flags_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            int callback_ret = flags_cb(this, cbval1);
            return static_cast<Qt::ItemFlags>(callback_ret);
        }
        return QFileSystemModel::flags(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void sort(int column, Qt::SortOrder order) override {
        if (qfilesystemmodel_sort_isbase) {
            qfilesystemmodel_sort_isbase = false;
            QFileSystemModel::sort(column, order);
            return;
        }
        auto sort_cb = qfilesystemmodel_sort_callback;
        if (sort_cb) {
            int cbval1 = column;
            int cbval2 = static_cast<int>(order);

            sort_cb(this, cbval1, cbval2);
            return;
        }
        QFileSystemModel::sort(column, order);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> mimeTypes() const override {
        if (qfilesystemmodel_mimetypes_isbase) {
            qfilesystemmodel_mimetypes_isbase = false;
            return QFileSystemModel::mimeTypes();
        }
        auto mimetypes_cb = qfilesystemmodel_mimetypes_callback;
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
        return QFileSystemModel::mimeTypes();
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* mimeData(const QList<QModelIndex>& indexes) const override {
        if (qfilesystemmodel_mimedata_isbase) {
            qfilesystemmodel_mimedata_isbase = false;
            return QFileSystemModel::mimeData(indexes);
        }
        auto mimedata_cb = qfilesystemmodel_mimedata_callback;
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
        return QFileSystemModel::mimeData(indexes);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
        if (qfilesystemmodel_dropmimedata_isbase) {
            qfilesystemmodel_dropmimedata_isbase = false;
            return QFileSystemModel::dropMimeData(data, action, row, column, parent);
        }
        auto dropmimedata_cb = qfilesystemmodel_dropmimedata_callback;
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
        return QFileSystemModel::dropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (qfilesystemmodel_supporteddropactions_isbase) {
            qfilesystemmodel_supporteddropactions_isbase = false;
            return QFileSystemModel::supportedDropActions();
        }
        auto supporteddropactions_cb = qfilesystemmodel_supporteddropactions_callback;
        if (supporteddropactions_cb) {
            int callback_ret = supporteddropactions_cb();
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return QFileSystemModel::supportedDropActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual QHash<int, QByteArray> roleNames() const override {
        if (qfilesystemmodel_rolenames_isbase) {
            qfilesystemmodel_rolenames_isbase = false;
            return QFileSystemModel::roleNames();
        }
        auto rolenames_cb = qfilesystemmodel_rolenames_callback;
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
        return QFileSystemModel::roleNames();
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qfilesystemmodel_timerevent_isbase) {
            qfilesystemmodel_timerevent_isbase = false;
            QFileSystemModel::timerEvent(event);
            return;
        }
        auto timerevent_cb = qfilesystemmodel_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QFileSystemModel::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qfilesystemmodel_event_isbase) {
            qfilesystemmodel_event_isbase = false;
            return QFileSystemModel::event(event);
        }
        auto event_cb = qfilesystemmodel_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QFileSystemModel::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
        if (qfilesystemmodel_setheaderdata_isbase) {
            qfilesystemmodel_setheaderdata_isbase = false;
            return QFileSystemModel::setHeaderData(section, orientation, value, role);
        }
        auto setheaderdata_cb = qfilesystemmodel_setheaderdata_callback;
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
        return QFileSystemModel::setHeaderData(section, orientation, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
        if (qfilesystemmodel_itemdata_isbase) {
            qfilesystemmodel_itemdata_isbase = false;
            return QFileSystemModel::itemData(index);
        }
        auto itemdata_cb = qfilesystemmodel_itemdata_callback;
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
        return QFileSystemModel::itemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
        if (qfilesystemmodel_setitemdata_isbase) {
            qfilesystemmodel_setitemdata_isbase = false;
            return QFileSystemModel::setItemData(index, roles);
        }
        auto setitemdata_cb = qfilesystemmodel_setitemdata_callback;
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
        return QFileSystemModel::setItemData(index, roles);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool clearItemData(const QModelIndex& index) override {
        if (qfilesystemmodel_clearitemdata_isbase) {
            qfilesystemmodel_clearitemdata_isbase = false;
            return QFileSystemModel::clearItemData(index);
        }
        auto clearitemdata_cb = qfilesystemmodel_clearitemdata_callback;
        if (clearitemdata_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            bool callback_ret = clearitemdata_cb(this, cbval1);
            return callback_ret;
        }
        return QFileSystemModel::clearItemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
        if (qfilesystemmodel_candropmimedata_isbase) {
            qfilesystemmodel_candropmimedata_isbase = false;
            return QFileSystemModel::canDropMimeData(data, action, row, column, parent);
        }
        auto candropmimedata_cb = qfilesystemmodel_candropmimedata_callback;
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
        return QFileSystemModel::canDropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDragActions() const override {
        if (qfilesystemmodel_supporteddragactions_isbase) {
            qfilesystemmodel_supporteddragactions_isbase = false;
            return QFileSystemModel::supportedDragActions();
        }
        auto supporteddragactions_cb = qfilesystemmodel_supporteddragactions_callback;
        if (supporteddragactions_cb) {
            int callback_ret = supporteddragactions_cb();
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return QFileSystemModel::supportedDragActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
        if (qfilesystemmodel_insertrows_isbase) {
            qfilesystemmodel_insertrows_isbase = false;
            return QFileSystemModel::insertRows(row, count, parent);
        }
        auto insertrows_cb = qfilesystemmodel_insertrows_callback;
        if (insertrows_cb) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = insertrows_cb(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QFileSystemModel::insertRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
        if (qfilesystemmodel_insertcolumns_isbase) {
            qfilesystemmodel_insertcolumns_isbase = false;
            return QFileSystemModel::insertColumns(column, count, parent);
        }
        auto insertcolumns_cb = qfilesystemmodel_insertcolumns_callback;
        if (insertcolumns_cb) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = insertcolumns_cb(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QFileSystemModel::insertColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
        if (qfilesystemmodel_removerows_isbase) {
            qfilesystemmodel_removerows_isbase = false;
            return QFileSystemModel::removeRows(row, count, parent);
        }
        auto removerows_cb = qfilesystemmodel_removerows_callback;
        if (removerows_cb) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = removerows_cb(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QFileSystemModel::removeRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
        if (qfilesystemmodel_removecolumns_isbase) {
            qfilesystemmodel_removecolumns_isbase = false;
            return QFileSystemModel::removeColumns(column, count, parent);
        }
        auto removecolumns_cb = qfilesystemmodel_removecolumns_callback;
        if (removecolumns_cb) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = removecolumns_cb(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QFileSystemModel::removeColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (qfilesystemmodel_moverows_isbase) {
            qfilesystemmodel_moverows_isbase = false;
            return QFileSystemModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
        }
        auto moverows_cb = qfilesystemmodel_moverows_callback;
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
        return QFileSystemModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (qfilesystemmodel_movecolumns_isbase) {
            qfilesystemmodel_movecolumns_isbase = false;
            return QFileSystemModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
        }
        auto movecolumns_cb = qfilesystemmodel_movecolumns_callback;
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
        return QFileSystemModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex buddy(const QModelIndex& index) const override {
        if (qfilesystemmodel_buddy_isbase) {
            qfilesystemmodel_buddy_isbase = false;
            return QFileSystemModel::buddy(index);
        }
        auto buddy_cb = qfilesystemmodel_buddy_callback;
        if (buddy_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QModelIndex* callback_ret = buddy_cb(this, cbval1);
            return *callback_ret;
        }
        return QFileSystemModel::buddy(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
        if (qfilesystemmodel_match_isbase) {
            qfilesystemmodel_match_isbase = false;
            return QFileSystemModel::match(start, role, value, hits, flags);
        }
        auto match_cb = qfilesystemmodel_match_callback;
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
        return QFileSystemModel::match(start, role, value, hits, flags);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize span(const QModelIndex& index) const override {
        if (qfilesystemmodel_span_isbase) {
            qfilesystemmodel_span_isbase = false;
            return QFileSystemModel::span(index);
        }
        auto span_cb = qfilesystemmodel_span_callback;
        if (span_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QSize* callback_ret = span_cb(this, cbval1);
            return *callback_ret;
        }
        return QFileSystemModel::span(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
        if (qfilesystemmodel_multidata_isbase) {
            qfilesystemmodel_multidata_isbase = false;
            QFileSystemModel::multiData(index, roleDataSpan);
            return;
        }
        auto multidata_cb = qfilesystemmodel_multidata_callback;
        if (multidata_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelRoleDataSpan* cbval2 = new QModelRoleDataSpan(roleDataSpan);

            multidata_cb(this, cbval1, cbval2);
            return;
        }
        QFileSystemModel::multiData(index, roleDataSpan);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool submit() override {
        if (qfilesystemmodel_submit_isbase) {
            qfilesystemmodel_submit_isbase = false;
            return QFileSystemModel::submit();
        }
        auto submit_cb = qfilesystemmodel_submit_callback;
        if (submit_cb) {
            bool callback_ret = submit_cb();
            return callback_ret;
        }
        return QFileSystemModel::submit();
    }

    // Virtual method for C ABI access and custom callback
    virtual void revert() override {
        if (qfilesystemmodel_revert_isbase) {
            qfilesystemmodel_revert_isbase = false;
            QFileSystemModel::revert();
            return;
        }
        auto revert_cb = qfilesystemmodel_revert_callback;
        if (revert_cb) {
            revert_cb();
            return;
        }
        QFileSystemModel::revert();
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetInternalData() override {
        if (qfilesystemmodel_resetinternaldata_isbase) {
            qfilesystemmodel_resetinternaldata_isbase = false;
            QFileSystemModel::resetInternalData();
            return;
        }
        auto resetinternaldata_cb = qfilesystemmodel_resetinternaldata_callback;
        if (resetinternaldata_cb) {
            resetinternaldata_cb();
            return;
        }
        QFileSystemModel::resetInternalData();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qfilesystemmodel_eventfilter_isbase) {
            qfilesystemmodel_eventfilter_isbase = false;
            return QFileSystemModel::eventFilter(watched, event);
        }
        auto eventfilter_cb = qfilesystemmodel_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QFileSystemModel::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qfilesystemmodel_childevent_isbase) {
            qfilesystemmodel_childevent_isbase = false;
            QFileSystemModel::childEvent(event);
            return;
        }
        auto childevent_cb = qfilesystemmodel_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QFileSystemModel::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qfilesystemmodel_customevent_isbase) {
            qfilesystemmodel_customevent_isbase = false;
            QFileSystemModel::customEvent(event);
            return;
        }
        auto customevent_cb = qfilesystemmodel_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QFileSystemModel::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qfilesystemmodel_connectnotify_isbase) {
            qfilesystemmodel_connectnotify_isbase = false;
            QFileSystemModel::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qfilesystemmodel_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QFileSystemModel::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qfilesystemmodel_disconnectnotify_isbase) {
            qfilesystemmodel_disconnectnotify_isbase = false;
            QFileSystemModel::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qfilesystemmodel_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QFileSystemModel::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QModelIndex createIndex(int row, int column) const {
        if (qfilesystemmodel_createindex_isbase) {
            qfilesystemmodel_createindex_isbase = false;
            return QFileSystemModel::createIndex(row, column);
        }
        auto createindex_cb = qfilesystemmodel_createindex_callback;
        if (createindex_cb) {
            int cbval1 = row;
            int cbval2 = column;

            QModelIndex* callback_ret = createindex_cb(this, cbval1, cbval2);
            return *callback_ret;
        }
        return QFileSystemModel::createIndex(row, column);
    }

    // Virtual method for C ABI access and custom callback
    void encodeData(const QList<QModelIndex>& indexes, QDataStream& stream) const {
        if (qfilesystemmodel_encodedata_isbase) {
            qfilesystemmodel_encodedata_isbase = false;
            QFileSystemModel::encodeData(indexes, stream);
            return;
        }
        auto encodedata_cb = qfilesystemmodel_encodedata_callback;
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
        QFileSystemModel::encodeData(indexes, stream);
    }

    // Virtual method for C ABI access and custom callback
    bool decodeData(int row, int column, const QModelIndex& parent, QDataStream& stream) {
        if (qfilesystemmodel_decodedata_isbase) {
            qfilesystemmodel_decodedata_isbase = false;
            return QFileSystemModel::decodeData(row, column, parent, stream);
        }
        auto decodedata_cb = qfilesystemmodel_decodedata_callback;
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
        return QFileSystemModel::decodeData(row, column, parent, stream);
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertRows(const QModelIndex& parent, int first, int last) {
        if (qfilesystemmodel_begininsertrows_isbase) {
            qfilesystemmodel_begininsertrows_isbase = false;
            QFileSystemModel::beginInsertRows(parent, first, last);
            return;
        }
        auto begininsertrows_cb = qfilesystemmodel_begininsertrows_callback;
        if (begininsertrows_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            begininsertrows_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        QFileSystemModel::beginInsertRows(parent, first, last);
    }

    // Virtual method for C ABI access and custom callback
    void endInsertRows() {
        if (qfilesystemmodel_endinsertrows_isbase) {
            qfilesystemmodel_endinsertrows_isbase = false;
            QFileSystemModel::endInsertRows();
            return;
        }
        auto endinsertrows_cb = qfilesystemmodel_endinsertrows_callback;
        if (endinsertrows_cb) {
            endinsertrows_cb();
            return;
        }
        QFileSystemModel::endInsertRows();
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveRows(const QModelIndex& parent, int first, int last) {
        if (qfilesystemmodel_beginremoverows_isbase) {
            qfilesystemmodel_beginremoverows_isbase = false;
            QFileSystemModel::beginRemoveRows(parent, first, last);
            return;
        }
        auto beginremoverows_cb = qfilesystemmodel_beginremoverows_callback;
        if (beginremoverows_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            beginremoverows_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        QFileSystemModel::beginRemoveRows(parent, first, last);
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveRows() {
        if (qfilesystemmodel_endremoverows_isbase) {
            qfilesystemmodel_endremoverows_isbase = false;
            QFileSystemModel::endRemoveRows();
            return;
        }
        auto endremoverows_cb = qfilesystemmodel_endremoverows_callback;
        if (endremoverows_cb) {
            endremoverows_cb();
            return;
        }
        QFileSystemModel::endRemoveRows();
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveRows(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationRow) {
        if (qfilesystemmodel_beginmoverows_isbase) {
            qfilesystemmodel_beginmoverows_isbase = false;
            return QFileSystemModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
        }
        auto beginmoverows_cb = qfilesystemmodel_beginmoverows_callback;
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
        return QFileSystemModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
    }

    // Virtual method for C ABI access and custom callback
    void endMoveRows() {
        if (qfilesystemmodel_endmoverows_isbase) {
            qfilesystemmodel_endmoverows_isbase = false;
            QFileSystemModel::endMoveRows();
            return;
        }
        auto endmoverows_cb = qfilesystemmodel_endmoverows_callback;
        if (endmoverows_cb) {
            endmoverows_cb();
            return;
        }
        QFileSystemModel::endMoveRows();
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertColumns(const QModelIndex& parent, int first, int last) {
        if (qfilesystemmodel_begininsertcolumns_isbase) {
            qfilesystemmodel_begininsertcolumns_isbase = false;
            QFileSystemModel::beginInsertColumns(parent, first, last);
            return;
        }
        auto begininsertcolumns_cb = qfilesystemmodel_begininsertcolumns_callback;
        if (begininsertcolumns_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            begininsertcolumns_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        QFileSystemModel::beginInsertColumns(parent, first, last);
    }

    // Virtual method for C ABI access and custom callback
    void endInsertColumns() {
        if (qfilesystemmodel_endinsertcolumns_isbase) {
            qfilesystemmodel_endinsertcolumns_isbase = false;
            QFileSystemModel::endInsertColumns();
            return;
        }
        auto endinsertcolumns_cb = qfilesystemmodel_endinsertcolumns_callback;
        if (endinsertcolumns_cb) {
            endinsertcolumns_cb();
            return;
        }
        QFileSystemModel::endInsertColumns();
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveColumns(const QModelIndex& parent, int first, int last) {
        if (qfilesystemmodel_beginremovecolumns_isbase) {
            qfilesystemmodel_beginremovecolumns_isbase = false;
            QFileSystemModel::beginRemoveColumns(parent, first, last);
            return;
        }
        auto beginremovecolumns_cb = qfilesystemmodel_beginremovecolumns_callback;
        if (beginremovecolumns_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            beginremovecolumns_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        QFileSystemModel::beginRemoveColumns(parent, first, last);
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveColumns() {
        if (qfilesystemmodel_endremovecolumns_isbase) {
            qfilesystemmodel_endremovecolumns_isbase = false;
            QFileSystemModel::endRemoveColumns();
            return;
        }
        auto endremovecolumns_cb = qfilesystemmodel_endremovecolumns_callback;
        if (endremovecolumns_cb) {
            endremovecolumns_cb();
            return;
        }
        QFileSystemModel::endRemoveColumns();
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveColumns(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationColumn) {
        if (qfilesystemmodel_beginmovecolumns_isbase) {
            qfilesystemmodel_beginmovecolumns_isbase = false;
            return QFileSystemModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
        }
        auto beginmovecolumns_cb = qfilesystemmodel_beginmovecolumns_callback;
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
        return QFileSystemModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
    }

    // Virtual method for C ABI access and custom callback
    void endMoveColumns() {
        if (qfilesystemmodel_endmovecolumns_isbase) {
            qfilesystemmodel_endmovecolumns_isbase = false;
            QFileSystemModel::endMoveColumns();
            return;
        }
        auto endmovecolumns_cb = qfilesystemmodel_endmovecolumns_callback;
        if (endmovecolumns_cb) {
            endmovecolumns_cb();
            return;
        }
        QFileSystemModel::endMoveColumns();
    }

    // Virtual method for C ABI access and custom callback
    void beginResetModel() {
        if (qfilesystemmodel_beginresetmodel_isbase) {
            qfilesystemmodel_beginresetmodel_isbase = false;
            QFileSystemModel::beginResetModel();
            return;
        }
        auto beginresetmodel_cb = qfilesystemmodel_beginresetmodel_callback;
        if (beginresetmodel_cb) {
            beginresetmodel_cb();
            return;
        }
        QFileSystemModel::beginResetModel();
    }

    // Virtual method for C ABI access and custom callback
    void endResetModel() {
        if (qfilesystemmodel_endresetmodel_isbase) {
            qfilesystemmodel_endresetmodel_isbase = false;
            QFileSystemModel::endResetModel();
            return;
        }
        auto endresetmodel_cb = qfilesystemmodel_endresetmodel_callback;
        if (endresetmodel_cb) {
            endresetmodel_cb();
            return;
        }
        QFileSystemModel::endResetModel();
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndex(const QModelIndex& from, const QModelIndex& to) {
        if (qfilesystemmodel_changepersistentindex_isbase) {
            qfilesystemmodel_changepersistentindex_isbase = false;
            QFileSystemModel::changePersistentIndex(from, to);
            return;
        }
        auto changepersistentindex_cb = qfilesystemmodel_changepersistentindex_callback;
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
        QFileSystemModel::changePersistentIndex(from, to);
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndexList(const QList<QModelIndex>& from, const QList<QModelIndex>& to) {
        if (qfilesystemmodel_changepersistentindexlist_isbase) {
            qfilesystemmodel_changepersistentindexlist_isbase = false;
            QFileSystemModel::changePersistentIndexList(from, to);
            return;
        }
        auto changepersistentindexlist_cb = qfilesystemmodel_changepersistentindexlist_callback;
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
        QFileSystemModel::changePersistentIndexList(from, to);
    }

    // Virtual method for C ABI access and custom callback
    QList<QModelIndex> persistentIndexList() const {
        if (qfilesystemmodel_persistentindexlist_isbase) {
            qfilesystemmodel_persistentindexlist_isbase = false;
            return QFileSystemModel::persistentIndexList();
        }
        auto persistentindexlist_cb = qfilesystemmodel_persistentindexlist_callback;
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
        return QFileSystemModel::persistentIndexList();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qfilesystemmodel_sender_isbase) {
            qfilesystemmodel_sender_isbase = false;
            return QFileSystemModel::sender();
        }
        auto sender_cb = qfilesystemmodel_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QFileSystemModel::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qfilesystemmodel_sendersignalindex_isbase) {
            qfilesystemmodel_sendersignalindex_isbase = false;
            return QFileSystemModel::senderSignalIndex();
        }
        auto sendersignalindex_cb = qfilesystemmodel_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QFileSystemModel::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qfilesystemmodel_receivers_isbase) {
            qfilesystemmodel_receivers_isbase = false;
            return QFileSystemModel::receivers(signal);
        }
        auto receivers_cb = qfilesystemmodel_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QFileSystemModel::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qfilesystemmodel_issignalconnected_isbase) {
            qfilesystemmodel_issignalconnected_isbase = false;
            return QFileSystemModel::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qfilesystemmodel_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QFileSystemModel::isSignalConnected(signal);
    }

    // Friend functions
    friend void QFileSystemModel_TimerEvent(QFileSystemModel* self, QTimerEvent* event);
    friend void QFileSystemModel_SuperTimerEvent(QFileSystemModel* self, QTimerEvent* event);
    friend bool QFileSystemModel_Event(QFileSystemModel* self, QEvent* event);
    friend bool QFileSystemModel_SuperEvent(QFileSystemModel* self, QEvent* event);
    friend void QFileSystemModel_ResetInternalData(QFileSystemModel* self);
    friend void QFileSystemModel_SuperResetInternalData(QFileSystemModel* self);
    friend void QFileSystemModel_ChildEvent(QFileSystemModel* self, QChildEvent* event);
    friend void QFileSystemModel_SuperChildEvent(QFileSystemModel* self, QChildEvent* event);
    friend void QFileSystemModel_CustomEvent(QFileSystemModel* self, QEvent* event);
    friend void QFileSystemModel_SuperCustomEvent(QFileSystemModel* self, QEvent* event);
    friend void QFileSystemModel_ConnectNotify(QFileSystemModel* self, const QMetaMethod* signal);
    friend void QFileSystemModel_SuperConnectNotify(QFileSystemModel* self, const QMetaMethod* signal);
    friend void QFileSystemModel_DisconnectNotify(QFileSystemModel* self, const QMetaMethod* signal);
    friend void QFileSystemModel_SuperDisconnectNotify(QFileSystemModel* self, const QMetaMethod* signal);
    friend QModelIndex* QFileSystemModel_CreateIndex(const QFileSystemModel* self, int row, int column);
    friend QModelIndex* QFileSystemModel_SuperCreateIndex(const QFileSystemModel* self, int row, int column);
    friend void QFileSystemModel_EncodeData(const QFileSystemModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
    friend void QFileSystemModel_SuperEncodeData(const QFileSystemModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
    friend bool QFileSystemModel_DecodeData(QFileSystemModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
    friend bool QFileSystemModel_SuperDecodeData(QFileSystemModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
    friend void QFileSystemModel_BeginInsertRows(QFileSystemModel* self, const QModelIndex* parent, int first, int last);
    friend void QFileSystemModel_SuperBeginInsertRows(QFileSystemModel* self, const QModelIndex* parent, int first, int last);
    friend void QFileSystemModel_EndInsertRows(QFileSystemModel* self);
    friend void QFileSystemModel_SuperEndInsertRows(QFileSystemModel* self);
    friend void QFileSystemModel_BeginRemoveRows(QFileSystemModel* self, const QModelIndex* parent, int first, int last);
    friend void QFileSystemModel_SuperBeginRemoveRows(QFileSystemModel* self, const QModelIndex* parent, int first, int last);
    friend void QFileSystemModel_EndRemoveRows(QFileSystemModel* self);
    friend void QFileSystemModel_SuperEndRemoveRows(QFileSystemModel* self);
    friend bool QFileSystemModel_BeginMoveRows(QFileSystemModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
    friend bool QFileSystemModel_SuperBeginMoveRows(QFileSystemModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
    friend void QFileSystemModel_EndMoveRows(QFileSystemModel* self);
    friend void QFileSystemModel_SuperEndMoveRows(QFileSystemModel* self);
    friend void QFileSystemModel_BeginInsertColumns(QFileSystemModel* self, const QModelIndex* parent, int first, int last);
    friend void QFileSystemModel_SuperBeginInsertColumns(QFileSystemModel* self, const QModelIndex* parent, int first, int last);
    friend void QFileSystemModel_EndInsertColumns(QFileSystemModel* self);
    friend void QFileSystemModel_SuperEndInsertColumns(QFileSystemModel* self);
    friend void QFileSystemModel_BeginRemoveColumns(QFileSystemModel* self, const QModelIndex* parent, int first, int last);
    friend void QFileSystemModel_SuperBeginRemoveColumns(QFileSystemModel* self, const QModelIndex* parent, int first, int last);
    friend void QFileSystemModel_EndRemoveColumns(QFileSystemModel* self);
    friend void QFileSystemModel_SuperEndRemoveColumns(QFileSystemModel* self);
    friend bool QFileSystemModel_BeginMoveColumns(QFileSystemModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
    friend bool QFileSystemModel_SuperBeginMoveColumns(QFileSystemModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
    friend void QFileSystemModel_EndMoveColumns(QFileSystemModel* self);
    friend void QFileSystemModel_SuperEndMoveColumns(QFileSystemModel* self);
    friend void QFileSystemModel_BeginResetModel(QFileSystemModel* self);
    friend void QFileSystemModel_SuperBeginResetModel(QFileSystemModel* self);
    friend void QFileSystemModel_EndResetModel(QFileSystemModel* self);
    friend void QFileSystemModel_SuperEndResetModel(QFileSystemModel* self);
    friend void QFileSystemModel_ChangePersistentIndex(QFileSystemModel* self, const QModelIndex* from, const QModelIndex* to);
    friend void QFileSystemModel_SuperChangePersistentIndex(QFileSystemModel* self, const QModelIndex* from, const QModelIndex* to);
    friend void QFileSystemModel_ChangePersistentIndexList(QFileSystemModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
    friend void QFileSystemModel_SuperChangePersistentIndexList(QFileSystemModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
    friend libqt_list /* of QModelIndex* */ QFileSystemModel_PersistentIndexList(const QFileSystemModel* self);
    friend libqt_list /* of QModelIndex* */ QFileSystemModel_SuperPersistentIndexList(const QFileSystemModel* self);
    friend QObject* QFileSystemModel_Sender(const QFileSystemModel* self);
    friend QObject* QFileSystemModel_SuperSender(const QFileSystemModel* self);
    friend int QFileSystemModel_SenderSignalIndex(const QFileSystemModel* self);
    friend int QFileSystemModel_SuperSenderSignalIndex(const QFileSystemModel* self);
    friend int QFileSystemModel_Receivers(const QFileSystemModel* self, const char* signal);
    friend int QFileSystemModel_SuperReceivers(const QFileSystemModel* self, const char* signal);
    friend bool QFileSystemModel_IsSignalConnected(const QFileSystemModel* self, const QMetaMethod* signal);
    friend bool QFileSystemModel_SuperIsSignalConnected(const QFileSystemModel* self, const QMetaMethod* signal);
};

#endif
