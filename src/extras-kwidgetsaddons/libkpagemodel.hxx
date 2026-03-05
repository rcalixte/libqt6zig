#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKPAGEMODEL_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKPAGEMODEL_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KPageModel so that we can call protected methods
class VirtualKPageModel : public KPageModel {

  public:
    // Virtual class boolean flag
    bool isVirtualKPageModel = true;

    // Virtual class public types (including callbacks)
    using KPageModel_MetaObject_Callback = QMetaObject* (*)();
    using KPageModel_Metacast_Callback = void* (*)(KPageModel*, const char*);
    using KPageModel_Metacall_Callback = int (*)(KPageModel*, int, int, void**);
    using KPageModel_Index_Callback = QModelIndex* (*)(const KPageModel*, int, int, QModelIndex*);
    using KPageModel_Parent_Callback = QModelIndex* (*)(const KPageModel*, QModelIndex*);
    using KPageModel_Sibling_Callback = QModelIndex* (*)(const KPageModel*, int, int, QModelIndex*);
    using KPageModel_RowCount_Callback = int (*)(const KPageModel*, QModelIndex*);
    using KPageModel_ColumnCount_Callback = int (*)(const KPageModel*, QModelIndex*);
    using KPageModel_HasChildren_Callback = bool (*)(const KPageModel*, QModelIndex*);
    using KPageModel_Data_Callback = QVariant* (*)(const KPageModel*, QModelIndex*, int);
    using KPageModel_SetData_Callback = bool (*)(KPageModel*, QModelIndex*, QVariant*, int);
    using KPageModel_HeaderData_Callback = QVariant* (*)(const KPageModel*, int, int, int);
    using KPageModel_SetHeaderData_Callback = bool (*)(KPageModel*, int, int, QVariant*, int);
    using KPageModel_ItemData_Callback = libqt_map /* of int to QVariant* */ (*)(const KPageModel*, QModelIndex*);
    using KPageModel_SetItemData_Callback = bool (*)(KPageModel*, QModelIndex*, libqt_map /* of int to QVariant* */);
    using KPageModel_ClearItemData_Callback = bool (*)(KPageModel*, QModelIndex*);
    using KPageModel_MimeTypes_Callback = const char** (*)();
    using KPageModel_MimeData_Callback = QMimeData* (*)(const KPageModel*, libqt_list /* of QModelIndex* */);
    using KPageModel_CanDropMimeData_Callback = bool (*)(const KPageModel*, QMimeData*, int, int, int, QModelIndex*);
    using KPageModel_DropMimeData_Callback = bool (*)(KPageModel*, QMimeData*, int, int, int, QModelIndex*);
    using KPageModel_SupportedDropActions_Callback = int (*)();
    using KPageModel_SupportedDragActions_Callback = int (*)();
    using KPageModel_InsertRows_Callback = bool (*)(KPageModel*, int, int, QModelIndex*);
    using KPageModel_InsertColumns_Callback = bool (*)(KPageModel*, int, int, QModelIndex*);
    using KPageModel_RemoveRows_Callback = bool (*)(KPageModel*, int, int, QModelIndex*);
    using KPageModel_RemoveColumns_Callback = bool (*)(KPageModel*, int, int, QModelIndex*);
    using KPageModel_MoveRows_Callback = bool (*)(KPageModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KPageModel_MoveColumns_Callback = bool (*)(KPageModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KPageModel_FetchMore_Callback = void (*)(KPageModel*, QModelIndex*);
    using KPageModel_CanFetchMore_Callback = bool (*)(const KPageModel*, QModelIndex*);
    using KPageModel_Flags_Callback = int (*)(const KPageModel*, QModelIndex*);
    using KPageModel_Sort_Callback = void (*)(KPageModel*, int, int);
    using KPageModel_Buddy_Callback = QModelIndex* (*)(const KPageModel*, QModelIndex*);
    using KPageModel_Match_Callback = libqt_list /* of QModelIndex* */ (*)(const KPageModel*, QModelIndex*, int, QVariant*, int, int);
    using KPageModel_Span_Callback = QSize* (*)(const KPageModel*, QModelIndex*);
    using KPageModel_RoleNames_Callback = libqt_map /* of int to libqt_string */ (*)();
    using KPageModel_MultiData_Callback = void (*)(const KPageModel*, QModelIndex*, QModelRoleDataSpan*);
    using KPageModel_Submit_Callback = bool (*)();
    using KPageModel_Revert_Callback = void (*)();
    using KPageModel_ResetInternalData_Callback = void (*)();
    using KPageModel_Event_Callback = bool (*)(KPageModel*, QEvent*);
    using KPageModel_EventFilter_Callback = bool (*)(KPageModel*, QObject*, QEvent*);
    using KPageModel_TimerEvent_Callback = void (*)(KPageModel*, QTimerEvent*);
    using KPageModel_ChildEvent_Callback = void (*)(KPageModel*, QChildEvent*);
    using KPageModel_CustomEvent_Callback = void (*)(KPageModel*, QEvent*);
    using KPageModel_ConnectNotify_Callback = void (*)(KPageModel*, QMetaMethod*);
    using KPageModel_DisconnectNotify_Callback = void (*)(KPageModel*, QMetaMethod*);
    using KPageModel_CreateIndex_Callback = QModelIndex* (*)(const KPageModel*, int, int);
    using KPageModel_EncodeData_Callback = void (*)(const KPageModel*, libqt_list /* of QModelIndex* */, QDataStream*);
    using KPageModel_DecodeData_Callback = bool (*)(KPageModel*, int, int, QModelIndex*, QDataStream*);
    using KPageModel_BeginInsertRows_Callback = void (*)(KPageModel*, QModelIndex*, int, int);
    using KPageModel_EndInsertRows_Callback = void (*)();
    using KPageModel_BeginRemoveRows_Callback = void (*)(KPageModel*, QModelIndex*, int, int);
    using KPageModel_EndRemoveRows_Callback = void (*)();
    using KPageModel_BeginMoveRows_Callback = bool (*)(KPageModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KPageModel_EndMoveRows_Callback = void (*)();
    using KPageModel_BeginInsertColumns_Callback = void (*)(KPageModel*, QModelIndex*, int, int);
    using KPageModel_EndInsertColumns_Callback = void (*)();
    using KPageModel_BeginRemoveColumns_Callback = void (*)(KPageModel*, QModelIndex*, int, int);
    using KPageModel_EndRemoveColumns_Callback = void (*)();
    using KPageModel_BeginMoveColumns_Callback = bool (*)(KPageModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KPageModel_EndMoveColumns_Callback = void (*)();
    using KPageModel_BeginResetModel_Callback = void (*)();
    using KPageModel_EndResetModel_Callback = void (*)();
    using KPageModel_ChangePersistentIndex_Callback = void (*)(KPageModel*, QModelIndex*, QModelIndex*);
    using KPageModel_ChangePersistentIndexList_Callback = void (*)(KPageModel*, libqt_list /* of QModelIndex* */, libqt_list /* of QModelIndex* */);
    using KPageModel_PersistentIndexList_Callback = libqt_list /* of QModelIndex* */ (*)();
    using KPageModel_Sender_Callback = QObject* (*)();
    using KPageModel_SenderSignalIndex_Callback = int (*)();
    using KPageModel_Receivers_Callback = int (*)(const KPageModel*, const char*);
    using KPageModel_IsSignalConnected_Callback = bool (*)(const KPageModel*, QMetaMethod*);

  protected:
    // Instance callback storage
    KPageModel_MetaObject_Callback kpagemodel_metaobject_callback = nullptr;
    KPageModel_Metacast_Callback kpagemodel_metacast_callback = nullptr;
    KPageModel_Metacall_Callback kpagemodel_metacall_callback = nullptr;
    KPageModel_Index_Callback kpagemodel_index_callback = nullptr;
    KPageModel_Parent_Callback kpagemodel_parent_callback = nullptr;
    KPageModel_Sibling_Callback kpagemodel_sibling_callback = nullptr;
    KPageModel_RowCount_Callback kpagemodel_rowcount_callback = nullptr;
    KPageModel_ColumnCount_Callback kpagemodel_columncount_callback = nullptr;
    KPageModel_HasChildren_Callback kpagemodel_haschildren_callback = nullptr;
    KPageModel_Data_Callback kpagemodel_data_callback = nullptr;
    KPageModel_SetData_Callback kpagemodel_setdata_callback = nullptr;
    KPageModel_HeaderData_Callback kpagemodel_headerdata_callback = nullptr;
    KPageModel_SetHeaderData_Callback kpagemodel_setheaderdata_callback = nullptr;
    KPageModel_ItemData_Callback kpagemodel_itemdata_callback = nullptr;
    KPageModel_SetItemData_Callback kpagemodel_setitemdata_callback = nullptr;
    KPageModel_ClearItemData_Callback kpagemodel_clearitemdata_callback = nullptr;
    KPageModel_MimeTypes_Callback kpagemodel_mimetypes_callback = nullptr;
    KPageModel_MimeData_Callback kpagemodel_mimedata_callback = nullptr;
    KPageModel_CanDropMimeData_Callback kpagemodel_candropmimedata_callback = nullptr;
    KPageModel_DropMimeData_Callback kpagemodel_dropmimedata_callback = nullptr;
    KPageModel_SupportedDropActions_Callback kpagemodel_supporteddropactions_callback = nullptr;
    KPageModel_SupportedDragActions_Callback kpagemodel_supporteddragactions_callback = nullptr;
    KPageModel_InsertRows_Callback kpagemodel_insertrows_callback = nullptr;
    KPageModel_InsertColumns_Callback kpagemodel_insertcolumns_callback = nullptr;
    KPageModel_RemoveRows_Callback kpagemodel_removerows_callback = nullptr;
    KPageModel_RemoveColumns_Callback kpagemodel_removecolumns_callback = nullptr;
    KPageModel_MoveRows_Callback kpagemodel_moverows_callback = nullptr;
    KPageModel_MoveColumns_Callback kpagemodel_movecolumns_callback = nullptr;
    KPageModel_FetchMore_Callback kpagemodel_fetchmore_callback = nullptr;
    KPageModel_CanFetchMore_Callback kpagemodel_canfetchmore_callback = nullptr;
    KPageModel_Flags_Callback kpagemodel_flags_callback = nullptr;
    KPageModel_Sort_Callback kpagemodel_sort_callback = nullptr;
    KPageModel_Buddy_Callback kpagemodel_buddy_callback = nullptr;
    KPageModel_Match_Callback kpagemodel_match_callback = nullptr;
    KPageModel_Span_Callback kpagemodel_span_callback = nullptr;
    KPageModel_RoleNames_Callback kpagemodel_rolenames_callback = nullptr;
    KPageModel_MultiData_Callback kpagemodel_multidata_callback = nullptr;
    KPageModel_Submit_Callback kpagemodel_submit_callback = nullptr;
    KPageModel_Revert_Callback kpagemodel_revert_callback = nullptr;
    KPageModel_ResetInternalData_Callback kpagemodel_resetinternaldata_callback = nullptr;
    KPageModel_Event_Callback kpagemodel_event_callback = nullptr;
    KPageModel_EventFilter_Callback kpagemodel_eventfilter_callback = nullptr;
    KPageModel_TimerEvent_Callback kpagemodel_timerevent_callback = nullptr;
    KPageModel_ChildEvent_Callback kpagemodel_childevent_callback = nullptr;
    KPageModel_CustomEvent_Callback kpagemodel_customevent_callback = nullptr;
    KPageModel_ConnectNotify_Callback kpagemodel_connectnotify_callback = nullptr;
    KPageModel_DisconnectNotify_Callback kpagemodel_disconnectnotify_callback = nullptr;
    KPageModel_CreateIndex_Callback kpagemodel_createindex_callback = nullptr;
    KPageModel_EncodeData_Callback kpagemodel_encodedata_callback = nullptr;
    KPageModel_DecodeData_Callback kpagemodel_decodedata_callback = nullptr;
    KPageModel_BeginInsertRows_Callback kpagemodel_begininsertrows_callback = nullptr;
    KPageModel_EndInsertRows_Callback kpagemodel_endinsertrows_callback = nullptr;
    KPageModel_BeginRemoveRows_Callback kpagemodel_beginremoverows_callback = nullptr;
    KPageModel_EndRemoveRows_Callback kpagemodel_endremoverows_callback = nullptr;
    KPageModel_BeginMoveRows_Callback kpagemodel_beginmoverows_callback = nullptr;
    KPageModel_EndMoveRows_Callback kpagemodel_endmoverows_callback = nullptr;
    KPageModel_BeginInsertColumns_Callback kpagemodel_begininsertcolumns_callback = nullptr;
    KPageModel_EndInsertColumns_Callback kpagemodel_endinsertcolumns_callback = nullptr;
    KPageModel_BeginRemoveColumns_Callback kpagemodel_beginremovecolumns_callback = nullptr;
    KPageModel_EndRemoveColumns_Callback kpagemodel_endremovecolumns_callback = nullptr;
    KPageModel_BeginMoveColumns_Callback kpagemodel_beginmovecolumns_callback = nullptr;
    KPageModel_EndMoveColumns_Callback kpagemodel_endmovecolumns_callback = nullptr;
    KPageModel_BeginResetModel_Callback kpagemodel_beginresetmodel_callback = nullptr;
    KPageModel_EndResetModel_Callback kpagemodel_endresetmodel_callback = nullptr;
    KPageModel_ChangePersistentIndex_Callback kpagemodel_changepersistentindex_callback = nullptr;
    KPageModel_ChangePersistentIndexList_Callback kpagemodel_changepersistentindexlist_callback = nullptr;
    KPageModel_PersistentIndexList_Callback kpagemodel_persistentindexlist_callback = nullptr;
    KPageModel_Sender_Callback kpagemodel_sender_callback = nullptr;
    KPageModel_SenderSignalIndex_Callback kpagemodel_sendersignalindex_callback = nullptr;
    KPageModel_Receivers_Callback kpagemodel_receivers_callback = nullptr;
    KPageModel_IsSignalConnected_Callback kpagemodel_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kpagemodel_metaobject_isbase = false;
    mutable bool kpagemodel_metacast_isbase = false;
    mutable bool kpagemodel_metacall_isbase = false;
    mutable bool kpagemodel_index_isbase = false;
    mutable bool kpagemodel_parent_isbase = false;
    mutable bool kpagemodel_sibling_isbase = false;
    mutable bool kpagemodel_rowcount_isbase = false;
    mutable bool kpagemodel_columncount_isbase = false;
    mutable bool kpagemodel_haschildren_isbase = false;
    mutable bool kpagemodel_data_isbase = false;
    mutable bool kpagemodel_setdata_isbase = false;
    mutable bool kpagemodel_headerdata_isbase = false;
    mutable bool kpagemodel_setheaderdata_isbase = false;
    mutable bool kpagemodel_itemdata_isbase = false;
    mutable bool kpagemodel_setitemdata_isbase = false;
    mutable bool kpagemodel_clearitemdata_isbase = false;
    mutable bool kpagemodel_mimetypes_isbase = false;
    mutable bool kpagemodel_mimedata_isbase = false;
    mutable bool kpagemodel_candropmimedata_isbase = false;
    mutable bool kpagemodel_dropmimedata_isbase = false;
    mutable bool kpagemodel_supporteddropactions_isbase = false;
    mutable bool kpagemodel_supporteddragactions_isbase = false;
    mutable bool kpagemodel_insertrows_isbase = false;
    mutable bool kpagemodel_insertcolumns_isbase = false;
    mutable bool kpagemodel_removerows_isbase = false;
    mutable bool kpagemodel_removecolumns_isbase = false;
    mutable bool kpagemodel_moverows_isbase = false;
    mutable bool kpagemodel_movecolumns_isbase = false;
    mutable bool kpagemodel_fetchmore_isbase = false;
    mutable bool kpagemodel_canfetchmore_isbase = false;
    mutable bool kpagemodel_flags_isbase = false;
    mutable bool kpagemodel_sort_isbase = false;
    mutable bool kpagemodel_buddy_isbase = false;
    mutable bool kpagemodel_match_isbase = false;
    mutable bool kpagemodel_span_isbase = false;
    mutable bool kpagemodel_rolenames_isbase = false;
    mutable bool kpagemodel_multidata_isbase = false;
    mutable bool kpagemodel_submit_isbase = false;
    mutable bool kpagemodel_revert_isbase = false;
    mutable bool kpagemodel_resetinternaldata_isbase = false;
    mutable bool kpagemodel_event_isbase = false;
    mutable bool kpagemodel_eventfilter_isbase = false;
    mutable bool kpagemodel_timerevent_isbase = false;
    mutable bool kpagemodel_childevent_isbase = false;
    mutable bool kpagemodel_customevent_isbase = false;
    mutable bool kpagemodel_connectnotify_isbase = false;
    mutable bool kpagemodel_disconnectnotify_isbase = false;
    mutable bool kpagemodel_createindex_isbase = false;
    mutable bool kpagemodel_encodedata_isbase = false;
    mutable bool kpagemodel_decodedata_isbase = false;
    mutable bool kpagemodel_begininsertrows_isbase = false;
    mutable bool kpagemodel_endinsertrows_isbase = false;
    mutable bool kpagemodel_beginremoverows_isbase = false;
    mutable bool kpagemodel_endremoverows_isbase = false;
    mutable bool kpagemodel_beginmoverows_isbase = false;
    mutable bool kpagemodel_endmoverows_isbase = false;
    mutable bool kpagemodel_begininsertcolumns_isbase = false;
    mutable bool kpagemodel_endinsertcolumns_isbase = false;
    mutable bool kpagemodel_beginremovecolumns_isbase = false;
    mutable bool kpagemodel_endremovecolumns_isbase = false;
    mutable bool kpagemodel_beginmovecolumns_isbase = false;
    mutable bool kpagemodel_endmovecolumns_isbase = false;
    mutable bool kpagemodel_beginresetmodel_isbase = false;
    mutable bool kpagemodel_endresetmodel_isbase = false;
    mutable bool kpagemodel_changepersistentindex_isbase = false;
    mutable bool kpagemodel_changepersistentindexlist_isbase = false;
    mutable bool kpagemodel_persistentindexlist_isbase = false;
    mutable bool kpagemodel_sender_isbase = false;
    mutable bool kpagemodel_sendersignalindex_isbase = false;
    mutable bool kpagemodel_receivers_isbase = false;
    mutable bool kpagemodel_issignalconnected_isbase = false;

  public:
    VirtualKPageModel() : KPageModel() {};
    VirtualKPageModel(QObject* parent) : KPageModel(parent) {};

    // Callback setters
    inline void setKPageModel_MetaObject_Callback(KPageModel_MetaObject_Callback cb) { kpagemodel_metaobject_callback = cb; }
    inline void setKPageModel_Metacast_Callback(KPageModel_Metacast_Callback cb) { kpagemodel_metacast_callback = cb; }
    inline void setKPageModel_Metacall_Callback(KPageModel_Metacall_Callback cb) { kpagemodel_metacall_callback = cb; }
    inline void setKPageModel_Index_Callback(KPageModel_Index_Callback cb) { kpagemodel_index_callback = cb; }
    inline void setKPageModel_Parent_Callback(KPageModel_Parent_Callback cb) { kpagemodel_parent_callback = cb; }
    inline void setKPageModel_Sibling_Callback(KPageModel_Sibling_Callback cb) { kpagemodel_sibling_callback = cb; }
    inline void setKPageModel_RowCount_Callback(KPageModel_RowCount_Callback cb) { kpagemodel_rowcount_callback = cb; }
    inline void setKPageModel_ColumnCount_Callback(KPageModel_ColumnCount_Callback cb) { kpagemodel_columncount_callback = cb; }
    inline void setKPageModel_HasChildren_Callback(KPageModel_HasChildren_Callback cb) { kpagemodel_haschildren_callback = cb; }
    inline void setKPageModel_Data_Callback(KPageModel_Data_Callback cb) { kpagemodel_data_callback = cb; }
    inline void setKPageModel_SetData_Callback(KPageModel_SetData_Callback cb) { kpagemodel_setdata_callback = cb; }
    inline void setKPageModel_HeaderData_Callback(KPageModel_HeaderData_Callback cb) { kpagemodel_headerdata_callback = cb; }
    inline void setKPageModel_SetHeaderData_Callback(KPageModel_SetHeaderData_Callback cb) { kpagemodel_setheaderdata_callback = cb; }
    inline void setKPageModel_ItemData_Callback(KPageModel_ItemData_Callback cb) { kpagemodel_itemdata_callback = cb; }
    inline void setKPageModel_SetItemData_Callback(KPageModel_SetItemData_Callback cb) { kpagemodel_setitemdata_callback = cb; }
    inline void setKPageModel_ClearItemData_Callback(KPageModel_ClearItemData_Callback cb) { kpagemodel_clearitemdata_callback = cb; }
    inline void setKPageModel_MimeTypes_Callback(KPageModel_MimeTypes_Callback cb) { kpagemodel_mimetypes_callback = cb; }
    inline void setKPageModel_MimeData_Callback(KPageModel_MimeData_Callback cb) { kpagemodel_mimedata_callback = cb; }
    inline void setKPageModel_CanDropMimeData_Callback(KPageModel_CanDropMimeData_Callback cb) { kpagemodel_candropmimedata_callback = cb; }
    inline void setKPageModel_DropMimeData_Callback(KPageModel_DropMimeData_Callback cb) { kpagemodel_dropmimedata_callback = cb; }
    inline void setKPageModel_SupportedDropActions_Callback(KPageModel_SupportedDropActions_Callback cb) { kpagemodel_supporteddropactions_callback = cb; }
    inline void setKPageModel_SupportedDragActions_Callback(KPageModel_SupportedDragActions_Callback cb) { kpagemodel_supporteddragactions_callback = cb; }
    inline void setKPageModel_InsertRows_Callback(KPageModel_InsertRows_Callback cb) { kpagemodel_insertrows_callback = cb; }
    inline void setKPageModel_InsertColumns_Callback(KPageModel_InsertColumns_Callback cb) { kpagemodel_insertcolumns_callback = cb; }
    inline void setKPageModel_RemoveRows_Callback(KPageModel_RemoveRows_Callback cb) { kpagemodel_removerows_callback = cb; }
    inline void setKPageModel_RemoveColumns_Callback(KPageModel_RemoveColumns_Callback cb) { kpagemodel_removecolumns_callback = cb; }
    inline void setKPageModel_MoveRows_Callback(KPageModel_MoveRows_Callback cb) { kpagemodel_moverows_callback = cb; }
    inline void setKPageModel_MoveColumns_Callback(KPageModel_MoveColumns_Callback cb) { kpagemodel_movecolumns_callback = cb; }
    inline void setKPageModel_FetchMore_Callback(KPageModel_FetchMore_Callback cb) { kpagemodel_fetchmore_callback = cb; }
    inline void setKPageModel_CanFetchMore_Callback(KPageModel_CanFetchMore_Callback cb) { kpagemodel_canfetchmore_callback = cb; }
    inline void setKPageModel_Flags_Callback(KPageModel_Flags_Callback cb) { kpagemodel_flags_callback = cb; }
    inline void setKPageModel_Sort_Callback(KPageModel_Sort_Callback cb) { kpagemodel_sort_callback = cb; }
    inline void setKPageModel_Buddy_Callback(KPageModel_Buddy_Callback cb) { kpagemodel_buddy_callback = cb; }
    inline void setKPageModel_Match_Callback(KPageModel_Match_Callback cb) { kpagemodel_match_callback = cb; }
    inline void setKPageModel_Span_Callback(KPageModel_Span_Callback cb) { kpagemodel_span_callback = cb; }
    inline void setKPageModel_RoleNames_Callback(KPageModel_RoleNames_Callback cb) { kpagemodel_rolenames_callback = cb; }
    inline void setKPageModel_MultiData_Callback(KPageModel_MultiData_Callback cb) { kpagemodel_multidata_callback = cb; }
    inline void setKPageModel_Submit_Callback(KPageModel_Submit_Callback cb) { kpagemodel_submit_callback = cb; }
    inline void setKPageModel_Revert_Callback(KPageModel_Revert_Callback cb) { kpagemodel_revert_callback = cb; }
    inline void setKPageModel_ResetInternalData_Callback(KPageModel_ResetInternalData_Callback cb) { kpagemodel_resetinternaldata_callback = cb; }
    inline void setKPageModel_Event_Callback(KPageModel_Event_Callback cb) { kpagemodel_event_callback = cb; }
    inline void setKPageModel_EventFilter_Callback(KPageModel_EventFilter_Callback cb) { kpagemodel_eventfilter_callback = cb; }
    inline void setKPageModel_TimerEvent_Callback(KPageModel_TimerEvent_Callback cb) { kpagemodel_timerevent_callback = cb; }
    inline void setKPageModel_ChildEvent_Callback(KPageModel_ChildEvent_Callback cb) { kpagemodel_childevent_callback = cb; }
    inline void setKPageModel_CustomEvent_Callback(KPageModel_CustomEvent_Callback cb) { kpagemodel_customevent_callback = cb; }
    inline void setKPageModel_ConnectNotify_Callback(KPageModel_ConnectNotify_Callback cb) { kpagemodel_connectnotify_callback = cb; }
    inline void setKPageModel_DisconnectNotify_Callback(KPageModel_DisconnectNotify_Callback cb) { kpagemodel_disconnectnotify_callback = cb; }
    inline void setKPageModel_CreateIndex_Callback(KPageModel_CreateIndex_Callback cb) { kpagemodel_createindex_callback = cb; }
    inline void setKPageModel_EncodeData_Callback(KPageModel_EncodeData_Callback cb) { kpagemodel_encodedata_callback = cb; }
    inline void setKPageModel_DecodeData_Callback(KPageModel_DecodeData_Callback cb) { kpagemodel_decodedata_callback = cb; }
    inline void setKPageModel_BeginInsertRows_Callback(KPageModel_BeginInsertRows_Callback cb) { kpagemodel_begininsertrows_callback = cb; }
    inline void setKPageModel_EndInsertRows_Callback(KPageModel_EndInsertRows_Callback cb) { kpagemodel_endinsertrows_callback = cb; }
    inline void setKPageModel_BeginRemoveRows_Callback(KPageModel_BeginRemoveRows_Callback cb) { kpagemodel_beginremoverows_callback = cb; }
    inline void setKPageModel_EndRemoveRows_Callback(KPageModel_EndRemoveRows_Callback cb) { kpagemodel_endremoverows_callback = cb; }
    inline void setKPageModel_BeginMoveRows_Callback(KPageModel_BeginMoveRows_Callback cb) { kpagemodel_beginmoverows_callback = cb; }
    inline void setKPageModel_EndMoveRows_Callback(KPageModel_EndMoveRows_Callback cb) { kpagemodel_endmoverows_callback = cb; }
    inline void setKPageModel_BeginInsertColumns_Callback(KPageModel_BeginInsertColumns_Callback cb) { kpagemodel_begininsertcolumns_callback = cb; }
    inline void setKPageModel_EndInsertColumns_Callback(KPageModel_EndInsertColumns_Callback cb) { kpagemodel_endinsertcolumns_callback = cb; }
    inline void setKPageModel_BeginRemoveColumns_Callback(KPageModel_BeginRemoveColumns_Callback cb) { kpagemodel_beginremovecolumns_callback = cb; }
    inline void setKPageModel_EndRemoveColumns_Callback(KPageModel_EndRemoveColumns_Callback cb) { kpagemodel_endremovecolumns_callback = cb; }
    inline void setKPageModel_BeginMoveColumns_Callback(KPageModel_BeginMoveColumns_Callback cb) { kpagemodel_beginmovecolumns_callback = cb; }
    inline void setKPageModel_EndMoveColumns_Callback(KPageModel_EndMoveColumns_Callback cb) { kpagemodel_endmovecolumns_callback = cb; }
    inline void setKPageModel_BeginResetModel_Callback(KPageModel_BeginResetModel_Callback cb) { kpagemodel_beginresetmodel_callback = cb; }
    inline void setKPageModel_EndResetModel_Callback(KPageModel_EndResetModel_Callback cb) { kpagemodel_endresetmodel_callback = cb; }
    inline void setKPageModel_ChangePersistentIndex_Callback(KPageModel_ChangePersistentIndex_Callback cb) { kpagemodel_changepersistentindex_callback = cb; }
    inline void setKPageModel_ChangePersistentIndexList_Callback(KPageModel_ChangePersistentIndexList_Callback cb) { kpagemodel_changepersistentindexlist_callback = cb; }
    inline void setKPageModel_PersistentIndexList_Callback(KPageModel_PersistentIndexList_Callback cb) { kpagemodel_persistentindexlist_callback = cb; }
    inline void setKPageModel_Sender_Callback(KPageModel_Sender_Callback cb) { kpagemodel_sender_callback = cb; }
    inline void setKPageModel_SenderSignalIndex_Callback(KPageModel_SenderSignalIndex_Callback cb) { kpagemodel_sendersignalindex_callback = cb; }
    inline void setKPageModel_Receivers_Callback(KPageModel_Receivers_Callback cb) { kpagemodel_receivers_callback = cb; }
    inline void setKPageModel_IsSignalConnected_Callback(KPageModel_IsSignalConnected_Callback cb) { kpagemodel_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKPageModel_MetaObject_IsBase(bool value) const { kpagemodel_metaobject_isbase = value; }
    inline void setKPageModel_Metacast_IsBase(bool value) const { kpagemodel_metacast_isbase = value; }
    inline void setKPageModel_Metacall_IsBase(bool value) const { kpagemodel_metacall_isbase = value; }
    inline void setKPageModel_Index_IsBase(bool value) const { kpagemodel_index_isbase = value; }
    inline void setKPageModel_Parent_IsBase(bool value) const { kpagemodel_parent_isbase = value; }
    inline void setKPageModel_Sibling_IsBase(bool value) const { kpagemodel_sibling_isbase = value; }
    inline void setKPageModel_RowCount_IsBase(bool value) const { kpagemodel_rowcount_isbase = value; }
    inline void setKPageModel_ColumnCount_IsBase(bool value) const { kpagemodel_columncount_isbase = value; }
    inline void setKPageModel_HasChildren_IsBase(bool value) const { kpagemodel_haschildren_isbase = value; }
    inline void setKPageModel_Data_IsBase(bool value) const { kpagemodel_data_isbase = value; }
    inline void setKPageModel_SetData_IsBase(bool value) const { kpagemodel_setdata_isbase = value; }
    inline void setKPageModel_HeaderData_IsBase(bool value) const { kpagemodel_headerdata_isbase = value; }
    inline void setKPageModel_SetHeaderData_IsBase(bool value) const { kpagemodel_setheaderdata_isbase = value; }
    inline void setKPageModel_ItemData_IsBase(bool value) const { kpagemodel_itemdata_isbase = value; }
    inline void setKPageModel_SetItemData_IsBase(bool value) const { kpagemodel_setitemdata_isbase = value; }
    inline void setKPageModel_ClearItemData_IsBase(bool value) const { kpagemodel_clearitemdata_isbase = value; }
    inline void setKPageModel_MimeTypes_IsBase(bool value) const { kpagemodel_mimetypes_isbase = value; }
    inline void setKPageModel_MimeData_IsBase(bool value) const { kpagemodel_mimedata_isbase = value; }
    inline void setKPageModel_CanDropMimeData_IsBase(bool value) const { kpagemodel_candropmimedata_isbase = value; }
    inline void setKPageModel_DropMimeData_IsBase(bool value) const { kpagemodel_dropmimedata_isbase = value; }
    inline void setKPageModel_SupportedDropActions_IsBase(bool value) const { kpagemodel_supporteddropactions_isbase = value; }
    inline void setKPageModel_SupportedDragActions_IsBase(bool value) const { kpagemodel_supporteddragactions_isbase = value; }
    inline void setKPageModel_InsertRows_IsBase(bool value) const { kpagemodel_insertrows_isbase = value; }
    inline void setKPageModel_InsertColumns_IsBase(bool value) const { kpagemodel_insertcolumns_isbase = value; }
    inline void setKPageModel_RemoveRows_IsBase(bool value) const { kpagemodel_removerows_isbase = value; }
    inline void setKPageModel_RemoveColumns_IsBase(bool value) const { kpagemodel_removecolumns_isbase = value; }
    inline void setKPageModel_MoveRows_IsBase(bool value) const { kpagemodel_moverows_isbase = value; }
    inline void setKPageModel_MoveColumns_IsBase(bool value) const { kpagemodel_movecolumns_isbase = value; }
    inline void setKPageModel_FetchMore_IsBase(bool value) const { kpagemodel_fetchmore_isbase = value; }
    inline void setKPageModel_CanFetchMore_IsBase(bool value) const { kpagemodel_canfetchmore_isbase = value; }
    inline void setKPageModel_Flags_IsBase(bool value) const { kpagemodel_flags_isbase = value; }
    inline void setKPageModel_Sort_IsBase(bool value) const { kpagemodel_sort_isbase = value; }
    inline void setKPageModel_Buddy_IsBase(bool value) const { kpagemodel_buddy_isbase = value; }
    inline void setKPageModel_Match_IsBase(bool value) const { kpagemodel_match_isbase = value; }
    inline void setKPageModel_Span_IsBase(bool value) const { kpagemodel_span_isbase = value; }
    inline void setKPageModel_RoleNames_IsBase(bool value) const { kpagemodel_rolenames_isbase = value; }
    inline void setKPageModel_MultiData_IsBase(bool value) const { kpagemodel_multidata_isbase = value; }
    inline void setKPageModel_Submit_IsBase(bool value) const { kpagemodel_submit_isbase = value; }
    inline void setKPageModel_Revert_IsBase(bool value) const { kpagemodel_revert_isbase = value; }
    inline void setKPageModel_ResetInternalData_IsBase(bool value) const { kpagemodel_resetinternaldata_isbase = value; }
    inline void setKPageModel_Event_IsBase(bool value) const { kpagemodel_event_isbase = value; }
    inline void setKPageModel_EventFilter_IsBase(bool value) const { kpagemodel_eventfilter_isbase = value; }
    inline void setKPageModel_TimerEvent_IsBase(bool value) const { kpagemodel_timerevent_isbase = value; }
    inline void setKPageModel_ChildEvent_IsBase(bool value) const { kpagemodel_childevent_isbase = value; }
    inline void setKPageModel_CustomEvent_IsBase(bool value) const { kpagemodel_customevent_isbase = value; }
    inline void setKPageModel_ConnectNotify_IsBase(bool value) const { kpagemodel_connectnotify_isbase = value; }
    inline void setKPageModel_DisconnectNotify_IsBase(bool value) const { kpagemodel_disconnectnotify_isbase = value; }
    inline void setKPageModel_CreateIndex_IsBase(bool value) const { kpagemodel_createindex_isbase = value; }
    inline void setKPageModel_EncodeData_IsBase(bool value) const { kpagemodel_encodedata_isbase = value; }
    inline void setKPageModel_DecodeData_IsBase(bool value) const { kpagemodel_decodedata_isbase = value; }
    inline void setKPageModel_BeginInsertRows_IsBase(bool value) const { kpagemodel_begininsertrows_isbase = value; }
    inline void setKPageModel_EndInsertRows_IsBase(bool value) const { kpagemodel_endinsertrows_isbase = value; }
    inline void setKPageModel_BeginRemoveRows_IsBase(bool value) const { kpagemodel_beginremoverows_isbase = value; }
    inline void setKPageModel_EndRemoveRows_IsBase(bool value) const { kpagemodel_endremoverows_isbase = value; }
    inline void setKPageModel_BeginMoveRows_IsBase(bool value) const { kpagemodel_beginmoverows_isbase = value; }
    inline void setKPageModel_EndMoveRows_IsBase(bool value) const { kpagemodel_endmoverows_isbase = value; }
    inline void setKPageModel_BeginInsertColumns_IsBase(bool value) const { kpagemodel_begininsertcolumns_isbase = value; }
    inline void setKPageModel_EndInsertColumns_IsBase(bool value) const { kpagemodel_endinsertcolumns_isbase = value; }
    inline void setKPageModel_BeginRemoveColumns_IsBase(bool value) const { kpagemodel_beginremovecolumns_isbase = value; }
    inline void setKPageModel_EndRemoveColumns_IsBase(bool value) const { kpagemodel_endremovecolumns_isbase = value; }
    inline void setKPageModel_BeginMoveColumns_IsBase(bool value) const { kpagemodel_beginmovecolumns_isbase = value; }
    inline void setKPageModel_EndMoveColumns_IsBase(bool value) const { kpagemodel_endmovecolumns_isbase = value; }
    inline void setKPageModel_BeginResetModel_IsBase(bool value) const { kpagemodel_beginresetmodel_isbase = value; }
    inline void setKPageModel_EndResetModel_IsBase(bool value) const { kpagemodel_endresetmodel_isbase = value; }
    inline void setKPageModel_ChangePersistentIndex_IsBase(bool value) const { kpagemodel_changepersistentindex_isbase = value; }
    inline void setKPageModel_ChangePersistentIndexList_IsBase(bool value) const { kpagemodel_changepersistentindexlist_isbase = value; }
    inline void setKPageModel_PersistentIndexList_IsBase(bool value) const { kpagemodel_persistentindexlist_isbase = value; }
    inline void setKPageModel_Sender_IsBase(bool value) const { kpagemodel_sender_isbase = value; }
    inline void setKPageModel_SenderSignalIndex_IsBase(bool value) const { kpagemodel_sendersignalindex_isbase = value; }
    inline void setKPageModel_Receivers_IsBase(bool value) const { kpagemodel_receivers_isbase = value; }
    inline void setKPageModel_IsSignalConnected_IsBase(bool value) const { kpagemodel_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kpagemodel_metaobject_isbase) {
            kpagemodel_metaobject_isbase = false;
            return KPageModel::metaObject();
        }
        auto metaobject_cb = kpagemodel_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KPageModel::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kpagemodel_metacast_isbase) {
            kpagemodel_metacast_isbase = false;
            return KPageModel::qt_metacast(param1);
        }
        auto metacast_cb = kpagemodel_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KPageModel::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kpagemodel_metacall_isbase) {
            kpagemodel_metacall_isbase = false;
            return KPageModel::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = kpagemodel_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KPageModel::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
        auto index_cb = kpagemodel_index_callback;
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
        auto parent_cb = kpagemodel_parent_callback;
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
        if (kpagemodel_sibling_isbase) {
            kpagemodel_sibling_isbase = false;
            return KPageModel::sibling(row, column, idx);
        }
        auto sibling_cb = kpagemodel_sibling_callback;
        if (sibling_cb) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& idx_ret = idx;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&idx_ret);

            QModelIndex* callback_ret = sibling_cb(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        }
        return KPageModel::sibling(row, column, idx);
    }

    // Virtual method for C ABI access and custom callback
    virtual int rowCount(const QModelIndex& parent) const override {
        auto rowcount_cb = kpagemodel_rowcount_callback;
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
        auto columncount_cb = kpagemodel_columncount_callback;
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
        if (kpagemodel_haschildren_isbase) {
            kpagemodel_haschildren_isbase = false;
            return KPageModel::hasChildren(parent);
        }
        auto haschildren_cb = kpagemodel_haschildren_callback;
        if (haschildren_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = haschildren_cb(this, cbval1);
            return callback_ret;
        }
        return KPageModel::hasChildren(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(const QModelIndex& index, int role) const override {
        auto data_cb = kpagemodel_data_callback;
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
        if (kpagemodel_setdata_isbase) {
            kpagemodel_setdata_isbase = false;
            return KPageModel::setData(index, value, role);
        }
        auto setdata_cb = kpagemodel_setdata_callback;
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
        return KPageModel::setData(index, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
        if (kpagemodel_headerdata_isbase) {
            kpagemodel_headerdata_isbase = false;
            return KPageModel::headerData(section, orientation, role);
        }
        auto headerdata_cb = kpagemodel_headerdata_callback;
        if (headerdata_cb) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            int cbval3 = role;

            QVariant* callback_ret = headerdata_cb(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        }
        return KPageModel::headerData(section, orientation, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
        if (kpagemodel_setheaderdata_isbase) {
            kpagemodel_setheaderdata_isbase = false;
            return KPageModel::setHeaderData(section, orientation, value, role);
        }
        auto setheaderdata_cb = kpagemodel_setheaderdata_callback;
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
        return KPageModel::setHeaderData(section, orientation, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
        if (kpagemodel_itemdata_isbase) {
            kpagemodel_itemdata_isbase = false;
            return KPageModel::itemData(index);
        }
        auto itemdata_cb = kpagemodel_itemdata_callback;
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
        return KPageModel::itemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
        if (kpagemodel_setitemdata_isbase) {
            kpagemodel_setitemdata_isbase = false;
            return KPageModel::setItemData(index, roles);
        }
        auto setitemdata_cb = kpagemodel_setitemdata_callback;
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
        return KPageModel::setItemData(index, roles);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool clearItemData(const QModelIndex& index) override {
        if (kpagemodel_clearitemdata_isbase) {
            kpagemodel_clearitemdata_isbase = false;
            return KPageModel::clearItemData(index);
        }
        auto clearitemdata_cb = kpagemodel_clearitemdata_callback;
        if (clearitemdata_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            bool callback_ret = clearitemdata_cb(this, cbval1);
            return callback_ret;
        }
        return KPageModel::clearItemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> mimeTypes() const override {
        if (kpagemodel_mimetypes_isbase) {
            kpagemodel_mimetypes_isbase = false;
            return KPageModel::mimeTypes();
        }
        auto mimetypes_cb = kpagemodel_mimetypes_callback;
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
        return KPageModel::mimeTypes();
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* mimeData(const QList<QModelIndex>& indexes) const override {
        if (kpagemodel_mimedata_isbase) {
            kpagemodel_mimedata_isbase = false;
            return KPageModel::mimeData(indexes);
        }
        auto mimedata_cb = kpagemodel_mimedata_callback;
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
        return KPageModel::mimeData(indexes);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
        if (kpagemodel_candropmimedata_isbase) {
            kpagemodel_candropmimedata_isbase = false;
            return KPageModel::canDropMimeData(data, action, row, column, parent);
        }
        auto candropmimedata_cb = kpagemodel_candropmimedata_callback;
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
        return KPageModel::canDropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
        if (kpagemodel_dropmimedata_isbase) {
            kpagemodel_dropmimedata_isbase = false;
            return KPageModel::dropMimeData(data, action, row, column, parent);
        }
        auto dropmimedata_cb = kpagemodel_dropmimedata_callback;
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
        return KPageModel::dropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (kpagemodel_supporteddropactions_isbase) {
            kpagemodel_supporteddropactions_isbase = false;
            return KPageModel::supportedDropActions();
        }
        auto supporteddropactions_cb = kpagemodel_supporteddropactions_callback;
        if (supporteddropactions_cb) {
            int callback_ret = supporteddropactions_cb();
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return KPageModel::supportedDropActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDragActions() const override {
        if (kpagemodel_supporteddragactions_isbase) {
            kpagemodel_supporteddragactions_isbase = false;
            return KPageModel::supportedDragActions();
        }
        auto supporteddragactions_cb = kpagemodel_supporteddragactions_callback;
        if (supporteddragactions_cb) {
            int callback_ret = supporteddragactions_cb();
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return KPageModel::supportedDragActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
        if (kpagemodel_insertrows_isbase) {
            kpagemodel_insertrows_isbase = false;
            return KPageModel::insertRows(row, count, parent);
        }
        auto insertrows_cb = kpagemodel_insertrows_callback;
        if (insertrows_cb) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = insertrows_cb(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KPageModel::insertRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
        if (kpagemodel_insertcolumns_isbase) {
            kpagemodel_insertcolumns_isbase = false;
            return KPageModel::insertColumns(column, count, parent);
        }
        auto insertcolumns_cb = kpagemodel_insertcolumns_callback;
        if (insertcolumns_cb) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = insertcolumns_cb(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KPageModel::insertColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
        if (kpagemodel_removerows_isbase) {
            kpagemodel_removerows_isbase = false;
            return KPageModel::removeRows(row, count, parent);
        }
        auto removerows_cb = kpagemodel_removerows_callback;
        if (removerows_cb) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = removerows_cb(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KPageModel::removeRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
        if (kpagemodel_removecolumns_isbase) {
            kpagemodel_removecolumns_isbase = false;
            return KPageModel::removeColumns(column, count, parent);
        }
        auto removecolumns_cb = kpagemodel_removecolumns_callback;
        if (removecolumns_cb) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = removecolumns_cb(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KPageModel::removeColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (kpagemodel_moverows_isbase) {
            kpagemodel_moverows_isbase = false;
            return KPageModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
        }
        auto moverows_cb = kpagemodel_moverows_callback;
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
        return KPageModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (kpagemodel_movecolumns_isbase) {
            kpagemodel_movecolumns_isbase = false;
            return KPageModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
        }
        auto movecolumns_cb = kpagemodel_movecolumns_callback;
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
        return KPageModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual void fetchMore(const QModelIndex& parent) override {
        if (kpagemodel_fetchmore_isbase) {
            kpagemodel_fetchmore_isbase = false;
            KPageModel::fetchMore(parent);
            return;
        }
        auto fetchmore_cb = kpagemodel_fetchmore_callback;
        if (fetchmore_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            fetchmore_cb(this, cbval1);
            return;
        }
        KPageModel::fetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canFetchMore(const QModelIndex& parent) const override {
        if (kpagemodel_canfetchmore_isbase) {
            kpagemodel_canfetchmore_isbase = false;
            return KPageModel::canFetchMore(parent);
        }
        auto canfetchmore_cb = kpagemodel_canfetchmore_callback;
        if (canfetchmore_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = canfetchmore_cb(this, cbval1);
            return callback_ret;
        }
        return KPageModel::canFetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
        if (kpagemodel_flags_isbase) {
            kpagemodel_flags_isbase = false;
            return KPageModel::flags(index);
        }
        auto flags_cb = kpagemodel_flags_callback;
        if (flags_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            int callback_ret = flags_cb(this, cbval1);
            return static_cast<Qt::ItemFlags>(callback_ret);
        }
        return KPageModel::flags(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void sort(int column, Qt::SortOrder order) override {
        if (kpagemodel_sort_isbase) {
            kpagemodel_sort_isbase = false;
            KPageModel::sort(column, order);
            return;
        }
        auto sort_cb = kpagemodel_sort_callback;
        if (sort_cb) {
            int cbval1 = column;
            int cbval2 = static_cast<int>(order);

            sort_cb(this, cbval1, cbval2);
            return;
        }
        KPageModel::sort(column, order);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex buddy(const QModelIndex& index) const override {
        if (kpagemodel_buddy_isbase) {
            kpagemodel_buddy_isbase = false;
            return KPageModel::buddy(index);
        }
        auto buddy_cb = kpagemodel_buddy_callback;
        if (buddy_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QModelIndex* callback_ret = buddy_cb(this, cbval1);
            return *callback_ret;
        }
        return KPageModel::buddy(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
        if (kpagemodel_match_isbase) {
            kpagemodel_match_isbase = false;
            return KPageModel::match(start, role, value, hits, flags);
        }
        auto match_cb = kpagemodel_match_callback;
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
        return KPageModel::match(start, role, value, hits, flags);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize span(const QModelIndex& index) const override {
        if (kpagemodel_span_isbase) {
            kpagemodel_span_isbase = false;
            return KPageModel::span(index);
        }
        auto span_cb = kpagemodel_span_callback;
        if (span_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QSize* callback_ret = span_cb(this, cbval1);
            return *callback_ret;
        }
        return KPageModel::span(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QHash<int, QByteArray> roleNames() const override {
        if (kpagemodel_rolenames_isbase) {
            kpagemodel_rolenames_isbase = false;
            return KPageModel::roleNames();
        }
        auto rolenames_cb = kpagemodel_rolenames_callback;
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
        return KPageModel::roleNames();
    }

    // Virtual method for C ABI access and custom callback
    virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
        if (kpagemodel_multidata_isbase) {
            kpagemodel_multidata_isbase = false;
            KPageModel::multiData(index, roleDataSpan);
            return;
        }
        auto multidata_cb = kpagemodel_multidata_callback;
        if (multidata_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelRoleDataSpan* cbval2 = new QModelRoleDataSpan(roleDataSpan);

            multidata_cb(this, cbval1, cbval2);
            return;
        }
        KPageModel::multiData(index, roleDataSpan);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool submit() override {
        if (kpagemodel_submit_isbase) {
            kpagemodel_submit_isbase = false;
            return KPageModel::submit();
        }
        auto submit_cb = kpagemodel_submit_callback;
        if (submit_cb) {
            bool callback_ret = submit_cb();
            return callback_ret;
        }
        return KPageModel::submit();
    }

    // Virtual method for C ABI access and custom callback
    virtual void revert() override {
        if (kpagemodel_revert_isbase) {
            kpagemodel_revert_isbase = false;
            KPageModel::revert();
            return;
        }
        auto revert_cb = kpagemodel_revert_callback;
        if (revert_cb) {
            revert_cb();
            return;
        }
        KPageModel::revert();
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetInternalData() override {
        if (kpagemodel_resetinternaldata_isbase) {
            kpagemodel_resetinternaldata_isbase = false;
            KPageModel::resetInternalData();
            return;
        }
        auto resetinternaldata_cb = kpagemodel_resetinternaldata_callback;
        if (resetinternaldata_cb) {
            resetinternaldata_cb();
            return;
        }
        KPageModel::resetInternalData();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kpagemodel_event_isbase) {
            kpagemodel_event_isbase = false;
            return KPageModel::event(event);
        }
        auto event_cb = kpagemodel_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KPageModel::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kpagemodel_eventfilter_isbase) {
            kpagemodel_eventfilter_isbase = false;
            return KPageModel::eventFilter(watched, event);
        }
        auto eventfilter_cb = kpagemodel_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KPageModel::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kpagemodel_timerevent_isbase) {
            kpagemodel_timerevent_isbase = false;
            KPageModel::timerEvent(event);
            return;
        }
        auto timerevent_cb = kpagemodel_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KPageModel::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kpagemodel_childevent_isbase) {
            kpagemodel_childevent_isbase = false;
            KPageModel::childEvent(event);
            return;
        }
        auto childevent_cb = kpagemodel_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KPageModel::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kpagemodel_customevent_isbase) {
            kpagemodel_customevent_isbase = false;
            KPageModel::customEvent(event);
            return;
        }
        auto customevent_cb = kpagemodel_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KPageModel::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kpagemodel_connectnotify_isbase) {
            kpagemodel_connectnotify_isbase = false;
            KPageModel::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = kpagemodel_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KPageModel::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kpagemodel_disconnectnotify_isbase) {
            kpagemodel_disconnectnotify_isbase = false;
            KPageModel::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = kpagemodel_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KPageModel::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QModelIndex createIndex(int row, int column) const {
        if (kpagemodel_createindex_isbase) {
            kpagemodel_createindex_isbase = false;
            return KPageModel::createIndex(row, column);
        }
        auto createindex_cb = kpagemodel_createindex_callback;
        if (createindex_cb) {
            int cbval1 = row;
            int cbval2 = column;

            QModelIndex* callback_ret = createindex_cb(this, cbval1, cbval2);
            return *callback_ret;
        }
        return KPageModel::createIndex(row, column);
    }

    // Virtual method for C ABI access and custom callback
    void encodeData(const QList<QModelIndex>& indexes, QDataStream& stream) const {
        if (kpagemodel_encodedata_isbase) {
            kpagemodel_encodedata_isbase = false;
            KPageModel::encodeData(indexes, stream);
            return;
        }
        auto encodedata_cb = kpagemodel_encodedata_callback;
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
        KPageModel::encodeData(indexes, stream);
    }

    // Virtual method for C ABI access and custom callback
    bool decodeData(int row, int column, const QModelIndex& parent, QDataStream& stream) {
        if (kpagemodel_decodedata_isbase) {
            kpagemodel_decodedata_isbase = false;
            return KPageModel::decodeData(row, column, parent, stream);
        }
        auto decodedata_cb = kpagemodel_decodedata_callback;
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
        return KPageModel::decodeData(row, column, parent, stream);
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertRows(const QModelIndex& parent, int first, int last) {
        if (kpagemodel_begininsertrows_isbase) {
            kpagemodel_begininsertrows_isbase = false;
            KPageModel::beginInsertRows(parent, first, last);
            return;
        }
        auto begininsertrows_cb = kpagemodel_begininsertrows_callback;
        if (begininsertrows_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            begininsertrows_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        KPageModel::beginInsertRows(parent, first, last);
    }

    // Virtual method for C ABI access and custom callback
    void endInsertRows() {
        if (kpagemodel_endinsertrows_isbase) {
            kpagemodel_endinsertrows_isbase = false;
            KPageModel::endInsertRows();
            return;
        }
        auto endinsertrows_cb = kpagemodel_endinsertrows_callback;
        if (endinsertrows_cb) {
            endinsertrows_cb();
            return;
        }
        KPageModel::endInsertRows();
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveRows(const QModelIndex& parent, int first, int last) {
        if (kpagemodel_beginremoverows_isbase) {
            kpagemodel_beginremoverows_isbase = false;
            KPageModel::beginRemoveRows(parent, first, last);
            return;
        }
        auto beginremoverows_cb = kpagemodel_beginremoverows_callback;
        if (beginremoverows_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            beginremoverows_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        KPageModel::beginRemoveRows(parent, first, last);
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveRows() {
        if (kpagemodel_endremoverows_isbase) {
            kpagemodel_endremoverows_isbase = false;
            KPageModel::endRemoveRows();
            return;
        }
        auto endremoverows_cb = kpagemodel_endremoverows_callback;
        if (endremoverows_cb) {
            endremoverows_cb();
            return;
        }
        KPageModel::endRemoveRows();
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveRows(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationRow) {
        if (kpagemodel_beginmoverows_isbase) {
            kpagemodel_beginmoverows_isbase = false;
            return KPageModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
        }
        auto beginmoverows_cb = kpagemodel_beginmoverows_callback;
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
        return KPageModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
    }

    // Virtual method for C ABI access and custom callback
    void endMoveRows() {
        if (kpagemodel_endmoverows_isbase) {
            kpagemodel_endmoverows_isbase = false;
            KPageModel::endMoveRows();
            return;
        }
        auto endmoverows_cb = kpagemodel_endmoverows_callback;
        if (endmoverows_cb) {
            endmoverows_cb();
            return;
        }
        KPageModel::endMoveRows();
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertColumns(const QModelIndex& parent, int first, int last) {
        if (kpagemodel_begininsertcolumns_isbase) {
            kpagemodel_begininsertcolumns_isbase = false;
            KPageModel::beginInsertColumns(parent, first, last);
            return;
        }
        auto begininsertcolumns_cb = kpagemodel_begininsertcolumns_callback;
        if (begininsertcolumns_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            begininsertcolumns_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        KPageModel::beginInsertColumns(parent, first, last);
    }

    // Virtual method for C ABI access and custom callback
    void endInsertColumns() {
        if (kpagemodel_endinsertcolumns_isbase) {
            kpagemodel_endinsertcolumns_isbase = false;
            KPageModel::endInsertColumns();
            return;
        }
        auto endinsertcolumns_cb = kpagemodel_endinsertcolumns_callback;
        if (endinsertcolumns_cb) {
            endinsertcolumns_cb();
            return;
        }
        KPageModel::endInsertColumns();
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveColumns(const QModelIndex& parent, int first, int last) {
        if (kpagemodel_beginremovecolumns_isbase) {
            kpagemodel_beginremovecolumns_isbase = false;
            KPageModel::beginRemoveColumns(parent, first, last);
            return;
        }
        auto beginremovecolumns_cb = kpagemodel_beginremovecolumns_callback;
        if (beginremovecolumns_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            beginremovecolumns_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        KPageModel::beginRemoveColumns(parent, first, last);
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveColumns() {
        if (kpagemodel_endremovecolumns_isbase) {
            kpagemodel_endremovecolumns_isbase = false;
            KPageModel::endRemoveColumns();
            return;
        }
        auto endremovecolumns_cb = kpagemodel_endremovecolumns_callback;
        if (endremovecolumns_cb) {
            endremovecolumns_cb();
            return;
        }
        KPageModel::endRemoveColumns();
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveColumns(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationColumn) {
        if (kpagemodel_beginmovecolumns_isbase) {
            kpagemodel_beginmovecolumns_isbase = false;
            return KPageModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
        }
        auto beginmovecolumns_cb = kpagemodel_beginmovecolumns_callback;
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
        return KPageModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
    }

    // Virtual method for C ABI access and custom callback
    void endMoveColumns() {
        if (kpagemodel_endmovecolumns_isbase) {
            kpagemodel_endmovecolumns_isbase = false;
            KPageModel::endMoveColumns();
            return;
        }
        auto endmovecolumns_cb = kpagemodel_endmovecolumns_callback;
        if (endmovecolumns_cb) {
            endmovecolumns_cb();
            return;
        }
        KPageModel::endMoveColumns();
    }

    // Virtual method for C ABI access and custom callback
    void beginResetModel() {
        if (kpagemodel_beginresetmodel_isbase) {
            kpagemodel_beginresetmodel_isbase = false;
            KPageModel::beginResetModel();
            return;
        }
        auto beginresetmodel_cb = kpagemodel_beginresetmodel_callback;
        if (beginresetmodel_cb) {
            beginresetmodel_cb();
            return;
        }
        KPageModel::beginResetModel();
    }

    // Virtual method for C ABI access and custom callback
    void endResetModel() {
        if (kpagemodel_endresetmodel_isbase) {
            kpagemodel_endresetmodel_isbase = false;
            KPageModel::endResetModel();
            return;
        }
        auto endresetmodel_cb = kpagemodel_endresetmodel_callback;
        if (endresetmodel_cb) {
            endresetmodel_cb();
            return;
        }
        KPageModel::endResetModel();
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndex(const QModelIndex& from, const QModelIndex& to) {
        if (kpagemodel_changepersistentindex_isbase) {
            kpagemodel_changepersistentindex_isbase = false;
            KPageModel::changePersistentIndex(from, to);
            return;
        }
        auto changepersistentindex_cb = kpagemodel_changepersistentindex_callback;
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
        KPageModel::changePersistentIndex(from, to);
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndexList(const QList<QModelIndex>& from, const QList<QModelIndex>& to) {
        if (kpagemodel_changepersistentindexlist_isbase) {
            kpagemodel_changepersistentindexlist_isbase = false;
            KPageModel::changePersistentIndexList(from, to);
            return;
        }
        auto changepersistentindexlist_cb = kpagemodel_changepersistentindexlist_callback;
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
        KPageModel::changePersistentIndexList(from, to);
    }

    // Virtual method for C ABI access and custom callback
    QList<QModelIndex> persistentIndexList() const {
        if (kpagemodel_persistentindexlist_isbase) {
            kpagemodel_persistentindexlist_isbase = false;
            return KPageModel::persistentIndexList();
        }
        auto persistentindexlist_cb = kpagemodel_persistentindexlist_callback;
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
        return KPageModel::persistentIndexList();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kpagemodel_sender_isbase) {
            kpagemodel_sender_isbase = false;
            return KPageModel::sender();
        }
        auto sender_cb = kpagemodel_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KPageModel::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kpagemodel_sendersignalindex_isbase) {
            kpagemodel_sendersignalindex_isbase = false;
            return KPageModel::senderSignalIndex();
        }
        auto sendersignalindex_cb = kpagemodel_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KPageModel::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kpagemodel_receivers_isbase) {
            kpagemodel_receivers_isbase = false;
            return KPageModel::receivers(signal);
        }
        auto receivers_cb = kpagemodel_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KPageModel::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kpagemodel_issignalconnected_isbase) {
            kpagemodel_issignalconnected_isbase = false;
            return KPageModel::isSignalConnected(signal);
        }
        auto issignalconnected_cb = kpagemodel_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KPageModel::isSignalConnected(signal);
    }

    // Friend functions
    friend void KPageModel_ResetInternalData(KPageModel* self);
    friend void KPageModel_SuperResetInternalData(KPageModel* self);
    friend void KPageModel_TimerEvent(KPageModel* self, QTimerEvent* event);
    friend void KPageModel_SuperTimerEvent(KPageModel* self, QTimerEvent* event);
    friend void KPageModel_ChildEvent(KPageModel* self, QChildEvent* event);
    friend void KPageModel_SuperChildEvent(KPageModel* self, QChildEvent* event);
    friend void KPageModel_CustomEvent(KPageModel* self, QEvent* event);
    friend void KPageModel_SuperCustomEvent(KPageModel* self, QEvent* event);
    friend void KPageModel_ConnectNotify(KPageModel* self, const QMetaMethod* signal);
    friend void KPageModel_SuperConnectNotify(KPageModel* self, const QMetaMethod* signal);
    friend void KPageModel_DisconnectNotify(KPageModel* self, const QMetaMethod* signal);
    friend void KPageModel_SuperDisconnectNotify(KPageModel* self, const QMetaMethod* signal);
    friend QModelIndex* KPageModel_CreateIndex(const KPageModel* self, int row, int column);
    friend QModelIndex* KPageModel_SuperCreateIndex(const KPageModel* self, int row, int column);
    friend void KPageModel_EncodeData(const KPageModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
    friend void KPageModel_SuperEncodeData(const KPageModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
    friend bool KPageModel_DecodeData(KPageModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
    friend bool KPageModel_SuperDecodeData(KPageModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
    friend void KPageModel_BeginInsertRows(KPageModel* self, const QModelIndex* parent, int first, int last);
    friend void KPageModel_SuperBeginInsertRows(KPageModel* self, const QModelIndex* parent, int first, int last);
    friend void KPageModel_EndInsertRows(KPageModel* self);
    friend void KPageModel_SuperEndInsertRows(KPageModel* self);
    friend void KPageModel_BeginRemoveRows(KPageModel* self, const QModelIndex* parent, int first, int last);
    friend void KPageModel_SuperBeginRemoveRows(KPageModel* self, const QModelIndex* parent, int first, int last);
    friend void KPageModel_EndRemoveRows(KPageModel* self);
    friend void KPageModel_SuperEndRemoveRows(KPageModel* self);
    friend bool KPageModel_BeginMoveRows(KPageModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
    friend bool KPageModel_SuperBeginMoveRows(KPageModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
    friend void KPageModel_EndMoveRows(KPageModel* self);
    friend void KPageModel_SuperEndMoveRows(KPageModel* self);
    friend void KPageModel_BeginInsertColumns(KPageModel* self, const QModelIndex* parent, int first, int last);
    friend void KPageModel_SuperBeginInsertColumns(KPageModel* self, const QModelIndex* parent, int first, int last);
    friend void KPageModel_EndInsertColumns(KPageModel* self);
    friend void KPageModel_SuperEndInsertColumns(KPageModel* self);
    friend void KPageModel_BeginRemoveColumns(KPageModel* self, const QModelIndex* parent, int first, int last);
    friend void KPageModel_SuperBeginRemoveColumns(KPageModel* self, const QModelIndex* parent, int first, int last);
    friend void KPageModel_EndRemoveColumns(KPageModel* self);
    friend void KPageModel_SuperEndRemoveColumns(KPageModel* self);
    friend bool KPageModel_BeginMoveColumns(KPageModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
    friend bool KPageModel_SuperBeginMoveColumns(KPageModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
    friend void KPageModel_EndMoveColumns(KPageModel* self);
    friend void KPageModel_SuperEndMoveColumns(KPageModel* self);
    friend void KPageModel_BeginResetModel(KPageModel* self);
    friend void KPageModel_SuperBeginResetModel(KPageModel* self);
    friend void KPageModel_EndResetModel(KPageModel* self);
    friend void KPageModel_SuperEndResetModel(KPageModel* self);
    friend void KPageModel_ChangePersistentIndex(KPageModel* self, const QModelIndex* from, const QModelIndex* to);
    friend void KPageModel_SuperChangePersistentIndex(KPageModel* self, const QModelIndex* from, const QModelIndex* to);
    friend void KPageModel_ChangePersistentIndexList(KPageModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
    friend void KPageModel_SuperChangePersistentIndexList(KPageModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
    friend libqt_list /* of QModelIndex* */ KPageModel_PersistentIndexList(const KPageModel* self);
    friend libqt_list /* of QModelIndex* */ KPageModel_SuperPersistentIndexList(const KPageModel* self);
    friend QObject* KPageModel_Sender(const KPageModel* self);
    friend QObject* KPageModel_SuperSender(const KPageModel* self);
    friend int KPageModel_SenderSignalIndex(const KPageModel* self);
    friend int KPageModel_SuperSenderSignalIndex(const KPageModel* self);
    friend int KPageModel_Receivers(const KPageModel* self, const char* signal);
    friend int KPageModel_SuperReceivers(const KPageModel* self, const char* signal);
    friend bool KPageModel_IsSignalConnected(const KPageModel* self, const QMetaMethod* signal);
    friend bool KPageModel_SuperIsSignalConnected(const KPageModel* self, const QMetaMethod* signal);
};

#endif
