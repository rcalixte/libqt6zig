#pragma once
#ifndef SRCC_LIBVIRTUALQABSTRACTITEMMODEL_H
#define SRCC_LIBVIRTUALQABSTRACTITEMMODEL_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QAbstractItemModel so that we can call protected methods
class VirtualQAbstractItemModel : public QAbstractItemModel {

  public:
    // Virtual class boolean flag
    bool isVirtualQAbstractItemModel = true;

    // Virtual class public types (including callbacks)
    using QAbstractItemModel_MetaObject_Callback = QMetaObject* (*)();
    using QAbstractItemModel_Metacast_Callback = void* (*)(QAbstractItemModel*, const char*);
    using QAbstractItemModel_Metacall_Callback = int (*)(QAbstractItemModel*, int, int, void**);
    using QAbstractItemModel_Index_Callback = QModelIndex* (*)(const QAbstractItemModel*, int, int, QModelIndex*);
    using QAbstractItemModel_Parent_Callback = QModelIndex* (*)(const QAbstractItemModel*, QModelIndex*);
    using QAbstractItemModel_Sibling_Callback = QModelIndex* (*)(const QAbstractItemModel*, int, int, QModelIndex*);
    using QAbstractItemModel_RowCount_Callback = int (*)(const QAbstractItemModel*, QModelIndex*);
    using QAbstractItemModel_ColumnCount_Callback = int (*)(const QAbstractItemModel*, QModelIndex*);
    using QAbstractItemModel_HasChildren_Callback = bool (*)(const QAbstractItemModel*, QModelIndex*);
    using QAbstractItemModel_Data_Callback = QVariant* (*)(const QAbstractItemModel*, QModelIndex*, int);
    using QAbstractItemModel_SetData_Callback = bool (*)(QAbstractItemModel*, QModelIndex*, QVariant*, int);
    using QAbstractItemModel_HeaderData_Callback = QVariant* (*)(const QAbstractItemModel*, int, int, int);
    using QAbstractItemModel_SetHeaderData_Callback = bool (*)(QAbstractItemModel*, int, int, QVariant*, int);
    using QAbstractItemModel_ItemData_Callback = libqt_map /* of int to QVariant* */ (*)(const QAbstractItemModel*, QModelIndex*);
    using QAbstractItemModel_SetItemData_Callback = bool (*)(QAbstractItemModel*, QModelIndex*, libqt_map /* of int to QVariant* */);
    using QAbstractItemModel_ClearItemData_Callback = bool (*)(QAbstractItemModel*, QModelIndex*);
    using QAbstractItemModel_MimeTypes_Callback = const char** (*)();
    using QAbstractItemModel_MimeData_Callback = QMimeData* (*)(const QAbstractItemModel*, libqt_list /* of QModelIndex* */);
    using QAbstractItemModel_CanDropMimeData_Callback = bool (*)(const QAbstractItemModel*, QMimeData*, int, int, int, QModelIndex*);
    using QAbstractItemModel_DropMimeData_Callback = bool (*)(QAbstractItemModel*, QMimeData*, int, int, int, QModelIndex*);
    using QAbstractItemModel_SupportedDropActions_Callback = int (*)();
    using QAbstractItemModel_SupportedDragActions_Callback = int (*)();
    using QAbstractItemModel_InsertRows_Callback = bool (*)(QAbstractItemModel*, int, int, QModelIndex*);
    using QAbstractItemModel_InsertColumns_Callback = bool (*)(QAbstractItemModel*, int, int, QModelIndex*);
    using QAbstractItemModel_RemoveRows_Callback = bool (*)(QAbstractItemModel*, int, int, QModelIndex*);
    using QAbstractItemModel_RemoveColumns_Callback = bool (*)(QAbstractItemModel*, int, int, QModelIndex*);
    using QAbstractItemModel_MoveRows_Callback = bool (*)(QAbstractItemModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QAbstractItemModel_MoveColumns_Callback = bool (*)(QAbstractItemModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QAbstractItemModel_FetchMore_Callback = void (*)(QAbstractItemModel*, QModelIndex*);
    using QAbstractItemModel_CanFetchMore_Callback = bool (*)(const QAbstractItemModel*, QModelIndex*);
    using QAbstractItemModel_Flags_Callback = int (*)(const QAbstractItemModel*, QModelIndex*);
    using QAbstractItemModel_Sort_Callback = void (*)(QAbstractItemModel*, int, int);
    using QAbstractItemModel_Buddy_Callback = QModelIndex* (*)(const QAbstractItemModel*, QModelIndex*);
    using QAbstractItemModel_Match_Callback = libqt_list /* of QModelIndex* */ (*)(const QAbstractItemModel*, QModelIndex*, int, QVariant*, int, int);
    using QAbstractItemModel_Span_Callback = QSize* (*)(const QAbstractItemModel*, QModelIndex*);
    using QAbstractItemModel_RoleNames_Callback = libqt_map /* of int to libqt_string */ (*)();
    using QAbstractItemModel_MultiData_Callback = void (*)(const QAbstractItemModel*, QModelIndex*, QModelRoleDataSpan*);
    using QAbstractItemModel_Submit_Callback = bool (*)();
    using QAbstractItemModel_Revert_Callback = void (*)();
    using QAbstractItemModel_ResetInternalData_Callback = void (*)();
    using QAbstractItemModel_Event_Callback = bool (*)(QAbstractItemModel*, QEvent*);
    using QAbstractItemModel_EventFilter_Callback = bool (*)(QAbstractItemModel*, QObject*, QEvent*);
    using QAbstractItemModel_TimerEvent_Callback = void (*)(QAbstractItemModel*, QTimerEvent*);
    using QAbstractItemModel_ChildEvent_Callback = void (*)(QAbstractItemModel*, QChildEvent*);
    using QAbstractItemModel_CustomEvent_Callback = void (*)(QAbstractItemModel*, QEvent*);
    using QAbstractItemModel_ConnectNotify_Callback = void (*)(QAbstractItemModel*, QMetaMethod*);
    using QAbstractItemModel_DisconnectNotify_Callback = void (*)(QAbstractItemModel*, QMetaMethod*);
    using QAbstractItemModel_CreateIndex_Callback = QModelIndex* (*)(const QAbstractItemModel*, int, int);
    using QAbstractItemModel_CreateIndex2_Callback = QModelIndex* (*)(const QAbstractItemModel*, int, int, uintptr_t);
    using QAbstractItemModel_EncodeData_Callback = void (*)(const QAbstractItemModel*, libqt_list /* of QModelIndex* */, QDataStream*);
    using QAbstractItemModel_DecodeData_Callback = bool (*)(QAbstractItemModel*, int, int, QModelIndex*, QDataStream*);
    using QAbstractItemModel_BeginInsertRows_Callback = void (*)(QAbstractItemModel*, QModelIndex*, int, int);
    using QAbstractItemModel_EndInsertRows_Callback = void (*)();
    using QAbstractItemModel_BeginRemoveRows_Callback = void (*)(QAbstractItemModel*, QModelIndex*, int, int);
    using QAbstractItemModel_EndRemoveRows_Callback = void (*)();
    using QAbstractItemModel_BeginMoveRows_Callback = bool (*)(QAbstractItemModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QAbstractItemModel_EndMoveRows_Callback = void (*)();
    using QAbstractItemModel_BeginInsertColumns_Callback = void (*)(QAbstractItemModel*, QModelIndex*, int, int);
    using QAbstractItemModel_EndInsertColumns_Callback = void (*)();
    using QAbstractItemModel_BeginRemoveColumns_Callback = void (*)(QAbstractItemModel*, QModelIndex*, int, int);
    using QAbstractItemModel_EndRemoveColumns_Callback = void (*)();
    using QAbstractItemModel_BeginMoveColumns_Callback = bool (*)(QAbstractItemModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QAbstractItemModel_EndMoveColumns_Callback = void (*)();
    using QAbstractItemModel_BeginResetModel_Callback = void (*)();
    using QAbstractItemModel_EndResetModel_Callback = void (*)();
    using QAbstractItemModel_ChangePersistentIndex_Callback = void (*)(QAbstractItemModel*, QModelIndex*, QModelIndex*);
    using QAbstractItemModel_ChangePersistentIndexList_Callback = void (*)(QAbstractItemModel*, libqt_list /* of QModelIndex* */, libqt_list /* of QModelIndex* */);
    using QAbstractItemModel_PersistentIndexList_Callback = libqt_list /* of QModelIndex* */ (*)();
    using QAbstractItemModel_CreateIndex3_Callback = QModelIndex* (*)(const QAbstractItemModel*, int, int, const void*);
    using QAbstractItemModel_Sender_Callback = QObject* (*)();
    using QAbstractItemModel_SenderSignalIndex_Callback = int (*)();
    using QAbstractItemModel_Receivers_Callback = int (*)(const QAbstractItemModel*, const char*);
    using QAbstractItemModel_IsSignalConnected_Callback = bool (*)(const QAbstractItemModel*, QMetaMethod*);

  protected:
    // Instance callback storage
    QAbstractItemModel_MetaObject_Callback qabstractitemmodel_metaobject_callback = nullptr;
    QAbstractItemModel_Metacast_Callback qabstractitemmodel_metacast_callback = nullptr;
    QAbstractItemModel_Metacall_Callback qabstractitemmodel_metacall_callback = nullptr;
    QAbstractItemModel_Index_Callback qabstractitemmodel_index_callback = nullptr;
    QAbstractItemModel_Parent_Callback qabstractitemmodel_parent_callback = nullptr;
    QAbstractItemModel_Sibling_Callback qabstractitemmodel_sibling_callback = nullptr;
    QAbstractItemModel_RowCount_Callback qabstractitemmodel_rowcount_callback = nullptr;
    QAbstractItemModel_ColumnCount_Callback qabstractitemmodel_columncount_callback = nullptr;
    QAbstractItemModel_HasChildren_Callback qabstractitemmodel_haschildren_callback = nullptr;
    QAbstractItemModel_Data_Callback qabstractitemmodel_data_callback = nullptr;
    QAbstractItemModel_SetData_Callback qabstractitemmodel_setdata_callback = nullptr;
    QAbstractItemModel_HeaderData_Callback qabstractitemmodel_headerdata_callback = nullptr;
    QAbstractItemModel_SetHeaderData_Callback qabstractitemmodel_setheaderdata_callback = nullptr;
    QAbstractItemModel_ItemData_Callback qabstractitemmodel_itemdata_callback = nullptr;
    QAbstractItemModel_SetItemData_Callback qabstractitemmodel_setitemdata_callback = nullptr;
    QAbstractItemModel_ClearItemData_Callback qabstractitemmodel_clearitemdata_callback = nullptr;
    QAbstractItemModel_MimeTypes_Callback qabstractitemmodel_mimetypes_callback = nullptr;
    QAbstractItemModel_MimeData_Callback qabstractitemmodel_mimedata_callback = nullptr;
    QAbstractItemModel_CanDropMimeData_Callback qabstractitemmodel_candropmimedata_callback = nullptr;
    QAbstractItemModel_DropMimeData_Callback qabstractitemmodel_dropmimedata_callback = nullptr;
    QAbstractItemModel_SupportedDropActions_Callback qabstractitemmodel_supporteddropactions_callback = nullptr;
    QAbstractItemModel_SupportedDragActions_Callback qabstractitemmodel_supporteddragactions_callback = nullptr;
    QAbstractItemModel_InsertRows_Callback qabstractitemmodel_insertrows_callback = nullptr;
    QAbstractItemModel_InsertColumns_Callback qabstractitemmodel_insertcolumns_callback = nullptr;
    QAbstractItemModel_RemoveRows_Callback qabstractitemmodel_removerows_callback = nullptr;
    QAbstractItemModel_RemoveColumns_Callback qabstractitemmodel_removecolumns_callback = nullptr;
    QAbstractItemModel_MoveRows_Callback qabstractitemmodel_moverows_callback = nullptr;
    QAbstractItemModel_MoveColumns_Callback qabstractitemmodel_movecolumns_callback = nullptr;
    QAbstractItemModel_FetchMore_Callback qabstractitemmodel_fetchmore_callback = nullptr;
    QAbstractItemModel_CanFetchMore_Callback qabstractitemmodel_canfetchmore_callback = nullptr;
    QAbstractItemModel_Flags_Callback qabstractitemmodel_flags_callback = nullptr;
    QAbstractItemModel_Sort_Callback qabstractitemmodel_sort_callback = nullptr;
    QAbstractItemModel_Buddy_Callback qabstractitemmodel_buddy_callback = nullptr;
    QAbstractItemModel_Match_Callback qabstractitemmodel_match_callback = nullptr;
    QAbstractItemModel_Span_Callback qabstractitemmodel_span_callback = nullptr;
    QAbstractItemModel_RoleNames_Callback qabstractitemmodel_rolenames_callback = nullptr;
    QAbstractItemModel_MultiData_Callback qabstractitemmodel_multidata_callback = nullptr;
    QAbstractItemModel_Submit_Callback qabstractitemmodel_submit_callback = nullptr;
    QAbstractItemModel_Revert_Callback qabstractitemmodel_revert_callback = nullptr;
    QAbstractItemModel_ResetInternalData_Callback qabstractitemmodel_resetinternaldata_callback = nullptr;
    QAbstractItemModel_Event_Callback qabstractitemmodel_event_callback = nullptr;
    QAbstractItemModel_EventFilter_Callback qabstractitemmodel_eventfilter_callback = nullptr;
    QAbstractItemModel_TimerEvent_Callback qabstractitemmodel_timerevent_callback = nullptr;
    QAbstractItemModel_ChildEvent_Callback qabstractitemmodel_childevent_callback = nullptr;
    QAbstractItemModel_CustomEvent_Callback qabstractitemmodel_customevent_callback = nullptr;
    QAbstractItemModel_ConnectNotify_Callback qabstractitemmodel_connectnotify_callback = nullptr;
    QAbstractItemModel_DisconnectNotify_Callback qabstractitemmodel_disconnectnotify_callback = nullptr;
    QAbstractItemModel_CreateIndex_Callback qabstractitemmodel_createindex_callback = nullptr;
    QAbstractItemModel_CreateIndex2_Callback qabstractitemmodel_createindex2_callback = nullptr;
    QAbstractItemModel_EncodeData_Callback qabstractitemmodel_encodedata_callback = nullptr;
    QAbstractItemModel_DecodeData_Callback qabstractitemmodel_decodedata_callback = nullptr;
    QAbstractItemModel_BeginInsertRows_Callback qabstractitemmodel_begininsertrows_callback = nullptr;
    QAbstractItemModel_EndInsertRows_Callback qabstractitemmodel_endinsertrows_callback = nullptr;
    QAbstractItemModel_BeginRemoveRows_Callback qabstractitemmodel_beginremoverows_callback = nullptr;
    QAbstractItemModel_EndRemoveRows_Callback qabstractitemmodel_endremoverows_callback = nullptr;
    QAbstractItemModel_BeginMoveRows_Callback qabstractitemmodel_beginmoverows_callback = nullptr;
    QAbstractItemModel_EndMoveRows_Callback qabstractitemmodel_endmoverows_callback = nullptr;
    QAbstractItemModel_BeginInsertColumns_Callback qabstractitemmodel_begininsertcolumns_callback = nullptr;
    QAbstractItemModel_EndInsertColumns_Callback qabstractitemmodel_endinsertcolumns_callback = nullptr;
    QAbstractItemModel_BeginRemoveColumns_Callback qabstractitemmodel_beginremovecolumns_callback = nullptr;
    QAbstractItemModel_EndRemoveColumns_Callback qabstractitemmodel_endremovecolumns_callback = nullptr;
    QAbstractItemModel_BeginMoveColumns_Callback qabstractitemmodel_beginmovecolumns_callback = nullptr;
    QAbstractItemModel_EndMoveColumns_Callback qabstractitemmodel_endmovecolumns_callback = nullptr;
    QAbstractItemModel_BeginResetModel_Callback qabstractitemmodel_beginresetmodel_callback = nullptr;
    QAbstractItemModel_EndResetModel_Callback qabstractitemmodel_endresetmodel_callback = nullptr;
    QAbstractItemModel_ChangePersistentIndex_Callback qabstractitemmodel_changepersistentindex_callback = nullptr;
    QAbstractItemModel_ChangePersistentIndexList_Callback qabstractitemmodel_changepersistentindexlist_callback = nullptr;
    QAbstractItemModel_PersistentIndexList_Callback qabstractitemmodel_persistentindexlist_callback = nullptr;
    QAbstractItemModel_CreateIndex3_Callback qabstractitemmodel_createindex3_callback = nullptr;
    QAbstractItemModel_Sender_Callback qabstractitemmodel_sender_callback = nullptr;
    QAbstractItemModel_SenderSignalIndex_Callback qabstractitemmodel_sendersignalindex_callback = nullptr;
    QAbstractItemModel_Receivers_Callback qabstractitemmodel_receivers_callback = nullptr;
    QAbstractItemModel_IsSignalConnected_Callback qabstractitemmodel_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qabstractitemmodel_metaobject_isbase = false;
    mutable bool qabstractitemmodel_metacast_isbase = false;
    mutable bool qabstractitemmodel_metacall_isbase = false;
    mutable bool qabstractitemmodel_index_isbase = false;
    mutable bool qabstractitemmodel_parent_isbase = false;
    mutable bool qabstractitemmodel_sibling_isbase = false;
    mutable bool qabstractitemmodel_rowcount_isbase = false;
    mutable bool qabstractitemmodel_columncount_isbase = false;
    mutable bool qabstractitemmodel_haschildren_isbase = false;
    mutable bool qabstractitemmodel_data_isbase = false;
    mutable bool qabstractitemmodel_setdata_isbase = false;
    mutable bool qabstractitemmodel_headerdata_isbase = false;
    mutable bool qabstractitemmodel_setheaderdata_isbase = false;
    mutable bool qabstractitemmodel_itemdata_isbase = false;
    mutable bool qabstractitemmodel_setitemdata_isbase = false;
    mutable bool qabstractitemmodel_clearitemdata_isbase = false;
    mutable bool qabstractitemmodel_mimetypes_isbase = false;
    mutable bool qabstractitemmodel_mimedata_isbase = false;
    mutable bool qabstractitemmodel_candropmimedata_isbase = false;
    mutable bool qabstractitemmodel_dropmimedata_isbase = false;
    mutable bool qabstractitemmodel_supporteddropactions_isbase = false;
    mutable bool qabstractitemmodel_supporteddragactions_isbase = false;
    mutable bool qabstractitemmodel_insertrows_isbase = false;
    mutable bool qabstractitemmodel_insertcolumns_isbase = false;
    mutable bool qabstractitemmodel_removerows_isbase = false;
    mutable bool qabstractitemmodel_removecolumns_isbase = false;
    mutable bool qabstractitemmodel_moverows_isbase = false;
    mutable bool qabstractitemmodel_movecolumns_isbase = false;
    mutable bool qabstractitemmodel_fetchmore_isbase = false;
    mutable bool qabstractitemmodel_canfetchmore_isbase = false;
    mutable bool qabstractitemmodel_flags_isbase = false;
    mutable bool qabstractitemmodel_sort_isbase = false;
    mutable bool qabstractitemmodel_buddy_isbase = false;
    mutable bool qabstractitemmodel_match_isbase = false;
    mutable bool qabstractitemmodel_span_isbase = false;
    mutable bool qabstractitemmodel_rolenames_isbase = false;
    mutable bool qabstractitemmodel_multidata_isbase = false;
    mutable bool qabstractitemmodel_submit_isbase = false;
    mutable bool qabstractitemmodel_revert_isbase = false;
    mutable bool qabstractitemmodel_resetinternaldata_isbase = false;
    mutable bool qabstractitemmodel_event_isbase = false;
    mutable bool qabstractitemmodel_eventfilter_isbase = false;
    mutable bool qabstractitemmodel_timerevent_isbase = false;
    mutable bool qabstractitemmodel_childevent_isbase = false;
    mutable bool qabstractitemmodel_customevent_isbase = false;
    mutable bool qabstractitemmodel_connectnotify_isbase = false;
    mutable bool qabstractitemmodel_disconnectnotify_isbase = false;
    mutable bool qabstractitemmodel_createindex_isbase = false;
    mutable bool qabstractitemmodel_createindex2_isbase = false;
    mutable bool qabstractitemmodel_encodedata_isbase = false;
    mutable bool qabstractitemmodel_decodedata_isbase = false;
    mutable bool qabstractitemmodel_begininsertrows_isbase = false;
    mutable bool qabstractitemmodel_endinsertrows_isbase = false;
    mutable bool qabstractitemmodel_beginremoverows_isbase = false;
    mutable bool qabstractitemmodel_endremoverows_isbase = false;
    mutable bool qabstractitemmodel_beginmoverows_isbase = false;
    mutable bool qabstractitemmodel_endmoverows_isbase = false;
    mutable bool qabstractitemmodel_begininsertcolumns_isbase = false;
    mutable bool qabstractitemmodel_endinsertcolumns_isbase = false;
    mutable bool qabstractitemmodel_beginremovecolumns_isbase = false;
    mutable bool qabstractitemmodel_endremovecolumns_isbase = false;
    mutable bool qabstractitemmodel_beginmovecolumns_isbase = false;
    mutable bool qabstractitemmodel_endmovecolumns_isbase = false;
    mutable bool qabstractitemmodel_beginresetmodel_isbase = false;
    mutable bool qabstractitemmodel_endresetmodel_isbase = false;
    mutable bool qabstractitemmodel_changepersistentindex_isbase = false;
    mutable bool qabstractitemmodel_changepersistentindexlist_isbase = false;
    mutable bool qabstractitemmodel_persistentindexlist_isbase = false;
    mutable bool qabstractitemmodel_createindex3_isbase = false;
    mutable bool qabstractitemmodel_sender_isbase = false;
    mutable bool qabstractitemmodel_sendersignalindex_isbase = false;
    mutable bool qabstractitemmodel_receivers_isbase = false;
    mutable bool qabstractitemmodel_issignalconnected_isbase = false;

  public:
    VirtualQAbstractItemModel() : QAbstractItemModel() {};
    VirtualQAbstractItemModel(QObject* parent) : QAbstractItemModel(parent) {};

    // Callback setters
    inline void setQAbstractItemModel_MetaObject_Callback(QAbstractItemModel_MetaObject_Callback cb) { qabstractitemmodel_metaobject_callback = cb; }
    inline void setQAbstractItemModel_Metacast_Callback(QAbstractItemModel_Metacast_Callback cb) { qabstractitemmodel_metacast_callback = cb; }
    inline void setQAbstractItemModel_Metacall_Callback(QAbstractItemModel_Metacall_Callback cb) { qabstractitemmodel_metacall_callback = cb; }
    inline void setQAbstractItemModel_Index_Callback(QAbstractItemModel_Index_Callback cb) { qabstractitemmodel_index_callback = cb; }
    inline void setQAbstractItemModel_Parent_Callback(QAbstractItemModel_Parent_Callback cb) { qabstractitemmodel_parent_callback = cb; }
    inline void setQAbstractItemModel_Sibling_Callback(QAbstractItemModel_Sibling_Callback cb) { qabstractitemmodel_sibling_callback = cb; }
    inline void setQAbstractItemModel_RowCount_Callback(QAbstractItemModel_RowCount_Callback cb) { qabstractitemmodel_rowcount_callback = cb; }
    inline void setQAbstractItemModel_ColumnCount_Callback(QAbstractItemModel_ColumnCount_Callback cb) { qabstractitemmodel_columncount_callback = cb; }
    inline void setQAbstractItemModel_HasChildren_Callback(QAbstractItemModel_HasChildren_Callback cb) { qabstractitemmodel_haschildren_callback = cb; }
    inline void setQAbstractItemModel_Data_Callback(QAbstractItemModel_Data_Callback cb) { qabstractitemmodel_data_callback = cb; }
    inline void setQAbstractItemModel_SetData_Callback(QAbstractItemModel_SetData_Callback cb) { qabstractitemmodel_setdata_callback = cb; }
    inline void setQAbstractItemModel_HeaderData_Callback(QAbstractItemModel_HeaderData_Callback cb) { qabstractitemmodel_headerdata_callback = cb; }
    inline void setQAbstractItemModel_SetHeaderData_Callback(QAbstractItemModel_SetHeaderData_Callback cb) { qabstractitemmodel_setheaderdata_callback = cb; }
    inline void setQAbstractItemModel_ItemData_Callback(QAbstractItemModel_ItemData_Callback cb) { qabstractitemmodel_itemdata_callback = cb; }
    inline void setQAbstractItemModel_SetItemData_Callback(QAbstractItemModel_SetItemData_Callback cb) { qabstractitemmodel_setitemdata_callback = cb; }
    inline void setQAbstractItemModel_ClearItemData_Callback(QAbstractItemModel_ClearItemData_Callback cb) { qabstractitemmodel_clearitemdata_callback = cb; }
    inline void setQAbstractItemModel_MimeTypes_Callback(QAbstractItemModel_MimeTypes_Callback cb) { qabstractitemmodel_mimetypes_callback = cb; }
    inline void setQAbstractItemModel_MimeData_Callback(QAbstractItemModel_MimeData_Callback cb) { qabstractitemmodel_mimedata_callback = cb; }
    inline void setQAbstractItemModel_CanDropMimeData_Callback(QAbstractItemModel_CanDropMimeData_Callback cb) { qabstractitemmodel_candropmimedata_callback = cb; }
    inline void setQAbstractItemModel_DropMimeData_Callback(QAbstractItemModel_DropMimeData_Callback cb) { qabstractitemmodel_dropmimedata_callback = cb; }
    inline void setQAbstractItemModel_SupportedDropActions_Callback(QAbstractItemModel_SupportedDropActions_Callback cb) { qabstractitemmodel_supporteddropactions_callback = cb; }
    inline void setQAbstractItemModel_SupportedDragActions_Callback(QAbstractItemModel_SupportedDragActions_Callback cb) { qabstractitemmodel_supporteddragactions_callback = cb; }
    inline void setQAbstractItemModel_InsertRows_Callback(QAbstractItemModel_InsertRows_Callback cb) { qabstractitemmodel_insertrows_callback = cb; }
    inline void setQAbstractItemModel_InsertColumns_Callback(QAbstractItemModel_InsertColumns_Callback cb) { qabstractitemmodel_insertcolumns_callback = cb; }
    inline void setQAbstractItemModel_RemoveRows_Callback(QAbstractItemModel_RemoveRows_Callback cb) { qabstractitemmodel_removerows_callback = cb; }
    inline void setQAbstractItemModel_RemoveColumns_Callback(QAbstractItemModel_RemoveColumns_Callback cb) { qabstractitemmodel_removecolumns_callback = cb; }
    inline void setQAbstractItemModel_MoveRows_Callback(QAbstractItemModel_MoveRows_Callback cb) { qabstractitemmodel_moverows_callback = cb; }
    inline void setQAbstractItemModel_MoveColumns_Callback(QAbstractItemModel_MoveColumns_Callback cb) { qabstractitemmodel_movecolumns_callback = cb; }
    inline void setQAbstractItemModel_FetchMore_Callback(QAbstractItemModel_FetchMore_Callback cb) { qabstractitemmodel_fetchmore_callback = cb; }
    inline void setQAbstractItemModel_CanFetchMore_Callback(QAbstractItemModel_CanFetchMore_Callback cb) { qabstractitemmodel_canfetchmore_callback = cb; }
    inline void setQAbstractItemModel_Flags_Callback(QAbstractItemModel_Flags_Callback cb) { qabstractitemmodel_flags_callback = cb; }
    inline void setQAbstractItemModel_Sort_Callback(QAbstractItemModel_Sort_Callback cb) { qabstractitemmodel_sort_callback = cb; }
    inline void setQAbstractItemModel_Buddy_Callback(QAbstractItemModel_Buddy_Callback cb) { qabstractitemmodel_buddy_callback = cb; }
    inline void setQAbstractItemModel_Match_Callback(QAbstractItemModel_Match_Callback cb) { qabstractitemmodel_match_callback = cb; }
    inline void setQAbstractItemModel_Span_Callback(QAbstractItemModel_Span_Callback cb) { qabstractitemmodel_span_callback = cb; }
    inline void setQAbstractItemModel_RoleNames_Callback(QAbstractItemModel_RoleNames_Callback cb) { qabstractitemmodel_rolenames_callback = cb; }
    inline void setQAbstractItemModel_MultiData_Callback(QAbstractItemModel_MultiData_Callback cb) { qabstractitemmodel_multidata_callback = cb; }
    inline void setQAbstractItemModel_Submit_Callback(QAbstractItemModel_Submit_Callback cb) { qabstractitemmodel_submit_callback = cb; }
    inline void setQAbstractItemModel_Revert_Callback(QAbstractItemModel_Revert_Callback cb) { qabstractitemmodel_revert_callback = cb; }
    inline void setQAbstractItemModel_ResetInternalData_Callback(QAbstractItemModel_ResetInternalData_Callback cb) { qabstractitemmodel_resetinternaldata_callback = cb; }
    inline void setQAbstractItemModel_Event_Callback(QAbstractItemModel_Event_Callback cb) { qabstractitemmodel_event_callback = cb; }
    inline void setQAbstractItemModel_EventFilter_Callback(QAbstractItemModel_EventFilter_Callback cb) { qabstractitemmodel_eventfilter_callback = cb; }
    inline void setQAbstractItemModel_TimerEvent_Callback(QAbstractItemModel_TimerEvent_Callback cb) { qabstractitemmodel_timerevent_callback = cb; }
    inline void setQAbstractItemModel_ChildEvent_Callback(QAbstractItemModel_ChildEvent_Callback cb) { qabstractitemmodel_childevent_callback = cb; }
    inline void setQAbstractItemModel_CustomEvent_Callback(QAbstractItemModel_CustomEvent_Callback cb) { qabstractitemmodel_customevent_callback = cb; }
    inline void setQAbstractItemModel_ConnectNotify_Callback(QAbstractItemModel_ConnectNotify_Callback cb) { qabstractitemmodel_connectnotify_callback = cb; }
    inline void setQAbstractItemModel_DisconnectNotify_Callback(QAbstractItemModel_DisconnectNotify_Callback cb) { qabstractitemmodel_disconnectnotify_callback = cb; }
    inline void setQAbstractItemModel_CreateIndex_Callback(QAbstractItemModel_CreateIndex_Callback cb) { qabstractitemmodel_createindex_callback = cb; }
    inline void setQAbstractItemModel_CreateIndex2_Callback(QAbstractItemModel_CreateIndex2_Callback cb) { qabstractitemmodel_createindex2_callback = cb; }
    inline void setQAbstractItemModel_EncodeData_Callback(QAbstractItemModel_EncodeData_Callback cb) { qabstractitemmodel_encodedata_callback = cb; }
    inline void setQAbstractItemModel_DecodeData_Callback(QAbstractItemModel_DecodeData_Callback cb) { qabstractitemmodel_decodedata_callback = cb; }
    inline void setQAbstractItemModel_BeginInsertRows_Callback(QAbstractItemModel_BeginInsertRows_Callback cb) { qabstractitemmodel_begininsertrows_callback = cb; }
    inline void setQAbstractItemModel_EndInsertRows_Callback(QAbstractItemModel_EndInsertRows_Callback cb) { qabstractitemmodel_endinsertrows_callback = cb; }
    inline void setQAbstractItemModel_BeginRemoveRows_Callback(QAbstractItemModel_BeginRemoveRows_Callback cb) { qabstractitemmodel_beginremoverows_callback = cb; }
    inline void setQAbstractItemModel_EndRemoveRows_Callback(QAbstractItemModel_EndRemoveRows_Callback cb) { qabstractitemmodel_endremoverows_callback = cb; }
    inline void setQAbstractItemModel_BeginMoveRows_Callback(QAbstractItemModel_BeginMoveRows_Callback cb) { qabstractitemmodel_beginmoverows_callback = cb; }
    inline void setQAbstractItemModel_EndMoveRows_Callback(QAbstractItemModel_EndMoveRows_Callback cb) { qabstractitemmodel_endmoverows_callback = cb; }
    inline void setQAbstractItemModel_BeginInsertColumns_Callback(QAbstractItemModel_BeginInsertColumns_Callback cb) { qabstractitemmodel_begininsertcolumns_callback = cb; }
    inline void setQAbstractItemModel_EndInsertColumns_Callback(QAbstractItemModel_EndInsertColumns_Callback cb) { qabstractitemmodel_endinsertcolumns_callback = cb; }
    inline void setQAbstractItemModel_BeginRemoveColumns_Callback(QAbstractItemModel_BeginRemoveColumns_Callback cb) { qabstractitemmodel_beginremovecolumns_callback = cb; }
    inline void setQAbstractItemModel_EndRemoveColumns_Callback(QAbstractItemModel_EndRemoveColumns_Callback cb) { qabstractitemmodel_endremovecolumns_callback = cb; }
    inline void setQAbstractItemModel_BeginMoveColumns_Callback(QAbstractItemModel_BeginMoveColumns_Callback cb) { qabstractitemmodel_beginmovecolumns_callback = cb; }
    inline void setQAbstractItemModel_EndMoveColumns_Callback(QAbstractItemModel_EndMoveColumns_Callback cb) { qabstractitemmodel_endmovecolumns_callback = cb; }
    inline void setQAbstractItemModel_BeginResetModel_Callback(QAbstractItemModel_BeginResetModel_Callback cb) { qabstractitemmodel_beginresetmodel_callback = cb; }
    inline void setQAbstractItemModel_EndResetModel_Callback(QAbstractItemModel_EndResetModel_Callback cb) { qabstractitemmodel_endresetmodel_callback = cb; }
    inline void setQAbstractItemModel_ChangePersistentIndex_Callback(QAbstractItemModel_ChangePersistentIndex_Callback cb) { qabstractitemmodel_changepersistentindex_callback = cb; }
    inline void setQAbstractItemModel_ChangePersistentIndexList_Callback(QAbstractItemModel_ChangePersistentIndexList_Callback cb) { qabstractitemmodel_changepersistentindexlist_callback = cb; }
    inline void setQAbstractItemModel_PersistentIndexList_Callback(QAbstractItemModel_PersistentIndexList_Callback cb) { qabstractitemmodel_persistentindexlist_callback = cb; }
    inline void setQAbstractItemModel_CreateIndex3_Callback(QAbstractItemModel_CreateIndex3_Callback cb) { qabstractitemmodel_createindex3_callback = cb; }
    inline void setQAbstractItemModel_Sender_Callback(QAbstractItemModel_Sender_Callback cb) { qabstractitemmodel_sender_callback = cb; }
    inline void setQAbstractItemModel_SenderSignalIndex_Callback(QAbstractItemModel_SenderSignalIndex_Callback cb) { qabstractitemmodel_sendersignalindex_callback = cb; }
    inline void setQAbstractItemModel_Receivers_Callback(QAbstractItemModel_Receivers_Callback cb) { qabstractitemmodel_receivers_callback = cb; }
    inline void setQAbstractItemModel_IsSignalConnected_Callback(QAbstractItemModel_IsSignalConnected_Callback cb) { qabstractitemmodel_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQAbstractItemModel_MetaObject_IsBase(bool value) const { qabstractitemmodel_metaobject_isbase = value; }
    inline void setQAbstractItemModel_Metacast_IsBase(bool value) const { qabstractitemmodel_metacast_isbase = value; }
    inline void setQAbstractItemModel_Metacall_IsBase(bool value) const { qabstractitemmodel_metacall_isbase = value; }
    inline void setQAbstractItemModel_Index_IsBase(bool value) const { qabstractitemmodel_index_isbase = value; }
    inline void setQAbstractItemModel_Parent_IsBase(bool value) const { qabstractitemmodel_parent_isbase = value; }
    inline void setQAbstractItemModel_Sibling_IsBase(bool value) const { qabstractitemmodel_sibling_isbase = value; }
    inline void setQAbstractItemModel_RowCount_IsBase(bool value) const { qabstractitemmodel_rowcount_isbase = value; }
    inline void setQAbstractItemModel_ColumnCount_IsBase(bool value) const { qabstractitemmodel_columncount_isbase = value; }
    inline void setQAbstractItemModel_HasChildren_IsBase(bool value) const { qabstractitemmodel_haschildren_isbase = value; }
    inline void setQAbstractItemModel_Data_IsBase(bool value) const { qabstractitemmodel_data_isbase = value; }
    inline void setQAbstractItemModel_SetData_IsBase(bool value) const { qabstractitemmodel_setdata_isbase = value; }
    inline void setQAbstractItemModel_HeaderData_IsBase(bool value) const { qabstractitemmodel_headerdata_isbase = value; }
    inline void setQAbstractItemModel_SetHeaderData_IsBase(bool value) const { qabstractitemmodel_setheaderdata_isbase = value; }
    inline void setQAbstractItemModel_ItemData_IsBase(bool value) const { qabstractitemmodel_itemdata_isbase = value; }
    inline void setQAbstractItemModel_SetItemData_IsBase(bool value) const { qabstractitemmodel_setitemdata_isbase = value; }
    inline void setQAbstractItemModel_ClearItemData_IsBase(bool value) const { qabstractitemmodel_clearitemdata_isbase = value; }
    inline void setQAbstractItemModel_MimeTypes_IsBase(bool value) const { qabstractitemmodel_mimetypes_isbase = value; }
    inline void setQAbstractItemModel_MimeData_IsBase(bool value) const { qabstractitemmodel_mimedata_isbase = value; }
    inline void setQAbstractItemModel_CanDropMimeData_IsBase(bool value) const { qabstractitemmodel_candropmimedata_isbase = value; }
    inline void setQAbstractItemModel_DropMimeData_IsBase(bool value) const { qabstractitemmodel_dropmimedata_isbase = value; }
    inline void setQAbstractItemModel_SupportedDropActions_IsBase(bool value) const { qabstractitemmodel_supporteddropactions_isbase = value; }
    inline void setQAbstractItemModel_SupportedDragActions_IsBase(bool value) const { qabstractitemmodel_supporteddragactions_isbase = value; }
    inline void setQAbstractItemModel_InsertRows_IsBase(bool value) const { qabstractitemmodel_insertrows_isbase = value; }
    inline void setQAbstractItemModel_InsertColumns_IsBase(bool value) const { qabstractitemmodel_insertcolumns_isbase = value; }
    inline void setQAbstractItemModel_RemoveRows_IsBase(bool value) const { qabstractitemmodel_removerows_isbase = value; }
    inline void setQAbstractItemModel_RemoveColumns_IsBase(bool value) const { qabstractitemmodel_removecolumns_isbase = value; }
    inline void setQAbstractItemModel_MoveRows_IsBase(bool value) const { qabstractitemmodel_moverows_isbase = value; }
    inline void setQAbstractItemModel_MoveColumns_IsBase(bool value) const { qabstractitemmodel_movecolumns_isbase = value; }
    inline void setQAbstractItemModel_FetchMore_IsBase(bool value) const { qabstractitemmodel_fetchmore_isbase = value; }
    inline void setQAbstractItemModel_CanFetchMore_IsBase(bool value) const { qabstractitemmodel_canfetchmore_isbase = value; }
    inline void setQAbstractItemModel_Flags_IsBase(bool value) const { qabstractitemmodel_flags_isbase = value; }
    inline void setQAbstractItemModel_Sort_IsBase(bool value) const { qabstractitemmodel_sort_isbase = value; }
    inline void setQAbstractItemModel_Buddy_IsBase(bool value) const { qabstractitemmodel_buddy_isbase = value; }
    inline void setQAbstractItemModel_Match_IsBase(bool value) const { qabstractitemmodel_match_isbase = value; }
    inline void setQAbstractItemModel_Span_IsBase(bool value) const { qabstractitemmodel_span_isbase = value; }
    inline void setQAbstractItemModel_RoleNames_IsBase(bool value) const { qabstractitemmodel_rolenames_isbase = value; }
    inline void setQAbstractItemModel_MultiData_IsBase(bool value) const { qabstractitemmodel_multidata_isbase = value; }
    inline void setQAbstractItemModel_Submit_IsBase(bool value) const { qabstractitemmodel_submit_isbase = value; }
    inline void setQAbstractItemModel_Revert_IsBase(bool value) const { qabstractitemmodel_revert_isbase = value; }
    inline void setQAbstractItemModel_ResetInternalData_IsBase(bool value) const { qabstractitemmodel_resetinternaldata_isbase = value; }
    inline void setQAbstractItemModel_Event_IsBase(bool value) const { qabstractitemmodel_event_isbase = value; }
    inline void setQAbstractItemModel_EventFilter_IsBase(bool value) const { qabstractitemmodel_eventfilter_isbase = value; }
    inline void setQAbstractItemModel_TimerEvent_IsBase(bool value) const { qabstractitemmodel_timerevent_isbase = value; }
    inline void setQAbstractItemModel_ChildEvent_IsBase(bool value) const { qabstractitemmodel_childevent_isbase = value; }
    inline void setQAbstractItemModel_CustomEvent_IsBase(bool value) const { qabstractitemmodel_customevent_isbase = value; }
    inline void setQAbstractItemModel_ConnectNotify_IsBase(bool value) const { qabstractitemmodel_connectnotify_isbase = value; }
    inline void setQAbstractItemModel_DisconnectNotify_IsBase(bool value) const { qabstractitemmodel_disconnectnotify_isbase = value; }
    inline void setQAbstractItemModel_CreateIndex_IsBase(bool value) const { qabstractitemmodel_createindex_isbase = value; }
    inline void setQAbstractItemModel_CreateIndex2_IsBase(bool value) const { qabstractitemmodel_createindex2_isbase = value; }
    inline void setQAbstractItemModel_EncodeData_IsBase(bool value) const { qabstractitemmodel_encodedata_isbase = value; }
    inline void setQAbstractItemModel_DecodeData_IsBase(bool value) const { qabstractitemmodel_decodedata_isbase = value; }
    inline void setQAbstractItemModel_BeginInsertRows_IsBase(bool value) const { qabstractitemmodel_begininsertrows_isbase = value; }
    inline void setQAbstractItemModel_EndInsertRows_IsBase(bool value) const { qabstractitemmodel_endinsertrows_isbase = value; }
    inline void setQAbstractItemModel_BeginRemoveRows_IsBase(bool value) const { qabstractitemmodel_beginremoverows_isbase = value; }
    inline void setQAbstractItemModel_EndRemoveRows_IsBase(bool value) const { qabstractitemmodel_endremoverows_isbase = value; }
    inline void setQAbstractItemModel_BeginMoveRows_IsBase(bool value) const { qabstractitemmodel_beginmoverows_isbase = value; }
    inline void setQAbstractItemModel_EndMoveRows_IsBase(bool value) const { qabstractitemmodel_endmoverows_isbase = value; }
    inline void setQAbstractItemModel_BeginInsertColumns_IsBase(bool value) const { qabstractitemmodel_begininsertcolumns_isbase = value; }
    inline void setQAbstractItemModel_EndInsertColumns_IsBase(bool value) const { qabstractitemmodel_endinsertcolumns_isbase = value; }
    inline void setQAbstractItemModel_BeginRemoveColumns_IsBase(bool value) const { qabstractitemmodel_beginremovecolumns_isbase = value; }
    inline void setQAbstractItemModel_EndRemoveColumns_IsBase(bool value) const { qabstractitemmodel_endremovecolumns_isbase = value; }
    inline void setQAbstractItemModel_BeginMoveColumns_IsBase(bool value) const { qabstractitemmodel_beginmovecolumns_isbase = value; }
    inline void setQAbstractItemModel_EndMoveColumns_IsBase(bool value) const { qabstractitemmodel_endmovecolumns_isbase = value; }
    inline void setQAbstractItemModel_BeginResetModel_IsBase(bool value) const { qabstractitemmodel_beginresetmodel_isbase = value; }
    inline void setQAbstractItemModel_EndResetModel_IsBase(bool value) const { qabstractitemmodel_endresetmodel_isbase = value; }
    inline void setQAbstractItemModel_ChangePersistentIndex_IsBase(bool value) const { qabstractitemmodel_changepersistentindex_isbase = value; }
    inline void setQAbstractItemModel_ChangePersistentIndexList_IsBase(bool value) const { qabstractitemmodel_changepersistentindexlist_isbase = value; }
    inline void setQAbstractItemModel_PersistentIndexList_IsBase(bool value) const { qabstractitemmodel_persistentindexlist_isbase = value; }
    inline void setQAbstractItemModel_CreateIndex3_IsBase(bool value) const { qabstractitemmodel_createindex3_isbase = value; }
    inline void setQAbstractItemModel_Sender_IsBase(bool value) const { qabstractitemmodel_sender_isbase = value; }
    inline void setQAbstractItemModel_SenderSignalIndex_IsBase(bool value) const { qabstractitemmodel_sendersignalindex_isbase = value; }
    inline void setQAbstractItemModel_Receivers_IsBase(bool value) const { qabstractitemmodel_receivers_isbase = value; }
    inline void setQAbstractItemModel_IsSignalConnected_IsBase(bool value) const { qabstractitemmodel_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qabstractitemmodel_metaobject_isbase) {
            qabstractitemmodel_metaobject_isbase = false;
            return QAbstractItemModel::metaObject();
        }
        auto metaobject_cb = qabstractitemmodel_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QAbstractItemModel::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qabstractitemmodel_metacast_isbase) {
            qabstractitemmodel_metacast_isbase = false;
            return QAbstractItemModel::qt_metacast(param1);
        }
        auto metacast_cb = qabstractitemmodel_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QAbstractItemModel::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qabstractitemmodel_metacall_isbase) {
            qabstractitemmodel_metacall_isbase = false;
            return QAbstractItemModel::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qabstractitemmodel_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QAbstractItemModel::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
        auto index_cb = qabstractitemmodel_index_callback;
        if (index_cb) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            QModelIndex* callback_ret = index_cb(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex parent(const QModelIndex& child) const override {
        auto parent_cb = qabstractitemmodel_parent_callback;
        if (parent_cb) {
            const QModelIndex& child_ret = child;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&child_ret);

            QModelIndex* callback_ret = parent_cb(this, cbval1);
            return *callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
        if (qabstractitemmodel_sibling_isbase) {
            qabstractitemmodel_sibling_isbase = false;
            return QAbstractItemModel::sibling(row, column, idx);
        }
        auto sibling_cb = qabstractitemmodel_sibling_callback;
        if (sibling_cb) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& idx_ret = idx;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&idx_ret);

            QModelIndex* callback_ret = sibling_cb(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        }
        return QAbstractItemModel::sibling(row, column, idx);
    }

    // Virtual method for C ABI access and custom callback
    virtual int rowCount(const QModelIndex& parent) const override {
        auto rowcount_cb = qabstractitemmodel_rowcount_callback;
        if (rowcount_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            int callback_ret = rowcount_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual int columnCount(const QModelIndex& parent) const override {
        auto columncount_cb = qabstractitemmodel_columncount_callback;
        if (columncount_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            int callback_ret = columncount_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasChildren(const QModelIndex& parent) const override {
        if (qabstractitemmodel_haschildren_isbase) {
            qabstractitemmodel_haschildren_isbase = false;
            return QAbstractItemModel::hasChildren(parent);
        }
        auto haschildren_cb = qabstractitemmodel_haschildren_callback;
        if (haschildren_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = haschildren_cb(this, cbval1);
            return callback_ret;
        }
        return QAbstractItemModel::hasChildren(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(const QModelIndex& index, int role) const override {
        auto data_cb = qabstractitemmodel_data_callback;
        if (data_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = role;

            QVariant* callback_ret = data_cb(this, cbval1, cbval2);
            return *callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
        if (qabstractitemmodel_setdata_isbase) {
            qabstractitemmodel_setdata_isbase = false;
            return QAbstractItemModel::setData(index, value, role);
        }
        auto setdata_cb = qabstractitemmodel_setdata_callback;
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
        return QAbstractItemModel::setData(index, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
        if (qabstractitemmodel_headerdata_isbase) {
            qabstractitemmodel_headerdata_isbase = false;
            return QAbstractItemModel::headerData(section, orientation, role);
        }
        auto headerdata_cb = qabstractitemmodel_headerdata_callback;
        if (headerdata_cb) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            int cbval3 = role;

            QVariant* callback_ret = headerdata_cb(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        }
        return QAbstractItemModel::headerData(section, orientation, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
        if (qabstractitemmodel_setheaderdata_isbase) {
            qabstractitemmodel_setheaderdata_isbase = false;
            return QAbstractItemModel::setHeaderData(section, orientation, value, role);
        }
        auto setheaderdata_cb = qabstractitemmodel_setheaderdata_callback;
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
        return QAbstractItemModel::setHeaderData(section, orientation, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
        if (qabstractitemmodel_itemdata_isbase) {
            qabstractitemmodel_itemdata_isbase = false;
            return QAbstractItemModel::itemData(index);
        }
        auto itemdata_cb = qabstractitemmodel_itemdata_callback;
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
        return QAbstractItemModel::itemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
        if (qabstractitemmodel_setitemdata_isbase) {
            qabstractitemmodel_setitemdata_isbase = false;
            return QAbstractItemModel::setItemData(index, roles);
        }
        auto setitemdata_cb = qabstractitemmodel_setitemdata_callback;
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
        return QAbstractItemModel::setItemData(index, roles);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool clearItemData(const QModelIndex& index) override {
        if (qabstractitemmodel_clearitemdata_isbase) {
            qabstractitemmodel_clearitemdata_isbase = false;
            return QAbstractItemModel::clearItemData(index);
        }
        auto clearitemdata_cb = qabstractitemmodel_clearitemdata_callback;
        if (clearitemdata_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            bool callback_ret = clearitemdata_cb(this, cbval1);
            return callback_ret;
        }
        return QAbstractItemModel::clearItemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> mimeTypes() const override {
        if (qabstractitemmodel_mimetypes_isbase) {
            qabstractitemmodel_mimetypes_isbase = false;
            return QAbstractItemModel::mimeTypes();
        }
        auto mimetypes_cb = qabstractitemmodel_mimetypes_callback;
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
        return QAbstractItemModel::mimeTypes();
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* mimeData(const QList<QModelIndex>& indexes) const override {
        if (qabstractitemmodel_mimedata_isbase) {
            qabstractitemmodel_mimedata_isbase = false;
            return QAbstractItemModel::mimeData(indexes);
        }
        auto mimedata_cb = qabstractitemmodel_mimedata_callback;
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
        return QAbstractItemModel::mimeData(indexes);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
        if (qabstractitemmodel_candropmimedata_isbase) {
            qabstractitemmodel_candropmimedata_isbase = false;
            return QAbstractItemModel::canDropMimeData(data, action, row, column, parent);
        }
        auto candropmimedata_cb = qabstractitemmodel_candropmimedata_callback;
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
        return QAbstractItemModel::canDropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
        if (qabstractitemmodel_dropmimedata_isbase) {
            qabstractitemmodel_dropmimedata_isbase = false;
            return QAbstractItemModel::dropMimeData(data, action, row, column, parent);
        }
        auto dropmimedata_cb = qabstractitemmodel_dropmimedata_callback;
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
        return QAbstractItemModel::dropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (qabstractitemmodel_supporteddropactions_isbase) {
            qabstractitemmodel_supporteddropactions_isbase = false;
            return QAbstractItemModel::supportedDropActions();
        }
        auto supporteddropactions_cb = qabstractitemmodel_supporteddropactions_callback;
        if (supporteddropactions_cb) {
            int callback_ret = supporteddropactions_cb();
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return QAbstractItemModel::supportedDropActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDragActions() const override {
        if (qabstractitemmodel_supporteddragactions_isbase) {
            qabstractitemmodel_supporteddragactions_isbase = false;
            return QAbstractItemModel::supportedDragActions();
        }
        auto supporteddragactions_cb = qabstractitemmodel_supporteddragactions_callback;
        if (supporteddragactions_cb) {
            int callback_ret = supporteddragactions_cb();
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return QAbstractItemModel::supportedDragActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
        if (qabstractitemmodel_insertrows_isbase) {
            qabstractitemmodel_insertrows_isbase = false;
            return QAbstractItemModel::insertRows(row, count, parent);
        }
        auto insertrows_cb = qabstractitemmodel_insertrows_callback;
        if (insertrows_cb) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = insertrows_cb(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QAbstractItemModel::insertRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
        if (qabstractitemmodel_insertcolumns_isbase) {
            qabstractitemmodel_insertcolumns_isbase = false;
            return QAbstractItemModel::insertColumns(column, count, parent);
        }
        auto insertcolumns_cb = qabstractitemmodel_insertcolumns_callback;
        if (insertcolumns_cb) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = insertcolumns_cb(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QAbstractItemModel::insertColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
        if (qabstractitemmodel_removerows_isbase) {
            qabstractitemmodel_removerows_isbase = false;
            return QAbstractItemModel::removeRows(row, count, parent);
        }
        auto removerows_cb = qabstractitemmodel_removerows_callback;
        if (removerows_cb) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = removerows_cb(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QAbstractItemModel::removeRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
        if (qabstractitemmodel_removecolumns_isbase) {
            qabstractitemmodel_removecolumns_isbase = false;
            return QAbstractItemModel::removeColumns(column, count, parent);
        }
        auto removecolumns_cb = qabstractitemmodel_removecolumns_callback;
        if (removecolumns_cb) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = removecolumns_cb(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QAbstractItemModel::removeColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (qabstractitemmodel_moverows_isbase) {
            qabstractitemmodel_moverows_isbase = false;
            return QAbstractItemModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
        }
        auto moverows_cb = qabstractitemmodel_moverows_callback;
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
        return QAbstractItemModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (qabstractitemmodel_movecolumns_isbase) {
            qabstractitemmodel_movecolumns_isbase = false;
            return QAbstractItemModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
        }
        auto movecolumns_cb = qabstractitemmodel_movecolumns_callback;
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
        return QAbstractItemModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual void fetchMore(const QModelIndex& parent) override {
        if (qabstractitemmodel_fetchmore_isbase) {
            qabstractitemmodel_fetchmore_isbase = false;
            QAbstractItemModel::fetchMore(parent);
            return;
        }
        auto fetchmore_cb = qabstractitemmodel_fetchmore_callback;
        if (fetchmore_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            fetchmore_cb(this, cbval1);
            return;
        }
        QAbstractItemModel::fetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canFetchMore(const QModelIndex& parent) const override {
        if (qabstractitemmodel_canfetchmore_isbase) {
            qabstractitemmodel_canfetchmore_isbase = false;
            return QAbstractItemModel::canFetchMore(parent);
        }
        auto canfetchmore_cb = qabstractitemmodel_canfetchmore_callback;
        if (canfetchmore_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = canfetchmore_cb(this, cbval1);
            return callback_ret;
        }
        return QAbstractItemModel::canFetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
        if (qabstractitemmodel_flags_isbase) {
            qabstractitemmodel_flags_isbase = false;
            return QAbstractItemModel::flags(index);
        }
        auto flags_cb = qabstractitemmodel_flags_callback;
        if (flags_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            int callback_ret = flags_cb(this, cbval1);
            return static_cast<Qt::ItemFlags>(callback_ret);
        }
        return QAbstractItemModel::flags(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void sort(int column, Qt::SortOrder order) override {
        if (qabstractitemmodel_sort_isbase) {
            qabstractitemmodel_sort_isbase = false;
            QAbstractItemModel::sort(column, order);
            return;
        }
        auto sort_cb = qabstractitemmodel_sort_callback;
        if (sort_cb) {
            int cbval1 = column;
            int cbval2 = static_cast<int>(order);

            sort_cb(this, cbval1, cbval2);
            return;
        }
        QAbstractItemModel::sort(column, order);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex buddy(const QModelIndex& index) const override {
        if (qabstractitemmodel_buddy_isbase) {
            qabstractitemmodel_buddy_isbase = false;
            return QAbstractItemModel::buddy(index);
        }
        auto buddy_cb = qabstractitemmodel_buddy_callback;
        if (buddy_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QModelIndex* callback_ret = buddy_cb(this, cbval1);
            return *callback_ret;
        }
        return QAbstractItemModel::buddy(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
        if (qabstractitemmodel_match_isbase) {
            qabstractitemmodel_match_isbase = false;
            return QAbstractItemModel::match(start, role, value, hits, flags);
        }
        auto match_cb = qabstractitemmodel_match_callback;
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
        return QAbstractItemModel::match(start, role, value, hits, flags);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize span(const QModelIndex& index) const override {
        if (qabstractitemmodel_span_isbase) {
            qabstractitemmodel_span_isbase = false;
            return QAbstractItemModel::span(index);
        }
        auto span_cb = qabstractitemmodel_span_callback;
        if (span_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QSize* callback_ret = span_cb(this, cbval1);
            return *callback_ret;
        }
        return QAbstractItemModel::span(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QHash<int, QByteArray> roleNames() const override {
        if (qabstractitemmodel_rolenames_isbase) {
            qabstractitemmodel_rolenames_isbase = false;
            return QAbstractItemModel::roleNames();
        }
        auto rolenames_cb = qabstractitemmodel_rolenames_callback;
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
        return QAbstractItemModel::roleNames();
    }

    // Virtual method for C ABI access and custom callback
    virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
        if (qabstractitemmodel_multidata_isbase) {
            qabstractitemmodel_multidata_isbase = false;
            QAbstractItemModel::multiData(index, roleDataSpan);
            return;
        }
        auto multidata_cb = qabstractitemmodel_multidata_callback;
        if (multidata_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelRoleDataSpan* cbval2 = new QModelRoleDataSpan(roleDataSpan);

            multidata_cb(this, cbval1, cbval2);
            return;
        }
        QAbstractItemModel::multiData(index, roleDataSpan);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool submit() override {
        if (qabstractitemmodel_submit_isbase) {
            qabstractitemmodel_submit_isbase = false;
            return QAbstractItemModel::submit();
        }
        auto submit_cb = qabstractitemmodel_submit_callback;
        if (submit_cb) {
            bool callback_ret = submit_cb();
            return callback_ret;
        }
        return QAbstractItemModel::submit();
    }

    // Virtual method for C ABI access and custom callback
    virtual void revert() override {
        if (qabstractitemmodel_revert_isbase) {
            qabstractitemmodel_revert_isbase = false;
            QAbstractItemModel::revert();
            return;
        }
        auto revert_cb = qabstractitemmodel_revert_callback;
        if (revert_cb) {
            revert_cb();
            return;
        }
        QAbstractItemModel::revert();
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetInternalData() override {
        if (qabstractitemmodel_resetinternaldata_isbase) {
            qabstractitemmodel_resetinternaldata_isbase = false;
            QAbstractItemModel::resetInternalData();
            return;
        }
        auto resetinternaldata_cb = qabstractitemmodel_resetinternaldata_callback;
        if (resetinternaldata_cb) {
            resetinternaldata_cb();
            return;
        }
        QAbstractItemModel::resetInternalData();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qabstractitemmodel_event_isbase) {
            qabstractitemmodel_event_isbase = false;
            return QAbstractItemModel::event(event);
        }
        auto event_cb = qabstractitemmodel_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QAbstractItemModel::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qabstractitemmodel_eventfilter_isbase) {
            qabstractitemmodel_eventfilter_isbase = false;
            return QAbstractItemModel::eventFilter(watched, event);
        }
        auto eventfilter_cb = qabstractitemmodel_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QAbstractItemModel::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qabstractitemmodel_timerevent_isbase) {
            qabstractitemmodel_timerevent_isbase = false;
            QAbstractItemModel::timerEvent(event);
            return;
        }
        auto timerevent_cb = qabstractitemmodel_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QAbstractItemModel::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qabstractitemmodel_childevent_isbase) {
            qabstractitemmodel_childevent_isbase = false;
            QAbstractItemModel::childEvent(event);
            return;
        }
        auto childevent_cb = qabstractitemmodel_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QAbstractItemModel::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qabstractitemmodel_customevent_isbase) {
            qabstractitemmodel_customevent_isbase = false;
            QAbstractItemModel::customEvent(event);
            return;
        }
        auto customevent_cb = qabstractitemmodel_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QAbstractItemModel::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qabstractitemmodel_connectnotify_isbase) {
            qabstractitemmodel_connectnotify_isbase = false;
            QAbstractItemModel::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qabstractitemmodel_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QAbstractItemModel::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qabstractitemmodel_disconnectnotify_isbase) {
            qabstractitemmodel_disconnectnotify_isbase = false;
            QAbstractItemModel::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qabstractitemmodel_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QAbstractItemModel::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QModelIndex createIndex(int row, int column) const {
        if (qabstractitemmodel_createindex_isbase) {
            qabstractitemmodel_createindex_isbase = false;
            return QAbstractItemModel::createIndex(row, column);
        }
        auto createindex_cb = qabstractitemmodel_createindex_callback;
        if (createindex_cb) {
            int cbval1 = row;
            int cbval2 = column;

            QModelIndex* callback_ret = createindex_cb(this, cbval1, cbval2);
            return *callback_ret;
        }
        return QAbstractItemModel::createIndex(row, column);
    }

    // Virtual method for C ABI access and custom callback
    QModelIndex createIndex(int row, int column, quintptr id) const {
        if (qabstractitemmodel_createindex2_isbase) {
            qabstractitemmodel_createindex2_isbase = false;
            return QAbstractItemModel::createIndex(row, column, id);
        }
        auto createindex2_cb = qabstractitemmodel_createindex2_callback;
        if (createindex2_cb) {
            int cbval1 = row;
            int cbval2 = column;
            uintptr_t cbval3 = static_cast<uintptr_t>(id);

            QModelIndex* callback_ret = createindex2_cb(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        }
        return QAbstractItemModel::createIndex(row, column, id);
    }

    // Virtual method for C ABI access and custom callback
    void encodeData(const QList<QModelIndex>& indexes, QDataStream& stream) const {
        if (qabstractitemmodel_encodedata_isbase) {
            qabstractitemmodel_encodedata_isbase = false;
            QAbstractItemModel::encodeData(indexes, stream);
            return;
        }
        auto encodedata_cb = qabstractitemmodel_encodedata_callback;
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
        QAbstractItemModel::encodeData(indexes, stream);
    }

    // Virtual method for C ABI access and custom callback
    bool decodeData(int row, int column, const QModelIndex& parent, QDataStream& stream) {
        if (qabstractitemmodel_decodedata_isbase) {
            qabstractitemmodel_decodedata_isbase = false;
            return QAbstractItemModel::decodeData(row, column, parent, stream);
        }
        auto decodedata_cb = qabstractitemmodel_decodedata_callback;
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
        return QAbstractItemModel::decodeData(row, column, parent, stream);
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertRows(const QModelIndex& parent, int first, int last) {
        if (qabstractitemmodel_begininsertrows_isbase) {
            qabstractitemmodel_begininsertrows_isbase = false;
            QAbstractItemModel::beginInsertRows(parent, first, last);
            return;
        }
        auto begininsertrows_cb = qabstractitemmodel_begininsertrows_callback;
        if (begininsertrows_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            begininsertrows_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        QAbstractItemModel::beginInsertRows(parent, first, last);
    }

    // Virtual method for C ABI access and custom callback
    void endInsertRows() {
        if (qabstractitemmodel_endinsertrows_isbase) {
            qabstractitemmodel_endinsertrows_isbase = false;
            QAbstractItemModel::endInsertRows();
            return;
        }
        auto endinsertrows_cb = qabstractitemmodel_endinsertrows_callback;
        if (endinsertrows_cb) {
            endinsertrows_cb();
            return;
        }
        QAbstractItemModel::endInsertRows();
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveRows(const QModelIndex& parent, int first, int last) {
        if (qabstractitemmodel_beginremoverows_isbase) {
            qabstractitemmodel_beginremoverows_isbase = false;
            QAbstractItemModel::beginRemoveRows(parent, first, last);
            return;
        }
        auto beginremoverows_cb = qabstractitemmodel_beginremoverows_callback;
        if (beginremoverows_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            beginremoverows_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        QAbstractItemModel::beginRemoveRows(parent, first, last);
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveRows() {
        if (qabstractitemmodel_endremoverows_isbase) {
            qabstractitemmodel_endremoverows_isbase = false;
            QAbstractItemModel::endRemoveRows();
            return;
        }
        auto endremoverows_cb = qabstractitemmodel_endremoverows_callback;
        if (endremoverows_cb) {
            endremoverows_cb();
            return;
        }
        QAbstractItemModel::endRemoveRows();
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveRows(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationRow) {
        if (qabstractitemmodel_beginmoverows_isbase) {
            qabstractitemmodel_beginmoverows_isbase = false;
            return QAbstractItemModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
        }
        auto beginmoverows_cb = qabstractitemmodel_beginmoverows_callback;
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
        return QAbstractItemModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
    }

    // Virtual method for C ABI access and custom callback
    void endMoveRows() {
        if (qabstractitemmodel_endmoverows_isbase) {
            qabstractitemmodel_endmoverows_isbase = false;
            QAbstractItemModel::endMoveRows();
            return;
        }
        auto endmoverows_cb = qabstractitemmodel_endmoverows_callback;
        if (endmoverows_cb) {
            endmoverows_cb();
            return;
        }
        QAbstractItemModel::endMoveRows();
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertColumns(const QModelIndex& parent, int first, int last) {
        if (qabstractitemmodel_begininsertcolumns_isbase) {
            qabstractitemmodel_begininsertcolumns_isbase = false;
            QAbstractItemModel::beginInsertColumns(parent, first, last);
            return;
        }
        auto begininsertcolumns_cb = qabstractitemmodel_begininsertcolumns_callback;
        if (begininsertcolumns_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            begininsertcolumns_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        QAbstractItemModel::beginInsertColumns(parent, first, last);
    }

    // Virtual method for C ABI access and custom callback
    void endInsertColumns() {
        if (qabstractitemmodel_endinsertcolumns_isbase) {
            qabstractitemmodel_endinsertcolumns_isbase = false;
            QAbstractItemModel::endInsertColumns();
            return;
        }
        auto endinsertcolumns_cb = qabstractitemmodel_endinsertcolumns_callback;
        if (endinsertcolumns_cb) {
            endinsertcolumns_cb();
            return;
        }
        QAbstractItemModel::endInsertColumns();
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveColumns(const QModelIndex& parent, int first, int last) {
        if (qabstractitemmodel_beginremovecolumns_isbase) {
            qabstractitemmodel_beginremovecolumns_isbase = false;
            QAbstractItemModel::beginRemoveColumns(parent, first, last);
            return;
        }
        auto beginremovecolumns_cb = qabstractitemmodel_beginremovecolumns_callback;
        if (beginremovecolumns_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            beginremovecolumns_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        QAbstractItemModel::beginRemoveColumns(parent, first, last);
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveColumns() {
        if (qabstractitemmodel_endremovecolumns_isbase) {
            qabstractitemmodel_endremovecolumns_isbase = false;
            QAbstractItemModel::endRemoveColumns();
            return;
        }
        auto endremovecolumns_cb = qabstractitemmodel_endremovecolumns_callback;
        if (endremovecolumns_cb) {
            endremovecolumns_cb();
            return;
        }
        QAbstractItemModel::endRemoveColumns();
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveColumns(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationColumn) {
        if (qabstractitemmodel_beginmovecolumns_isbase) {
            qabstractitemmodel_beginmovecolumns_isbase = false;
            return QAbstractItemModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
        }
        auto beginmovecolumns_cb = qabstractitemmodel_beginmovecolumns_callback;
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
        return QAbstractItemModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
    }

    // Virtual method for C ABI access and custom callback
    void endMoveColumns() {
        if (qabstractitemmodel_endmovecolumns_isbase) {
            qabstractitemmodel_endmovecolumns_isbase = false;
            QAbstractItemModel::endMoveColumns();
            return;
        }
        auto endmovecolumns_cb = qabstractitemmodel_endmovecolumns_callback;
        if (endmovecolumns_cb) {
            endmovecolumns_cb();
            return;
        }
        QAbstractItemModel::endMoveColumns();
    }

    // Virtual method for C ABI access and custom callback
    void beginResetModel() {
        if (qabstractitemmodel_beginresetmodel_isbase) {
            qabstractitemmodel_beginresetmodel_isbase = false;
            QAbstractItemModel::beginResetModel();
            return;
        }
        auto beginresetmodel_cb = qabstractitemmodel_beginresetmodel_callback;
        if (beginresetmodel_cb) {
            beginresetmodel_cb();
            return;
        }
        QAbstractItemModel::beginResetModel();
    }

    // Virtual method for C ABI access and custom callback
    void endResetModel() {
        if (qabstractitemmodel_endresetmodel_isbase) {
            qabstractitemmodel_endresetmodel_isbase = false;
            QAbstractItemModel::endResetModel();
            return;
        }
        auto endresetmodel_cb = qabstractitemmodel_endresetmodel_callback;
        if (endresetmodel_cb) {
            endresetmodel_cb();
            return;
        }
        QAbstractItemModel::endResetModel();
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndex(const QModelIndex& from, const QModelIndex& to) {
        if (qabstractitemmodel_changepersistentindex_isbase) {
            qabstractitemmodel_changepersistentindex_isbase = false;
            QAbstractItemModel::changePersistentIndex(from, to);
            return;
        }
        auto changepersistentindex_cb = qabstractitemmodel_changepersistentindex_callback;
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
        QAbstractItemModel::changePersistentIndex(from, to);
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndexList(const QList<QModelIndex>& from, const QList<QModelIndex>& to) {
        if (qabstractitemmodel_changepersistentindexlist_isbase) {
            qabstractitemmodel_changepersistentindexlist_isbase = false;
            QAbstractItemModel::changePersistentIndexList(from, to);
            return;
        }
        auto changepersistentindexlist_cb = qabstractitemmodel_changepersistentindexlist_callback;
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
        QAbstractItemModel::changePersistentIndexList(from, to);
    }

    // Virtual method for C ABI access and custom callback
    QList<QModelIndex> persistentIndexList() const {
        if (qabstractitemmodel_persistentindexlist_isbase) {
            qabstractitemmodel_persistentindexlist_isbase = false;
            return QAbstractItemModel::persistentIndexList();
        }
        auto persistentindexlist_cb = qabstractitemmodel_persistentindexlist_callback;
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
        return QAbstractItemModel::persistentIndexList();
    }

    // Virtual method for C ABI access and custom callback
    QModelIndex createIndex(int row, int column, const void* data) const {
        if (qabstractitemmodel_createindex3_isbase) {
            qabstractitemmodel_createindex3_isbase = false;
            return QAbstractItemModel::createIndex(row, column, data);
        }
        auto createindex3_cb = qabstractitemmodel_createindex3_callback;
        if (createindex3_cb) {
            int cbval1 = row;
            int cbval2 = column;
            const void* cbval3 = (const void*)data;

            QModelIndex* callback_ret = createindex3_cb(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        }
        return QAbstractItemModel::createIndex(row, column, data);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qabstractitemmodel_sender_isbase) {
            qabstractitemmodel_sender_isbase = false;
            return QAbstractItemModel::sender();
        }
        auto sender_cb = qabstractitemmodel_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QAbstractItemModel::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qabstractitemmodel_sendersignalindex_isbase) {
            qabstractitemmodel_sendersignalindex_isbase = false;
            return QAbstractItemModel::senderSignalIndex();
        }
        auto sendersignalindex_cb = qabstractitemmodel_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QAbstractItemModel::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qabstractitemmodel_receivers_isbase) {
            qabstractitemmodel_receivers_isbase = false;
            return QAbstractItemModel::receivers(signal);
        }
        auto receivers_cb = qabstractitemmodel_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QAbstractItemModel::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qabstractitemmodel_issignalconnected_isbase) {
            qabstractitemmodel_issignalconnected_isbase = false;
            return QAbstractItemModel::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qabstractitemmodel_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QAbstractItemModel::isSignalConnected(signal);
    }

    // Friend functions
    friend void QAbstractItemModel_ResetInternalData(QAbstractItemModel* self);
    friend void QAbstractItemModel_SuperResetInternalData(QAbstractItemModel* self);
    friend void QAbstractItemModel_TimerEvent(QAbstractItemModel* self, QTimerEvent* event);
    friend void QAbstractItemModel_SuperTimerEvent(QAbstractItemModel* self, QTimerEvent* event);
    friend void QAbstractItemModel_ChildEvent(QAbstractItemModel* self, QChildEvent* event);
    friend void QAbstractItemModel_SuperChildEvent(QAbstractItemModel* self, QChildEvent* event);
    friend void QAbstractItemModel_CustomEvent(QAbstractItemModel* self, QEvent* event);
    friend void QAbstractItemModel_SuperCustomEvent(QAbstractItemModel* self, QEvent* event);
    friend void QAbstractItemModel_ConnectNotify(QAbstractItemModel* self, const QMetaMethod* signal);
    friend void QAbstractItemModel_SuperConnectNotify(QAbstractItemModel* self, const QMetaMethod* signal);
    friend void QAbstractItemModel_DisconnectNotify(QAbstractItemModel* self, const QMetaMethod* signal);
    friend void QAbstractItemModel_SuperDisconnectNotify(QAbstractItemModel* self, const QMetaMethod* signal);
    friend QModelIndex* QAbstractItemModel_CreateIndex(const QAbstractItemModel* self, int row, int column);
    friend QModelIndex* QAbstractItemModel_SuperCreateIndex(const QAbstractItemModel* self, int row, int column);
    friend QModelIndex* QAbstractItemModel_CreateIndex2(const QAbstractItemModel* self, int row, int column, uintptr_t id);
    friend QModelIndex* QAbstractItemModel_SuperCreateIndex2(const QAbstractItemModel* self, int row, int column, uintptr_t id);
    friend void QAbstractItemModel_EncodeData(const QAbstractItemModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
    friend void QAbstractItemModel_SuperEncodeData(const QAbstractItemModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
    friend bool QAbstractItemModel_DecodeData(QAbstractItemModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
    friend bool QAbstractItemModel_SuperDecodeData(QAbstractItemModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
    friend void QAbstractItemModel_BeginInsertRows(QAbstractItemModel* self, const QModelIndex* parent, int first, int last);
    friend void QAbstractItemModel_SuperBeginInsertRows(QAbstractItemModel* self, const QModelIndex* parent, int first, int last);
    friend void QAbstractItemModel_EndInsertRows(QAbstractItemModel* self);
    friend void QAbstractItemModel_SuperEndInsertRows(QAbstractItemModel* self);
    friend void QAbstractItemModel_BeginRemoveRows(QAbstractItemModel* self, const QModelIndex* parent, int first, int last);
    friend void QAbstractItemModel_SuperBeginRemoveRows(QAbstractItemModel* self, const QModelIndex* parent, int first, int last);
    friend void QAbstractItemModel_EndRemoveRows(QAbstractItemModel* self);
    friend void QAbstractItemModel_SuperEndRemoveRows(QAbstractItemModel* self);
    friend bool QAbstractItemModel_BeginMoveRows(QAbstractItemModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
    friend bool QAbstractItemModel_SuperBeginMoveRows(QAbstractItemModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
    friend void QAbstractItemModel_EndMoveRows(QAbstractItemModel* self);
    friend void QAbstractItemModel_SuperEndMoveRows(QAbstractItemModel* self);
    friend void QAbstractItemModel_BeginInsertColumns(QAbstractItemModel* self, const QModelIndex* parent, int first, int last);
    friend void QAbstractItemModel_SuperBeginInsertColumns(QAbstractItemModel* self, const QModelIndex* parent, int first, int last);
    friend void QAbstractItemModel_EndInsertColumns(QAbstractItemModel* self);
    friend void QAbstractItemModel_SuperEndInsertColumns(QAbstractItemModel* self);
    friend void QAbstractItemModel_BeginRemoveColumns(QAbstractItemModel* self, const QModelIndex* parent, int first, int last);
    friend void QAbstractItemModel_SuperBeginRemoveColumns(QAbstractItemModel* self, const QModelIndex* parent, int first, int last);
    friend void QAbstractItemModel_EndRemoveColumns(QAbstractItemModel* self);
    friend void QAbstractItemModel_SuperEndRemoveColumns(QAbstractItemModel* self);
    friend bool QAbstractItemModel_BeginMoveColumns(QAbstractItemModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
    friend bool QAbstractItemModel_SuperBeginMoveColumns(QAbstractItemModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
    friend void QAbstractItemModel_EndMoveColumns(QAbstractItemModel* self);
    friend void QAbstractItemModel_SuperEndMoveColumns(QAbstractItemModel* self);
    friend void QAbstractItemModel_BeginResetModel(QAbstractItemModel* self);
    friend void QAbstractItemModel_SuperBeginResetModel(QAbstractItemModel* self);
    friend void QAbstractItemModel_EndResetModel(QAbstractItemModel* self);
    friend void QAbstractItemModel_SuperEndResetModel(QAbstractItemModel* self);
    friend void QAbstractItemModel_ChangePersistentIndex(QAbstractItemModel* self, const QModelIndex* from, const QModelIndex* to);
    friend void QAbstractItemModel_SuperChangePersistentIndex(QAbstractItemModel* self, const QModelIndex* from, const QModelIndex* to);
    friend void QAbstractItemModel_ChangePersistentIndexList(QAbstractItemModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
    friend void QAbstractItemModel_SuperChangePersistentIndexList(QAbstractItemModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
    friend libqt_list /* of QModelIndex* */ QAbstractItemModel_PersistentIndexList(const QAbstractItemModel* self);
    friend libqt_list /* of QModelIndex* */ QAbstractItemModel_SuperPersistentIndexList(const QAbstractItemModel* self);
    friend QModelIndex* QAbstractItemModel_CreateIndex3(const QAbstractItemModel* self, int row, int column, const void* data);
    friend QModelIndex* QAbstractItemModel_SuperCreateIndex3(const QAbstractItemModel* self, int row, int column, const void* data);
    friend QObject* QAbstractItemModel_Sender(const QAbstractItemModel* self);
    friend QObject* QAbstractItemModel_SuperSender(const QAbstractItemModel* self);
    friend int QAbstractItemModel_SenderSignalIndex(const QAbstractItemModel* self);
    friend int QAbstractItemModel_SuperSenderSignalIndex(const QAbstractItemModel* self);
    friend int QAbstractItemModel_Receivers(const QAbstractItemModel* self, const char* signal);
    friend int QAbstractItemModel_SuperReceivers(const QAbstractItemModel* self, const char* signal);
    friend bool QAbstractItemModel_IsSignalConnected(const QAbstractItemModel* self, const QMetaMethod* signal);
    friend bool QAbstractItemModel_SuperIsSignalConnected(const QAbstractItemModel* self, const QMetaMethod* signal);
};

// This class is a subclass of QAbstractTableModel so that we can call protected methods
class VirtualQAbstractTableModel : public QAbstractTableModel {

  public:
    // Virtual class boolean flag
    bool isVirtualQAbstractTableModel = true;

    // Virtual class public types (including callbacks)
    using QAbstractTableModel_MetaObject_Callback = QMetaObject* (*)();
    using QAbstractTableModel_Metacast_Callback = void* (*)(QAbstractTableModel*, const char*);
    using QAbstractTableModel_Metacall_Callback = int (*)(QAbstractTableModel*, int, int, void**);
    using QAbstractTableModel_Index_Callback = QModelIndex* (*)(const QAbstractTableModel*, int, int, QModelIndex*);
    using QAbstractTableModel_Sibling_Callback = QModelIndex* (*)(const QAbstractTableModel*, int, int, QModelIndex*);
    using QAbstractTableModel_DropMimeData_Callback = bool (*)(QAbstractTableModel*, QMimeData*, int, int, int, QModelIndex*);
    using QAbstractTableModel_Flags_Callback = int (*)(const QAbstractTableModel*, QModelIndex*);
    using QAbstractTableModel_RowCount_Callback = int (*)(const QAbstractTableModel*, QModelIndex*);
    using QAbstractTableModel_ColumnCount_Callback = int (*)(const QAbstractTableModel*, QModelIndex*);
    using QAbstractTableModel_Data_Callback = QVariant* (*)(const QAbstractTableModel*, QModelIndex*, int);
    using QAbstractTableModel_SetData_Callback = bool (*)(QAbstractTableModel*, QModelIndex*, QVariant*, int);
    using QAbstractTableModel_HeaderData_Callback = QVariant* (*)(const QAbstractTableModel*, int, int, int);
    using QAbstractTableModel_SetHeaderData_Callback = bool (*)(QAbstractTableModel*, int, int, QVariant*, int);
    using QAbstractTableModel_ItemData_Callback = libqt_map /* of int to QVariant* */ (*)(const QAbstractTableModel*, QModelIndex*);
    using QAbstractTableModel_SetItemData_Callback = bool (*)(QAbstractTableModel*, QModelIndex*, libqt_map /* of int to QVariant* */);
    using QAbstractTableModel_ClearItemData_Callback = bool (*)(QAbstractTableModel*, QModelIndex*);
    using QAbstractTableModel_MimeTypes_Callback = const char** (*)();
    using QAbstractTableModel_MimeData_Callback = QMimeData* (*)(const QAbstractTableModel*, libqt_list /* of QModelIndex* */);
    using QAbstractTableModel_CanDropMimeData_Callback = bool (*)(const QAbstractTableModel*, QMimeData*, int, int, int, QModelIndex*);
    using QAbstractTableModel_SupportedDropActions_Callback = int (*)();
    using QAbstractTableModel_SupportedDragActions_Callback = int (*)();
    using QAbstractTableModel_InsertRows_Callback = bool (*)(QAbstractTableModel*, int, int, QModelIndex*);
    using QAbstractTableModel_InsertColumns_Callback = bool (*)(QAbstractTableModel*, int, int, QModelIndex*);
    using QAbstractTableModel_RemoveRows_Callback = bool (*)(QAbstractTableModel*, int, int, QModelIndex*);
    using QAbstractTableModel_RemoveColumns_Callback = bool (*)(QAbstractTableModel*, int, int, QModelIndex*);
    using QAbstractTableModel_MoveRows_Callback = bool (*)(QAbstractTableModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QAbstractTableModel_MoveColumns_Callback = bool (*)(QAbstractTableModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QAbstractTableModel_FetchMore_Callback = void (*)(QAbstractTableModel*, QModelIndex*);
    using QAbstractTableModel_CanFetchMore_Callback = bool (*)(const QAbstractTableModel*, QModelIndex*);
    using QAbstractTableModel_Sort_Callback = void (*)(QAbstractTableModel*, int, int);
    using QAbstractTableModel_Buddy_Callback = QModelIndex* (*)(const QAbstractTableModel*, QModelIndex*);
    using QAbstractTableModel_Match_Callback = libqt_list /* of QModelIndex* */ (*)(const QAbstractTableModel*, QModelIndex*, int, QVariant*, int, int);
    using QAbstractTableModel_Span_Callback = QSize* (*)(const QAbstractTableModel*, QModelIndex*);
    using QAbstractTableModel_RoleNames_Callback = libqt_map /* of int to libqt_string */ (*)();
    using QAbstractTableModel_MultiData_Callback = void (*)(const QAbstractTableModel*, QModelIndex*, QModelRoleDataSpan*);
    using QAbstractTableModel_Submit_Callback = bool (*)();
    using QAbstractTableModel_Revert_Callback = void (*)();
    using QAbstractTableModel_ResetInternalData_Callback = void (*)();
    using QAbstractTableModel_Event_Callback = bool (*)(QAbstractTableModel*, QEvent*);
    using QAbstractTableModel_EventFilter_Callback = bool (*)(QAbstractTableModel*, QObject*, QEvent*);
    using QAbstractTableModel_TimerEvent_Callback = void (*)(QAbstractTableModel*, QTimerEvent*);
    using QAbstractTableModel_ChildEvent_Callback = void (*)(QAbstractTableModel*, QChildEvent*);
    using QAbstractTableModel_CustomEvent_Callback = void (*)(QAbstractTableModel*, QEvent*);
    using QAbstractTableModel_ConnectNotify_Callback = void (*)(QAbstractTableModel*, QMetaMethod*);
    using QAbstractTableModel_DisconnectNotify_Callback = void (*)(QAbstractTableModel*, QMetaMethod*);
    using QAbstractTableModel_CreateIndex_Callback = QModelIndex* (*)(const QAbstractTableModel*, int, int);
    using QAbstractTableModel_EncodeData_Callback = void (*)(const QAbstractTableModel*, libqt_list /* of QModelIndex* */, QDataStream*);
    using QAbstractTableModel_DecodeData_Callback = bool (*)(QAbstractTableModel*, int, int, QModelIndex*, QDataStream*);
    using QAbstractTableModel_BeginInsertRows_Callback = void (*)(QAbstractTableModel*, QModelIndex*, int, int);
    using QAbstractTableModel_EndInsertRows_Callback = void (*)();
    using QAbstractTableModel_BeginRemoveRows_Callback = void (*)(QAbstractTableModel*, QModelIndex*, int, int);
    using QAbstractTableModel_EndRemoveRows_Callback = void (*)();
    using QAbstractTableModel_BeginMoveRows_Callback = bool (*)(QAbstractTableModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QAbstractTableModel_EndMoveRows_Callback = void (*)();
    using QAbstractTableModel_BeginInsertColumns_Callback = void (*)(QAbstractTableModel*, QModelIndex*, int, int);
    using QAbstractTableModel_EndInsertColumns_Callback = void (*)();
    using QAbstractTableModel_BeginRemoveColumns_Callback = void (*)(QAbstractTableModel*, QModelIndex*, int, int);
    using QAbstractTableModel_EndRemoveColumns_Callback = void (*)();
    using QAbstractTableModel_BeginMoveColumns_Callback = bool (*)(QAbstractTableModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QAbstractTableModel_EndMoveColumns_Callback = void (*)();
    using QAbstractTableModel_BeginResetModel_Callback = void (*)();
    using QAbstractTableModel_EndResetModel_Callback = void (*)();
    using QAbstractTableModel_ChangePersistentIndex_Callback = void (*)(QAbstractTableModel*, QModelIndex*, QModelIndex*);
    using QAbstractTableModel_ChangePersistentIndexList_Callback = void (*)(QAbstractTableModel*, libqt_list /* of QModelIndex* */, libqt_list /* of QModelIndex* */);
    using QAbstractTableModel_PersistentIndexList_Callback = libqt_list /* of QModelIndex* */ (*)();
    using QAbstractTableModel_Sender_Callback = QObject* (*)();
    using QAbstractTableModel_SenderSignalIndex_Callback = int (*)();
    using QAbstractTableModel_Receivers_Callback = int (*)(const QAbstractTableModel*, const char*);
    using QAbstractTableModel_IsSignalConnected_Callback = bool (*)(const QAbstractTableModel*, QMetaMethod*);

  protected:
    // Instance callback storage
    QAbstractTableModel_MetaObject_Callback qabstracttablemodel_metaobject_callback = nullptr;
    QAbstractTableModel_Metacast_Callback qabstracttablemodel_metacast_callback = nullptr;
    QAbstractTableModel_Metacall_Callback qabstracttablemodel_metacall_callback = nullptr;
    QAbstractTableModel_Index_Callback qabstracttablemodel_index_callback = nullptr;
    QAbstractTableModel_Sibling_Callback qabstracttablemodel_sibling_callback = nullptr;
    QAbstractTableModel_DropMimeData_Callback qabstracttablemodel_dropmimedata_callback = nullptr;
    QAbstractTableModel_Flags_Callback qabstracttablemodel_flags_callback = nullptr;
    QAbstractTableModel_RowCount_Callback qabstracttablemodel_rowcount_callback = nullptr;
    QAbstractTableModel_ColumnCount_Callback qabstracttablemodel_columncount_callback = nullptr;
    QAbstractTableModel_Data_Callback qabstracttablemodel_data_callback = nullptr;
    QAbstractTableModel_SetData_Callback qabstracttablemodel_setdata_callback = nullptr;
    QAbstractTableModel_HeaderData_Callback qabstracttablemodel_headerdata_callback = nullptr;
    QAbstractTableModel_SetHeaderData_Callback qabstracttablemodel_setheaderdata_callback = nullptr;
    QAbstractTableModel_ItemData_Callback qabstracttablemodel_itemdata_callback = nullptr;
    QAbstractTableModel_SetItemData_Callback qabstracttablemodel_setitemdata_callback = nullptr;
    QAbstractTableModel_ClearItemData_Callback qabstracttablemodel_clearitemdata_callback = nullptr;
    QAbstractTableModel_MimeTypes_Callback qabstracttablemodel_mimetypes_callback = nullptr;
    QAbstractTableModel_MimeData_Callback qabstracttablemodel_mimedata_callback = nullptr;
    QAbstractTableModel_CanDropMimeData_Callback qabstracttablemodel_candropmimedata_callback = nullptr;
    QAbstractTableModel_SupportedDropActions_Callback qabstracttablemodel_supporteddropactions_callback = nullptr;
    QAbstractTableModel_SupportedDragActions_Callback qabstracttablemodel_supporteddragactions_callback = nullptr;
    QAbstractTableModel_InsertRows_Callback qabstracttablemodel_insertrows_callback = nullptr;
    QAbstractTableModel_InsertColumns_Callback qabstracttablemodel_insertcolumns_callback = nullptr;
    QAbstractTableModel_RemoveRows_Callback qabstracttablemodel_removerows_callback = nullptr;
    QAbstractTableModel_RemoveColumns_Callback qabstracttablemodel_removecolumns_callback = nullptr;
    QAbstractTableModel_MoveRows_Callback qabstracttablemodel_moverows_callback = nullptr;
    QAbstractTableModel_MoveColumns_Callback qabstracttablemodel_movecolumns_callback = nullptr;
    QAbstractTableModel_FetchMore_Callback qabstracttablemodel_fetchmore_callback = nullptr;
    QAbstractTableModel_CanFetchMore_Callback qabstracttablemodel_canfetchmore_callback = nullptr;
    QAbstractTableModel_Sort_Callback qabstracttablemodel_sort_callback = nullptr;
    QAbstractTableModel_Buddy_Callback qabstracttablemodel_buddy_callback = nullptr;
    QAbstractTableModel_Match_Callback qabstracttablemodel_match_callback = nullptr;
    QAbstractTableModel_Span_Callback qabstracttablemodel_span_callback = nullptr;
    QAbstractTableModel_RoleNames_Callback qabstracttablemodel_rolenames_callback = nullptr;
    QAbstractTableModel_MultiData_Callback qabstracttablemodel_multidata_callback = nullptr;
    QAbstractTableModel_Submit_Callback qabstracttablemodel_submit_callback = nullptr;
    QAbstractTableModel_Revert_Callback qabstracttablemodel_revert_callback = nullptr;
    QAbstractTableModel_ResetInternalData_Callback qabstracttablemodel_resetinternaldata_callback = nullptr;
    QAbstractTableModel_Event_Callback qabstracttablemodel_event_callback = nullptr;
    QAbstractTableModel_EventFilter_Callback qabstracttablemodel_eventfilter_callback = nullptr;
    QAbstractTableModel_TimerEvent_Callback qabstracttablemodel_timerevent_callback = nullptr;
    QAbstractTableModel_ChildEvent_Callback qabstracttablemodel_childevent_callback = nullptr;
    QAbstractTableModel_CustomEvent_Callback qabstracttablemodel_customevent_callback = nullptr;
    QAbstractTableModel_ConnectNotify_Callback qabstracttablemodel_connectnotify_callback = nullptr;
    QAbstractTableModel_DisconnectNotify_Callback qabstracttablemodel_disconnectnotify_callback = nullptr;
    QAbstractTableModel_CreateIndex_Callback qabstracttablemodel_createindex_callback = nullptr;
    QAbstractTableModel_EncodeData_Callback qabstracttablemodel_encodedata_callback = nullptr;
    QAbstractTableModel_DecodeData_Callback qabstracttablemodel_decodedata_callback = nullptr;
    QAbstractTableModel_BeginInsertRows_Callback qabstracttablemodel_begininsertrows_callback = nullptr;
    QAbstractTableModel_EndInsertRows_Callback qabstracttablemodel_endinsertrows_callback = nullptr;
    QAbstractTableModel_BeginRemoveRows_Callback qabstracttablemodel_beginremoverows_callback = nullptr;
    QAbstractTableModel_EndRemoveRows_Callback qabstracttablemodel_endremoverows_callback = nullptr;
    QAbstractTableModel_BeginMoveRows_Callback qabstracttablemodel_beginmoverows_callback = nullptr;
    QAbstractTableModel_EndMoveRows_Callback qabstracttablemodel_endmoverows_callback = nullptr;
    QAbstractTableModel_BeginInsertColumns_Callback qabstracttablemodel_begininsertcolumns_callback = nullptr;
    QAbstractTableModel_EndInsertColumns_Callback qabstracttablemodel_endinsertcolumns_callback = nullptr;
    QAbstractTableModel_BeginRemoveColumns_Callback qabstracttablemodel_beginremovecolumns_callback = nullptr;
    QAbstractTableModel_EndRemoveColumns_Callback qabstracttablemodel_endremovecolumns_callback = nullptr;
    QAbstractTableModel_BeginMoveColumns_Callback qabstracttablemodel_beginmovecolumns_callback = nullptr;
    QAbstractTableModel_EndMoveColumns_Callback qabstracttablemodel_endmovecolumns_callback = nullptr;
    QAbstractTableModel_BeginResetModel_Callback qabstracttablemodel_beginresetmodel_callback = nullptr;
    QAbstractTableModel_EndResetModel_Callback qabstracttablemodel_endresetmodel_callback = nullptr;
    QAbstractTableModel_ChangePersistentIndex_Callback qabstracttablemodel_changepersistentindex_callback = nullptr;
    QAbstractTableModel_ChangePersistentIndexList_Callback qabstracttablemodel_changepersistentindexlist_callback = nullptr;
    QAbstractTableModel_PersistentIndexList_Callback qabstracttablemodel_persistentindexlist_callback = nullptr;
    QAbstractTableModel_Sender_Callback qabstracttablemodel_sender_callback = nullptr;
    QAbstractTableModel_SenderSignalIndex_Callback qabstracttablemodel_sendersignalindex_callback = nullptr;
    QAbstractTableModel_Receivers_Callback qabstracttablemodel_receivers_callback = nullptr;
    QAbstractTableModel_IsSignalConnected_Callback qabstracttablemodel_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qabstracttablemodel_metaobject_isbase = false;
    mutable bool qabstracttablemodel_metacast_isbase = false;
    mutable bool qabstracttablemodel_metacall_isbase = false;
    mutable bool qabstracttablemodel_index_isbase = false;
    mutable bool qabstracttablemodel_sibling_isbase = false;
    mutable bool qabstracttablemodel_dropmimedata_isbase = false;
    mutable bool qabstracttablemodel_flags_isbase = false;
    mutable bool qabstracttablemodel_rowcount_isbase = false;
    mutable bool qabstracttablemodel_columncount_isbase = false;
    mutable bool qabstracttablemodel_data_isbase = false;
    mutable bool qabstracttablemodel_setdata_isbase = false;
    mutable bool qabstracttablemodel_headerdata_isbase = false;
    mutable bool qabstracttablemodel_setheaderdata_isbase = false;
    mutable bool qabstracttablemodel_itemdata_isbase = false;
    mutable bool qabstracttablemodel_setitemdata_isbase = false;
    mutable bool qabstracttablemodel_clearitemdata_isbase = false;
    mutable bool qabstracttablemodel_mimetypes_isbase = false;
    mutable bool qabstracttablemodel_mimedata_isbase = false;
    mutable bool qabstracttablemodel_candropmimedata_isbase = false;
    mutable bool qabstracttablemodel_supporteddropactions_isbase = false;
    mutable bool qabstracttablemodel_supporteddragactions_isbase = false;
    mutable bool qabstracttablemodel_insertrows_isbase = false;
    mutable bool qabstracttablemodel_insertcolumns_isbase = false;
    mutable bool qabstracttablemodel_removerows_isbase = false;
    mutable bool qabstracttablemodel_removecolumns_isbase = false;
    mutable bool qabstracttablemodel_moverows_isbase = false;
    mutable bool qabstracttablemodel_movecolumns_isbase = false;
    mutable bool qabstracttablemodel_fetchmore_isbase = false;
    mutable bool qabstracttablemodel_canfetchmore_isbase = false;
    mutable bool qabstracttablemodel_sort_isbase = false;
    mutable bool qabstracttablemodel_buddy_isbase = false;
    mutable bool qabstracttablemodel_match_isbase = false;
    mutable bool qabstracttablemodel_span_isbase = false;
    mutable bool qabstracttablemodel_rolenames_isbase = false;
    mutable bool qabstracttablemodel_multidata_isbase = false;
    mutable bool qabstracttablemodel_submit_isbase = false;
    mutable bool qabstracttablemodel_revert_isbase = false;
    mutable bool qabstracttablemodel_resetinternaldata_isbase = false;
    mutable bool qabstracttablemodel_event_isbase = false;
    mutable bool qabstracttablemodel_eventfilter_isbase = false;
    mutable bool qabstracttablemodel_timerevent_isbase = false;
    mutable bool qabstracttablemodel_childevent_isbase = false;
    mutable bool qabstracttablemodel_customevent_isbase = false;
    mutable bool qabstracttablemodel_connectnotify_isbase = false;
    mutable bool qabstracttablemodel_disconnectnotify_isbase = false;
    mutable bool qabstracttablemodel_createindex_isbase = false;
    mutable bool qabstracttablemodel_encodedata_isbase = false;
    mutable bool qabstracttablemodel_decodedata_isbase = false;
    mutable bool qabstracttablemodel_begininsertrows_isbase = false;
    mutable bool qabstracttablemodel_endinsertrows_isbase = false;
    mutable bool qabstracttablemodel_beginremoverows_isbase = false;
    mutable bool qabstracttablemodel_endremoverows_isbase = false;
    mutable bool qabstracttablemodel_beginmoverows_isbase = false;
    mutable bool qabstracttablemodel_endmoverows_isbase = false;
    mutable bool qabstracttablemodel_begininsertcolumns_isbase = false;
    mutable bool qabstracttablemodel_endinsertcolumns_isbase = false;
    mutable bool qabstracttablemodel_beginremovecolumns_isbase = false;
    mutable bool qabstracttablemodel_endremovecolumns_isbase = false;
    mutable bool qabstracttablemodel_beginmovecolumns_isbase = false;
    mutable bool qabstracttablemodel_endmovecolumns_isbase = false;
    mutable bool qabstracttablemodel_beginresetmodel_isbase = false;
    mutable bool qabstracttablemodel_endresetmodel_isbase = false;
    mutable bool qabstracttablemodel_changepersistentindex_isbase = false;
    mutable bool qabstracttablemodel_changepersistentindexlist_isbase = false;
    mutable bool qabstracttablemodel_persistentindexlist_isbase = false;
    mutable bool qabstracttablemodel_sender_isbase = false;
    mutable bool qabstracttablemodel_sendersignalindex_isbase = false;
    mutable bool qabstracttablemodel_receivers_isbase = false;
    mutable bool qabstracttablemodel_issignalconnected_isbase = false;

  public:
    VirtualQAbstractTableModel() : QAbstractTableModel() {};
    VirtualQAbstractTableModel(QObject* parent) : QAbstractTableModel(parent) {};

    // Callback setters
    inline void setQAbstractTableModel_MetaObject_Callback(QAbstractTableModel_MetaObject_Callback cb) { qabstracttablemodel_metaobject_callback = cb; }
    inline void setQAbstractTableModel_Metacast_Callback(QAbstractTableModel_Metacast_Callback cb) { qabstracttablemodel_metacast_callback = cb; }
    inline void setQAbstractTableModel_Metacall_Callback(QAbstractTableModel_Metacall_Callback cb) { qabstracttablemodel_metacall_callback = cb; }
    inline void setQAbstractTableModel_Index_Callback(QAbstractTableModel_Index_Callback cb) { qabstracttablemodel_index_callback = cb; }
    inline void setQAbstractTableModel_Sibling_Callback(QAbstractTableModel_Sibling_Callback cb) { qabstracttablemodel_sibling_callback = cb; }
    inline void setQAbstractTableModel_DropMimeData_Callback(QAbstractTableModel_DropMimeData_Callback cb) { qabstracttablemodel_dropmimedata_callback = cb; }
    inline void setQAbstractTableModel_Flags_Callback(QAbstractTableModel_Flags_Callback cb) { qabstracttablemodel_flags_callback = cb; }
    inline void setQAbstractTableModel_RowCount_Callback(QAbstractTableModel_RowCount_Callback cb) { qabstracttablemodel_rowcount_callback = cb; }
    inline void setQAbstractTableModel_ColumnCount_Callback(QAbstractTableModel_ColumnCount_Callback cb) { qabstracttablemodel_columncount_callback = cb; }
    inline void setQAbstractTableModel_Data_Callback(QAbstractTableModel_Data_Callback cb) { qabstracttablemodel_data_callback = cb; }
    inline void setQAbstractTableModel_SetData_Callback(QAbstractTableModel_SetData_Callback cb) { qabstracttablemodel_setdata_callback = cb; }
    inline void setQAbstractTableModel_HeaderData_Callback(QAbstractTableModel_HeaderData_Callback cb) { qabstracttablemodel_headerdata_callback = cb; }
    inline void setQAbstractTableModel_SetHeaderData_Callback(QAbstractTableModel_SetHeaderData_Callback cb) { qabstracttablemodel_setheaderdata_callback = cb; }
    inline void setQAbstractTableModel_ItemData_Callback(QAbstractTableModel_ItemData_Callback cb) { qabstracttablemodel_itemdata_callback = cb; }
    inline void setQAbstractTableModel_SetItemData_Callback(QAbstractTableModel_SetItemData_Callback cb) { qabstracttablemodel_setitemdata_callback = cb; }
    inline void setQAbstractTableModel_ClearItemData_Callback(QAbstractTableModel_ClearItemData_Callback cb) { qabstracttablemodel_clearitemdata_callback = cb; }
    inline void setQAbstractTableModel_MimeTypes_Callback(QAbstractTableModel_MimeTypes_Callback cb) { qabstracttablemodel_mimetypes_callback = cb; }
    inline void setQAbstractTableModel_MimeData_Callback(QAbstractTableModel_MimeData_Callback cb) { qabstracttablemodel_mimedata_callback = cb; }
    inline void setQAbstractTableModel_CanDropMimeData_Callback(QAbstractTableModel_CanDropMimeData_Callback cb) { qabstracttablemodel_candropmimedata_callback = cb; }
    inline void setQAbstractTableModel_SupportedDropActions_Callback(QAbstractTableModel_SupportedDropActions_Callback cb) { qabstracttablemodel_supporteddropactions_callback = cb; }
    inline void setQAbstractTableModel_SupportedDragActions_Callback(QAbstractTableModel_SupportedDragActions_Callback cb) { qabstracttablemodel_supporteddragactions_callback = cb; }
    inline void setQAbstractTableModel_InsertRows_Callback(QAbstractTableModel_InsertRows_Callback cb) { qabstracttablemodel_insertrows_callback = cb; }
    inline void setQAbstractTableModel_InsertColumns_Callback(QAbstractTableModel_InsertColumns_Callback cb) { qabstracttablemodel_insertcolumns_callback = cb; }
    inline void setQAbstractTableModel_RemoveRows_Callback(QAbstractTableModel_RemoveRows_Callback cb) { qabstracttablemodel_removerows_callback = cb; }
    inline void setQAbstractTableModel_RemoveColumns_Callback(QAbstractTableModel_RemoveColumns_Callback cb) { qabstracttablemodel_removecolumns_callback = cb; }
    inline void setQAbstractTableModel_MoveRows_Callback(QAbstractTableModel_MoveRows_Callback cb) { qabstracttablemodel_moverows_callback = cb; }
    inline void setQAbstractTableModel_MoveColumns_Callback(QAbstractTableModel_MoveColumns_Callback cb) { qabstracttablemodel_movecolumns_callback = cb; }
    inline void setQAbstractTableModel_FetchMore_Callback(QAbstractTableModel_FetchMore_Callback cb) { qabstracttablemodel_fetchmore_callback = cb; }
    inline void setQAbstractTableModel_CanFetchMore_Callback(QAbstractTableModel_CanFetchMore_Callback cb) { qabstracttablemodel_canfetchmore_callback = cb; }
    inline void setQAbstractTableModel_Sort_Callback(QAbstractTableModel_Sort_Callback cb) { qabstracttablemodel_sort_callback = cb; }
    inline void setQAbstractTableModel_Buddy_Callback(QAbstractTableModel_Buddy_Callback cb) { qabstracttablemodel_buddy_callback = cb; }
    inline void setQAbstractTableModel_Match_Callback(QAbstractTableModel_Match_Callback cb) { qabstracttablemodel_match_callback = cb; }
    inline void setQAbstractTableModel_Span_Callback(QAbstractTableModel_Span_Callback cb) { qabstracttablemodel_span_callback = cb; }
    inline void setQAbstractTableModel_RoleNames_Callback(QAbstractTableModel_RoleNames_Callback cb) { qabstracttablemodel_rolenames_callback = cb; }
    inline void setQAbstractTableModel_MultiData_Callback(QAbstractTableModel_MultiData_Callback cb) { qabstracttablemodel_multidata_callback = cb; }
    inline void setQAbstractTableModel_Submit_Callback(QAbstractTableModel_Submit_Callback cb) { qabstracttablemodel_submit_callback = cb; }
    inline void setQAbstractTableModel_Revert_Callback(QAbstractTableModel_Revert_Callback cb) { qabstracttablemodel_revert_callback = cb; }
    inline void setQAbstractTableModel_ResetInternalData_Callback(QAbstractTableModel_ResetInternalData_Callback cb) { qabstracttablemodel_resetinternaldata_callback = cb; }
    inline void setQAbstractTableModel_Event_Callback(QAbstractTableModel_Event_Callback cb) { qabstracttablemodel_event_callback = cb; }
    inline void setQAbstractTableModel_EventFilter_Callback(QAbstractTableModel_EventFilter_Callback cb) { qabstracttablemodel_eventfilter_callback = cb; }
    inline void setQAbstractTableModel_TimerEvent_Callback(QAbstractTableModel_TimerEvent_Callback cb) { qabstracttablemodel_timerevent_callback = cb; }
    inline void setQAbstractTableModel_ChildEvent_Callback(QAbstractTableModel_ChildEvent_Callback cb) { qabstracttablemodel_childevent_callback = cb; }
    inline void setQAbstractTableModel_CustomEvent_Callback(QAbstractTableModel_CustomEvent_Callback cb) { qabstracttablemodel_customevent_callback = cb; }
    inline void setQAbstractTableModel_ConnectNotify_Callback(QAbstractTableModel_ConnectNotify_Callback cb) { qabstracttablemodel_connectnotify_callback = cb; }
    inline void setQAbstractTableModel_DisconnectNotify_Callback(QAbstractTableModel_DisconnectNotify_Callback cb) { qabstracttablemodel_disconnectnotify_callback = cb; }
    inline void setQAbstractTableModel_CreateIndex_Callback(QAbstractTableModel_CreateIndex_Callback cb) { qabstracttablemodel_createindex_callback = cb; }
    inline void setQAbstractTableModel_EncodeData_Callback(QAbstractTableModel_EncodeData_Callback cb) { qabstracttablemodel_encodedata_callback = cb; }
    inline void setQAbstractTableModel_DecodeData_Callback(QAbstractTableModel_DecodeData_Callback cb) { qabstracttablemodel_decodedata_callback = cb; }
    inline void setQAbstractTableModel_BeginInsertRows_Callback(QAbstractTableModel_BeginInsertRows_Callback cb) { qabstracttablemodel_begininsertrows_callback = cb; }
    inline void setQAbstractTableModel_EndInsertRows_Callback(QAbstractTableModel_EndInsertRows_Callback cb) { qabstracttablemodel_endinsertrows_callback = cb; }
    inline void setQAbstractTableModel_BeginRemoveRows_Callback(QAbstractTableModel_BeginRemoveRows_Callback cb) { qabstracttablemodel_beginremoverows_callback = cb; }
    inline void setQAbstractTableModel_EndRemoveRows_Callback(QAbstractTableModel_EndRemoveRows_Callback cb) { qabstracttablemodel_endremoverows_callback = cb; }
    inline void setQAbstractTableModel_BeginMoveRows_Callback(QAbstractTableModel_BeginMoveRows_Callback cb) { qabstracttablemodel_beginmoverows_callback = cb; }
    inline void setQAbstractTableModel_EndMoveRows_Callback(QAbstractTableModel_EndMoveRows_Callback cb) { qabstracttablemodel_endmoverows_callback = cb; }
    inline void setQAbstractTableModel_BeginInsertColumns_Callback(QAbstractTableModel_BeginInsertColumns_Callback cb) { qabstracttablemodel_begininsertcolumns_callback = cb; }
    inline void setQAbstractTableModel_EndInsertColumns_Callback(QAbstractTableModel_EndInsertColumns_Callback cb) { qabstracttablemodel_endinsertcolumns_callback = cb; }
    inline void setQAbstractTableModel_BeginRemoveColumns_Callback(QAbstractTableModel_BeginRemoveColumns_Callback cb) { qabstracttablemodel_beginremovecolumns_callback = cb; }
    inline void setQAbstractTableModel_EndRemoveColumns_Callback(QAbstractTableModel_EndRemoveColumns_Callback cb) { qabstracttablemodel_endremovecolumns_callback = cb; }
    inline void setQAbstractTableModel_BeginMoveColumns_Callback(QAbstractTableModel_BeginMoveColumns_Callback cb) { qabstracttablemodel_beginmovecolumns_callback = cb; }
    inline void setQAbstractTableModel_EndMoveColumns_Callback(QAbstractTableModel_EndMoveColumns_Callback cb) { qabstracttablemodel_endmovecolumns_callback = cb; }
    inline void setQAbstractTableModel_BeginResetModel_Callback(QAbstractTableModel_BeginResetModel_Callback cb) { qabstracttablemodel_beginresetmodel_callback = cb; }
    inline void setQAbstractTableModel_EndResetModel_Callback(QAbstractTableModel_EndResetModel_Callback cb) { qabstracttablemodel_endresetmodel_callback = cb; }
    inline void setQAbstractTableModel_ChangePersistentIndex_Callback(QAbstractTableModel_ChangePersistentIndex_Callback cb) { qabstracttablemodel_changepersistentindex_callback = cb; }
    inline void setQAbstractTableModel_ChangePersistentIndexList_Callback(QAbstractTableModel_ChangePersistentIndexList_Callback cb) { qabstracttablemodel_changepersistentindexlist_callback = cb; }
    inline void setQAbstractTableModel_PersistentIndexList_Callback(QAbstractTableModel_PersistentIndexList_Callback cb) { qabstracttablemodel_persistentindexlist_callback = cb; }
    inline void setQAbstractTableModel_Sender_Callback(QAbstractTableModel_Sender_Callback cb) { qabstracttablemodel_sender_callback = cb; }
    inline void setQAbstractTableModel_SenderSignalIndex_Callback(QAbstractTableModel_SenderSignalIndex_Callback cb) { qabstracttablemodel_sendersignalindex_callback = cb; }
    inline void setQAbstractTableModel_Receivers_Callback(QAbstractTableModel_Receivers_Callback cb) { qabstracttablemodel_receivers_callback = cb; }
    inline void setQAbstractTableModel_IsSignalConnected_Callback(QAbstractTableModel_IsSignalConnected_Callback cb) { qabstracttablemodel_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQAbstractTableModel_MetaObject_IsBase(bool value) const { qabstracttablemodel_metaobject_isbase = value; }
    inline void setQAbstractTableModel_Metacast_IsBase(bool value) const { qabstracttablemodel_metacast_isbase = value; }
    inline void setQAbstractTableModel_Metacall_IsBase(bool value) const { qabstracttablemodel_metacall_isbase = value; }
    inline void setQAbstractTableModel_Index_IsBase(bool value) const { qabstracttablemodel_index_isbase = value; }
    inline void setQAbstractTableModel_Sibling_IsBase(bool value) const { qabstracttablemodel_sibling_isbase = value; }
    inline void setQAbstractTableModel_DropMimeData_IsBase(bool value) const { qabstracttablemodel_dropmimedata_isbase = value; }
    inline void setQAbstractTableModel_Flags_IsBase(bool value) const { qabstracttablemodel_flags_isbase = value; }
    inline void setQAbstractTableModel_RowCount_IsBase(bool value) const { qabstracttablemodel_rowcount_isbase = value; }
    inline void setQAbstractTableModel_ColumnCount_IsBase(bool value) const { qabstracttablemodel_columncount_isbase = value; }
    inline void setQAbstractTableModel_Data_IsBase(bool value) const { qabstracttablemodel_data_isbase = value; }
    inline void setQAbstractTableModel_SetData_IsBase(bool value) const { qabstracttablemodel_setdata_isbase = value; }
    inline void setQAbstractTableModel_HeaderData_IsBase(bool value) const { qabstracttablemodel_headerdata_isbase = value; }
    inline void setQAbstractTableModel_SetHeaderData_IsBase(bool value) const { qabstracttablemodel_setheaderdata_isbase = value; }
    inline void setQAbstractTableModel_ItemData_IsBase(bool value) const { qabstracttablemodel_itemdata_isbase = value; }
    inline void setQAbstractTableModel_SetItemData_IsBase(bool value) const { qabstracttablemodel_setitemdata_isbase = value; }
    inline void setQAbstractTableModel_ClearItemData_IsBase(bool value) const { qabstracttablemodel_clearitemdata_isbase = value; }
    inline void setQAbstractTableModel_MimeTypes_IsBase(bool value) const { qabstracttablemodel_mimetypes_isbase = value; }
    inline void setQAbstractTableModel_MimeData_IsBase(bool value) const { qabstracttablemodel_mimedata_isbase = value; }
    inline void setQAbstractTableModel_CanDropMimeData_IsBase(bool value) const { qabstracttablemodel_candropmimedata_isbase = value; }
    inline void setQAbstractTableModel_SupportedDropActions_IsBase(bool value) const { qabstracttablemodel_supporteddropactions_isbase = value; }
    inline void setQAbstractTableModel_SupportedDragActions_IsBase(bool value) const { qabstracttablemodel_supporteddragactions_isbase = value; }
    inline void setQAbstractTableModel_InsertRows_IsBase(bool value) const { qabstracttablemodel_insertrows_isbase = value; }
    inline void setQAbstractTableModel_InsertColumns_IsBase(bool value) const { qabstracttablemodel_insertcolumns_isbase = value; }
    inline void setQAbstractTableModel_RemoveRows_IsBase(bool value) const { qabstracttablemodel_removerows_isbase = value; }
    inline void setQAbstractTableModel_RemoveColumns_IsBase(bool value) const { qabstracttablemodel_removecolumns_isbase = value; }
    inline void setQAbstractTableModel_MoveRows_IsBase(bool value) const { qabstracttablemodel_moverows_isbase = value; }
    inline void setQAbstractTableModel_MoveColumns_IsBase(bool value) const { qabstracttablemodel_movecolumns_isbase = value; }
    inline void setQAbstractTableModel_FetchMore_IsBase(bool value) const { qabstracttablemodel_fetchmore_isbase = value; }
    inline void setQAbstractTableModel_CanFetchMore_IsBase(bool value) const { qabstracttablemodel_canfetchmore_isbase = value; }
    inline void setQAbstractTableModel_Sort_IsBase(bool value) const { qabstracttablemodel_sort_isbase = value; }
    inline void setQAbstractTableModel_Buddy_IsBase(bool value) const { qabstracttablemodel_buddy_isbase = value; }
    inline void setQAbstractTableModel_Match_IsBase(bool value) const { qabstracttablemodel_match_isbase = value; }
    inline void setQAbstractTableModel_Span_IsBase(bool value) const { qabstracttablemodel_span_isbase = value; }
    inline void setQAbstractTableModel_RoleNames_IsBase(bool value) const { qabstracttablemodel_rolenames_isbase = value; }
    inline void setQAbstractTableModel_MultiData_IsBase(bool value) const { qabstracttablemodel_multidata_isbase = value; }
    inline void setQAbstractTableModel_Submit_IsBase(bool value) const { qabstracttablemodel_submit_isbase = value; }
    inline void setQAbstractTableModel_Revert_IsBase(bool value) const { qabstracttablemodel_revert_isbase = value; }
    inline void setQAbstractTableModel_ResetInternalData_IsBase(bool value) const { qabstracttablemodel_resetinternaldata_isbase = value; }
    inline void setQAbstractTableModel_Event_IsBase(bool value) const { qabstracttablemodel_event_isbase = value; }
    inline void setQAbstractTableModel_EventFilter_IsBase(bool value) const { qabstracttablemodel_eventfilter_isbase = value; }
    inline void setQAbstractTableModel_TimerEvent_IsBase(bool value) const { qabstracttablemodel_timerevent_isbase = value; }
    inline void setQAbstractTableModel_ChildEvent_IsBase(bool value) const { qabstracttablemodel_childevent_isbase = value; }
    inline void setQAbstractTableModel_CustomEvent_IsBase(bool value) const { qabstracttablemodel_customevent_isbase = value; }
    inline void setQAbstractTableModel_ConnectNotify_IsBase(bool value) const { qabstracttablemodel_connectnotify_isbase = value; }
    inline void setQAbstractTableModel_DisconnectNotify_IsBase(bool value) const { qabstracttablemodel_disconnectnotify_isbase = value; }
    inline void setQAbstractTableModel_CreateIndex_IsBase(bool value) const { qabstracttablemodel_createindex_isbase = value; }
    inline void setQAbstractTableModel_EncodeData_IsBase(bool value) const { qabstracttablemodel_encodedata_isbase = value; }
    inline void setQAbstractTableModel_DecodeData_IsBase(bool value) const { qabstracttablemodel_decodedata_isbase = value; }
    inline void setQAbstractTableModel_BeginInsertRows_IsBase(bool value) const { qabstracttablemodel_begininsertrows_isbase = value; }
    inline void setQAbstractTableModel_EndInsertRows_IsBase(bool value) const { qabstracttablemodel_endinsertrows_isbase = value; }
    inline void setQAbstractTableModel_BeginRemoveRows_IsBase(bool value) const { qabstracttablemodel_beginremoverows_isbase = value; }
    inline void setQAbstractTableModel_EndRemoveRows_IsBase(bool value) const { qabstracttablemodel_endremoverows_isbase = value; }
    inline void setQAbstractTableModel_BeginMoveRows_IsBase(bool value) const { qabstracttablemodel_beginmoverows_isbase = value; }
    inline void setQAbstractTableModel_EndMoveRows_IsBase(bool value) const { qabstracttablemodel_endmoverows_isbase = value; }
    inline void setQAbstractTableModel_BeginInsertColumns_IsBase(bool value) const { qabstracttablemodel_begininsertcolumns_isbase = value; }
    inline void setQAbstractTableModel_EndInsertColumns_IsBase(bool value) const { qabstracttablemodel_endinsertcolumns_isbase = value; }
    inline void setQAbstractTableModel_BeginRemoveColumns_IsBase(bool value) const { qabstracttablemodel_beginremovecolumns_isbase = value; }
    inline void setQAbstractTableModel_EndRemoveColumns_IsBase(bool value) const { qabstracttablemodel_endremovecolumns_isbase = value; }
    inline void setQAbstractTableModel_BeginMoveColumns_IsBase(bool value) const { qabstracttablemodel_beginmovecolumns_isbase = value; }
    inline void setQAbstractTableModel_EndMoveColumns_IsBase(bool value) const { qabstracttablemodel_endmovecolumns_isbase = value; }
    inline void setQAbstractTableModel_BeginResetModel_IsBase(bool value) const { qabstracttablemodel_beginresetmodel_isbase = value; }
    inline void setQAbstractTableModel_EndResetModel_IsBase(bool value) const { qabstracttablemodel_endresetmodel_isbase = value; }
    inline void setQAbstractTableModel_ChangePersistentIndex_IsBase(bool value) const { qabstracttablemodel_changepersistentindex_isbase = value; }
    inline void setQAbstractTableModel_ChangePersistentIndexList_IsBase(bool value) const { qabstracttablemodel_changepersistentindexlist_isbase = value; }
    inline void setQAbstractTableModel_PersistentIndexList_IsBase(bool value) const { qabstracttablemodel_persistentindexlist_isbase = value; }
    inline void setQAbstractTableModel_Sender_IsBase(bool value) const { qabstracttablemodel_sender_isbase = value; }
    inline void setQAbstractTableModel_SenderSignalIndex_IsBase(bool value) const { qabstracttablemodel_sendersignalindex_isbase = value; }
    inline void setQAbstractTableModel_Receivers_IsBase(bool value) const { qabstracttablemodel_receivers_isbase = value; }
    inline void setQAbstractTableModel_IsSignalConnected_IsBase(bool value) const { qabstracttablemodel_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qabstracttablemodel_metaobject_isbase) {
            qabstracttablemodel_metaobject_isbase = false;
            return QAbstractTableModel::metaObject();
        }
        auto metaobject_cb = qabstracttablemodel_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QAbstractTableModel::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qabstracttablemodel_metacast_isbase) {
            qabstracttablemodel_metacast_isbase = false;
            return QAbstractTableModel::qt_metacast(param1);
        }
        auto metacast_cb = qabstracttablemodel_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QAbstractTableModel::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qabstracttablemodel_metacall_isbase) {
            qabstracttablemodel_metacall_isbase = false;
            return QAbstractTableModel::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qabstracttablemodel_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QAbstractTableModel::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
        if (qabstracttablemodel_index_isbase) {
            qabstracttablemodel_index_isbase = false;
            return QAbstractTableModel::index(row, column, parent);
        }
        auto index_cb = qabstracttablemodel_index_callback;
        if (index_cb) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            QModelIndex* callback_ret = index_cb(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        }
        return QAbstractTableModel::index(row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
        if (qabstracttablemodel_sibling_isbase) {
            qabstracttablemodel_sibling_isbase = false;
            return QAbstractTableModel::sibling(row, column, idx);
        }
        auto sibling_cb = qabstracttablemodel_sibling_callback;
        if (sibling_cb) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& idx_ret = idx;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&idx_ret);

            QModelIndex* callback_ret = sibling_cb(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        }
        return QAbstractTableModel::sibling(row, column, idx);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
        if (qabstracttablemodel_dropmimedata_isbase) {
            qabstracttablemodel_dropmimedata_isbase = false;
            return QAbstractTableModel::dropMimeData(data, action, row, column, parent);
        }
        auto dropmimedata_cb = qabstracttablemodel_dropmimedata_callback;
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
        return QAbstractTableModel::dropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
        if (qabstracttablemodel_flags_isbase) {
            qabstracttablemodel_flags_isbase = false;
            return QAbstractTableModel::flags(index);
        }
        auto flags_cb = qabstracttablemodel_flags_callback;
        if (flags_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            int callback_ret = flags_cb(this, cbval1);
            return static_cast<Qt::ItemFlags>(callback_ret);
        }
        return QAbstractTableModel::flags(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual int rowCount(const QModelIndex& parent) const override {
        auto rowcount_cb = qabstracttablemodel_rowcount_callback;
        if (rowcount_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            int callback_ret = rowcount_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual int columnCount(const QModelIndex& parent) const override {
        auto columncount_cb = qabstracttablemodel_columncount_callback;
        if (columncount_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            int callback_ret = columncount_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(const QModelIndex& index, int role) const override {
        auto data_cb = qabstracttablemodel_data_callback;
        if (data_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = role;

            QVariant* callback_ret = data_cb(this, cbval1, cbval2);
            return *callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
        if (qabstracttablemodel_setdata_isbase) {
            qabstracttablemodel_setdata_isbase = false;
            return QAbstractTableModel::setData(index, value, role);
        }
        auto setdata_cb = qabstracttablemodel_setdata_callback;
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
        return QAbstractTableModel::setData(index, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
        if (qabstracttablemodel_headerdata_isbase) {
            qabstracttablemodel_headerdata_isbase = false;
            return QAbstractTableModel::headerData(section, orientation, role);
        }
        auto headerdata_cb = qabstracttablemodel_headerdata_callback;
        if (headerdata_cb) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            int cbval3 = role;

            QVariant* callback_ret = headerdata_cb(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        }
        return QAbstractTableModel::headerData(section, orientation, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
        if (qabstracttablemodel_setheaderdata_isbase) {
            qabstracttablemodel_setheaderdata_isbase = false;
            return QAbstractTableModel::setHeaderData(section, orientation, value, role);
        }
        auto setheaderdata_cb = qabstracttablemodel_setheaderdata_callback;
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
        return QAbstractTableModel::setHeaderData(section, orientation, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
        if (qabstracttablemodel_itemdata_isbase) {
            qabstracttablemodel_itemdata_isbase = false;
            return QAbstractTableModel::itemData(index);
        }
        auto itemdata_cb = qabstracttablemodel_itemdata_callback;
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
        return QAbstractTableModel::itemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
        if (qabstracttablemodel_setitemdata_isbase) {
            qabstracttablemodel_setitemdata_isbase = false;
            return QAbstractTableModel::setItemData(index, roles);
        }
        auto setitemdata_cb = qabstracttablemodel_setitemdata_callback;
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
        return QAbstractTableModel::setItemData(index, roles);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool clearItemData(const QModelIndex& index) override {
        if (qabstracttablemodel_clearitemdata_isbase) {
            qabstracttablemodel_clearitemdata_isbase = false;
            return QAbstractTableModel::clearItemData(index);
        }
        auto clearitemdata_cb = qabstracttablemodel_clearitemdata_callback;
        if (clearitemdata_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            bool callback_ret = clearitemdata_cb(this, cbval1);
            return callback_ret;
        }
        return QAbstractTableModel::clearItemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> mimeTypes() const override {
        if (qabstracttablemodel_mimetypes_isbase) {
            qabstracttablemodel_mimetypes_isbase = false;
            return QAbstractTableModel::mimeTypes();
        }
        auto mimetypes_cb = qabstracttablemodel_mimetypes_callback;
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
        return QAbstractTableModel::mimeTypes();
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* mimeData(const QList<QModelIndex>& indexes) const override {
        if (qabstracttablemodel_mimedata_isbase) {
            qabstracttablemodel_mimedata_isbase = false;
            return QAbstractTableModel::mimeData(indexes);
        }
        auto mimedata_cb = qabstracttablemodel_mimedata_callback;
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
        return QAbstractTableModel::mimeData(indexes);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
        if (qabstracttablemodel_candropmimedata_isbase) {
            qabstracttablemodel_candropmimedata_isbase = false;
            return QAbstractTableModel::canDropMimeData(data, action, row, column, parent);
        }
        auto candropmimedata_cb = qabstracttablemodel_candropmimedata_callback;
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
        return QAbstractTableModel::canDropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (qabstracttablemodel_supporteddropactions_isbase) {
            qabstracttablemodel_supporteddropactions_isbase = false;
            return QAbstractTableModel::supportedDropActions();
        }
        auto supporteddropactions_cb = qabstracttablemodel_supporteddropactions_callback;
        if (supporteddropactions_cb) {
            int callback_ret = supporteddropactions_cb();
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return QAbstractTableModel::supportedDropActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDragActions() const override {
        if (qabstracttablemodel_supporteddragactions_isbase) {
            qabstracttablemodel_supporteddragactions_isbase = false;
            return QAbstractTableModel::supportedDragActions();
        }
        auto supporteddragactions_cb = qabstracttablemodel_supporteddragactions_callback;
        if (supporteddragactions_cb) {
            int callback_ret = supporteddragactions_cb();
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return QAbstractTableModel::supportedDragActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
        if (qabstracttablemodel_insertrows_isbase) {
            qabstracttablemodel_insertrows_isbase = false;
            return QAbstractTableModel::insertRows(row, count, parent);
        }
        auto insertrows_cb = qabstracttablemodel_insertrows_callback;
        if (insertrows_cb) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = insertrows_cb(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QAbstractTableModel::insertRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
        if (qabstracttablemodel_insertcolumns_isbase) {
            qabstracttablemodel_insertcolumns_isbase = false;
            return QAbstractTableModel::insertColumns(column, count, parent);
        }
        auto insertcolumns_cb = qabstracttablemodel_insertcolumns_callback;
        if (insertcolumns_cb) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = insertcolumns_cb(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QAbstractTableModel::insertColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
        if (qabstracttablemodel_removerows_isbase) {
            qabstracttablemodel_removerows_isbase = false;
            return QAbstractTableModel::removeRows(row, count, parent);
        }
        auto removerows_cb = qabstracttablemodel_removerows_callback;
        if (removerows_cb) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = removerows_cb(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QAbstractTableModel::removeRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
        if (qabstracttablemodel_removecolumns_isbase) {
            qabstracttablemodel_removecolumns_isbase = false;
            return QAbstractTableModel::removeColumns(column, count, parent);
        }
        auto removecolumns_cb = qabstracttablemodel_removecolumns_callback;
        if (removecolumns_cb) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = removecolumns_cb(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QAbstractTableModel::removeColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (qabstracttablemodel_moverows_isbase) {
            qabstracttablemodel_moverows_isbase = false;
            return QAbstractTableModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
        }
        auto moverows_cb = qabstracttablemodel_moverows_callback;
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
        return QAbstractTableModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (qabstracttablemodel_movecolumns_isbase) {
            qabstracttablemodel_movecolumns_isbase = false;
            return QAbstractTableModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
        }
        auto movecolumns_cb = qabstracttablemodel_movecolumns_callback;
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
        return QAbstractTableModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual void fetchMore(const QModelIndex& parent) override {
        if (qabstracttablemodel_fetchmore_isbase) {
            qabstracttablemodel_fetchmore_isbase = false;
            QAbstractTableModel::fetchMore(parent);
            return;
        }
        auto fetchmore_cb = qabstracttablemodel_fetchmore_callback;
        if (fetchmore_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            fetchmore_cb(this, cbval1);
            return;
        }
        QAbstractTableModel::fetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canFetchMore(const QModelIndex& parent) const override {
        if (qabstracttablemodel_canfetchmore_isbase) {
            qabstracttablemodel_canfetchmore_isbase = false;
            return QAbstractTableModel::canFetchMore(parent);
        }
        auto canfetchmore_cb = qabstracttablemodel_canfetchmore_callback;
        if (canfetchmore_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = canfetchmore_cb(this, cbval1);
            return callback_ret;
        }
        return QAbstractTableModel::canFetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void sort(int column, Qt::SortOrder order) override {
        if (qabstracttablemodel_sort_isbase) {
            qabstracttablemodel_sort_isbase = false;
            QAbstractTableModel::sort(column, order);
            return;
        }
        auto sort_cb = qabstracttablemodel_sort_callback;
        if (sort_cb) {
            int cbval1 = column;
            int cbval2 = static_cast<int>(order);

            sort_cb(this, cbval1, cbval2);
            return;
        }
        QAbstractTableModel::sort(column, order);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex buddy(const QModelIndex& index) const override {
        if (qabstracttablemodel_buddy_isbase) {
            qabstracttablemodel_buddy_isbase = false;
            return QAbstractTableModel::buddy(index);
        }
        auto buddy_cb = qabstracttablemodel_buddy_callback;
        if (buddy_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QModelIndex* callback_ret = buddy_cb(this, cbval1);
            return *callback_ret;
        }
        return QAbstractTableModel::buddy(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
        if (qabstracttablemodel_match_isbase) {
            qabstracttablemodel_match_isbase = false;
            return QAbstractTableModel::match(start, role, value, hits, flags);
        }
        auto match_cb = qabstracttablemodel_match_callback;
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
        return QAbstractTableModel::match(start, role, value, hits, flags);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize span(const QModelIndex& index) const override {
        if (qabstracttablemodel_span_isbase) {
            qabstracttablemodel_span_isbase = false;
            return QAbstractTableModel::span(index);
        }
        auto span_cb = qabstracttablemodel_span_callback;
        if (span_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QSize* callback_ret = span_cb(this, cbval1);
            return *callback_ret;
        }
        return QAbstractTableModel::span(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QHash<int, QByteArray> roleNames() const override {
        if (qabstracttablemodel_rolenames_isbase) {
            qabstracttablemodel_rolenames_isbase = false;
            return QAbstractTableModel::roleNames();
        }
        auto rolenames_cb = qabstracttablemodel_rolenames_callback;
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
        return QAbstractTableModel::roleNames();
    }

    // Virtual method for C ABI access and custom callback
    virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
        if (qabstracttablemodel_multidata_isbase) {
            qabstracttablemodel_multidata_isbase = false;
            QAbstractTableModel::multiData(index, roleDataSpan);
            return;
        }
        auto multidata_cb = qabstracttablemodel_multidata_callback;
        if (multidata_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelRoleDataSpan* cbval2 = new QModelRoleDataSpan(roleDataSpan);

            multidata_cb(this, cbval1, cbval2);
            return;
        }
        QAbstractTableModel::multiData(index, roleDataSpan);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool submit() override {
        if (qabstracttablemodel_submit_isbase) {
            qabstracttablemodel_submit_isbase = false;
            return QAbstractTableModel::submit();
        }
        auto submit_cb = qabstracttablemodel_submit_callback;
        if (submit_cb) {
            bool callback_ret = submit_cb();
            return callback_ret;
        }
        return QAbstractTableModel::submit();
    }

    // Virtual method for C ABI access and custom callback
    virtual void revert() override {
        if (qabstracttablemodel_revert_isbase) {
            qabstracttablemodel_revert_isbase = false;
            QAbstractTableModel::revert();
            return;
        }
        auto revert_cb = qabstracttablemodel_revert_callback;
        if (revert_cb) {
            revert_cb();
            return;
        }
        QAbstractTableModel::revert();
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetInternalData() override {
        if (qabstracttablemodel_resetinternaldata_isbase) {
            qabstracttablemodel_resetinternaldata_isbase = false;
            QAbstractTableModel::resetInternalData();
            return;
        }
        auto resetinternaldata_cb = qabstracttablemodel_resetinternaldata_callback;
        if (resetinternaldata_cb) {
            resetinternaldata_cb();
            return;
        }
        QAbstractTableModel::resetInternalData();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qabstracttablemodel_event_isbase) {
            qabstracttablemodel_event_isbase = false;
            return QAbstractTableModel::event(event);
        }
        auto event_cb = qabstracttablemodel_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QAbstractTableModel::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qabstracttablemodel_eventfilter_isbase) {
            qabstracttablemodel_eventfilter_isbase = false;
            return QAbstractTableModel::eventFilter(watched, event);
        }
        auto eventfilter_cb = qabstracttablemodel_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QAbstractTableModel::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qabstracttablemodel_timerevent_isbase) {
            qabstracttablemodel_timerevent_isbase = false;
            QAbstractTableModel::timerEvent(event);
            return;
        }
        auto timerevent_cb = qabstracttablemodel_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QAbstractTableModel::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qabstracttablemodel_childevent_isbase) {
            qabstracttablemodel_childevent_isbase = false;
            QAbstractTableModel::childEvent(event);
            return;
        }
        auto childevent_cb = qabstracttablemodel_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QAbstractTableModel::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qabstracttablemodel_customevent_isbase) {
            qabstracttablemodel_customevent_isbase = false;
            QAbstractTableModel::customEvent(event);
            return;
        }
        auto customevent_cb = qabstracttablemodel_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QAbstractTableModel::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qabstracttablemodel_connectnotify_isbase) {
            qabstracttablemodel_connectnotify_isbase = false;
            QAbstractTableModel::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qabstracttablemodel_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QAbstractTableModel::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qabstracttablemodel_disconnectnotify_isbase) {
            qabstracttablemodel_disconnectnotify_isbase = false;
            QAbstractTableModel::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qabstracttablemodel_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QAbstractTableModel::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QModelIndex createIndex(int row, int column) const {
        if (qabstracttablemodel_createindex_isbase) {
            qabstracttablemodel_createindex_isbase = false;
            return QAbstractTableModel::createIndex(row, column);
        }
        auto createindex_cb = qabstracttablemodel_createindex_callback;
        if (createindex_cb) {
            int cbval1 = row;
            int cbval2 = column;

            QModelIndex* callback_ret = createindex_cb(this, cbval1, cbval2);
            return *callback_ret;
        }
        return QAbstractTableModel::createIndex(row, column);
    }

    // Virtual method for C ABI access and custom callback
    void encodeData(const QList<QModelIndex>& indexes, QDataStream& stream) const {
        if (qabstracttablemodel_encodedata_isbase) {
            qabstracttablemodel_encodedata_isbase = false;
            QAbstractTableModel::encodeData(indexes, stream);
            return;
        }
        auto encodedata_cb = qabstracttablemodel_encodedata_callback;
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
        QAbstractTableModel::encodeData(indexes, stream);
    }

    // Virtual method for C ABI access and custom callback
    bool decodeData(int row, int column, const QModelIndex& parent, QDataStream& stream) {
        if (qabstracttablemodel_decodedata_isbase) {
            qabstracttablemodel_decodedata_isbase = false;
            return QAbstractTableModel::decodeData(row, column, parent, stream);
        }
        auto decodedata_cb = qabstracttablemodel_decodedata_callback;
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
        return QAbstractTableModel::decodeData(row, column, parent, stream);
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertRows(const QModelIndex& parent, int first, int last) {
        if (qabstracttablemodel_begininsertrows_isbase) {
            qabstracttablemodel_begininsertrows_isbase = false;
            QAbstractTableModel::beginInsertRows(parent, first, last);
            return;
        }
        auto begininsertrows_cb = qabstracttablemodel_begininsertrows_callback;
        if (begininsertrows_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            begininsertrows_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        QAbstractTableModel::beginInsertRows(parent, first, last);
    }

    // Virtual method for C ABI access and custom callback
    void endInsertRows() {
        if (qabstracttablemodel_endinsertrows_isbase) {
            qabstracttablemodel_endinsertrows_isbase = false;
            QAbstractTableModel::endInsertRows();
            return;
        }
        auto endinsertrows_cb = qabstracttablemodel_endinsertrows_callback;
        if (endinsertrows_cb) {
            endinsertrows_cb();
            return;
        }
        QAbstractTableModel::endInsertRows();
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveRows(const QModelIndex& parent, int first, int last) {
        if (qabstracttablemodel_beginremoverows_isbase) {
            qabstracttablemodel_beginremoverows_isbase = false;
            QAbstractTableModel::beginRemoveRows(parent, first, last);
            return;
        }
        auto beginremoverows_cb = qabstracttablemodel_beginremoverows_callback;
        if (beginremoverows_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            beginremoverows_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        QAbstractTableModel::beginRemoveRows(parent, first, last);
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveRows() {
        if (qabstracttablemodel_endremoverows_isbase) {
            qabstracttablemodel_endremoverows_isbase = false;
            QAbstractTableModel::endRemoveRows();
            return;
        }
        auto endremoverows_cb = qabstracttablemodel_endremoverows_callback;
        if (endremoverows_cb) {
            endremoverows_cb();
            return;
        }
        QAbstractTableModel::endRemoveRows();
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveRows(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationRow) {
        if (qabstracttablemodel_beginmoverows_isbase) {
            qabstracttablemodel_beginmoverows_isbase = false;
            return QAbstractTableModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
        }
        auto beginmoverows_cb = qabstracttablemodel_beginmoverows_callback;
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
        return QAbstractTableModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
    }

    // Virtual method for C ABI access and custom callback
    void endMoveRows() {
        if (qabstracttablemodel_endmoverows_isbase) {
            qabstracttablemodel_endmoverows_isbase = false;
            QAbstractTableModel::endMoveRows();
            return;
        }
        auto endmoverows_cb = qabstracttablemodel_endmoverows_callback;
        if (endmoverows_cb) {
            endmoverows_cb();
            return;
        }
        QAbstractTableModel::endMoveRows();
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertColumns(const QModelIndex& parent, int first, int last) {
        if (qabstracttablemodel_begininsertcolumns_isbase) {
            qabstracttablemodel_begininsertcolumns_isbase = false;
            QAbstractTableModel::beginInsertColumns(parent, first, last);
            return;
        }
        auto begininsertcolumns_cb = qabstracttablemodel_begininsertcolumns_callback;
        if (begininsertcolumns_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            begininsertcolumns_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        QAbstractTableModel::beginInsertColumns(parent, first, last);
    }

    // Virtual method for C ABI access and custom callback
    void endInsertColumns() {
        if (qabstracttablemodel_endinsertcolumns_isbase) {
            qabstracttablemodel_endinsertcolumns_isbase = false;
            QAbstractTableModel::endInsertColumns();
            return;
        }
        auto endinsertcolumns_cb = qabstracttablemodel_endinsertcolumns_callback;
        if (endinsertcolumns_cb) {
            endinsertcolumns_cb();
            return;
        }
        QAbstractTableModel::endInsertColumns();
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveColumns(const QModelIndex& parent, int first, int last) {
        if (qabstracttablemodel_beginremovecolumns_isbase) {
            qabstracttablemodel_beginremovecolumns_isbase = false;
            QAbstractTableModel::beginRemoveColumns(parent, first, last);
            return;
        }
        auto beginremovecolumns_cb = qabstracttablemodel_beginremovecolumns_callback;
        if (beginremovecolumns_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            beginremovecolumns_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        QAbstractTableModel::beginRemoveColumns(parent, first, last);
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveColumns() {
        if (qabstracttablemodel_endremovecolumns_isbase) {
            qabstracttablemodel_endremovecolumns_isbase = false;
            QAbstractTableModel::endRemoveColumns();
            return;
        }
        auto endremovecolumns_cb = qabstracttablemodel_endremovecolumns_callback;
        if (endremovecolumns_cb) {
            endremovecolumns_cb();
            return;
        }
        QAbstractTableModel::endRemoveColumns();
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveColumns(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationColumn) {
        if (qabstracttablemodel_beginmovecolumns_isbase) {
            qabstracttablemodel_beginmovecolumns_isbase = false;
            return QAbstractTableModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
        }
        auto beginmovecolumns_cb = qabstracttablemodel_beginmovecolumns_callback;
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
        return QAbstractTableModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
    }

    // Virtual method for C ABI access and custom callback
    void endMoveColumns() {
        if (qabstracttablemodel_endmovecolumns_isbase) {
            qabstracttablemodel_endmovecolumns_isbase = false;
            QAbstractTableModel::endMoveColumns();
            return;
        }
        auto endmovecolumns_cb = qabstracttablemodel_endmovecolumns_callback;
        if (endmovecolumns_cb) {
            endmovecolumns_cb();
            return;
        }
        QAbstractTableModel::endMoveColumns();
    }

    // Virtual method for C ABI access and custom callback
    void beginResetModel() {
        if (qabstracttablemodel_beginresetmodel_isbase) {
            qabstracttablemodel_beginresetmodel_isbase = false;
            QAbstractTableModel::beginResetModel();
            return;
        }
        auto beginresetmodel_cb = qabstracttablemodel_beginresetmodel_callback;
        if (beginresetmodel_cb) {
            beginresetmodel_cb();
            return;
        }
        QAbstractTableModel::beginResetModel();
    }

    // Virtual method for C ABI access and custom callback
    void endResetModel() {
        if (qabstracttablemodel_endresetmodel_isbase) {
            qabstracttablemodel_endresetmodel_isbase = false;
            QAbstractTableModel::endResetModel();
            return;
        }
        auto endresetmodel_cb = qabstracttablemodel_endresetmodel_callback;
        if (endresetmodel_cb) {
            endresetmodel_cb();
            return;
        }
        QAbstractTableModel::endResetModel();
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndex(const QModelIndex& from, const QModelIndex& to) {
        if (qabstracttablemodel_changepersistentindex_isbase) {
            qabstracttablemodel_changepersistentindex_isbase = false;
            QAbstractTableModel::changePersistentIndex(from, to);
            return;
        }
        auto changepersistentindex_cb = qabstracttablemodel_changepersistentindex_callback;
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
        QAbstractTableModel::changePersistentIndex(from, to);
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndexList(const QList<QModelIndex>& from, const QList<QModelIndex>& to) {
        if (qabstracttablemodel_changepersistentindexlist_isbase) {
            qabstracttablemodel_changepersistentindexlist_isbase = false;
            QAbstractTableModel::changePersistentIndexList(from, to);
            return;
        }
        auto changepersistentindexlist_cb = qabstracttablemodel_changepersistentindexlist_callback;
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
        QAbstractTableModel::changePersistentIndexList(from, to);
    }

    // Virtual method for C ABI access and custom callback
    QList<QModelIndex> persistentIndexList() const {
        if (qabstracttablemodel_persistentindexlist_isbase) {
            qabstracttablemodel_persistentindexlist_isbase = false;
            return QAbstractTableModel::persistentIndexList();
        }
        auto persistentindexlist_cb = qabstracttablemodel_persistentindexlist_callback;
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
        return QAbstractTableModel::persistentIndexList();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qabstracttablemodel_sender_isbase) {
            qabstracttablemodel_sender_isbase = false;
            return QAbstractTableModel::sender();
        }
        auto sender_cb = qabstracttablemodel_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QAbstractTableModel::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qabstracttablemodel_sendersignalindex_isbase) {
            qabstracttablemodel_sendersignalindex_isbase = false;
            return QAbstractTableModel::senderSignalIndex();
        }
        auto sendersignalindex_cb = qabstracttablemodel_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QAbstractTableModel::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qabstracttablemodel_receivers_isbase) {
            qabstracttablemodel_receivers_isbase = false;
            return QAbstractTableModel::receivers(signal);
        }
        auto receivers_cb = qabstracttablemodel_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QAbstractTableModel::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qabstracttablemodel_issignalconnected_isbase) {
            qabstracttablemodel_issignalconnected_isbase = false;
            return QAbstractTableModel::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qabstracttablemodel_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QAbstractTableModel::isSignalConnected(signal);
    }

    // Friend functions
    friend void QAbstractTableModel_ResetInternalData(QAbstractTableModel* self);
    friend void QAbstractTableModel_SuperResetInternalData(QAbstractTableModel* self);
    friend void QAbstractTableModel_TimerEvent(QAbstractTableModel* self, QTimerEvent* event);
    friend void QAbstractTableModel_SuperTimerEvent(QAbstractTableModel* self, QTimerEvent* event);
    friend void QAbstractTableModel_ChildEvent(QAbstractTableModel* self, QChildEvent* event);
    friend void QAbstractTableModel_SuperChildEvent(QAbstractTableModel* self, QChildEvent* event);
    friend void QAbstractTableModel_CustomEvent(QAbstractTableModel* self, QEvent* event);
    friend void QAbstractTableModel_SuperCustomEvent(QAbstractTableModel* self, QEvent* event);
    friend void QAbstractTableModel_ConnectNotify(QAbstractTableModel* self, const QMetaMethod* signal);
    friend void QAbstractTableModel_SuperConnectNotify(QAbstractTableModel* self, const QMetaMethod* signal);
    friend void QAbstractTableModel_DisconnectNotify(QAbstractTableModel* self, const QMetaMethod* signal);
    friend void QAbstractTableModel_SuperDisconnectNotify(QAbstractTableModel* self, const QMetaMethod* signal);
    friend QModelIndex* QAbstractTableModel_CreateIndex(const QAbstractTableModel* self, int row, int column);
    friend QModelIndex* QAbstractTableModel_SuperCreateIndex(const QAbstractTableModel* self, int row, int column);
    friend void QAbstractTableModel_EncodeData(const QAbstractTableModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
    friend void QAbstractTableModel_SuperEncodeData(const QAbstractTableModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
    friend bool QAbstractTableModel_DecodeData(QAbstractTableModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
    friend bool QAbstractTableModel_SuperDecodeData(QAbstractTableModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
    friend void QAbstractTableModel_BeginInsertRows(QAbstractTableModel* self, const QModelIndex* parent, int first, int last);
    friend void QAbstractTableModel_SuperBeginInsertRows(QAbstractTableModel* self, const QModelIndex* parent, int first, int last);
    friend void QAbstractTableModel_EndInsertRows(QAbstractTableModel* self);
    friend void QAbstractTableModel_SuperEndInsertRows(QAbstractTableModel* self);
    friend void QAbstractTableModel_BeginRemoveRows(QAbstractTableModel* self, const QModelIndex* parent, int first, int last);
    friend void QAbstractTableModel_SuperBeginRemoveRows(QAbstractTableModel* self, const QModelIndex* parent, int first, int last);
    friend void QAbstractTableModel_EndRemoveRows(QAbstractTableModel* self);
    friend void QAbstractTableModel_SuperEndRemoveRows(QAbstractTableModel* self);
    friend bool QAbstractTableModel_BeginMoveRows(QAbstractTableModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
    friend bool QAbstractTableModel_SuperBeginMoveRows(QAbstractTableModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
    friend void QAbstractTableModel_EndMoveRows(QAbstractTableModel* self);
    friend void QAbstractTableModel_SuperEndMoveRows(QAbstractTableModel* self);
    friend void QAbstractTableModel_BeginInsertColumns(QAbstractTableModel* self, const QModelIndex* parent, int first, int last);
    friend void QAbstractTableModel_SuperBeginInsertColumns(QAbstractTableModel* self, const QModelIndex* parent, int first, int last);
    friend void QAbstractTableModel_EndInsertColumns(QAbstractTableModel* self);
    friend void QAbstractTableModel_SuperEndInsertColumns(QAbstractTableModel* self);
    friend void QAbstractTableModel_BeginRemoveColumns(QAbstractTableModel* self, const QModelIndex* parent, int first, int last);
    friend void QAbstractTableModel_SuperBeginRemoveColumns(QAbstractTableModel* self, const QModelIndex* parent, int first, int last);
    friend void QAbstractTableModel_EndRemoveColumns(QAbstractTableModel* self);
    friend void QAbstractTableModel_SuperEndRemoveColumns(QAbstractTableModel* self);
    friend bool QAbstractTableModel_BeginMoveColumns(QAbstractTableModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
    friend bool QAbstractTableModel_SuperBeginMoveColumns(QAbstractTableModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
    friend void QAbstractTableModel_EndMoveColumns(QAbstractTableModel* self);
    friend void QAbstractTableModel_SuperEndMoveColumns(QAbstractTableModel* self);
    friend void QAbstractTableModel_BeginResetModel(QAbstractTableModel* self);
    friend void QAbstractTableModel_SuperBeginResetModel(QAbstractTableModel* self);
    friend void QAbstractTableModel_EndResetModel(QAbstractTableModel* self);
    friend void QAbstractTableModel_SuperEndResetModel(QAbstractTableModel* self);
    friend void QAbstractTableModel_ChangePersistentIndex(QAbstractTableModel* self, const QModelIndex* from, const QModelIndex* to);
    friend void QAbstractTableModel_SuperChangePersistentIndex(QAbstractTableModel* self, const QModelIndex* from, const QModelIndex* to);
    friend void QAbstractTableModel_ChangePersistentIndexList(QAbstractTableModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
    friend void QAbstractTableModel_SuperChangePersistentIndexList(QAbstractTableModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
    friend libqt_list /* of QModelIndex* */ QAbstractTableModel_PersistentIndexList(const QAbstractTableModel* self);
    friend libqt_list /* of QModelIndex* */ QAbstractTableModel_SuperPersistentIndexList(const QAbstractTableModel* self);
    friend QObject* QAbstractTableModel_Sender(const QAbstractTableModel* self);
    friend QObject* QAbstractTableModel_SuperSender(const QAbstractTableModel* self);
    friend int QAbstractTableModel_SenderSignalIndex(const QAbstractTableModel* self);
    friend int QAbstractTableModel_SuperSenderSignalIndex(const QAbstractTableModel* self);
    friend int QAbstractTableModel_Receivers(const QAbstractTableModel* self, const char* signal);
    friend int QAbstractTableModel_SuperReceivers(const QAbstractTableModel* self, const char* signal);
    friend bool QAbstractTableModel_IsSignalConnected(const QAbstractTableModel* self, const QMetaMethod* signal);
    friend bool QAbstractTableModel_SuperIsSignalConnected(const QAbstractTableModel* self, const QMetaMethod* signal);
};

// This class is a subclass of QAbstractListModel so that we can call protected methods
class VirtualQAbstractListModel : public QAbstractListModel {

  public:
    // Virtual class boolean flag
    bool isVirtualQAbstractListModel = true;

    // Virtual class public types (including callbacks)
    using QAbstractListModel_MetaObject_Callback = QMetaObject* (*)();
    using QAbstractListModel_Metacast_Callback = void* (*)(QAbstractListModel*, const char*);
    using QAbstractListModel_Metacall_Callback = int (*)(QAbstractListModel*, int, int, void**);
    using QAbstractListModel_Index_Callback = QModelIndex* (*)(const QAbstractListModel*, int, int, QModelIndex*);
    using QAbstractListModel_Sibling_Callback = QModelIndex* (*)(const QAbstractListModel*, int, int, QModelIndex*);
    using QAbstractListModel_DropMimeData_Callback = bool (*)(QAbstractListModel*, QMimeData*, int, int, int, QModelIndex*);
    using QAbstractListModel_Flags_Callback = int (*)(const QAbstractListModel*, QModelIndex*);
    using QAbstractListModel_RowCount_Callback = int (*)(const QAbstractListModel*, QModelIndex*);
    using QAbstractListModel_Data_Callback = QVariant* (*)(const QAbstractListModel*, QModelIndex*, int);
    using QAbstractListModel_SetData_Callback = bool (*)(QAbstractListModel*, QModelIndex*, QVariant*, int);
    using QAbstractListModel_HeaderData_Callback = QVariant* (*)(const QAbstractListModel*, int, int, int);
    using QAbstractListModel_SetHeaderData_Callback = bool (*)(QAbstractListModel*, int, int, QVariant*, int);
    using QAbstractListModel_ItemData_Callback = libqt_map /* of int to QVariant* */ (*)(const QAbstractListModel*, QModelIndex*);
    using QAbstractListModel_SetItemData_Callback = bool (*)(QAbstractListModel*, QModelIndex*, libqt_map /* of int to QVariant* */);
    using QAbstractListModel_ClearItemData_Callback = bool (*)(QAbstractListModel*, QModelIndex*);
    using QAbstractListModel_MimeTypes_Callback = const char** (*)();
    using QAbstractListModel_MimeData_Callback = QMimeData* (*)(const QAbstractListModel*, libqt_list /* of QModelIndex* */);
    using QAbstractListModel_CanDropMimeData_Callback = bool (*)(const QAbstractListModel*, QMimeData*, int, int, int, QModelIndex*);
    using QAbstractListModel_SupportedDropActions_Callback = int (*)();
    using QAbstractListModel_SupportedDragActions_Callback = int (*)();
    using QAbstractListModel_InsertRows_Callback = bool (*)(QAbstractListModel*, int, int, QModelIndex*);
    using QAbstractListModel_InsertColumns_Callback = bool (*)(QAbstractListModel*, int, int, QModelIndex*);
    using QAbstractListModel_RemoveRows_Callback = bool (*)(QAbstractListModel*, int, int, QModelIndex*);
    using QAbstractListModel_RemoveColumns_Callback = bool (*)(QAbstractListModel*, int, int, QModelIndex*);
    using QAbstractListModel_MoveRows_Callback = bool (*)(QAbstractListModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QAbstractListModel_MoveColumns_Callback = bool (*)(QAbstractListModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QAbstractListModel_FetchMore_Callback = void (*)(QAbstractListModel*, QModelIndex*);
    using QAbstractListModel_CanFetchMore_Callback = bool (*)(const QAbstractListModel*, QModelIndex*);
    using QAbstractListModel_Sort_Callback = void (*)(QAbstractListModel*, int, int);
    using QAbstractListModel_Buddy_Callback = QModelIndex* (*)(const QAbstractListModel*, QModelIndex*);
    using QAbstractListModel_Match_Callback = libqt_list /* of QModelIndex* */ (*)(const QAbstractListModel*, QModelIndex*, int, QVariant*, int, int);
    using QAbstractListModel_Span_Callback = QSize* (*)(const QAbstractListModel*, QModelIndex*);
    using QAbstractListModel_RoleNames_Callback = libqt_map /* of int to libqt_string */ (*)();
    using QAbstractListModel_MultiData_Callback = void (*)(const QAbstractListModel*, QModelIndex*, QModelRoleDataSpan*);
    using QAbstractListModel_Submit_Callback = bool (*)();
    using QAbstractListModel_Revert_Callback = void (*)();
    using QAbstractListModel_ResetInternalData_Callback = void (*)();
    using QAbstractListModel_Event_Callback = bool (*)(QAbstractListModel*, QEvent*);
    using QAbstractListModel_EventFilter_Callback = bool (*)(QAbstractListModel*, QObject*, QEvent*);
    using QAbstractListModel_TimerEvent_Callback = void (*)(QAbstractListModel*, QTimerEvent*);
    using QAbstractListModel_ChildEvent_Callback = void (*)(QAbstractListModel*, QChildEvent*);
    using QAbstractListModel_CustomEvent_Callback = void (*)(QAbstractListModel*, QEvent*);
    using QAbstractListModel_ConnectNotify_Callback = void (*)(QAbstractListModel*, QMetaMethod*);
    using QAbstractListModel_DisconnectNotify_Callback = void (*)(QAbstractListModel*, QMetaMethod*);
    using QAbstractListModel_CreateIndex_Callback = QModelIndex* (*)(const QAbstractListModel*, int, int);
    using QAbstractListModel_EncodeData_Callback = void (*)(const QAbstractListModel*, libqt_list /* of QModelIndex* */, QDataStream*);
    using QAbstractListModel_DecodeData_Callback = bool (*)(QAbstractListModel*, int, int, QModelIndex*, QDataStream*);
    using QAbstractListModel_BeginInsertRows_Callback = void (*)(QAbstractListModel*, QModelIndex*, int, int);
    using QAbstractListModel_EndInsertRows_Callback = void (*)();
    using QAbstractListModel_BeginRemoveRows_Callback = void (*)(QAbstractListModel*, QModelIndex*, int, int);
    using QAbstractListModel_EndRemoveRows_Callback = void (*)();
    using QAbstractListModel_BeginMoveRows_Callback = bool (*)(QAbstractListModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QAbstractListModel_EndMoveRows_Callback = void (*)();
    using QAbstractListModel_BeginInsertColumns_Callback = void (*)(QAbstractListModel*, QModelIndex*, int, int);
    using QAbstractListModel_EndInsertColumns_Callback = void (*)();
    using QAbstractListModel_BeginRemoveColumns_Callback = void (*)(QAbstractListModel*, QModelIndex*, int, int);
    using QAbstractListModel_EndRemoveColumns_Callback = void (*)();
    using QAbstractListModel_BeginMoveColumns_Callback = bool (*)(QAbstractListModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QAbstractListModel_EndMoveColumns_Callback = void (*)();
    using QAbstractListModel_BeginResetModel_Callback = void (*)();
    using QAbstractListModel_EndResetModel_Callback = void (*)();
    using QAbstractListModel_ChangePersistentIndex_Callback = void (*)(QAbstractListModel*, QModelIndex*, QModelIndex*);
    using QAbstractListModel_ChangePersistentIndexList_Callback = void (*)(QAbstractListModel*, libqt_list /* of QModelIndex* */, libqt_list /* of QModelIndex* */);
    using QAbstractListModel_PersistentIndexList_Callback = libqt_list /* of QModelIndex* */ (*)();
    using QAbstractListModel_Sender_Callback = QObject* (*)();
    using QAbstractListModel_SenderSignalIndex_Callback = int (*)();
    using QAbstractListModel_Receivers_Callback = int (*)(const QAbstractListModel*, const char*);
    using QAbstractListModel_IsSignalConnected_Callback = bool (*)(const QAbstractListModel*, QMetaMethod*);

  protected:
    // Instance callback storage
    QAbstractListModel_MetaObject_Callback qabstractlistmodel_metaobject_callback = nullptr;
    QAbstractListModel_Metacast_Callback qabstractlistmodel_metacast_callback = nullptr;
    QAbstractListModel_Metacall_Callback qabstractlistmodel_metacall_callback = nullptr;
    QAbstractListModel_Index_Callback qabstractlistmodel_index_callback = nullptr;
    QAbstractListModel_Sibling_Callback qabstractlistmodel_sibling_callback = nullptr;
    QAbstractListModel_DropMimeData_Callback qabstractlistmodel_dropmimedata_callback = nullptr;
    QAbstractListModel_Flags_Callback qabstractlistmodel_flags_callback = nullptr;
    QAbstractListModel_RowCount_Callback qabstractlistmodel_rowcount_callback = nullptr;
    QAbstractListModel_Data_Callback qabstractlistmodel_data_callback = nullptr;
    QAbstractListModel_SetData_Callback qabstractlistmodel_setdata_callback = nullptr;
    QAbstractListModel_HeaderData_Callback qabstractlistmodel_headerdata_callback = nullptr;
    QAbstractListModel_SetHeaderData_Callback qabstractlistmodel_setheaderdata_callback = nullptr;
    QAbstractListModel_ItemData_Callback qabstractlistmodel_itemdata_callback = nullptr;
    QAbstractListModel_SetItemData_Callback qabstractlistmodel_setitemdata_callback = nullptr;
    QAbstractListModel_ClearItemData_Callback qabstractlistmodel_clearitemdata_callback = nullptr;
    QAbstractListModel_MimeTypes_Callback qabstractlistmodel_mimetypes_callback = nullptr;
    QAbstractListModel_MimeData_Callback qabstractlistmodel_mimedata_callback = nullptr;
    QAbstractListModel_CanDropMimeData_Callback qabstractlistmodel_candropmimedata_callback = nullptr;
    QAbstractListModel_SupportedDropActions_Callback qabstractlistmodel_supporteddropactions_callback = nullptr;
    QAbstractListModel_SupportedDragActions_Callback qabstractlistmodel_supporteddragactions_callback = nullptr;
    QAbstractListModel_InsertRows_Callback qabstractlistmodel_insertrows_callback = nullptr;
    QAbstractListModel_InsertColumns_Callback qabstractlistmodel_insertcolumns_callback = nullptr;
    QAbstractListModel_RemoveRows_Callback qabstractlistmodel_removerows_callback = nullptr;
    QAbstractListModel_RemoveColumns_Callback qabstractlistmodel_removecolumns_callback = nullptr;
    QAbstractListModel_MoveRows_Callback qabstractlistmodel_moverows_callback = nullptr;
    QAbstractListModel_MoveColumns_Callback qabstractlistmodel_movecolumns_callback = nullptr;
    QAbstractListModel_FetchMore_Callback qabstractlistmodel_fetchmore_callback = nullptr;
    QAbstractListModel_CanFetchMore_Callback qabstractlistmodel_canfetchmore_callback = nullptr;
    QAbstractListModel_Sort_Callback qabstractlistmodel_sort_callback = nullptr;
    QAbstractListModel_Buddy_Callback qabstractlistmodel_buddy_callback = nullptr;
    QAbstractListModel_Match_Callback qabstractlistmodel_match_callback = nullptr;
    QAbstractListModel_Span_Callback qabstractlistmodel_span_callback = nullptr;
    QAbstractListModel_RoleNames_Callback qabstractlistmodel_rolenames_callback = nullptr;
    QAbstractListModel_MultiData_Callback qabstractlistmodel_multidata_callback = nullptr;
    QAbstractListModel_Submit_Callback qabstractlistmodel_submit_callback = nullptr;
    QAbstractListModel_Revert_Callback qabstractlistmodel_revert_callback = nullptr;
    QAbstractListModel_ResetInternalData_Callback qabstractlistmodel_resetinternaldata_callback = nullptr;
    QAbstractListModel_Event_Callback qabstractlistmodel_event_callback = nullptr;
    QAbstractListModel_EventFilter_Callback qabstractlistmodel_eventfilter_callback = nullptr;
    QAbstractListModel_TimerEvent_Callback qabstractlistmodel_timerevent_callback = nullptr;
    QAbstractListModel_ChildEvent_Callback qabstractlistmodel_childevent_callback = nullptr;
    QAbstractListModel_CustomEvent_Callback qabstractlistmodel_customevent_callback = nullptr;
    QAbstractListModel_ConnectNotify_Callback qabstractlistmodel_connectnotify_callback = nullptr;
    QAbstractListModel_DisconnectNotify_Callback qabstractlistmodel_disconnectnotify_callback = nullptr;
    QAbstractListModel_CreateIndex_Callback qabstractlistmodel_createindex_callback = nullptr;
    QAbstractListModel_EncodeData_Callback qabstractlistmodel_encodedata_callback = nullptr;
    QAbstractListModel_DecodeData_Callback qabstractlistmodel_decodedata_callback = nullptr;
    QAbstractListModel_BeginInsertRows_Callback qabstractlistmodel_begininsertrows_callback = nullptr;
    QAbstractListModel_EndInsertRows_Callback qabstractlistmodel_endinsertrows_callback = nullptr;
    QAbstractListModel_BeginRemoveRows_Callback qabstractlistmodel_beginremoverows_callback = nullptr;
    QAbstractListModel_EndRemoveRows_Callback qabstractlistmodel_endremoverows_callback = nullptr;
    QAbstractListModel_BeginMoveRows_Callback qabstractlistmodel_beginmoverows_callback = nullptr;
    QAbstractListModel_EndMoveRows_Callback qabstractlistmodel_endmoverows_callback = nullptr;
    QAbstractListModel_BeginInsertColumns_Callback qabstractlistmodel_begininsertcolumns_callback = nullptr;
    QAbstractListModel_EndInsertColumns_Callback qabstractlistmodel_endinsertcolumns_callback = nullptr;
    QAbstractListModel_BeginRemoveColumns_Callback qabstractlistmodel_beginremovecolumns_callback = nullptr;
    QAbstractListModel_EndRemoveColumns_Callback qabstractlistmodel_endremovecolumns_callback = nullptr;
    QAbstractListModel_BeginMoveColumns_Callback qabstractlistmodel_beginmovecolumns_callback = nullptr;
    QAbstractListModel_EndMoveColumns_Callback qabstractlistmodel_endmovecolumns_callback = nullptr;
    QAbstractListModel_BeginResetModel_Callback qabstractlistmodel_beginresetmodel_callback = nullptr;
    QAbstractListModel_EndResetModel_Callback qabstractlistmodel_endresetmodel_callback = nullptr;
    QAbstractListModel_ChangePersistentIndex_Callback qabstractlistmodel_changepersistentindex_callback = nullptr;
    QAbstractListModel_ChangePersistentIndexList_Callback qabstractlistmodel_changepersistentindexlist_callback = nullptr;
    QAbstractListModel_PersistentIndexList_Callback qabstractlistmodel_persistentindexlist_callback = nullptr;
    QAbstractListModel_Sender_Callback qabstractlistmodel_sender_callback = nullptr;
    QAbstractListModel_SenderSignalIndex_Callback qabstractlistmodel_sendersignalindex_callback = nullptr;
    QAbstractListModel_Receivers_Callback qabstractlistmodel_receivers_callback = nullptr;
    QAbstractListModel_IsSignalConnected_Callback qabstractlistmodel_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qabstractlistmodel_metaobject_isbase = false;
    mutable bool qabstractlistmodel_metacast_isbase = false;
    mutable bool qabstractlistmodel_metacall_isbase = false;
    mutable bool qabstractlistmodel_index_isbase = false;
    mutable bool qabstractlistmodel_sibling_isbase = false;
    mutable bool qabstractlistmodel_dropmimedata_isbase = false;
    mutable bool qabstractlistmodel_flags_isbase = false;
    mutable bool qabstractlistmodel_rowcount_isbase = false;
    mutable bool qabstractlistmodel_data_isbase = false;
    mutable bool qabstractlistmodel_setdata_isbase = false;
    mutable bool qabstractlistmodel_headerdata_isbase = false;
    mutable bool qabstractlistmodel_setheaderdata_isbase = false;
    mutable bool qabstractlistmodel_itemdata_isbase = false;
    mutable bool qabstractlistmodel_setitemdata_isbase = false;
    mutable bool qabstractlistmodel_clearitemdata_isbase = false;
    mutable bool qabstractlistmodel_mimetypes_isbase = false;
    mutable bool qabstractlistmodel_mimedata_isbase = false;
    mutable bool qabstractlistmodel_candropmimedata_isbase = false;
    mutable bool qabstractlistmodel_supporteddropactions_isbase = false;
    mutable bool qabstractlistmodel_supporteddragactions_isbase = false;
    mutable bool qabstractlistmodel_insertrows_isbase = false;
    mutable bool qabstractlistmodel_insertcolumns_isbase = false;
    mutable bool qabstractlistmodel_removerows_isbase = false;
    mutable bool qabstractlistmodel_removecolumns_isbase = false;
    mutable bool qabstractlistmodel_moverows_isbase = false;
    mutable bool qabstractlistmodel_movecolumns_isbase = false;
    mutable bool qabstractlistmodel_fetchmore_isbase = false;
    mutable bool qabstractlistmodel_canfetchmore_isbase = false;
    mutable bool qabstractlistmodel_sort_isbase = false;
    mutable bool qabstractlistmodel_buddy_isbase = false;
    mutable bool qabstractlistmodel_match_isbase = false;
    mutable bool qabstractlistmodel_span_isbase = false;
    mutable bool qabstractlistmodel_rolenames_isbase = false;
    mutable bool qabstractlistmodel_multidata_isbase = false;
    mutable bool qabstractlistmodel_submit_isbase = false;
    mutable bool qabstractlistmodel_revert_isbase = false;
    mutable bool qabstractlistmodel_resetinternaldata_isbase = false;
    mutable bool qabstractlistmodel_event_isbase = false;
    mutable bool qabstractlistmodel_eventfilter_isbase = false;
    mutable bool qabstractlistmodel_timerevent_isbase = false;
    mutable bool qabstractlistmodel_childevent_isbase = false;
    mutable bool qabstractlistmodel_customevent_isbase = false;
    mutable bool qabstractlistmodel_connectnotify_isbase = false;
    mutable bool qabstractlistmodel_disconnectnotify_isbase = false;
    mutable bool qabstractlistmodel_createindex_isbase = false;
    mutable bool qabstractlistmodel_encodedata_isbase = false;
    mutable bool qabstractlistmodel_decodedata_isbase = false;
    mutable bool qabstractlistmodel_begininsertrows_isbase = false;
    mutable bool qabstractlistmodel_endinsertrows_isbase = false;
    mutable bool qabstractlistmodel_beginremoverows_isbase = false;
    mutable bool qabstractlistmodel_endremoverows_isbase = false;
    mutable bool qabstractlistmodel_beginmoverows_isbase = false;
    mutable bool qabstractlistmodel_endmoverows_isbase = false;
    mutable bool qabstractlistmodel_begininsertcolumns_isbase = false;
    mutable bool qabstractlistmodel_endinsertcolumns_isbase = false;
    mutable bool qabstractlistmodel_beginremovecolumns_isbase = false;
    mutable bool qabstractlistmodel_endremovecolumns_isbase = false;
    mutable bool qabstractlistmodel_beginmovecolumns_isbase = false;
    mutable bool qabstractlistmodel_endmovecolumns_isbase = false;
    mutable bool qabstractlistmodel_beginresetmodel_isbase = false;
    mutable bool qabstractlistmodel_endresetmodel_isbase = false;
    mutable bool qabstractlistmodel_changepersistentindex_isbase = false;
    mutable bool qabstractlistmodel_changepersistentindexlist_isbase = false;
    mutable bool qabstractlistmodel_persistentindexlist_isbase = false;
    mutable bool qabstractlistmodel_sender_isbase = false;
    mutable bool qabstractlistmodel_sendersignalindex_isbase = false;
    mutable bool qabstractlistmodel_receivers_isbase = false;
    mutable bool qabstractlistmodel_issignalconnected_isbase = false;

  public:
    VirtualQAbstractListModel() : QAbstractListModel() {};
    VirtualQAbstractListModel(QObject* parent) : QAbstractListModel(parent) {};

    // Callback setters
    inline void setQAbstractListModel_MetaObject_Callback(QAbstractListModel_MetaObject_Callback cb) { qabstractlistmodel_metaobject_callback = cb; }
    inline void setQAbstractListModel_Metacast_Callback(QAbstractListModel_Metacast_Callback cb) { qabstractlistmodel_metacast_callback = cb; }
    inline void setQAbstractListModel_Metacall_Callback(QAbstractListModel_Metacall_Callback cb) { qabstractlistmodel_metacall_callback = cb; }
    inline void setQAbstractListModel_Index_Callback(QAbstractListModel_Index_Callback cb) { qabstractlistmodel_index_callback = cb; }
    inline void setQAbstractListModel_Sibling_Callback(QAbstractListModel_Sibling_Callback cb) { qabstractlistmodel_sibling_callback = cb; }
    inline void setQAbstractListModel_DropMimeData_Callback(QAbstractListModel_DropMimeData_Callback cb) { qabstractlistmodel_dropmimedata_callback = cb; }
    inline void setQAbstractListModel_Flags_Callback(QAbstractListModel_Flags_Callback cb) { qabstractlistmodel_flags_callback = cb; }
    inline void setQAbstractListModel_RowCount_Callback(QAbstractListModel_RowCount_Callback cb) { qabstractlistmodel_rowcount_callback = cb; }
    inline void setQAbstractListModel_Data_Callback(QAbstractListModel_Data_Callback cb) { qabstractlistmodel_data_callback = cb; }
    inline void setQAbstractListModel_SetData_Callback(QAbstractListModel_SetData_Callback cb) { qabstractlistmodel_setdata_callback = cb; }
    inline void setQAbstractListModel_HeaderData_Callback(QAbstractListModel_HeaderData_Callback cb) { qabstractlistmodel_headerdata_callback = cb; }
    inline void setQAbstractListModel_SetHeaderData_Callback(QAbstractListModel_SetHeaderData_Callback cb) { qabstractlistmodel_setheaderdata_callback = cb; }
    inline void setQAbstractListModel_ItemData_Callback(QAbstractListModel_ItemData_Callback cb) { qabstractlistmodel_itemdata_callback = cb; }
    inline void setQAbstractListModel_SetItemData_Callback(QAbstractListModel_SetItemData_Callback cb) { qabstractlistmodel_setitemdata_callback = cb; }
    inline void setQAbstractListModel_ClearItemData_Callback(QAbstractListModel_ClearItemData_Callback cb) { qabstractlistmodel_clearitemdata_callback = cb; }
    inline void setQAbstractListModel_MimeTypes_Callback(QAbstractListModel_MimeTypes_Callback cb) { qabstractlistmodel_mimetypes_callback = cb; }
    inline void setQAbstractListModel_MimeData_Callback(QAbstractListModel_MimeData_Callback cb) { qabstractlistmodel_mimedata_callback = cb; }
    inline void setQAbstractListModel_CanDropMimeData_Callback(QAbstractListModel_CanDropMimeData_Callback cb) { qabstractlistmodel_candropmimedata_callback = cb; }
    inline void setQAbstractListModel_SupportedDropActions_Callback(QAbstractListModel_SupportedDropActions_Callback cb) { qabstractlistmodel_supporteddropactions_callback = cb; }
    inline void setQAbstractListModel_SupportedDragActions_Callback(QAbstractListModel_SupportedDragActions_Callback cb) { qabstractlistmodel_supporteddragactions_callback = cb; }
    inline void setQAbstractListModel_InsertRows_Callback(QAbstractListModel_InsertRows_Callback cb) { qabstractlistmodel_insertrows_callback = cb; }
    inline void setQAbstractListModel_InsertColumns_Callback(QAbstractListModel_InsertColumns_Callback cb) { qabstractlistmodel_insertcolumns_callback = cb; }
    inline void setQAbstractListModel_RemoveRows_Callback(QAbstractListModel_RemoveRows_Callback cb) { qabstractlistmodel_removerows_callback = cb; }
    inline void setQAbstractListModel_RemoveColumns_Callback(QAbstractListModel_RemoveColumns_Callback cb) { qabstractlistmodel_removecolumns_callback = cb; }
    inline void setQAbstractListModel_MoveRows_Callback(QAbstractListModel_MoveRows_Callback cb) { qabstractlistmodel_moverows_callback = cb; }
    inline void setQAbstractListModel_MoveColumns_Callback(QAbstractListModel_MoveColumns_Callback cb) { qabstractlistmodel_movecolumns_callback = cb; }
    inline void setQAbstractListModel_FetchMore_Callback(QAbstractListModel_FetchMore_Callback cb) { qabstractlistmodel_fetchmore_callback = cb; }
    inline void setQAbstractListModel_CanFetchMore_Callback(QAbstractListModel_CanFetchMore_Callback cb) { qabstractlistmodel_canfetchmore_callback = cb; }
    inline void setQAbstractListModel_Sort_Callback(QAbstractListModel_Sort_Callback cb) { qabstractlistmodel_sort_callback = cb; }
    inline void setQAbstractListModel_Buddy_Callback(QAbstractListModel_Buddy_Callback cb) { qabstractlistmodel_buddy_callback = cb; }
    inline void setQAbstractListModel_Match_Callback(QAbstractListModel_Match_Callback cb) { qabstractlistmodel_match_callback = cb; }
    inline void setQAbstractListModel_Span_Callback(QAbstractListModel_Span_Callback cb) { qabstractlistmodel_span_callback = cb; }
    inline void setQAbstractListModel_RoleNames_Callback(QAbstractListModel_RoleNames_Callback cb) { qabstractlistmodel_rolenames_callback = cb; }
    inline void setQAbstractListModel_MultiData_Callback(QAbstractListModel_MultiData_Callback cb) { qabstractlistmodel_multidata_callback = cb; }
    inline void setQAbstractListModel_Submit_Callback(QAbstractListModel_Submit_Callback cb) { qabstractlistmodel_submit_callback = cb; }
    inline void setQAbstractListModel_Revert_Callback(QAbstractListModel_Revert_Callback cb) { qabstractlistmodel_revert_callback = cb; }
    inline void setQAbstractListModel_ResetInternalData_Callback(QAbstractListModel_ResetInternalData_Callback cb) { qabstractlistmodel_resetinternaldata_callback = cb; }
    inline void setQAbstractListModel_Event_Callback(QAbstractListModel_Event_Callback cb) { qabstractlistmodel_event_callback = cb; }
    inline void setQAbstractListModel_EventFilter_Callback(QAbstractListModel_EventFilter_Callback cb) { qabstractlistmodel_eventfilter_callback = cb; }
    inline void setQAbstractListModel_TimerEvent_Callback(QAbstractListModel_TimerEvent_Callback cb) { qabstractlistmodel_timerevent_callback = cb; }
    inline void setQAbstractListModel_ChildEvent_Callback(QAbstractListModel_ChildEvent_Callback cb) { qabstractlistmodel_childevent_callback = cb; }
    inline void setQAbstractListModel_CustomEvent_Callback(QAbstractListModel_CustomEvent_Callback cb) { qabstractlistmodel_customevent_callback = cb; }
    inline void setQAbstractListModel_ConnectNotify_Callback(QAbstractListModel_ConnectNotify_Callback cb) { qabstractlistmodel_connectnotify_callback = cb; }
    inline void setQAbstractListModel_DisconnectNotify_Callback(QAbstractListModel_DisconnectNotify_Callback cb) { qabstractlistmodel_disconnectnotify_callback = cb; }
    inline void setQAbstractListModel_CreateIndex_Callback(QAbstractListModel_CreateIndex_Callback cb) { qabstractlistmodel_createindex_callback = cb; }
    inline void setQAbstractListModel_EncodeData_Callback(QAbstractListModel_EncodeData_Callback cb) { qabstractlistmodel_encodedata_callback = cb; }
    inline void setQAbstractListModel_DecodeData_Callback(QAbstractListModel_DecodeData_Callback cb) { qabstractlistmodel_decodedata_callback = cb; }
    inline void setQAbstractListModel_BeginInsertRows_Callback(QAbstractListModel_BeginInsertRows_Callback cb) { qabstractlistmodel_begininsertrows_callback = cb; }
    inline void setQAbstractListModel_EndInsertRows_Callback(QAbstractListModel_EndInsertRows_Callback cb) { qabstractlistmodel_endinsertrows_callback = cb; }
    inline void setQAbstractListModel_BeginRemoveRows_Callback(QAbstractListModel_BeginRemoveRows_Callback cb) { qabstractlistmodel_beginremoverows_callback = cb; }
    inline void setQAbstractListModel_EndRemoveRows_Callback(QAbstractListModel_EndRemoveRows_Callback cb) { qabstractlistmodel_endremoverows_callback = cb; }
    inline void setQAbstractListModel_BeginMoveRows_Callback(QAbstractListModel_BeginMoveRows_Callback cb) { qabstractlistmodel_beginmoverows_callback = cb; }
    inline void setQAbstractListModel_EndMoveRows_Callback(QAbstractListModel_EndMoveRows_Callback cb) { qabstractlistmodel_endmoverows_callback = cb; }
    inline void setQAbstractListModel_BeginInsertColumns_Callback(QAbstractListModel_BeginInsertColumns_Callback cb) { qabstractlistmodel_begininsertcolumns_callback = cb; }
    inline void setQAbstractListModel_EndInsertColumns_Callback(QAbstractListModel_EndInsertColumns_Callback cb) { qabstractlistmodel_endinsertcolumns_callback = cb; }
    inline void setQAbstractListModel_BeginRemoveColumns_Callback(QAbstractListModel_BeginRemoveColumns_Callback cb) { qabstractlistmodel_beginremovecolumns_callback = cb; }
    inline void setQAbstractListModel_EndRemoveColumns_Callback(QAbstractListModel_EndRemoveColumns_Callback cb) { qabstractlistmodel_endremovecolumns_callback = cb; }
    inline void setQAbstractListModel_BeginMoveColumns_Callback(QAbstractListModel_BeginMoveColumns_Callback cb) { qabstractlistmodel_beginmovecolumns_callback = cb; }
    inline void setQAbstractListModel_EndMoveColumns_Callback(QAbstractListModel_EndMoveColumns_Callback cb) { qabstractlistmodel_endmovecolumns_callback = cb; }
    inline void setQAbstractListModel_BeginResetModel_Callback(QAbstractListModel_BeginResetModel_Callback cb) { qabstractlistmodel_beginresetmodel_callback = cb; }
    inline void setQAbstractListModel_EndResetModel_Callback(QAbstractListModel_EndResetModel_Callback cb) { qabstractlistmodel_endresetmodel_callback = cb; }
    inline void setQAbstractListModel_ChangePersistentIndex_Callback(QAbstractListModel_ChangePersistentIndex_Callback cb) { qabstractlistmodel_changepersistentindex_callback = cb; }
    inline void setQAbstractListModel_ChangePersistentIndexList_Callback(QAbstractListModel_ChangePersistentIndexList_Callback cb) { qabstractlistmodel_changepersistentindexlist_callback = cb; }
    inline void setQAbstractListModel_PersistentIndexList_Callback(QAbstractListModel_PersistentIndexList_Callback cb) { qabstractlistmodel_persistentindexlist_callback = cb; }
    inline void setQAbstractListModel_Sender_Callback(QAbstractListModel_Sender_Callback cb) { qabstractlistmodel_sender_callback = cb; }
    inline void setQAbstractListModel_SenderSignalIndex_Callback(QAbstractListModel_SenderSignalIndex_Callback cb) { qabstractlistmodel_sendersignalindex_callback = cb; }
    inline void setQAbstractListModel_Receivers_Callback(QAbstractListModel_Receivers_Callback cb) { qabstractlistmodel_receivers_callback = cb; }
    inline void setQAbstractListModel_IsSignalConnected_Callback(QAbstractListModel_IsSignalConnected_Callback cb) { qabstractlistmodel_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQAbstractListModel_MetaObject_IsBase(bool value) const { qabstractlistmodel_metaobject_isbase = value; }
    inline void setQAbstractListModel_Metacast_IsBase(bool value) const { qabstractlistmodel_metacast_isbase = value; }
    inline void setQAbstractListModel_Metacall_IsBase(bool value) const { qabstractlistmodel_metacall_isbase = value; }
    inline void setQAbstractListModel_Index_IsBase(bool value) const { qabstractlistmodel_index_isbase = value; }
    inline void setQAbstractListModel_Sibling_IsBase(bool value) const { qabstractlistmodel_sibling_isbase = value; }
    inline void setQAbstractListModel_DropMimeData_IsBase(bool value) const { qabstractlistmodel_dropmimedata_isbase = value; }
    inline void setQAbstractListModel_Flags_IsBase(bool value) const { qabstractlistmodel_flags_isbase = value; }
    inline void setQAbstractListModel_RowCount_IsBase(bool value) const { qabstractlistmodel_rowcount_isbase = value; }
    inline void setQAbstractListModel_Data_IsBase(bool value) const { qabstractlistmodel_data_isbase = value; }
    inline void setQAbstractListModel_SetData_IsBase(bool value) const { qabstractlistmodel_setdata_isbase = value; }
    inline void setQAbstractListModel_HeaderData_IsBase(bool value) const { qabstractlistmodel_headerdata_isbase = value; }
    inline void setQAbstractListModel_SetHeaderData_IsBase(bool value) const { qabstractlistmodel_setheaderdata_isbase = value; }
    inline void setQAbstractListModel_ItemData_IsBase(bool value) const { qabstractlistmodel_itemdata_isbase = value; }
    inline void setQAbstractListModel_SetItemData_IsBase(bool value) const { qabstractlistmodel_setitemdata_isbase = value; }
    inline void setQAbstractListModel_ClearItemData_IsBase(bool value) const { qabstractlistmodel_clearitemdata_isbase = value; }
    inline void setQAbstractListModel_MimeTypes_IsBase(bool value) const { qabstractlistmodel_mimetypes_isbase = value; }
    inline void setQAbstractListModel_MimeData_IsBase(bool value) const { qabstractlistmodel_mimedata_isbase = value; }
    inline void setQAbstractListModel_CanDropMimeData_IsBase(bool value) const { qabstractlistmodel_candropmimedata_isbase = value; }
    inline void setQAbstractListModel_SupportedDropActions_IsBase(bool value) const { qabstractlistmodel_supporteddropactions_isbase = value; }
    inline void setQAbstractListModel_SupportedDragActions_IsBase(bool value) const { qabstractlistmodel_supporteddragactions_isbase = value; }
    inline void setQAbstractListModel_InsertRows_IsBase(bool value) const { qabstractlistmodel_insertrows_isbase = value; }
    inline void setQAbstractListModel_InsertColumns_IsBase(bool value) const { qabstractlistmodel_insertcolumns_isbase = value; }
    inline void setQAbstractListModel_RemoveRows_IsBase(bool value) const { qabstractlistmodel_removerows_isbase = value; }
    inline void setQAbstractListModel_RemoveColumns_IsBase(bool value) const { qabstractlistmodel_removecolumns_isbase = value; }
    inline void setQAbstractListModel_MoveRows_IsBase(bool value) const { qabstractlistmodel_moverows_isbase = value; }
    inline void setQAbstractListModel_MoveColumns_IsBase(bool value) const { qabstractlistmodel_movecolumns_isbase = value; }
    inline void setQAbstractListModel_FetchMore_IsBase(bool value) const { qabstractlistmodel_fetchmore_isbase = value; }
    inline void setQAbstractListModel_CanFetchMore_IsBase(bool value) const { qabstractlistmodel_canfetchmore_isbase = value; }
    inline void setQAbstractListModel_Sort_IsBase(bool value) const { qabstractlistmodel_sort_isbase = value; }
    inline void setQAbstractListModel_Buddy_IsBase(bool value) const { qabstractlistmodel_buddy_isbase = value; }
    inline void setQAbstractListModel_Match_IsBase(bool value) const { qabstractlistmodel_match_isbase = value; }
    inline void setQAbstractListModel_Span_IsBase(bool value) const { qabstractlistmodel_span_isbase = value; }
    inline void setQAbstractListModel_RoleNames_IsBase(bool value) const { qabstractlistmodel_rolenames_isbase = value; }
    inline void setQAbstractListModel_MultiData_IsBase(bool value) const { qabstractlistmodel_multidata_isbase = value; }
    inline void setQAbstractListModel_Submit_IsBase(bool value) const { qabstractlistmodel_submit_isbase = value; }
    inline void setQAbstractListModel_Revert_IsBase(bool value) const { qabstractlistmodel_revert_isbase = value; }
    inline void setQAbstractListModel_ResetInternalData_IsBase(bool value) const { qabstractlistmodel_resetinternaldata_isbase = value; }
    inline void setQAbstractListModel_Event_IsBase(bool value) const { qabstractlistmodel_event_isbase = value; }
    inline void setQAbstractListModel_EventFilter_IsBase(bool value) const { qabstractlistmodel_eventfilter_isbase = value; }
    inline void setQAbstractListModel_TimerEvent_IsBase(bool value) const { qabstractlistmodel_timerevent_isbase = value; }
    inline void setQAbstractListModel_ChildEvent_IsBase(bool value) const { qabstractlistmodel_childevent_isbase = value; }
    inline void setQAbstractListModel_CustomEvent_IsBase(bool value) const { qabstractlistmodel_customevent_isbase = value; }
    inline void setQAbstractListModel_ConnectNotify_IsBase(bool value) const { qabstractlistmodel_connectnotify_isbase = value; }
    inline void setQAbstractListModel_DisconnectNotify_IsBase(bool value) const { qabstractlistmodel_disconnectnotify_isbase = value; }
    inline void setQAbstractListModel_CreateIndex_IsBase(bool value) const { qabstractlistmodel_createindex_isbase = value; }
    inline void setQAbstractListModel_EncodeData_IsBase(bool value) const { qabstractlistmodel_encodedata_isbase = value; }
    inline void setQAbstractListModel_DecodeData_IsBase(bool value) const { qabstractlistmodel_decodedata_isbase = value; }
    inline void setQAbstractListModel_BeginInsertRows_IsBase(bool value) const { qabstractlistmodel_begininsertrows_isbase = value; }
    inline void setQAbstractListModel_EndInsertRows_IsBase(bool value) const { qabstractlistmodel_endinsertrows_isbase = value; }
    inline void setQAbstractListModel_BeginRemoveRows_IsBase(bool value) const { qabstractlistmodel_beginremoverows_isbase = value; }
    inline void setQAbstractListModel_EndRemoveRows_IsBase(bool value) const { qabstractlistmodel_endremoverows_isbase = value; }
    inline void setQAbstractListModel_BeginMoveRows_IsBase(bool value) const { qabstractlistmodel_beginmoverows_isbase = value; }
    inline void setQAbstractListModel_EndMoveRows_IsBase(bool value) const { qabstractlistmodel_endmoverows_isbase = value; }
    inline void setQAbstractListModel_BeginInsertColumns_IsBase(bool value) const { qabstractlistmodel_begininsertcolumns_isbase = value; }
    inline void setQAbstractListModel_EndInsertColumns_IsBase(bool value) const { qabstractlistmodel_endinsertcolumns_isbase = value; }
    inline void setQAbstractListModel_BeginRemoveColumns_IsBase(bool value) const { qabstractlistmodel_beginremovecolumns_isbase = value; }
    inline void setQAbstractListModel_EndRemoveColumns_IsBase(bool value) const { qabstractlistmodel_endremovecolumns_isbase = value; }
    inline void setQAbstractListModel_BeginMoveColumns_IsBase(bool value) const { qabstractlistmodel_beginmovecolumns_isbase = value; }
    inline void setQAbstractListModel_EndMoveColumns_IsBase(bool value) const { qabstractlistmodel_endmovecolumns_isbase = value; }
    inline void setQAbstractListModel_BeginResetModel_IsBase(bool value) const { qabstractlistmodel_beginresetmodel_isbase = value; }
    inline void setQAbstractListModel_EndResetModel_IsBase(bool value) const { qabstractlistmodel_endresetmodel_isbase = value; }
    inline void setQAbstractListModel_ChangePersistentIndex_IsBase(bool value) const { qabstractlistmodel_changepersistentindex_isbase = value; }
    inline void setQAbstractListModel_ChangePersistentIndexList_IsBase(bool value) const { qabstractlistmodel_changepersistentindexlist_isbase = value; }
    inline void setQAbstractListModel_PersistentIndexList_IsBase(bool value) const { qabstractlistmodel_persistentindexlist_isbase = value; }
    inline void setQAbstractListModel_Sender_IsBase(bool value) const { qabstractlistmodel_sender_isbase = value; }
    inline void setQAbstractListModel_SenderSignalIndex_IsBase(bool value) const { qabstractlistmodel_sendersignalindex_isbase = value; }
    inline void setQAbstractListModel_Receivers_IsBase(bool value) const { qabstractlistmodel_receivers_isbase = value; }
    inline void setQAbstractListModel_IsSignalConnected_IsBase(bool value) const { qabstractlistmodel_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qabstractlistmodel_metaobject_isbase) {
            qabstractlistmodel_metaobject_isbase = false;
            return QAbstractListModel::metaObject();
        }
        auto metaobject_cb = qabstractlistmodel_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QAbstractListModel::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qabstractlistmodel_metacast_isbase) {
            qabstractlistmodel_metacast_isbase = false;
            return QAbstractListModel::qt_metacast(param1);
        }
        auto metacast_cb = qabstractlistmodel_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QAbstractListModel::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qabstractlistmodel_metacall_isbase) {
            qabstractlistmodel_metacall_isbase = false;
            return QAbstractListModel::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qabstractlistmodel_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QAbstractListModel::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
        if (qabstractlistmodel_index_isbase) {
            qabstractlistmodel_index_isbase = false;
            return QAbstractListModel::index(row, column, parent);
        }
        auto index_cb = qabstractlistmodel_index_callback;
        if (index_cb) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            QModelIndex* callback_ret = index_cb(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        }
        return QAbstractListModel::index(row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
        if (qabstractlistmodel_sibling_isbase) {
            qabstractlistmodel_sibling_isbase = false;
            return QAbstractListModel::sibling(row, column, idx);
        }
        auto sibling_cb = qabstractlistmodel_sibling_callback;
        if (sibling_cb) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& idx_ret = idx;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&idx_ret);

            QModelIndex* callback_ret = sibling_cb(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        }
        return QAbstractListModel::sibling(row, column, idx);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
        if (qabstractlistmodel_dropmimedata_isbase) {
            qabstractlistmodel_dropmimedata_isbase = false;
            return QAbstractListModel::dropMimeData(data, action, row, column, parent);
        }
        auto dropmimedata_cb = qabstractlistmodel_dropmimedata_callback;
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
        return QAbstractListModel::dropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
        if (qabstractlistmodel_flags_isbase) {
            qabstractlistmodel_flags_isbase = false;
            return QAbstractListModel::flags(index);
        }
        auto flags_cb = qabstractlistmodel_flags_callback;
        if (flags_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            int callback_ret = flags_cb(this, cbval1);
            return static_cast<Qt::ItemFlags>(callback_ret);
        }
        return QAbstractListModel::flags(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual int rowCount(const QModelIndex& parent) const override {
        auto rowcount_cb = qabstractlistmodel_rowcount_callback;
        if (rowcount_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            int callback_ret = rowcount_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(const QModelIndex& index, int role) const override {
        auto data_cb = qabstractlistmodel_data_callback;
        if (data_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = role;

            QVariant* callback_ret = data_cb(this, cbval1, cbval2);
            return *callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
        if (qabstractlistmodel_setdata_isbase) {
            qabstractlistmodel_setdata_isbase = false;
            return QAbstractListModel::setData(index, value, role);
        }
        auto setdata_cb = qabstractlistmodel_setdata_callback;
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
        return QAbstractListModel::setData(index, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
        if (qabstractlistmodel_headerdata_isbase) {
            qabstractlistmodel_headerdata_isbase = false;
            return QAbstractListModel::headerData(section, orientation, role);
        }
        auto headerdata_cb = qabstractlistmodel_headerdata_callback;
        if (headerdata_cb) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            int cbval3 = role;

            QVariant* callback_ret = headerdata_cb(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        }
        return QAbstractListModel::headerData(section, orientation, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
        if (qabstractlistmodel_setheaderdata_isbase) {
            qabstractlistmodel_setheaderdata_isbase = false;
            return QAbstractListModel::setHeaderData(section, orientation, value, role);
        }
        auto setheaderdata_cb = qabstractlistmodel_setheaderdata_callback;
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
        return QAbstractListModel::setHeaderData(section, orientation, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
        if (qabstractlistmodel_itemdata_isbase) {
            qabstractlistmodel_itemdata_isbase = false;
            return QAbstractListModel::itemData(index);
        }
        auto itemdata_cb = qabstractlistmodel_itemdata_callback;
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
        return QAbstractListModel::itemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
        if (qabstractlistmodel_setitemdata_isbase) {
            qabstractlistmodel_setitemdata_isbase = false;
            return QAbstractListModel::setItemData(index, roles);
        }
        auto setitemdata_cb = qabstractlistmodel_setitemdata_callback;
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
        return QAbstractListModel::setItemData(index, roles);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool clearItemData(const QModelIndex& index) override {
        if (qabstractlistmodel_clearitemdata_isbase) {
            qabstractlistmodel_clearitemdata_isbase = false;
            return QAbstractListModel::clearItemData(index);
        }
        auto clearitemdata_cb = qabstractlistmodel_clearitemdata_callback;
        if (clearitemdata_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            bool callback_ret = clearitemdata_cb(this, cbval1);
            return callback_ret;
        }
        return QAbstractListModel::clearItemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> mimeTypes() const override {
        if (qabstractlistmodel_mimetypes_isbase) {
            qabstractlistmodel_mimetypes_isbase = false;
            return QAbstractListModel::mimeTypes();
        }
        auto mimetypes_cb = qabstractlistmodel_mimetypes_callback;
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
        return QAbstractListModel::mimeTypes();
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* mimeData(const QList<QModelIndex>& indexes) const override {
        if (qabstractlistmodel_mimedata_isbase) {
            qabstractlistmodel_mimedata_isbase = false;
            return QAbstractListModel::mimeData(indexes);
        }
        auto mimedata_cb = qabstractlistmodel_mimedata_callback;
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
        return QAbstractListModel::mimeData(indexes);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
        if (qabstractlistmodel_candropmimedata_isbase) {
            qabstractlistmodel_candropmimedata_isbase = false;
            return QAbstractListModel::canDropMimeData(data, action, row, column, parent);
        }
        auto candropmimedata_cb = qabstractlistmodel_candropmimedata_callback;
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
        return QAbstractListModel::canDropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (qabstractlistmodel_supporteddropactions_isbase) {
            qabstractlistmodel_supporteddropactions_isbase = false;
            return QAbstractListModel::supportedDropActions();
        }
        auto supporteddropactions_cb = qabstractlistmodel_supporteddropactions_callback;
        if (supporteddropactions_cb) {
            int callback_ret = supporteddropactions_cb();
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return QAbstractListModel::supportedDropActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDragActions() const override {
        if (qabstractlistmodel_supporteddragactions_isbase) {
            qabstractlistmodel_supporteddragactions_isbase = false;
            return QAbstractListModel::supportedDragActions();
        }
        auto supporteddragactions_cb = qabstractlistmodel_supporteddragactions_callback;
        if (supporteddragactions_cb) {
            int callback_ret = supporteddragactions_cb();
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return QAbstractListModel::supportedDragActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
        if (qabstractlistmodel_insertrows_isbase) {
            qabstractlistmodel_insertrows_isbase = false;
            return QAbstractListModel::insertRows(row, count, parent);
        }
        auto insertrows_cb = qabstractlistmodel_insertrows_callback;
        if (insertrows_cb) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = insertrows_cb(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QAbstractListModel::insertRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
        if (qabstractlistmodel_insertcolumns_isbase) {
            qabstractlistmodel_insertcolumns_isbase = false;
            return QAbstractListModel::insertColumns(column, count, parent);
        }
        auto insertcolumns_cb = qabstractlistmodel_insertcolumns_callback;
        if (insertcolumns_cb) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = insertcolumns_cb(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QAbstractListModel::insertColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
        if (qabstractlistmodel_removerows_isbase) {
            qabstractlistmodel_removerows_isbase = false;
            return QAbstractListModel::removeRows(row, count, parent);
        }
        auto removerows_cb = qabstractlistmodel_removerows_callback;
        if (removerows_cb) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = removerows_cb(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QAbstractListModel::removeRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
        if (qabstractlistmodel_removecolumns_isbase) {
            qabstractlistmodel_removecolumns_isbase = false;
            return QAbstractListModel::removeColumns(column, count, parent);
        }
        auto removecolumns_cb = qabstractlistmodel_removecolumns_callback;
        if (removecolumns_cb) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = removecolumns_cb(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QAbstractListModel::removeColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (qabstractlistmodel_moverows_isbase) {
            qabstractlistmodel_moverows_isbase = false;
            return QAbstractListModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
        }
        auto moverows_cb = qabstractlistmodel_moverows_callback;
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
        return QAbstractListModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (qabstractlistmodel_movecolumns_isbase) {
            qabstractlistmodel_movecolumns_isbase = false;
            return QAbstractListModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
        }
        auto movecolumns_cb = qabstractlistmodel_movecolumns_callback;
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
        return QAbstractListModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual void fetchMore(const QModelIndex& parent) override {
        if (qabstractlistmodel_fetchmore_isbase) {
            qabstractlistmodel_fetchmore_isbase = false;
            QAbstractListModel::fetchMore(parent);
            return;
        }
        auto fetchmore_cb = qabstractlistmodel_fetchmore_callback;
        if (fetchmore_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            fetchmore_cb(this, cbval1);
            return;
        }
        QAbstractListModel::fetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canFetchMore(const QModelIndex& parent) const override {
        if (qabstractlistmodel_canfetchmore_isbase) {
            qabstractlistmodel_canfetchmore_isbase = false;
            return QAbstractListModel::canFetchMore(parent);
        }
        auto canfetchmore_cb = qabstractlistmodel_canfetchmore_callback;
        if (canfetchmore_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = canfetchmore_cb(this, cbval1);
            return callback_ret;
        }
        return QAbstractListModel::canFetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void sort(int column, Qt::SortOrder order) override {
        if (qabstractlistmodel_sort_isbase) {
            qabstractlistmodel_sort_isbase = false;
            QAbstractListModel::sort(column, order);
            return;
        }
        auto sort_cb = qabstractlistmodel_sort_callback;
        if (sort_cb) {
            int cbval1 = column;
            int cbval2 = static_cast<int>(order);

            sort_cb(this, cbval1, cbval2);
            return;
        }
        QAbstractListModel::sort(column, order);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex buddy(const QModelIndex& index) const override {
        if (qabstractlistmodel_buddy_isbase) {
            qabstractlistmodel_buddy_isbase = false;
            return QAbstractListModel::buddy(index);
        }
        auto buddy_cb = qabstractlistmodel_buddy_callback;
        if (buddy_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QModelIndex* callback_ret = buddy_cb(this, cbval1);
            return *callback_ret;
        }
        return QAbstractListModel::buddy(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
        if (qabstractlistmodel_match_isbase) {
            qabstractlistmodel_match_isbase = false;
            return QAbstractListModel::match(start, role, value, hits, flags);
        }
        auto match_cb = qabstractlistmodel_match_callback;
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
        return QAbstractListModel::match(start, role, value, hits, flags);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize span(const QModelIndex& index) const override {
        if (qabstractlistmodel_span_isbase) {
            qabstractlistmodel_span_isbase = false;
            return QAbstractListModel::span(index);
        }
        auto span_cb = qabstractlistmodel_span_callback;
        if (span_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QSize* callback_ret = span_cb(this, cbval1);
            return *callback_ret;
        }
        return QAbstractListModel::span(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QHash<int, QByteArray> roleNames() const override {
        if (qabstractlistmodel_rolenames_isbase) {
            qabstractlistmodel_rolenames_isbase = false;
            return QAbstractListModel::roleNames();
        }
        auto rolenames_cb = qabstractlistmodel_rolenames_callback;
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
        return QAbstractListModel::roleNames();
    }

    // Virtual method for C ABI access and custom callback
    virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
        if (qabstractlistmodel_multidata_isbase) {
            qabstractlistmodel_multidata_isbase = false;
            QAbstractListModel::multiData(index, roleDataSpan);
            return;
        }
        auto multidata_cb = qabstractlistmodel_multidata_callback;
        if (multidata_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelRoleDataSpan* cbval2 = new QModelRoleDataSpan(roleDataSpan);

            multidata_cb(this, cbval1, cbval2);
            return;
        }
        QAbstractListModel::multiData(index, roleDataSpan);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool submit() override {
        if (qabstractlistmodel_submit_isbase) {
            qabstractlistmodel_submit_isbase = false;
            return QAbstractListModel::submit();
        }
        auto submit_cb = qabstractlistmodel_submit_callback;
        if (submit_cb) {
            bool callback_ret = submit_cb();
            return callback_ret;
        }
        return QAbstractListModel::submit();
    }

    // Virtual method for C ABI access and custom callback
    virtual void revert() override {
        if (qabstractlistmodel_revert_isbase) {
            qabstractlistmodel_revert_isbase = false;
            QAbstractListModel::revert();
            return;
        }
        auto revert_cb = qabstractlistmodel_revert_callback;
        if (revert_cb) {
            revert_cb();
            return;
        }
        QAbstractListModel::revert();
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetInternalData() override {
        if (qabstractlistmodel_resetinternaldata_isbase) {
            qabstractlistmodel_resetinternaldata_isbase = false;
            QAbstractListModel::resetInternalData();
            return;
        }
        auto resetinternaldata_cb = qabstractlistmodel_resetinternaldata_callback;
        if (resetinternaldata_cb) {
            resetinternaldata_cb();
            return;
        }
        QAbstractListModel::resetInternalData();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qabstractlistmodel_event_isbase) {
            qabstractlistmodel_event_isbase = false;
            return QAbstractListModel::event(event);
        }
        auto event_cb = qabstractlistmodel_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QAbstractListModel::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qabstractlistmodel_eventfilter_isbase) {
            qabstractlistmodel_eventfilter_isbase = false;
            return QAbstractListModel::eventFilter(watched, event);
        }
        auto eventfilter_cb = qabstractlistmodel_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QAbstractListModel::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qabstractlistmodel_timerevent_isbase) {
            qabstractlistmodel_timerevent_isbase = false;
            QAbstractListModel::timerEvent(event);
            return;
        }
        auto timerevent_cb = qabstractlistmodel_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QAbstractListModel::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qabstractlistmodel_childevent_isbase) {
            qabstractlistmodel_childevent_isbase = false;
            QAbstractListModel::childEvent(event);
            return;
        }
        auto childevent_cb = qabstractlistmodel_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QAbstractListModel::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qabstractlistmodel_customevent_isbase) {
            qabstractlistmodel_customevent_isbase = false;
            QAbstractListModel::customEvent(event);
            return;
        }
        auto customevent_cb = qabstractlistmodel_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QAbstractListModel::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qabstractlistmodel_connectnotify_isbase) {
            qabstractlistmodel_connectnotify_isbase = false;
            QAbstractListModel::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qabstractlistmodel_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QAbstractListModel::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qabstractlistmodel_disconnectnotify_isbase) {
            qabstractlistmodel_disconnectnotify_isbase = false;
            QAbstractListModel::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qabstractlistmodel_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QAbstractListModel::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QModelIndex createIndex(int row, int column) const {
        if (qabstractlistmodel_createindex_isbase) {
            qabstractlistmodel_createindex_isbase = false;
            return QAbstractListModel::createIndex(row, column);
        }
        auto createindex_cb = qabstractlistmodel_createindex_callback;
        if (createindex_cb) {
            int cbval1 = row;
            int cbval2 = column;

            QModelIndex* callback_ret = createindex_cb(this, cbval1, cbval2);
            return *callback_ret;
        }
        return QAbstractListModel::createIndex(row, column);
    }

    // Virtual method for C ABI access and custom callback
    void encodeData(const QList<QModelIndex>& indexes, QDataStream& stream) const {
        if (qabstractlistmodel_encodedata_isbase) {
            qabstractlistmodel_encodedata_isbase = false;
            QAbstractListModel::encodeData(indexes, stream);
            return;
        }
        auto encodedata_cb = qabstractlistmodel_encodedata_callback;
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
        QAbstractListModel::encodeData(indexes, stream);
    }

    // Virtual method for C ABI access and custom callback
    bool decodeData(int row, int column, const QModelIndex& parent, QDataStream& stream) {
        if (qabstractlistmodel_decodedata_isbase) {
            qabstractlistmodel_decodedata_isbase = false;
            return QAbstractListModel::decodeData(row, column, parent, stream);
        }
        auto decodedata_cb = qabstractlistmodel_decodedata_callback;
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
        return QAbstractListModel::decodeData(row, column, parent, stream);
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertRows(const QModelIndex& parent, int first, int last) {
        if (qabstractlistmodel_begininsertrows_isbase) {
            qabstractlistmodel_begininsertrows_isbase = false;
            QAbstractListModel::beginInsertRows(parent, first, last);
            return;
        }
        auto begininsertrows_cb = qabstractlistmodel_begininsertrows_callback;
        if (begininsertrows_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            begininsertrows_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        QAbstractListModel::beginInsertRows(parent, first, last);
    }

    // Virtual method for C ABI access and custom callback
    void endInsertRows() {
        if (qabstractlistmodel_endinsertrows_isbase) {
            qabstractlistmodel_endinsertrows_isbase = false;
            QAbstractListModel::endInsertRows();
            return;
        }
        auto endinsertrows_cb = qabstractlistmodel_endinsertrows_callback;
        if (endinsertrows_cb) {
            endinsertrows_cb();
            return;
        }
        QAbstractListModel::endInsertRows();
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveRows(const QModelIndex& parent, int first, int last) {
        if (qabstractlistmodel_beginremoverows_isbase) {
            qabstractlistmodel_beginremoverows_isbase = false;
            QAbstractListModel::beginRemoveRows(parent, first, last);
            return;
        }
        auto beginremoverows_cb = qabstractlistmodel_beginremoverows_callback;
        if (beginremoverows_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            beginremoverows_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        QAbstractListModel::beginRemoveRows(parent, first, last);
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveRows() {
        if (qabstractlistmodel_endremoverows_isbase) {
            qabstractlistmodel_endremoverows_isbase = false;
            QAbstractListModel::endRemoveRows();
            return;
        }
        auto endremoverows_cb = qabstractlistmodel_endremoverows_callback;
        if (endremoverows_cb) {
            endremoverows_cb();
            return;
        }
        QAbstractListModel::endRemoveRows();
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveRows(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationRow) {
        if (qabstractlistmodel_beginmoverows_isbase) {
            qabstractlistmodel_beginmoverows_isbase = false;
            return QAbstractListModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
        }
        auto beginmoverows_cb = qabstractlistmodel_beginmoverows_callback;
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
        return QAbstractListModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
    }

    // Virtual method for C ABI access and custom callback
    void endMoveRows() {
        if (qabstractlistmodel_endmoverows_isbase) {
            qabstractlistmodel_endmoverows_isbase = false;
            QAbstractListModel::endMoveRows();
            return;
        }
        auto endmoverows_cb = qabstractlistmodel_endmoverows_callback;
        if (endmoverows_cb) {
            endmoverows_cb();
            return;
        }
        QAbstractListModel::endMoveRows();
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertColumns(const QModelIndex& parent, int first, int last) {
        if (qabstractlistmodel_begininsertcolumns_isbase) {
            qabstractlistmodel_begininsertcolumns_isbase = false;
            QAbstractListModel::beginInsertColumns(parent, first, last);
            return;
        }
        auto begininsertcolumns_cb = qabstractlistmodel_begininsertcolumns_callback;
        if (begininsertcolumns_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            begininsertcolumns_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        QAbstractListModel::beginInsertColumns(parent, first, last);
    }

    // Virtual method for C ABI access and custom callback
    void endInsertColumns() {
        if (qabstractlistmodel_endinsertcolumns_isbase) {
            qabstractlistmodel_endinsertcolumns_isbase = false;
            QAbstractListModel::endInsertColumns();
            return;
        }
        auto endinsertcolumns_cb = qabstractlistmodel_endinsertcolumns_callback;
        if (endinsertcolumns_cb) {
            endinsertcolumns_cb();
            return;
        }
        QAbstractListModel::endInsertColumns();
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveColumns(const QModelIndex& parent, int first, int last) {
        if (qabstractlistmodel_beginremovecolumns_isbase) {
            qabstractlistmodel_beginremovecolumns_isbase = false;
            QAbstractListModel::beginRemoveColumns(parent, first, last);
            return;
        }
        auto beginremovecolumns_cb = qabstractlistmodel_beginremovecolumns_callback;
        if (beginremovecolumns_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            beginremovecolumns_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        QAbstractListModel::beginRemoveColumns(parent, first, last);
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveColumns() {
        if (qabstractlistmodel_endremovecolumns_isbase) {
            qabstractlistmodel_endremovecolumns_isbase = false;
            QAbstractListModel::endRemoveColumns();
            return;
        }
        auto endremovecolumns_cb = qabstractlistmodel_endremovecolumns_callback;
        if (endremovecolumns_cb) {
            endremovecolumns_cb();
            return;
        }
        QAbstractListModel::endRemoveColumns();
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveColumns(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationColumn) {
        if (qabstractlistmodel_beginmovecolumns_isbase) {
            qabstractlistmodel_beginmovecolumns_isbase = false;
            return QAbstractListModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
        }
        auto beginmovecolumns_cb = qabstractlistmodel_beginmovecolumns_callback;
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
        return QAbstractListModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
    }

    // Virtual method for C ABI access and custom callback
    void endMoveColumns() {
        if (qabstractlistmodel_endmovecolumns_isbase) {
            qabstractlistmodel_endmovecolumns_isbase = false;
            QAbstractListModel::endMoveColumns();
            return;
        }
        auto endmovecolumns_cb = qabstractlistmodel_endmovecolumns_callback;
        if (endmovecolumns_cb) {
            endmovecolumns_cb();
            return;
        }
        QAbstractListModel::endMoveColumns();
    }

    // Virtual method for C ABI access and custom callback
    void beginResetModel() {
        if (qabstractlistmodel_beginresetmodel_isbase) {
            qabstractlistmodel_beginresetmodel_isbase = false;
            QAbstractListModel::beginResetModel();
            return;
        }
        auto beginresetmodel_cb = qabstractlistmodel_beginresetmodel_callback;
        if (beginresetmodel_cb) {
            beginresetmodel_cb();
            return;
        }
        QAbstractListModel::beginResetModel();
    }

    // Virtual method for C ABI access and custom callback
    void endResetModel() {
        if (qabstractlistmodel_endresetmodel_isbase) {
            qabstractlistmodel_endresetmodel_isbase = false;
            QAbstractListModel::endResetModel();
            return;
        }
        auto endresetmodel_cb = qabstractlistmodel_endresetmodel_callback;
        if (endresetmodel_cb) {
            endresetmodel_cb();
            return;
        }
        QAbstractListModel::endResetModel();
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndex(const QModelIndex& from, const QModelIndex& to) {
        if (qabstractlistmodel_changepersistentindex_isbase) {
            qabstractlistmodel_changepersistentindex_isbase = false;
            QAbstractListModel::changePersistentIndex(from, to);
            return;
        }
        auto changepersistentindex_cb = qabstractlistmodel_changepersistentindex_callback;
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
        QAbstractListModel::changePersistentIndex(from, to);
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndexList(const QList<QModelIndex>& from, const QList<QModelIndex>& to) {
        if (qabstractlistmodel_changepersistentindexlist_isbase) {
            qabstractlistmodel_changepersistentindexlist_isbase = false;
            QAbstractListModel::changePersistentIndexList(from, to);
            return;
        }
        auto changepersistentindexlist_cb = qabstractlistmodel_changepersistentindexlist_callback;
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
        QAbstractListModel::changePersistentIndexList(from, to);
    }

    // Virtual method for C ABI access and custom callback
    QList<QModelIndex> persistentIndexList() const {
        if (qabstractlistmodel_persistentindexlist_isbase) {
            qabstractlistmodel_persistentindexlist_isbase = false;
            return QAbstractListModel::persistentIndexList();
        }
        auto persistentindexlist_cb = qabstractlistmodel_persistentindexlist_callback;
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
        return QAbstractListModel::persistentIndexList();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qabstractlistmodel_sender_isbase) {
            qabstractlistmodel_sender_isbase = false;
            return QAbstractListModel::sender();
        }
        auto sender_cb = qabstractlistmodel_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QAbstractListModel::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qabstractlistmodel_sendersignalindex_isbase) {
            qabstractlistmodel_sendersignalindex_isbase = false;
            return QAbstractListModel::senderSignalIndex();
        }
        auto sendersignalindex_cb = qabstractlistmodel_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QAbstractListModel::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qabstractlistmodel_receivers_isbase) {
            qabstractlistmodel_receivers_isbase = false;
            return QAbstractListModel::receivers(signal);
        }
        auto receivers_cb = qabstractlistmodel_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QAbstractListModel::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qabstractlistmodel_issignalconnected_isbase) {
            qabstractlistmodel_issignalconnected_isbase = false;
            return QAbstractListModel::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qabstractlistmodel_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QAbstractListModel::isSignalConnected(signal);
    }

    // Friend functions
    friend void QAbstractListModel_ResetInternalData(QAbstractListModel* self);
    friend void QAbstractListModel_SuperResetInternalData(QAbstractListModel* self);
    friend void QAbstractListModel_TimerEvent(QAbstractListModel* self, QTimerEvent* event);
    friend void QAbstractListModel_SuperTimerEvent(QAbstractListModel* self, QTimerEvent* event);
    friend void QAbstractListModel_ChildEvent(QAbstractListModel* self, QChildEvent* event);
    friend void QAbstractListModel_SuperChildEvent(QAbstractListModel* self, QChildEvent* event);
    friend void QAbstractListModel_CustomEvent(QAbstractListModel* self, QEvent* event);
    friend void QAbstractListModel_SuperCustomEvent(QAbstractListModel* self, QEvent* event);
    friend void QAbstractListModel_ConnectNotify(QAbstractListModel* self, const QMetaMethod* signal);
    friend void QAbstractListModel_SuperConnectNotify(QAbstractListModel* self, const QMetaMethod* signal);
    friend void QAbstractListModel_DisconnectNotify(QAbstractListModel* self, const QMetaMethod* signal);
    friend void QAbstractListModel_SuperDisconnectNotify(QAbstractListModel* self, const QMetaMethod* signal);
    friend QModelIndex* QAbstractListModel_CreateIndex(const QAbstractListModel* self, int row, int column);
    friend QModelIndex* QAbstractListModel_SuperCreateIndex(const QAbstractListModel* self, int row, int column);
    friend void QAbstractListModel_EncodeData(const QAbstractListModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
    friend void QAbstractListModel_SuperEncodeData(const QAbstractListModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
    friend bool QAbstractListModel_DecodeData(QAbstractListModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
    friend bool QAbstractListModel_SuperDecodeData(QAbstractListModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
    friend void QAbstractListModel_BeginInsertRows(QAbstractListModel* self, const QModelIndex* parent, int first, int last);
    friend void QAbstractListModel_SuperBeginInsertRows(QAbstractListModel* self, const QModelIndex* parent, int first, int last);
    friend void QAbstractListModel_EndInsertRows(QAbstractListModel* self);
    friend void QAbstractListModel_SuperEndInsertRows(QAbstractListModel* self);
    friend void QAbstractListModel_BeginRemoveRows(QAbstractListModel* self, const QModelIndex* parent, int first, int last);
    friend void QAbstractListModel_SuperBeginRemoveRows(QAbstractListModel* self, const QModelIndex* parent, int first, int last);
    friend void QAbstractListModel_EndRemoveRows(QAbstractListModel* self);
    friend void QAbstractListModel_SuperEndRemoveRows(QAbstractListModel* self);
    friend bool QAbstractListModel_BeginMoveRows(QAbstractListModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
    friend bool QAbstractListModel_SuperBeginMoveRows(QAbstractListModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
    friend void QAbstractListModel_EndMoveRows(QAbstractListModel* self);
    friend void QAbstractListModel_SuperEndMoveRows(QAbstractListModel* self);
    friend void QAbstractListModel_BeginInsertColumns(QAbstractListModel* self, const QModelIndex* parent, int first, int last);
    friend void QAbstractListModel_SuperBeginInsertColumns(QAbstractListModel* self, const QModelIndex* parent, int first, int last);
    friend void QAbstractListModel_EndInsertColumns(QAbstractListModel* self);
    friend void QAbstractListModel_SuperEndInsertColumns(QAbstractListModel* self);
    friend void QAbstractListModel_BeginRemoveColumns(QAbstractListModel* self, const QModelIndex* parent, int first, int last);
    friend void QAbstractListModel_SuperBeginRemoveColumns(QAbstractListModel* self, const QModelIndex* parent, int first, int last);
    friend void QAbstractListModel_EndRemoveColumns(QAbstractListModel* self);
    friend void QAbstractListModel_SuperEndRemoveColumns(QAbstractListModel* self);
    friend bool QAbstractListModel_BeginMoveColumns(QAbstractListModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
    friend bool QAbstractListModel_SuperBeginMoveColumns(QAbstractListModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
    friend void QAbstractListModel_EndMoveColumns(QAbstractListModel* self);
    friend void QAbstractListModel_SuperEndMoveColumns(QAbstractListModel* self);
    friend void QAbstractListModel_BeginResetModel(QAbstractListModel* self);
    friend void QAbstractListModel_SuperBeginResetModel(QAbstractListModel* self);
    friend void QAbstractListModel_EndResetModel(QAbstractListModel* self);
    friend void QAbstractListModel_SuperEndResetModel(QAbstractListModel* self);
    friend void QAbstractListModel_ChangePersistentIndex(QAbstractListModel* self, const QModelIndex* from, const QModelIndex* to);
    friend void QAbstractListModel_SuperChangePersistentIndex(QAbstractListModel* self, const QModelIndex* from, const QModelIndex* to);
    friend void QAbstractListModel_ChangePersistentIndexList(QAbstractListModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
    friend void QAbstractListModel_SuperChangePersistentIndexList(QAbstractListModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
    friend libqt_list /* of QModelIndex* */ QAbstractListModel_PersistentIndexList(const QAbstractListModel* self);
    friend libqt_list /* of QModelIndex* */ QAbstractListModel_SuperPersistentIndexList(const QAbstractListModel* self);
    friend QObject* QAbstractListModel_Sender(const QAbstractListModel* self);
    friend QObject* QAbstractListModel_SuperSender(const QAbstractListModel* self);
    friend int QAbstractListModel_SenderSignalIndex(const QAbstractListModel* self);
    friend int QAbstractListModel_SuperSenderSignalIndex(const QAbstractListModel* self);
    friend int QAbstractListModel_Receivers(const QAbstractListModel* self, const char* signal);
    friend int QAbstractListModel_SuperReceivers(const QAbstractListModel* self, const char* signal);
    friend bool QAbstractListModel_IsSignalConnected(const QAbstractListModel* self, const QMetaMethod* signal);
    friend bool QAbstractListModel_SuperIsSignalConnected(const QAbstractListModel* self, const QMetaMethod* signal);
};

#endif
