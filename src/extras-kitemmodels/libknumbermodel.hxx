#pragma once
#ifndef SRC_EXTRAS_KITEMMODELSC_LIBVIRTUALKNUMBERMODEL_H
#define SRC_EXTRAS_KITEMMODELSC_LIBVIRTUALKNUMBERMODEL_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KNumberModel so that we can call protected methods
class VirtualKNumberModel final : public KNumberModel {

  public:
    // Virtual class boolean flag
    bool isVirtualKNumberModel = true;

    // Virtual class public types (including callbacks)
    using KNumberModel_MetaObject_Callback = QMetaObject* (*)();
    using KNumberModel_Metacast_Callback = void* (*)(KNumberModel*, const char*);
    using KNumberModel_Metacall_Callback = int (*)(KNumberModel*, int, int, void**);
    using KNumberModel_RowCount_Callback = int (*)(const KNumberModel*, QModelIndex*);
    using KNumberModel_Data_Callback = QVariant* (*)(const KNumberModel*, QModelIndex*, int);
    using KNumberModel_RoleNames_Callback = libqt_map /* of int to libqt_string */ (*)();
    using KNumberModel_Index_Callback = QModelIndex* (*)(const KNumberModel*, int, int, QModelIndex*);
    using KNumberModel_Sibling_Callback = QModelIndex* (*)(const KNumberModel*, int, int, QModelIndex*);
    using KNumberModel_DropMimeData_Callback = bool (*)(KNumberModel*, QMimeData*, int, int, int, QModelIndex*);
    using KNumberModel_Flags_Callback = int (*)(const KNumberModel*, QModelIndex*);
    using KNumberModel_SetData_Callback = bool (*)(KNumberModel*, QModelIndex*, QVariant*, int);
    using KNumberModel_HeaderData_Callback = QVariant* (*)(const KNumberModel*, int, int, int);
    using KNumberModel_SetHeaderData_Callback = bool (*)(KNumberModel*, int, int, QVariant*, int);
    using KNumberModel_ItemData_Callback = libqt_map /* of int to QVariant* */ (*)(const KNumberModel*, QModelIndex*);
    using KNumberModel_SetItemData_Callback = bool (*)(KNumberModel*, QModelIndex*, libqt_map /* of int to QVariant* */);
    using KNumberModel_ClearItemData_Callback = bool (*)(KNumberModel*, QModelIndex*);
    using KNumberModel_MimeTypes_Callback = const char** (*)();
    using KNumberModel_MimeData_Callback = QMimeData* (*)(const KNumberModel*, libqt_list /* of QModelIndex* */);
    using KNumberModel_CanDropMimeData_Callback = bool (*)(const KNumberModel*, QMimeData*, int, int, int, QModelIndex*);
    using KNumberModel_SupportedDropActions_Callback = int (*)();
    using KNumberModel_SupportedDragActions_Callback = int (*)();
    using KNumberModel_InsertRows_Callback = bool (*)(KNumberModel*, int, int, QModelIndex*);
    using KNumberModel_InsertColumns_Callback = bool (*)(KNumberModel*, int, int, QModelIndex*);
    using KNumberModel_RemoveRows_Callback = bool (*)(KNumberModel*, int, int, QModelIndex*);
    using KNumberModel_RemoveColumns_Callback = bool (*)(KNumberModel*, int, int, QModelIndex*);
    using KNumberModel_MoveRows_Callback = bool (*)(KNumberModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KNumberModel_MoveColumns_Callback = bool (*)(KNumberModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KNumberModel_FetchMore_Callback = void (*)(KNumberModel*, QModelIndex*);
    using KNumberModel_CanFetchMore_Callback = bool (*)(const KNumberModel*, QModelIndex*);
    using KNumberModel_Sort_Callback = void (*)(KNumberModel*, int, int);
    using KNumberModel_Buddy_Callback = QModelIndex* (*)(const KNumberModel*, QModelIndex*);
    using KNumberModel_Match_Callback = libqt_list /* of QModelIndex* */ (*)(const KNumberModel*, QModelIndex*, int, QVariant*, int, int);
    using KNumberModel_Span_Callback = QSize* (*)(const KNumberModel*, QModelIndex*);
    using KNumberModel_MultiData_Callback = void (*)(const KNumberModel*, QModelIndex*, QModelRoleDataSpan*);
    using KNumberModel_Submit_Callback = bool (*)();
    using KNumberModel_Revert_Callback = void (*)();
    using KNumberModel_ResetInternalData_Callback = void (*)();
    using KNumberModel_Event_Callback = bool (*)(KNumberModel*, QEvent*);
    using KNumberModel_EventFilter_Callback = bool (*)(KNumberModel*, QObject*, QEvent*);
    using KNumberModel_TimerEvent_Callback = void (*)(KNumberModel*, QTimerEvent*);
    using KNumberModel_ChildEvent_Callback = void (*)(KNumberModel*, QChildEvent*);
    using KNumberModel_CustomEvent_Callback = void (*)(KNumberModel*, QEvent*);
    using KNumberModel_ConnectNotify_Callback = void (*)(KNumberModel*, QMetaMethod*);
    using KNumberModel_DisconnectNotify_Callback = void (*)(KNumberModel*, QMetaMethod*);
    using KNumberModel_CreateIndex_Callback = QModelIndex* (*)(const KNumberModel*, int, int);
    using KNumberModel_EncodeData_Callback = void (*)(const KNumberModel*, libqt_list /* of QModelIndex* */, QDataStream*);
    using KNumberModel_DecodeData_Callback = bool (*)(KNumberModel*, int, int, QModelIndex*, QDataStream*);
    using KNumberModel_BeginInsertRows_Callback = void (*)(KNumberModel*, QModelIndex*, int, int);
    using KNumberModel_EndInsertRows_Callback = void (*)();
    using KNumberModel_BeginRemoveRows_Callback = void (*)(KNumberModel*, QModelIndex*, int, int);
    using KNumberModel_EndRemoveRows_Callback = void (*)();
    using KNumberModel_BeginMoveRows_Callback = bool (*)(KNumberModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KNumberModel_EndMoveRows_Callback = void (*)();
    using KNumberModel_BeginInsertColumns_Callback = void (*)(KNumberModel*, QModelIndex*, int, int);
    using KNumberModel_EndInsertColumns_Callback = void (*)();
    using KNumberModel_BeginRemoveColumns_Callback = void (*)(KNumberModel*, QModelIndex*, int, int);
    using KNumberModel_EndRemoveColumns_Callback = void (*)();
    using KNumberModel_BeginMoveColumns_Callback = bool (*)(KNumberModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KNumberModel_EndMoveColumns_Callback = void (*)();
    using KNumberModel_BeginResetModel_Callback = void (*)();
    using KNumberModel_EndResetModel_Callback = void (*)();
    using KNumberModel_ChangePersistentIndex_Callback = void (*)(KNumberModel*, QModelIndex*, QModelIndex*);
    using KNumberModel_ChangePersistentIndexList_Callback = void (*)(KNumberModel*, libqt_list /* of QModelIndex* */, libqt_list /* of QModelIndex* */);
    using KNumberModel_PersistentIndexList_Callback = libqt_list /* of QModelIndex* */ (*)();
    using KNumberModel_Sender_Callback = QObject* (*)();
    using KNumberModel_SenderSignalIndex_Callback = int (*)();
    using KNumberModel_Receivers_Callback = int (*)(const KNumberModel*, const char*);
    using KNumberModel_IsSignalConnected_Callback = bool (*)(const KNumberModel*, QMetaMethod*);

  protected:
    // Instance callback storage
    KNumberModel_MetaObject_Callback knumbermodel_metaobject_callback = nullptr;
    KNumberModel_Metacast_Callback knumbermodel_metacast_callback = nullptr;
    KNumberModel_Metacall_Callback knumbermodel_metacall_callback = nullptr;
    KNumberModel_RowCount_Callback knumbermodel_rowcount_callback = nullptr;
    KNumberModel_Data_Callback knumbermodel_data_callback = nullptr;
    KNumberModel_RoleNames_Callback knumbermodel_rolenames_callback = nullptr;
    KNumberModel_Index_Callback knumbermodel_index_callback = nullptr;
    KNumberModel_Sibling_Callback knumbermodel_sibling_callback = nullptr;
    KNumberModel_DropMimeData_Callback knumbermodel_dropmimedata_callback = nullptr;
    KNumberModel_Flags_Callback knumbermodel_flags_callback = nullptr;
    KNumberModel_SetData_Callback knumbermodel_setdata_callback = nullptr;
    KNumberModel_HeaderData_Callback knumbermodel_headerdata_callback = nullptr;
    KNumberModel_SetHeaderData_Callback knumbermodel_setheaderdata_callback = nullptr;
    KNumberModel_ItemData_Callback knumbermodel_itemdata_callback = nullptr;
    KNumberModel_SetItemData_Callback knumbermodel_setitemdata_callback = nullptr;
    KNumberModel_ClearItemData_Callback knumbermodel_clearitemdata_callback = nullptr;
    KNumberModel_MimeTypes_Callback knumbermodel_mimetypes_callback = nullptr;
    KNumberModel_MimeData_Callback knumbermodel_mimedata_callback = nullptr;
    KNumberModel_CanDropMimeData_Callback knumbermodel_candropmimedata_callback = nullptr;
    KNumberModel_SupportedDropActions_Callback knumbermodel_supporteddropactions_callback = nullptr;
    KNumberModel_SupportedDragActions_Callback knumbermodel_supporteddragactions_callback = nullptr;
    KNumberModel_InsertRows_Callback knumbermodel_insertrows_callback = nullptr;
    KNumberModel_InsertColumns_Callback knumbermodel_insertcolumns_callback = nullptr;
    KNumberModel_RemoveRows_Callback knumbermodel_removerows_callback = nullptr;
    KNumberModel_RemoveColumns_Callback knumbermodel_removecolumns_callback = nullptr;
    KNumberModel_MoveRows_Callback knumbermodel_moverows_callback = nullptr;
    KNumberModel_MoveColumns_Callback knumbermodel_movecolumns_callback = nullptr;
    KNumberModel_FetchMore_Callback knumbermodel_fetchmore_callback = nullptr;
    KNumberModel_CanFetchMore_Callback knumbermodel_canfetchmore_callback = nullptr;
    KNumberModel_Sort_Callback knumbermodel_sort_callback = nullptr;
    KNumberModel_Buddy_Callback knumbermodel_buddy_callback = nullptr;
    KNumberModel_Match_Callback knumbermodel_match_callback = nullptr;
    KNumberModel_Span_Callback knumbermodel_span_callback = nullptr;
    KNumberModel_MultiData_Callback knumbermodel_multidata_callback = nullptr;
    KNumberModel_Submit_Callback knumbermodel_submit_callback = nullptr;
    KNumberModel_Revert_Callback knumbermodel_revert_callback = nullptr;
    KNumberModel_ResetInternalData_Callback knumbermodel_resetinternaldata_callback = nullptr;
    KNumberModel_Event_Callback knumbermodel_event_callback = nullptr;
    KNumberModel_EventFilter_Callback knumbermodel_eventfilter_callback = nullptr;
    KNumberModel_TimerEvent_Callback knumbermodel_timerevent_callback = nullptr;
    KNumberModel_ChildEvent_Callback knumbermodel_childevent_callback = nullptr;
    KNumberModel_CustomEvent_Callback knumbermodel_customevent_callback = nullptr;
    KNumberModel_ConnectNotify_Callback knumbermodel_connectnotify_callback = nullptr;
    KNumberModel_DisconnectNotify_Callback knumbermodel_disconnectnotify_callback = nullptr;
    KNumberModel_CreateIndex_Callback knumbermodel_createindex_callback = nullptr;
    KNumberModel_EncodeData_Callback knumbermodel_encodedata_callback = nullptr;
    KNumberModel_DecodeData_Callback knumbermodel_decodedata_callback = nullptr;
    KNumberModel_BeginInsertRows_Callback knumbermodel_begininsertrows_callback = nullptr;
    KNumberModel_EndInsertRows_Callback knumbermodel_endinsertrows_callback = nullptr;
    KNumberModel_BeginRemoveRows_Callback knumbermodel_beginremoverows_callback = nullptr;
    KNumberModel_EndRemoveRows_Callback knumbermodel_endremoverows_callback = nullptr;
    KNumberModel_BeginMoveRows_Callback knumbermodel_beginmoverows_callback = nullptr;
    KNumberModel_EndMoveRows_Callback knumbermodel_endmoverows_callback = nullptr;
    KNumberModel_BeginInsertColumns_Callback knumbermodel_begininsertcolumns_callback = nullptr;
    KNumberModel_EndInsertColumns_Callback knumbermodel_endinsertcolumns_callback = nullptr;
    KNumberModel_BeginRemoveColumns_Callback knumbermodel_beginremovecolumns_callback = nullptr;
    KNumberModel_EndRemoveColumns_Callback knumbermodel_endremovecolumns_callback = nullptr;
    KNumberModel_BeginMoveColumns_Callback knumbermodel_beginmovecolumns_callback = nullptr;
    KNumberModel_EndMoveColumns_Callback knumbermodel_endmovecolumns_callback = nullptr;
    KNumberModel_BeginResetModel_Callback knumbermodel_beginresetmodel_callback = nullptr;
    KNumberModel_EndResetModel_Callback knumbermodel_endresetmodel_callback = nullptr;
    KNumberModel_ChangePersistentIndex_Callback knumbermodel_changepersistentindex_callback = nullptr;
    KNumberModel_ChangePersistentIndexList_Callback knumbermodel_changepersistentindexlist_callback = nullptr;
    KNumberModel_PersistentIndexList_Callback knumbermodel_persistentindexlist_callback = nullptr;
    KNumberModel_Sender_Callback knumbermodel_sender_callback = nullptr;
    KNumberModel_SenderSignalIndex_Callback knumbermodel_sendersignalindex_callback = nullptr;
    KNumberModel_Receivers_Callback knumbermodel_receivers_callback = nullptr;
    KNumberModel_IsSignalConnected_Callback knumbermodel_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool knumbermodel_metaobject_isbase = false;
    mutable bool knumbermodel_metacast_isbase = false;
    mutable bool knumbermodel_metacall_isbase = false;
    mutable bool knumbermodel_rowcount_isbase = false;
    mutable bool knumbermodel_data_isbase = false;
    mutable bool knumbermodel_rolenames_isbase = false;
    mutable bool knumbermodel_index_isbase = false;
    mutable bool knumbermodel_sibling_isbase = false;
    mutable bool knumbermodel_dropmimedata_isbase = false;
    mutable bool knumbermodel_flags_isbase = false;
    mutable bool knumbermodel_setdata_isbase = false;
    mutable bool knumbermodel_headerdata_isbase = false;
    mutable bool knumbermodel_setheaderdata_isbase = false;
    mutable bool knumbermodel_itemdata_isbase = false;
    mutable bool knumbermodel_setitemdata_isbase = false;
    mutable bool knumbermodel_clearitemdata_isbase = false;
    mutable bool knumbermodel_mimetypes_isbase = false;
    mutable bool knumbermodel_mimedata_isbase = false;
    mutable bool knumbermodel_candropmimedata_isbase = false;
    mutable bool knumbermodel_supporteddropactions_isbase = false;
    mutable bool knumbermodel_supporteddragactions_isbase = false;
    mutable bool knumbermodel_insertrows_isbase = false;
    mutable bool knumbermodel_insertcolumns_isbase = false;
    mutable bool knumbermodel_removerows_isbase = false;
    mutable bool knumbermodel_removecolumns_isbase = false;
    mutable bool knumbermodel_moverows_isbase = false;
    mutable bool knumbermodel_movecolumns_isbase = false;
    mutable bool knumbermodel_fetchmore_isbase = false;
    mutable bool knumbermodel_canfetchmore_isbase = false;
    mutable bool knumbermodel_sort_isbase = false;
    mutable bool knumbermodel_buddy_isbase = false;
    mutable bool knumbermodel_match_isbase = false;
    mutable bool knumbermodel_span_isbase = false;
    mutable bool knumbermodel_multidata_isbase = false;
    mutable bool knumbermodel_submit_isbase = false;
    mutable bool knumbermodel_revert_isbase = false;
    mutable bool knumbermodel_resetinternaldata_isbase = false;
    mutable bool knumbermodel_event_isbase = false;
    mutable bool knumbermodel_eventfilter_isbase = false;
    mutable bool knumbermodel_timerevent_isbase = false;
    mutable bool knumbermodel_childevent_isbase = false;
    mutable bool knumbermodel_customevent_isbase = false;
    mutable bool knumbermodel_connectnotify_isbase = false;
    mutable bool knumbermodel_disconnectnotify_isbase = false;
    mutable bool knumbermodel_createindex_isbase = false;
    mutable bool knumbermodel_encodedata_isbase = false;
    mutable bool knumbermodel_decodedata_isbase = false;
    mutable bool knumbermodel_begininsertrows_isbase = false;
    mutable bool knumbermodel_endinsertrows_isbase = false;
    mutable bool knumbermodel_beginremoverows_isbase = false;
    mutable bool knumbermodel_endremoverows_isbase = false;
    mutable bool knumbermodel_beginmoverows_isbase = false;
    mutable bool knumbermodel_endmoverows_isbase = false;
    mutable bool knumbermodel_begininsertcolumns_isbase = false;
    mutable bool knumbermodel_endinsertcolumns_isbase = false;
    mutable bool knumbermodel_beginremovecolumns_isbase = false;
    mutable bool knumbermodel_endremovecolumns_isbase = false;
    mutable bool knumbermodel_beginmovecolumns_isbase = false;
    mutable bool knumbermodel_endmovecolumns_isbase = false;
    mutable bool knumbermodel_beginresetmodel_isbase = false;
    mutable bool knumbermodel_endresetmodel_isbase = false;
    mutable bool knumbermodel_changepersistentindex_isbase = false;
    mutable bool knumbermodel_changepersistentindexlist_isbase = false;
    mutable bool knumbermodel_persistentindexlist_isbase = false;
    mutable bool knumbermodel_sender_isbase = false;
    mutable bool knumbermodel_sendersignalindex_isbase = false;
    mutable bool knumbermodel_receivers_isbase = false;
    mutable bool knumbermodel_issignalconnected_isbase = false;

  public:
    VirtualKNumberModel() : KNumberModel() {};
    VirtualKNumberModel(QObject* parent) : KNumberModel(parent) {};

    // Callback setters
    inline void setKNumberModel_MetaObject_Callback(KNumberModel_MetaObject_Callback cb) { knumbermodel_metaobject_callback = cb; }
    inline void setKNumberModel_Metacast_Callback(KNumberModel_Metacast_Callback cb) { knumbermodel_metacast_callback = cb; }
    inline void setKNumberModel_Metacall_Callback(KNumberModel_Metacall_Callback cb) { knumbermodel_metacall_callback = cb; }
    inline void setKNumberModel_RowCount_Callback(KNumberModel_RowCount_Callback cb) { knumbermodel_rowcount_callback = cb; }
    inline void setKNumberModel_Data_Callback(KNumberModel_Data_Callback cb) { knumbermodel_data_callback = cb; }
    inline void setKNumberModel_RoleNames_Callback(KNumberModel_RoleNames_Callback cb) { knumbermodel_rolenames_callback = cb; }
    inline void setKNumberModel_Index_Callback(KNumberModel_Index_Callback cb) { knumbermodel_index_callback = cb; }
    inline void setKNumberModel_Sibling_Callback(KNumberModel_Sibling_Callback cb) { knumbermodel_sibling_callback = cb; }
    inline void setKNumberModel_DropMimeData_Callback(KNumberModel_DropMimeData_Callback cb) { knumbermodel_dropmimedata_callback = cb; }
    inline void setKNumberModel_Flags_Callback(KNumberModel_Flags_Callback cb) { knumbermodel_flags_callback = cb; }
    inline void setKNumberModel_SetData_Callback(KNumberModel_SetData_Callback cb) { knumbermodel_setdata_callback = cb; }
    inline void setKNumberModel_HeaderData_Callback(KNumberModel_HeaderData_Callback cb) { knumbermodel_headerdata_callback = cb; }
    inline void setKNumberModel_SetHeaderData_Callback(KNumberModel_SetHeaderData_Callback cb) { knumbermodel_setheaderdata_callback = cb; }
    inline void setKNumberModel_ItemData_Callback(KNumberModel_ItemData_Callback cb) { knumbermodel_itemdata_callback = cb; }
    inline void setKNumberModel_SetItemData_Callback(KNumberModel_SetItemData_Callback cb) { knumbermodel_setitemdata_callback = cb; }
    inline void setKNumberModel_ClearItemData_Callback(KNumberModel_ClearItemData_Callback cb) { knumbermodel_clearitemdata_callback = cb; }
    inline void setKNumberModel_MimeTypes_Callback(KNumberModel_MimeTypes_Callback cb) { knumbermodel_mimetypes_callback = cb; }
    inline void setKNumberModel_MimeData_Callback(KNumberModel_MimeData_Callback cb) { knumbermodel_mimedata_callback = cb; }
    inline void setKNumberModel_CanDropMimeData_Callback(KNumberModel_CanDropMimeData_Callback cb) { knumbermodel_candropmimedata_callback = cb; }
    inline void setKNumberModel_SupportedDropActions_Callback(KNumberModel_SupportedDropActions_Callback cb) { knumbermodel_supporteddropactions_callback = cb; }
    inline void setKNumberModel_SupportedDragActions_Callback(KNumberModel_SupportedDragActions_Callback cb) { knumbermodel_supporteddragactions_callback = cb; }
    inline void setKNumberModel_InsertRows_Callback(KNumberModel_InsertRows_Callback cb) { knumbermodel_insertrows_callback = cb; }
    inline void setKNumberModel_InsertColumns_Callback(KNumberModel_InsertColumns_Callback cb) { knumbermodel_insertcolumns_callback = cb; }
    inline void setKNumberModel_RemoveRows_Callback(KNumberModel_RemoveRows_Callback cb) { knumbermodel_removerows_callback = cb; }
    inline void setKNumberModel_RemoveColumns_Callback(KNumberModel_RemoveColumns_Callback cb) { knumbermodel_removecolumns_callback = cb; }
    inline void setKNumberModel_MoveRows_Callback(KNumberModel_MoveRows_Callback cb) { knumbermodel_moverows_callback = cb; }
    inline void setKNumberModel_MoveColumns_Callback(KNumberModel_MoveColumns_Callback cb) { knumbermodel_movecolumns_callback = cb; }
    inline void setKNumberModel_FetchMore_Callback(KNumberModel_FetchMore_Callback cb) { knumbermodel_fetchmore_callback = cb; }
    inline void setKNumberModel_CanFetchMore_Callback(KNumberModel_CanFetchMore_Callback cb) { knumbermodel_canfetchmore_callback = cb; }
    inline void setKNumberModel_Sort_Callback(KNumberModel_Sort_Callback cb) { knumbermodel_sort_callback = cb; }
    inline void setKNumberModel_Buddy_Callback(KNumberModel_Buddy_Callback cb) { knumbermodel_buddy_callback = cb; }
    inline void setKNumberModel_Match_Callback(KNumberModel_Match_Callback cb) { knumbermodel_match_callback = cb; }
    inline void setKNumberModel_Span_Callback(KNumberModel_Span_Callback cb) { knumbermodel_span_callback = cb; }
    inline void setKNumberModel_MultiData_Callback(KNumberModel_MultiData_Callback cb) { knumbermodel_multidata_callback = cb; }
    inline void setKNumberModel_Submit_Callback(KNumberModel_Submit_Callback cb) { knumbermodel_submit_callback = cb; }
    inline void setKNumberModel_Revert_Callback(KNumberModel_Revert_Callback cb) { knumbermodel_revert_callback = cb; }
    inline void setKNumberModel_ResetInternalData_Callback(KNumberModel_ResetInternalData_Callback cb) { knumbermodel_resetinternaldata_callback = cb; }
    inline void setKNumberModel_Event_Callback(KNumberModel_Event_Callback cb) { knumbermodel_event_callback = cb; }
    inline void setKNumberModel_EventFilter_Callback(KNumberModel_EventFilter_Callback cb) { knumbermodel_eventfilter_callback = cb; }
    inline void setKNumberModel_TimerEvent_Callback(KNumberModel_TimerEvent_Callback cb) { knumbermodel_timerevent_callback = cb; }
    inline void setKNumberModel_ChildEvent_Callback(KNumberModel_ChildEvent_Callback cb) { knumbermodel_childevent_callback = cb; }
    inline void setKNumberModel_CustomEvent_Callback(KNumberModel_CustomEvent_Callback cb) { knumbermodel_customevent_callback = cb; }
    inline void setKNumberModel_ConnectNotify_Callback(KNumberModel_ConnectNotify_Callback cb) { knumbermodel_connectnotify_callback = cb; }
    inline void setKNumberModel_DisconnectNotify_Callback(KNumberModel_DisconnectNotify_Callback cb) { knumbermodel_disconnectnotify_callback = cb; }
    inline void setKNumberModel_CreateIndex_Callback(KNumberModel_CreateIndex_Callback cb) { knumbermodel_createindex_callback = cb; }
    inline void setKNumberModel_EncodeData_Callback(KNumberModel_EncodeData_Callback cb) { knumbermodel_encodedata_callback = cb; }
    inline void setKNumberModel_DecodeData_Callback(KNumberModel_DecodeData_Callback cb) { knumbermodel_decodedata_callback = cb; }
    inline void setKNumberModel_BeginInsertRows_Callback(KNumberModel_BeginInsertRows_Callback cb) { knumbermodel_begininsertrows_callback = cb; }
    inline void setKNumberModel_EndInsertRows_Callback(KNumberModel_EndInsertRows_Callback cb) { knumbermodel_endinsertrows_callback = cb; }
    inline void setKNumberModel_BeginRemoveRows_Callback(KNumberModel_BeginRemoveRows_Callback cb) { knumbermodel_beginremoverows_callback = cb; }
    inline void setKNumberModel_EndRemoveRows_Callback(KNumberModel_EndRemoveRows_Callback cb) { knumbermodel_endremoverows_callback = cb; }
    inline void setKNumberModel_BeginMoveRows_Callback(KNumberModel_BeginMoveRows_Callback cb) { knumbermodel_beginmoverows_callback = cb; }
    inline void setKNumberModel_EndMoveRows_Callback(KNumberModel_EndMoveRows_Callback cb) { knumbermodel_endmoverows_callback = cb; }
    inline void setKNumberModel_BeginInsertColumns_Callback(KNumberModel_BeginInsertColumns_Callback cb) { knumbermodel_begininsertcolumns_callback = cb; }
    inline void setKNumberModel_EndInsertColumns_Callback(KNumberModel_EndInsertColumns_Callback cb) { knumbermodel_endinsertcolumns_callback = cb; }
    inline void setKNumberModel_BeginRemoveColumns_Callback(KNumberModel_BeginRemoveColumns_Callback cb) { knumbermodel_beginremovecolumns_callback = cb; }
    inline void setKNumberModel_EndRemoveColumns_Callback(KNumberModel_EndRemoveColumns_Callback cb) { knumbermodel_endremovecolumns_callback = cb; }
    inline void setKNumberModel_BeginMoveColumns_Callback(KNumberModel_BeginMoveColumns_Callback cb) { knumbermodel_beginmovecolumns_callback = cb; }
    inline void setKNumberModel_EndMoveColumns_Callback(KNumberModel_EndMoveColumns_Callback cb) { knumbermodel_endmovecolumns_callback = cb; }
    inline void setKNumberModel_BeginResetModel_Callback(KNumberModel_BeginResetModel_Callback cb) { knumbermodel_beginresetmodel_callback = cb; }
    inline void setKNumberModel_EndResetModel_Callback(KNumberModel_EndResetModel_Callback cb) { knumbermodel_endresetmodel_callback = cb; }
    inline void setKNumberModel_ChangePersistentIndex_Callback(KNumberModel_ChangePersistentIndex_Callback cb) { knumbermodel_changepersistentindex_callback = cb; }
    inline void setKNumberModel_ChangePersistentIndexList_Callback(KNumberModel_ChangePersistentIndexList_Callback cb) { knumbermodel_changepersistentindexlist_callback = cb; }
    inline void setKNumberModel_PersistentIndexList_Callback(KNumberModel_PersistentIndexList_Callback cb) { knumbermodel_persistentindexlist_callback = cb; }
    inline void setKNumberModel_Sender_Callback(KNumberModel_Sender_Callback cb) { knumbermodel_sender_callback = cb; }
    inline void setKNumberModel_SenderSignalIndex_Callback(KNumberModel_SenderSignalIndex_Callback cb) { knumbermodel_sendersignalindex_callback = cb; }
    inline void setKNumberModel_Receivers_Callback(KNumberModel_Receivers_Callback cb) { knumbermodel_receivers_callback = cb; }
    inline void setKNumberModel_IsSignalConnected_Callback(KNumberModel_IsSignalConnected_Callback cb) { knumbermodel_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKNumberModel_MetaObject_IsBase(bool value) const { knumbermodel_metaobject_isbase = value; }
    inline void setKNumberModel_Metacast_IsBase(bool value) const { knumbermodel_metacast_isbase = value; }
    inline void setKNumberModel_Metacall_IsBase(bool value) const { knumbermodel_metacall_isbase = value; }
    inline void setKNumberModel_RowCount_IsBase(bool value) const { knumbermodel_rowcount_isbase = value; }
    inline void setKNumberModel_Data_IsBase(bool value) const { knumbermodel_data_isbase = value; }
    inline void setKNumberModel_RoleNames_IsBase(bool value) const { knumbermodel_rolenames_isbase = value; }
    inline void setKNumberModel_Index_IsBase(bool value) const { knumbermodel_index_isbase = value; }
    inline void setKNumberModel_Sibling_IsBase(bool value) const { knumbermodel_sibling_isbase = value; }
    inline void setKNumberModel_DropMimeData_IsBase(bool value) const { knumbermodel_dropmimedata_isbase = value; }
    inline void setKNumberModel_Flags_IsBase(bool value) const { knumbermodel_flags_isbase = value; }
    inline void setKNumberModel_SetData_IsBase(bool value) const { knumbermodel_setdata_isbase = value; }
    inline void setKNumberModel_HeaderData_IsBase(bool value) const { knumbermodel_headerdata_isbase = value; }
    inline void setKNumberModel_SetHeaderData_IsBase(bool value) const { knumbermodel_setheaderdata_isbase = value; }
    inline void setKNumberModel_ItemData_IsBase(bool value) const { knumbermodel_itemdata_isbase = value; }
    inline void setKNumberModel_SetItemData_IsBase(bool value) const { knumbermodel_setitemdata_isbase = value; }
    inline void setKNumberModel_ClearItemData_IsBase(bool value) const { knumbermodel_clearitemdata_isbase = value; }
    inline void setKNumberModel_MimeTypes_IsBase(bool value) const { knumbermodel_mimetypes_isbase = value; }
    inline void setKNumberModel_MimeData_IsBase(bool value) const { knumbermodel_mimedata_isbase = value; }
    inline void setKNumberModel_CanDropMimeData_IsBase(bool value) const { knumbermodel_candropmimedata_isbase = value; }
    inline void setKNumberModel_SupportedDropActions_IsBase(bool value) const { knumbermodel_supporteddropactions_isbase = value; }
    inline void setKNumberModel_SupportedDragActions_IsBase(bool value) const { knumbermodel_supporteddragactions_isbase = value; }
    inline void setKNumberModel_InsertRows_IsBase(bool value) const { knumbermodel_insertrows_isbase = value; }
    inline void setKNumberModel_InsertColumns_IsBase(bool value) const { knumbermodel_insertcolumns_isbase = value; }
    inline void setKNumberModel_RemoveRows_IsBase(bool value) const { knumbermodel_removerows_isbase = value; }
    inline void setKNumberModel_RemoveColumns_IsBase(bool value) const { knumbermodel_removecolumns_isbase = value; }
    inline void setKNumberModel_MoveRows_IsBase(bool value) const { knumbermodel_moverows_isbase = value; }
    inline void setKNumberModel_MoveColumns_IsBase(bool value) const { knumbermodel_movecolumns_isbase = value; }
    inline void setKNumberModel_FetchMore_IsBase(bool value) const { knumbermodel_fetchmore_isbase = value; }
    inline void setKNumberModel_CanFetchMore_IsBase(bool value) const { knumbermodel_canfetchmore_isbase = value; }
    inline void setKNumberModel_Sort_IsBase(bool value) const { knumbermodel_sort_isbase = value; }
    inline void setKNumberModel_Buddy_IsBase(bool value) const { knumbermodel_buddy_isbase = value; }
    inline void setKNumberModel_Match_IsBase(bool value) const { knumbermodel_match_isbase = value; }
    inline void setKNumberModel_Span_IsBase(bool value) const { knumbermodel_span_isbase = value; }
    inline void setKNumberModel_MultiData_IsBase(bool value) const { knumbermodel_multidata_isbase = value; }
    inline void setKNumberModel_Submit_IsBase(bool value) const { knumbermodel_submit_isbase = value; }
    inline void setKNumberModel_Revert_IsBase(bool value) const { knumbermodel_revert_isbase = value; }
    inline void setKNumberModel_ResetInternalData_IsBase(bool value) const { knumbermodel_resetinternaldata_isbase = value; }
    inline void setKNumberModel_Event_IsBase(bool value) const { knumbermodel_event_isbase = value; }
    inline void setKNumberModel_EventFilter_IsBase(bool value) const { knumbermodel_eventfilter_isbase = value; }
    inline void setKNumberModel_TimerEvent_IsBase(bool value) const { knumbermodel_timerevent_isbase = value; }
    inline void setKNumberModel_ChildEvent_IsBase(bool value) const { knumbermodel_childevent_isbase = value; }
    inline void setKNumberModel_CustomEvent_IsBase(bool value) const { knumbermodel_customevent_isbase = value; }
    inline void setKNumberModel_ConnectNotify_IsBase(bool value) const { knumbermodel_connectnotify_isbase = value; }
    inline void setKNumberModel_DisconnectNotify_IsBase(bool value) const { knumbermodel_disconnectnotify_isbase = value; }
    inline void setKNumberModel_CreateIndex_IsBase(bool value) const { knumbermodel_createindex_isbase = value; }
    inline void setKNumberModel_EncodeData_IsBase(bool value) const { knumbermodel_encodedata_isbase = value; }
    inline void setKNumberModel_DecodeData_IsBase(bool value) const { knumbermodel_decodedata_isbase = value; }
    inline void setKNumberModel_BeginInsertRows_IsBase(bool value) const { knumbermodel_begininsertrows_isbase = value; }
    inline void setKNumberModel_EndInsertRows_IsBase(bool value) const { knumbermodel_endinsertrows_isbase = value; }
    inline void setKNumberModel_BeginRemoveRows_IsBase(bool value) const { knumbermodel_beginremoverows_isbase = value; }
    inline void setKNumberModel_EndRemoveRows_IsBase(bool value) const { knumbermodel_endremoverows_isbase = value; }
    inline void setKNumberModel_BeginMoveRows_IsBase(bool value) const { knumbermodel_beginmoverows_isbase = value; }
    inline void setKNumberModel_EndMoveRows_IsBase(bool value) const { knumbermodel_endmoverows_isbase = value; }
    inline void setKNumberModel_BeginInsertColumns_IsBase(bool value) const { knumbermodel_begininsertcolumns_isbase = value; }
    inline void setKNumberModel_EndInsertColumns_IsBase(bool value) const { knumbermodel_endinsertcolumns_isbase = value; }
    inline void setKNumberModel_BeginRemoveColumns_IsBase(bool value) const { knumbermodel_beginremovecolumns_isbase = value; }
    inline void setKNumberModel_EndRemoveColumns_IsBase(bool value) const { knumbermodel_endremovecolumns_isbase = value; }
    inline void setKNumberModel_BeginMoveColumns_IsBase(bool value) const { knumbermodel_beginmovecolumns_isbase = value; }
    inline void setKNumberModel_EndMoveColumns_IsBase(bool value) const { knumbermodel_endmovecolumns_isbase = value; }
    inline void setKNumberModel_BeginResetModel_IsBase(bool value) const { knumbermodel_beginresetmodel_isbase = value; }
    inline void setKNumberModel_EndResetModel_IsBase(bool value) const { knumbermodel_endresetmodel_isbase = value; }
    inline void setKNumberModel_ChangePersistentIndex_IsBase(bool value) const { knumbermodel_changepersistentindex_isbase = value; }
    inline void setKNumberModel_ChangePersistentIndexList_IsBase(bool value) const { knumbermodel_changepersistentindexlist_isbase = value; }
    inline void setKNumberModel_PersistentIndexList_IsBase(bool value) const { knumbermodel_persistentindexlist_isbase = value; }
    inline void setKNumberModel_Sender_IsBase(bool value) const { knumbermodel_sender_isbase = value; }
    inline void setKNumberModel_SenderSignalIndex_IsBase(bool value) const { knumbermodel_sendersignalindex_isbase = value; }
    inline void setKNumberModel_Receivers_IsBase(bool value) const { knumbermodel_receivers_isbase = value; }
    inline void setKNumberModel_IsSignalConnected_IsBase(bool value) const { knumbermodel_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (knumbermodel_metaobject_isbase) {
            knumbermodel_metaobject_isbase = false;
            return KNumberModel::metaObject();
        }
        auto metaobject_cb = knumbermodel_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KNumberModel::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (knumbermodel_metacast_isbase) {
            knumbermodel_metacast_isbase = false;
            return KNumberModel::qt_metacast(param1);
        }
        auto metacast_cb = knumbermodel_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KNumberModel::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (knumbermodel_metacall_isbase) {
            knumbermodel_metacall_isbase = false;
            return KNumberModel::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = knumbermodel_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KNumberModel::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual int rowCount(const QModelIndex& index) const override {
        if (knumbermodel_rowcount_isbase) {
            knumbermodel_rowcount_isbase = false;
            return KNumberModel::rowCount(index);
        }
        auto rowcount_cb = knumbermodel_rowcount_callback;
        if (rowcount_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            int callback_ret = rowcount_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KNumberModel::rowCount(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(const QModelIndex& index, int role) const override {
        if (knumbermodel_data_isbase) {
            knumbermodel_data_isbase = false;
            return KNumberModel::data(index, role);
        }
        auto data_cb = knumbermodel_data_callback;
        if (data_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = role;

            QVariant* callback_ret = data_cb(this, cbval1, cbval2);
            return *callback_ret;
        }
        return KNumberModel::data(index, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual QHash<int, QByteArray> roleNames() const override {
        if (knumbermodel_rolenames_isbase) {
            knumbermodel_rolenames_isbase = false;
            return KNumberModel::roleNames();
        }
        auto rolenames_cb = knumbermodel_rolenames_callback;
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
        return KNumberModel::roleNames();
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
        if (knumbermodel_index_isbase) {
            knumbermodel_index_isbase = false;
            return KNumberModel::index(row, column, parent);
        }
        auto index_cb = knumbermodel_index_callback;
        if (index_cb) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            QModelIndex* callback_ret = index_cb(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        }
        return KNumberModel::index(row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
        if (knumbermodel_sibling_isbase) {
            knumbermodel_sibling_isbase = false;
            return KNumberModel::sibling(row, column, idx);
        }
        auto sibling_cb = knumbermodel_sibling_callback;
        if (sibling_cb) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& idx_ret = idx;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&idx_ret);

            QModelIndex* callback_ret = sibling_cb(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        }
        return KNumberModel::sibling(row, column, idx);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
        if (knumbermodel_dropmimedata_isbase) {
            knumbermodel_dropmimedata_isbase = false;
            return KNumberModel::dropMimeData(data, action, row, column, parent);
        }
        auto dropmimedata_cb = knumbermodel_dropmimedata_callback;
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
        return KNumberModel::dropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
        if (knumbermodel_flags_isbase) {
            knumbermodel_flags_isbase = false;
            return KNumberModel::flags(index);
        }
        auto flags_cb = knumbermodel_flags_callback;
        if (flags_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            int callback_ret = flags_cb(this, cbval1);
            return static_cast<Qt::ItemFlags>(callback_ret);
        }
        return KNumberModel::flags(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
        if (knumbermodel_setdata_isbase) {
            knumbermodel_setdata_isbase = false;
            return KNumberModel::setData(index, value, role);
        }
        auto setdata_cb = knumbermodel_setdata_callback;
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
        return KNumberModel::setData(index, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
        if (knumbermodel_headerdata_isbase) {
            knumbermodel_headerdata_isbase = false;
            return KNumberModel::headerData(section, orientation, role);
        }
        auto headerdata_cb = knumbermodel_headerdata_callback;
        if (headerdata_cb) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            int cbval3 = role;

            QVariant* callback_ret = headerdata_cb(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        }
        return KNumberModel::headerData(section, orientation, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
        if (knumbermodel_setheaderdata_isbase) {
            knumbermodel_setheaderdata_isbase = false;
            return KNumberModel::setHeaderData(section, orientation, value, role);
        }
        auto setheaderdata_cb = knumbermodel_setheaderdata_callback;
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
        return KNumberModel::setHeaderData(section, orientation, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
        if (knumbermodel_itemdata_isbase) {
            knumbermodel_itemdata_isbase = false;
            return KNumberModel::itemData(index);
        }
        auto itemdata_cb = knumbermodel_itemdata_callback;
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
        return KNumberModel::itemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
        if (knumbermodel_setitemdata_isbase) {
            knumbermodel_setitemdata_isbase = false;
            return KNumberModel::setItemData(index, roles);
        }
        auto setitemdata_cb = knumbermodel_setitemdata_callback;
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
        return KNumberModel::setItemData(index, roles);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool clearItemData(const QModelIndex& index) override {
        if (knumbermodel_clearitemdata_isbase) {
            knumbermodel_clearitemdata_isbase = false;
            return KNumberModel::clearItemData(index);
        }
        auto clearitemdata_cb = knumbermodel_clearitemdata_callback;
        if (clearitemdata_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            bool callback_ret = clearitemdata_cb(this, cbval1);
            return callback_ret;
        }
        return KNumberModel::clearItemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> mimeTypes() const override {
        if (knumbermodel_mimetypes_isbase) {
            knumbermodel_mimetypes_isbase = false;
            return KNumberModel::mimeTypes();
        }
        auto mimetypes_cb = knumbermodel_mimetypes_callback;
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
        return KNumberModel::mimeTypes();
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* mimeData(const QList<QModelIndex>& indexes) const override {
        if (knumbermodel_mimedata_isbase) {
            knumbermodel_mimedata_isbase = false;
            return KNumberModel::mimeData(indexes);
        }
        auto mimedata_cb = knumbermodel_mimedata_callback;
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
        return KNumberModel::mimeData(indexes);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
        if (knumbermodel_candropmimedata_isbase) {
            knumbermodel_candropmimedata_isbase = false;
            return KNumberModel::canDropMimeData(data, action, row, column, parent);
        }
        auto candropmimedata_cb = knumbermodel_candropmimedata_callback;
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
        return KNumberModel::canDropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (knumbermodel_supporteddropactions_isbase) {
            knumbermodel_supporteddropactions_isbase = false;
            return KNumberModel::supportedDropActions();
        }
        auto supporteddropactions_cb = knumbermodel_supporteddropactions_callback;
        if (supporteddropactions_cb) {
            int callback_ret = supporteddropactions_cb();
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return KNumberModel::supportedDropActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDragActions() const override {
        if (knumbermodel_supporteddragactions_isbase) {
            knumbermodel_supporteddragactions_isbase = false;
            return KNumberModel::supportedDragActions();
        }
        auto supporteddragactions_cb = knumbermodel_supporteddragactions_callback;
        if (supporteddragactions_cb) {
            int callback_ret = supporteddragactions_cb();
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return KNumberModel::supportedDragActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
        if (knumbermodel_insertrows_isbase) {
            knumbermodel_insertrows_isbase = false;
            return KNumberModel::insertRows(row, count, parent);
        }
        auto insertrows_cb = knumbermodel_insertrows_callback;
        if (insertrows_cb) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = insertrows_cb(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KNumberModel::insertRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
        if (knumbermodel_insertcolumns_isbase) {
            knumbermodel_insertcolumns_isbase = false;
            return KNumberModel::insertColumns(column, count, parent);
        }
        auto insertcolumns_cb = knumbermodel_insertcolumns_callback;
        if (insertcolumns_cb) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = insertcolumns_cb(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KNumberModel::insertColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
        if (knumbermodel_removerows_isbase) {
            knumbermodel_removerows_isbase = false;
            return KNumberModel::removeRows(row, count, parent);
        }
        auto removerows_cb = knumbermodel_removerows_callback;
        if (removerows_cb) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = removerows_cb(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KNumberModel::removeRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
        if (knumbermodel_removecolumns_isbase) {
            knumbermodel_removecolumns_isbase = false;
            return KNumberModel::removeColumns(column, count, parent);
        }
        auto removecolumns_cb = knumbermodel_removecolumns_callback;
        if (removecolumns_cb) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = removecolumns_cb(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KNumberModel::removeColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (knumbermodel_moverows_isbase) {
            knumbermodel_moverows_isbase = false;
            return KNumberModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
        }
        auto moverows_cb = knumbermodel_moverows_callback;
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
        return KNumberModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (knumbermodel_movecolumns_isbase) {
            knumbermodel_movecolumns_isbase = false;
            return KNumberModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
        }
        auto movecolumns_cb = knumbermodel_movecolumns_callback;
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
        return KNumberModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual void fetchMore(const QModelIndex& parent) override {
        if (knumbermodel_fetchmore_isbase) {
            knumbermodel_fetchmore_isbase = false;
            KNumberModel::fetchMore(parent);
            return;
        }
        auto fetchmore_cb = knumbermodel_fetchmore_callback;
        if (fetchmore_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            fetchmore_cb(this, cbval1);
            return;
        }
        KNumberModel::fetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canFetchMore(const QModelIndex& parent) const override {
        if (knumbermodel_canfetchmore_isbase) {
            knumbermodel_canfetchmore_isbase = false;
            return KNumberModel::canFetchMore(parent);
        }
        auto canfetchmore_cb = knumbermodel_canfetchmore_callback;
        if (canfetchmore_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = canfetchmore_cb(this, cbval1);
            return callback_ret;
        }
        return KNumberModel::canFetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void sort(int column, Qt::SortOrder order) override {
        if (knumbermodel_sort_isbase) {
            knumbermodel_sort_isbase = false;
            KNumberModel::sort(column, order);
            return;
        }
        auto sort_cb = knumbermodel_sort_callback;
        if (sort_cb) {
            int cbval1 = column;
            int cbval2 = static_cast<int>(order);

            sort_cb(this, cbval1, cbval2);
            return;
        }
        KNumberModel::sort(column, order);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex buddy(const QModelIndex& index) const override {
        if (knumbermodel_buddy_isbase) {
            knumbermodel_buddy_isbase = false;
            return KNumberModel::buddy(index);
        }
        auto buddy_cb = knumbermodel_buddy_callback;
        if (buddy_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QModelIndex* callback_ret = buddy_cb(this, cbval1);
            return *callback_ret;
        }
        return KNumberModel::buddy(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
        if (knumbermodel_match_isbase) {
            knumbermodel_match_isbase = false;
            return KNumberModel::match(start, role, value, hits, flags);
        }
        auto match_cb = knumbermodel_match_callback;
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
        return KNumberModel::match(start, role, value, hits, flags);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize span(const QModelIndex& index) const override {
        if (knumbermodel_span_isbase) {
            knumbermodel_span_isbase = false;
            return KNumberModel::span(index);
        }
        auto span_cb = knumbermodel_span_callback;
        if (span_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QSize* callback_ret = span_cb(this, cbval1);
            return *callback_ret;
        }
        return KNumberModel::span(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
        if (knumbermodel_multidata_isbase) {
            knumbermodel_multidata_isbase = false;
            KNumberModel::multiData(index, roleDataSpan);
            return;
        }
        auto multidata_cb = knumbermodel_multidata_callback;
        if (multidata_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelRoleDataSpan* cbval2 = new QModelRoleDataSpan(roleDataSpan);

            multidata_cb(this, cbval1, cbval2);
            return;
        }
        KNumberModel::multiData(index, roleDataSpan);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool submit() override {
        if (knumbermodel_submit_isbase) {
            knumbermodel_submit_isbase = false;
            return KNumberModel::submit();
        }
        auto submit_cb = knumbermodel_submit_callback;
        if (submit_cb) {
            bool callback_ret = submit_cb();
            return callback_ret;
        }
        return KNumberModel::submit();
    }

    // Virtual method for C ABI access and custom callback
    virtual void revert() override {
        if (knumbermodel_revert_isbase) {
            knumbermodel_revert_isbase = false;
            KNumberModel::revert();
            return;
        }
        auto revert_cb = knumbermodel_revert_callback;
        if (revert_cb) {
            revert_cb();
            return;
        }
        KNumberModel::revert();
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetInternalData() override {
        if (knumbermodel_resetinternaldata_isbase) {
            knumbermodel_resetinternaldata_isbase = false;
            KNumberModel::resetInternalData();
            return;
        }
        auto resetinternaldata_cb = knumbermodel_resetinternaldata_callback;
        if (resetinternaldata_cb) {
            resetinternaldata_cb();
            return;
        }
        KNumberModel::resetInternalData();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (knumbermodel_event_isbase) {
            knumbermodel_event_isbase = false;
            return KNumberModel::event(event);
        }
        auto event_cb = knumbermodel_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KNumberModel::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (knumbermodel_eventfilter_isbase) {
            knumbermodel_eventfilter_isbase = false;
            return KNumberModel::eventFilter(watched, event);
        }
        auto eventfilter_cb = knumbermodel_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KNumberModel::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (knumbermodel_timerevent_isbase) {
            knumbermodel_timerevent_isbase = false;
            KNumberModel::timerEvent(event);
            return;
        }
        auto timerevent_cb = knumbermodel_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KNumberModel::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (knumbermodel_childevent_isbase) {
            knumbermodel_childevent_isbase = false;
            KNumberModel::childEvent(event);
            return;
        }
        auto childevent_cb = knumbermodel_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KNumberModel::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (knumbermodel_customevent_isbase) {
            knumbermodel_customevent_isbase = false;
            KNumberModel::customEvent(event);
            return;
        }
        auto customevent_cb = knumbermodel_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KNumberModel::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (knumbermodel_connectnotify_isbase) {
            knumbermodel_connectnotify_isbase = false;
            KNumberModel::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = knumbermodel_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KNumberModel::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (knumbermodel_disconnectnotify_isbase) {
            knumbermodel_disconnectnotify_isbase = false;
            KNumberModel::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = knumbermodel_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KNumberModel::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QModelIndex createIndex(int row, int column) const {
        if (knumbermodel_createindex_isbase) {
            knumbermodel_createindex_isbase = false;
            return KNumberModel::createIndex(row, column);
        }
        auto createindex_cb = knumbermodel_createindex_callback;
        if (createindex_cb) {
            int cbval1 = row;
            int cbval2 = column;

            QModelIndex* callback_ret = createindex_cb(this, cbval1, cbval2);
            return *callback_ret;
        }
        return KNumberModel::createIndex(row, column);
    }

    // Virtual method for C ABI access and custom callback
    void encodeData(const QList<QModelIndex>& indexes, QDataStream& stream) const {
        if (knumbermodel_encodedata_isbase) {
            knumbermodel_encodedata_isbase = false;
            KNumberModel::encodeData(indexes, stream);
            return;
        }
        auto encodedata_cb = knumbermodel_encodedata_callback;
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
        KNumberModel::encodeData(indexes, stream);
    }

    // Virtual method for C ABI access and custom callback
    bool decodeData(int row, int column, const QModelIndex& parent, QDataStream& stream) {
        if (knumbermodel_decodedata_isbase) {
            knumbermodel_decodedata_isbase = false;
            return KNumberModel::decodeData(row, column, parent, stream);
        }
        auto decodedata_cb = knumbermodel_decodedata_callback;
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
        return KNumberModel::decodeData(row, column, parent, stream);
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertRows(const QModelIndex& parent, int first, int last) {
        if (knumbermodel_begininsertrows_isbase) {
            knumbermodel_begininsertrows_isbase = false;
            KNumberModel::beginInsertRows(parent, first, last);
            return;
        }
        auto begininsertrows_cb = knumbermodel_begininsertrows_callback;
        if (begininsertrows_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            begininsertrows_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        KNumberModel::beginInsertRows(parent, first, last);
    }

    // Virtual method for C ABI access and custom callback
    void endInsertRows() {
        if (knumbermodel_endinsertrows_isbase) {
            knumbermodel_endinsertrows_isbase = false;
            KNumberModel::endInsertRows();
            return;
        }
        auto endinsertrows_cb = knumbermodel_endinsertrows_callback;
        if (endinsertrows_cb) {
            endinsertrows_cb();
            return;
        }
        KNumberModel::endInsertRows();
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveRows(const QModelIndex& parent, int first, int last) {
        if (knumbermodel_beginremoverows_isbase) {
            knumbermodel_beginremoverows_isbase = false;
            KNumberModel::beginRemoveRows(parent, first, last);
            return;
        }
        auto beginremoverows_cb = knumbermodel_beginremoverows_callback;
        if (beginremoverows_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            beginremoverows_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        KNumberModel::beginRemoveRows(parent, first, last);
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveRows() {
        if (knumbermodel_endremoverows_isbase) {
            knumbermodel_endremoverows_isbase = false;
            KNumberModel::endRemoveRows();
            return;
        }
        auto endremoverows_cb = knumbermodel_endremoverows_callback;
        if (endremoverows_cb) {
            endremoverows_cb();
            return;
        }
        KNumberModel::endRemoveRows();
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveRows(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationRow) {
        if (knumbermodel_beginmoverows_isbase) {
            knumbermodel_beginmoverows_isbase = false;
            return KNumberModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
        }
        auto beginmoverows_cb = knumbermodel_beginmoverows_callback;
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
        return KNumberModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
    }

    // Virtual method for C ABI access and custom callback
    void endMoveRows() {
        if (knumbermodel_endmoverows_isbase) {
            knumbermodel_endmoverows_isbase = false;
            KNumberModel::endMoveRows();
            return;
        }
        auto endmoverows_cb = knumbermodel_endmoverows_callback;
        if (endmoverows_cb) {
            endmoverows_cb();
            return;
        }
        KNumberModel::endMoveRows();
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertColumns(const QModelIndex& parent, int first, int last) {
        if (knumbermodel_begininsertcolumns_isbase) {
            knumbermodel_begininsertcolumns_isbase = false;
            KNumberModel::beginInsertColumns(parent, first, last);
            return;
        }
        auto begininsertcolumns_cb = knumbermodel_begininsertcolumns_callback;
        if (begininsertcolumns_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            begininsertcolumns_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        KNumberModel::beginInsertColumns(parent, first, last);
    }

    // Virtual method for C ABI access and custom callback
    void endInsertColumns() {
        if (knumbermodel_endinsertcolumns_isbase) {
            knumbermodel_endinsertcolumns_isbase = false;
            KNumberModel::endInsertColumns();
            return;
        }
        auto endinsertcolumns_cb = knumbermodel_endinsertcolumns_callback;
        if (endinsertcolumns_cb) {
            endinsertcolumns_cb();
            return;
        }
        KNumberModel::endInsertColumns();
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveColumns(const QModelIndex& parent, int first, int last) {
        if (knumbermodel_beginremovecolumns_isbase) {
            knumbermodel_beginremovecolumns_isbase = false;
            KNumberModel::beginRemoveColumns(parent, first, last);
            return;
        }
        auto beginremovecolumns_cb = knumbermodel_beginremovecolumns_callback;
        if (beginremovecolumns_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            beginremovecolumns_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        KNumberModel::beginRemoveColumns(parent, first, last);
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveColumns() {
        if (knumbermodel_endremovecolumns_isbase) {
            knumbermodel_endremovecolumns_isbase = false;
            KNumberModel::endRemoveColumns();
            return;
        }
        auto endremovecolumns_cb = knumbermodel_endremovecolumns_callback;
        if (endremovecolumns_cb) {
            endremovecolumns_cb();
            return;
        }
        KNumberModel::endRemoveColumns();
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveColumns(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationColumn) {
        if (knumbermodel_beginmovecolumns_isbase) {
            knumbermodel_beginmovecolumns_isbase = false;
            return KNumberModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
        }
        auto beginmovecolumns_cb = knumbermodel_beginmovecolumns_callback;
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
        return KNumberModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
    }

    // Virtual method for C ABI access and custom callback
    void endMoveColumns() {
        if (knumbermodel_endmovecolumns_isbase) {
            knumbermodel_endmovecolumns_isbase = false;
            KNumberModel::endMoveColumns();
            return;
        }
        auto endmovecolumns_cb = knumbermodel_endmovecolumns_callback;
        if (endmovecolumns_cb) {
            endmovecolumns_cb();
            return;
        }
        KNumberModel::endMoveColumns();
    }

    // Virtual method for C ABI access and custom callback
    void beginResetModel() {
        if (knumbermodel_beginresetmodel_isbase) {
            knumbermodel_beginresetmodel_isbase = false;
            KNumberModel::beginResetModel();
            return;
        }
        auto beginresetmodel_cb = knumbermodel_beginresetmodel_callback;
        if (beginresetmodel_cb) {
            beginresetmodel_cb();
            return;
        }
        KNumberModel::beginResetModel();
    }

    // Virtual method for C ABI access and custom callback
    void endResetModel() {
        if (knumbermodel_endresetmodel_isbase) {
            knumbermodel_endresetmodel_isbase = false;
            KNumberModel::endResetModel();
            return;
        }
        auto endresetmodel_cb = knumbermodel_endresetmodel_callback;
        if (endresetmodel_cb) {
            endresetmodel_cb();
            return;
        }
        KNumberModel::endResetModel();
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndex(const QModelIndex& from, const QModelIndex& to) {
        if (knumbermodel_changepersistentindex_isbase) {
            knumbermodel_changepersistentindex_isbase = false;
            KNumberModel::changePersistentIndex(from, to);
            return;
        }
        auto changepersistentindex_cb = knumbermodel_changepersistentindex_callback;
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
        KNumberModel::changePersistentIndex(from, to);
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndexList(const QList<QModelIndex>& from, const QList<QModelIndex>& to) {
        if (knumbermodel_changepersistentindexlist_isbase) {
            knumbermodel_changepersistentindexlist_isbase = false;
            KNumberModel::changePersistentIndexList(from, to);
            return;
        }
        auto changepersistentindexlist_cb = knumbermodel_changepersistentindexlist_callback;
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
        KNumberModel::changePersistentIndexList(from, to);
    }

    // Virtual method for C ABI access and custom callback
    QList<QModelIndex> persistentIndexList() const {
        if (knumbermodel_persistentindexlist_isbase) {
            knumbermodel_persistentindexlist_isbase = false;
            return KNumberModel::persistentIndexList();
        }
        auto persistentindexlist_cb = knumbermodel_persistentindexlist_callback;
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
        return KNumberModel::persistentIndexList();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (knumbermodel_sender_isbase) {
            knumbermodel_sender_isbase = false;
            return KNumberModel::sender();
        }
        auto sender_cb = knumbermodel_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KNumberModel::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (knumbermodel_sendersignalindex_isbase) {
            knumbermodel_sendersignalindex_isbase = false;
            return KNumberModel::senderSignalIndex();
        }
        auto sendersignalindex_cb = knumbermodel_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KNumberModel::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (knumbermodel_receivers_isbase) {
            knumbermodel_receivers_isbase = false;
            return KNumberModel::receivers(signal);
        }
        auto receivers_cb = knumbermodel_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KNumberModel::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (knumbermodel_issignalconnected_isbase) {
            knumbermodel_issignalconnected_isbase = false;
            return KNumberModel::isSignalConnected(signal);
        }
        auto issignalconnected_cb = knumbermodel_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KNumberModel::isSignalConnected(signal);
    }

    // Friend functions
    friend void KNumberModel_ResetInternalData(KNumberModel* self);
    friend void KNumberModel_SuperResetInternalData(KNumberModel* self);
    friend void KNumberModel_TimerEvent(KNumberModel* self, QTimerEvent* event);
    friend void KNumberModel_SuperTimerEvent(KNumberModel* self, QTimerEvent* event);
    friend void KNumberModel_ChildEvent(KNumberModel* self, QChildEvent* event);
    friend void KNumberModel_SuperChildEvent(KNumberModel* self, QChildEvent* event);
    friend void KNumberModel_CustomEvent(KNumberModel* self, QEvent* event);
    friend void KNumberModel_SuperCustomEvent(KNumberModel* self, QEvent* event);
    friend void KNumberModel_ConnectNotify(KNumberModel* self, const QMetaMethod* signal);
    friend void KNumberModel_SuperConnectNotify(KNumberModel* self, const QMetaMethod* signal);
    friend void KNumberModel_DisconnectNotify(KNumberModel* self, const QMetaMethod* signal);
    friend void KNumberModel_SuperDisconnectNotify(KNumberModel* self, const QMetaMethod* signal);
    friend QModelIndex* KNumberModel_CreateIndex(const KNumberModel* self, int row, int column);
    friend QModelIndex* KNumberModel_SuperCreateIndex(const KNumberModel* self, int row, int column);
    friend void KNumberModel_EncodeData(const KNumberModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
    friend void KNumberModel_SuperEncodeData(const KNumberModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
    friend bool KNumberModel_DecodeData(KNumberModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
    friend bool KNumberModel_SuperDecodeData(KNumberModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
    friend void KNumberModel_BeginInsertRows(KNumberModel* self, const QModelIndex* parent, int first, int last);
    friend void KNumberModel_SuperBeginInsertRows(KNumberModel* self, const QModelIndex* parent, int first, int last);
    friend void KNumberModel_EndInsertRows(KNumberModel* self);
    friend void KNumberModel_SuperEndInsertRows(KNumberModel* self);
    friend void KNumberModel_BeginRemoveRows(KNumberModel* self, const QModelIndex* parent, int first, int last);
    friend void KNumberModel_SuperBeginRemoveRows(KNumberModel* self, const QModelIndex* parent, int first, int last);
    friend void KNumberModel_EndRemoveRows(KNumberModel* self);
    friend void KNumberModel_SuperEndRemoveRows(KNumberModel* self);
    friend bool KNumberModel_BeginMoveRows(KNumberModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
    friend bool KNumberModel_SuperBeginMoveRows(KNumberModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
    friend void KNumberModel_EndMoveRows(KNumberModel* self);
    friend void KNumberModel_SuperEndMoveRows(KNumberModel* self);
    friend void KNumberModel_BeginInsertColumns(KNumberModel* self, const QModelIndex* parent, int first, int last);
    friend void KNumberModel_SuperBeginInsertColumns(KNumberModel* self, const QModelIndex* parent, int first, int last);
    friend void KNumberModel_EndInsertColumns(KNumberModel* self);
    friend void KNumberModel_SuperEndInsertColumns(KNumberModel* self);
    friend void KNumberModel_BeginRemoveColumns(KNumberModel* self, const QModelIndex* parent, int first, int last);
    friend void KNumberModel_SuperBeginRemoveColumns(KNumberModel* self, const QModelIndex* parent, int first, int last);
    friend void KNumberModel_EndRemoveColumns(KNumberModel* self);
    friend void KNumberModel_SuperEndRemoveColumns(KNumberModel* self);
    friend bool KNumberModel_BeginMoveColumns(KNumberModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
    friend bool KNumberModel_SuperBeginMoveColumns(KNumberModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
    friend void KNumberModel_EndMoveColumns(KNumberModel* self);
    friend void KNumberModel_SuperEndMoveColumns(KNumberModel* self);
    friend void KNumberModel_BeginResetModel(KNumberModel* self);
    friend void KNumberModel_SuperBeginResetModel(KNumberModel* self);
    friend void KNumberModel_EndResetModel(KNumberModel* self);
    friend void KNumberModel_SuperEndResetModel(KNumberModel* self);
    friend void KNumberModel_ChangePersistentIndex(KNumberModel* self, const QModelIndex* from, const QModelIndex* to);
    friend void KNumberModel_SuperChangePersistentIndex(KNumberModel* self, const QModelIndex* from, const QModelIndex* to);
    friend void KNumberModel_ChangePersistentIndexList(KNumberModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
    friend void KNumberModel_SuperChangePersistentIndexList(KNumberModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
    friend libqt_list /* of QModelIndex* */ KNumberModel_PersistentIndexList(const KNumberModel* self);
    friend libqt_list /* of QModelIndex* */ KNumberModel_SuperPersistentIndexList(const KNumberModel* self);
    friend QObject* KNumberModel_Sender(const KNumberModel* self);
    friend QObject* KNumberModel_SuperSender(const KNumberModel* self);
    friend int KNumberModel_SenderSignalIndex(const KNumberModel* self);
    friend int KNumberModel_SuperSenderSignalIndex(const KNumberModel* self);
    friend int KNumberModel_Receivers(const KNumberModel* self, const char* signal);
    friend int KNumberModel_SuperReceivers(const KNumberModel* self, const char* signal);
    friend bool KNumberModel_IsSignalConnected(const KNumberModel* self, const QMetaMethod* signal);
    friend bool KNumberModel_SuperIsSignalConnected(const KNumberModel* self, const QMetaMethod* signal);
};

#endif
