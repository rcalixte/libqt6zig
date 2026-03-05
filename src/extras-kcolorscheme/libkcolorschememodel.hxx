#pragma once
#ifndef SRC_EXTRAS_KCOLORSCHEMEC_LIBVIRTUALKCOLORSCHEMEMODEL_H
#define SRC_EXTRAS_KCOLORSCHEMEC_LIBVIRTUALKCOLORSCHEMEMODEL_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KColorSchemeModel so that we can call protected methods
class VirtualKColorSchemeModel final : public KColorSchemeModel {

  public:
    // Virtual class boolean flag
    bool isVirtualKColorSchemeModel = true;

    // Virtual class public types (including callbacks)
    using KColorSchemeModel_MetaObject_Callback = QMetaObject* (*)();
    using KColorSchemeModel_Metacast_Callback = void* (*)(KColorSchemeModel*, const char*);
    using KColorSchemeModel_Metacall_Callback = int (*)(KColorSchemeModel*, int, int, void**);
    using KColorSchemeModel_Data_Callback = QVariant* (*)(const KColorSchemeModel*, QModelIndex*, int);
    using KColorSchemeModel_RowCount_Callback = int (*)(const KColorSchemeModel*, QModelIndex*);
    using KColorSchemeModel_Index_Callback = QModelIndex* (*)(const KColorSchemeModel*, int, int, QModelIndex*);
    using KColorSchemeModel_Sibling_Callback = QModelIndex* (*)(const KColorSchemeModel*, int, int, QModelIndex*);
    using KColorSchemeModel_DropMimeData_Callback = bool (*)(KColorSchemeModel*, QMimeData*, int, int, int, QModelIndex*);
    using KColorSchemeModel_Flags_Callback = int (*)(const KColorSchemeModel*, QModelIndex*);
    using KColorSchemeModel_SetData_Callback = bool (*)(KColorSchemeModel*, QModelIndex*, QVariant*, int);
    using KColorSchemeModel_HeaderData_Callback = QVariant* (*)(const KColorSchemeModel*, int, int, int);
    using KColorSchemeModel_SetHeaderData_Callback = bool (*)(KColorSchemeModel*, int, int, QVariant*, int);
    using KColorSchemeModel_ItemData_Callback = libqt_map /* of int to QVariant* */ (*)(const KColorSchemeModel*, QModelIndex*);
    using KColorSchemeModel_SetItemData_Callback = bool (*)(KColorSchemeModel*, QModelIndex*, libqt_map /* of int to QVariant* */);
    using KColorSchemeModel_ClearItemData_Callback = bool (*)(KColorSchemeModel*, QModelIndex*);
    using KColorSchemeModel_MimeTypes_Callback = const char** (*)();
    using KColorSchemeModel_MimeData_Callback = QMimeData* (*)(const KColorSchemeModel*, libqt_list /* of QModelIndex* */);
    using KColorSchemeModel_CanDropMimeData_Callback = bool (*)(const KColorSchemeModel*, QMimeData*, int, int, int, QModelIndex*);
    using KColorSchemeModel_SupportedDropActions_Callback = int (*)();
    using KColorSchemeModel_SupportedDragActions_Callback = int (*)();
    using KColorSchemeModel_InsertRows_Callback = bool (*)(KColorSchemeModel*, int, int, QModelIndex*);
    using KColorSchemeModel_InsertColumns_Callback = bool (*)(KColorSchemeModel*, int, int, QModelIndex*);
    using KColorSchemeModel_RemoveRows_Callback = bool (*)(KColorSchemeModel*, int, int, QModelIndex*);
    using KColorSchemeModel_RemoveColumns_Callback = bool (*)(KColorSchemeModel*, int, int, QModelIndex*);
    using KColorSchemeModel_MoveRows_Callback = bool (*)(KColorSchemeModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KColorSchemeModel_MoveColumns_Callback = bool (*)(KColorSchemeModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KColorSchemeModel_FetchMore_Callback = void (*)(KColorSchemeModel*, QModelIndex*);
    using KColorSchemeModel_CanFetchMore_Callback = bool (*)(const KColorSchemeModel*, QModelIndex*);
    using KColorSchemeModel_Sort_Callback = void (*)(KColorSchemeModel*, int, int);
    using KColorSchemeModel_Buddy_Callback = QModelIndex* (*)(const KColorSchemeModel*, QModelIndex*);
    using KColorSchemeModel_Match_Callback = libqt_list /* of QModelIndex* */ (*)(const KColorSchemeModel*, QModelIndex*, int, QVariant*, int, int);
    using KColorSchemeModel_Span_Callback = QSize* (*)(const KColorSchemeModel*, QModelIndex*);
    using KColorSchemeModel_RoleNames_Callback = libqt_map /* of int to libqt_string */ (*)();
    using KColorSchemeModel_MultiData_Callback = void (*)(const KColorSchemeModel*, QModelIndex*, QModelRoleDataSpan*);
    using KColorSchemeModel_Submit_Callback = bool (*)();
    using KColorSchemeModel_Revert_Callback = void (*)();
    using KColorSchemeModel_ResetInternalData_Callback = void (*)();
    using KColorSchemeModel_Event_Callback = bool (*)(KColorSchemeModel*, QEvent*);
    using KColorSchemeModel_EventFilter_Callback = bool (*)(KColorSchemeModel*, QObject*, QEvent*);
    using KColorSchemeModel_TimerEvent_Callback = void (*)(KColorSchemeModel*, QTimerEvent*);
    using KColorSchemeModel_ChildEvent_Callback = void (*)(KColorSchemeModel*, QChildEvent*);
    using KColorSchemeModel_CustomEvent_Callback = void (*)(KColorSchemeModel*, QEvent*);
    using KColorSchemeModel_ConnectNotify_Callback = void (*)(KColorSchemeModel*, QMetaMethod*);
    using KColorSchemeModel_DisconnectNotify_Callback = void (*)(KColorSchemeModel*, QMetaMethod*);
    using KColorSchemeModel_CreateIndex_Callback = QModelIndex* (*)(const KColorSchemeModel*, int, int);
    using KColorSchemeModel_EncodeData_Callback = void (*)(const KColorSchemeModel*, libqt_list /* of QModelIndex* */, QDataStream*);
    using KColorSchemeModel_DecodeData_Callback = bool (*)(KColorSchemeModel*, int, int, QModelIndex*, QDataStream*);
    using KColorSchemeModel_BeginInsertRows_Callback = void (*)(KColorSchemeModel*, QModelIndex*, int, int);
    using KColorSchemeModel_EndInsertRows_Callback = void (*)();
    using KColorSchemeModel_BeginRemoveRows_Callback = void (*)(KColorSchemeModel*, QModelIndex*, int, int);
    using KColorSchemeModel_EndRemoveRows_Callback = void (*)();
    using KColorSchemeModel_BeginMoveRows_Callback = bool (*)(KColorSchemeModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KColorSchemeModel_EndMoveRows_Callback = void (*)();
    using KColorSchemeModel_BeginInsertColumns_Callback = void (*)(KColorSchemeModel*, QModelIndex*, int, int);
    using KColorSchemeModel_EndInsertColumns_Callback = void (*)();
    using KColorSchemeModel_BeginRemoveColumns_Callback = void (*)(KColorSchemeModel*, QModelIndex*, int, int);
    using KColorSchemeModel_EndRemoveColumns_Callback = void (*)();
    using KColorSchemeModel_BeginMoveColumns_Callback = bool (*)(KColorSchemeModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KColorSchemeModel_EndMoveColumns_Callback = void (*)();
    using KColorSchemeModel_BeginResetModel_Callback = void (*)();
    using KColorSchemeModel_EndResetModel_Callback = void (*)();
    using KColorSchemeModel_ChangePersistentIndex_Callback = void (*)(KColorSchemeModel*, QModelIndex*, QModelIndex*);
    using KColorSchemeModel_ChangePersistentIndexList_Callback = void (*)(KColorSchemeModel*, libqt_list /* of QModelIndex* */, libqt_list /* of QModelIndex* */);
    using KColorSchemeModel_PersistentIndexList_Callback = libqt_list /* of QModelIndex* */ (*)();
    using KColorSchemeModel_Sender_Callback = QObject* (*)();
    using KColorSchemeModel_SenderSignalIndex_Callback = int (*)();
    using KColorSchemeModel_Receivers_Callback = int (*)(const KColorSchemeModel*, const char*);
    using KColorSchemeModel_IsSignalConnected_Callback = bool (*)(const KColorSchemeModel*, QMetaMethod*);

  protected:
    // Instance callback storage
    KColorSchemeModel_MetaObject_Callback kcolorschememodel_metaobject_callback = nullptr;
    KColorSchemeModel_Metacast_Callback kcolorschememodel_metacast_callback = nullptr;
    KColorSchemeModel_Metacall_Callback kcolorschememodel_metacall_callback = nullptr;
    KColorSchemeModel_Data_Callback kcolorschememodel_data_callback = nullptr;
    KColorSchemeModel_RowCount_Callback kcolorschememodel_rowcount_callback = nullptr;
    KColorSchemeModel_Index_Callback kcolorschememodel_index_callback = nullptr;
    KColorSchemeModel_Sibling_Callback kcolorschememodel_sibling_callback = nullptr;
    KColorSchemeModel_DropMimeData_Callback kcolorschememodel_dropmimedata_callback = nullptr;
    KColorSchemeModel_Flags_Callback kcolorschememodel_flags_callback = nullptr;
    KColorSchemeModel_SetData_Callback kcolorschememodel_setdata_callback = nullptr;
    KColorSchemeModel_HeaderData_Callback kcolorschememodel_headerdata_callback = nullptr;
    KColorSchemeModel_SetHeaderData_Callback kcolorschememodel_setheaderdata_callback = nullptr;
    KColorSchemeModel_ItemData_Callback kcolorschememodel_itemdata_callback = nullptr;
    KColorSchemeModel_SetItemData_Callback kcolorschememodel_setitemdata_callback = nullptr;
    KColorSchemeModel_ClearItemData_Callback kcolorschememodel_clearitemdata_callback = nullptr;
    KColorSchemeModel_MimeTypes_Callback kcolorschememodel_mimetypes_callback = nullptr;
    KColorSchemeModel_MimeData_Callback kcolorschememodel_mimedata_callback = nullptr;
    KColorSchemeModel_CanDropMimeData_Callback kcolorschememodel_candropmimedata_callback = nullptr;
    KColorSchemeModel_SupportedDropActions_Callback kcolorschememodel_supporteddropactions_callback = nullptr;
    KColorSchemeModel_SupportedDragActions_Callback kcolorschememodel_supporteddragactions_callback = nullptr;
    KColorSchemeModel_InsertRows_Callback kcolorschememodel_insertrows_callback = nullptr;
    KColorSchemeModel_InsertColumns_Callback kcolorschememodel_insertcolumns_callback = nullptr;
    KColorSchemeModel_RemoveRows_Callback kcolorschememodel_removerows_callback = nullptr;
    KColorSchemeModel_RemoveColumns_Callback kcolorschememodel_removecolumns_callback = nullptr;
    KColorSchemeModel_MoveRows_Callback kcolorschememodel_moverows_callback = nullptr;
    KColorSchemeModel_MoveColumns_Callback kcolorschememodel_movecolumns_callback = nullptr;
    KColorSchemeModel_FetchMore_Callback kcolorschememodel_fetchmore_callback = nullptr;
    KColorSchemeModel_CanFetchMore_Callback kcolorschememodel_canfetchmore_callback = nullptr;
    KColorSchemeModel_Sort_Callback kcolorschememodel_sort_callback = nullptr;
    KColorSchemeModel_Buddy_Callback kcolorschememodel_buddy_callback = nullptr;
    KColorSchemeModel_Match_Callback kcolorschememodel_match_callback = nullptr;
    KColorSchemeModel_Span_Callback kcolorschememodel_span_callback = nullptr;
    KColorSchemeModel_RoleNames_Callback kcolorschememodel_rolenames_callback = nullptr;
    KColorSchemeModel_MultiData_Callback kcolorschememodel_multidata_callback = nullptr;
    KColorSchemeModel_Submit_Callback kcolorschememodel_submit_callback = nullptr;
    KColorSchemeModel_Revert_Callback kcolorschememodel_revert_callback = nullptr;
    KColorSchemeModel_ResetInternalData_Callback kcolorschememodel_resetinternaldata_callback = nullptr;
    KColorSchemeModel_Event_Callback kcolorschememodel_event_callback = nullptr;
    KColorSchemeModel_EventFilter_Callback kcolorschememodel_eventfilter_callback = nullptr;
    KColorSchemeModel_TimerEvent_Callback kcolorschememodel_timerevent_callback = nullptr;
    KColorSchemeModel_ChildEvent_Callback kcolorschememodel_childevent_callback = nullptr;
    KColorSchemeModel_CustomEvent_Callback kcolorschememodel_customevent_callback = nullptr;
    KColorSchemeModel_ConnectNotify_Callback kcolorschememodel_connectnotify_callback = nullptr;
    KColorSchemeModel_DisconnectNotify_Callback kcolorschememodel_disconnectnotify_callback = nullptr;
    KColorSchemeModel_CreateIndex_Callback kcolorschememodel_createindex_callback = nullptr;
    KColorSchemeModel_EncodeData_Callback kcolorschememodel_encodedata_callback = nullptr;
    KColorSchemeModel_DecodeData_Callback kcolorschememodel_decodedata_callback = nullptr;
    KColorSchemeModel_BeginInsertRows_Callback kcolorschememodel_begininsertrows_callback = nullptr;
    KColorSchemeModel_EndInsertRows_Callback kcolorschememodel_endinsertrows_callback = nullptr;
    KColorSchemeModel_BeginRemoveRows_Callback kcolorschememodel_beginremoverows_callback = nullptr;
    KColorSchemeModel_EndRemoveRows_Callback kcolorschememodel_endremoverows_callback = nullptr;
    KColorSchemeModel_BeginMoveRows_Callback kcolorschememodel_beginmoverows_callback = nullptr;
    KColorSchemeModel_EndMoveRows_Callback kcolorschememodel_endmoverows_callback = nullptr;
    KColorSchemeModel_BeginInsertColumns_Callback kcolorschememodel_begininsertcolumns_callback = nullptr;
    KColorSchemeModel_EndInsertColumns_Callback kcolorschememodel_endinsertcolumns_callback = nullptr;
    KColorSchemeModel_BeginRemoveColumns_Callback kcolorschememodel_beginremovecolumns_callback = nullptr;
    KColorSchemeModel_EndRemoveColumns_Callback kcolorschememodel_endremovecolumns_callback = nullptr;
    KColorSchemeModel_BeginMoveColumns_Callback kcolorschememodel_beginmovecolumns_callback = nullptr;
    KColorSchemeModel_EndMoveColumns_Callback kcolorschememodel_endmovecolumns_callback = nullptr;
    KColorSchemeModel_BeginResetModel_Callback kcolorschememodel_beginresetmodel_callback = nullptr;
    KColorSchemeModel_EndResetModel_Callback kcolorschememodel_endresetmodel_callback = nullptr;
    KColorSchemeModel_ChangePersistentIndex_Callback kcolorschememodel_changepersistentindex_callback = nullptr;
    KColorSchemeModel_ChangePersistentIndexList_Callback kcolorschememodel_changepersistentindexlist_callback = nullptr;
    KColorSchemeModel_PersistentIndexList_Callback kcolorschememodel_persistentindexlist_callback = nullptr;
    KColorSchemeModel_Sender_Callback kcolorschememodel_sender_callback = nullptr;
    KColorSchemeModel_SenderSignalIndex_Callback kcolorschememodel_sendersignalindex_callback = nullptr;
    KColorSchemeModel_Receivers_Callback kcolorschememodel_receivers_callback = nullptr;
    KColorSchemeModel_IsSignalConnected_Callback kcolorschememodel_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kcolorschememodel_metaobject_isbase = false;
    mutable bool kcolorschememodel_metacast_isbase = false;
    mutable bool kcolorschememodel_metacall_isbase = false;
    mutable bool kcolorschememodel_data_isbase = false;
    mutable bool kcolorschememodel_rowcount_isbase = false;
    mutable bool kcolorschememodel_index_isbase = false;
    mutable bool kcolorschememodel_sibling_isbase = false;
    mutable bool kcolorschememodel_dropmimedata_isbase = false;
    mutable bool kcolorschememodel_flags_isbase = false;
    mutable bool kcolorschememodel_setdata_isbase = false;
    mutable bool kcolorschememodel_headerdata_isbase = false;
    mutable bool kcolorschememodel_setheaderdata_isbase = false;
    mutable bool kcolorschememodel_itemdata_isbase = false;
    mutable bool kcolorschememodel_setitemdata_isbase = false;
    mutable bool kcolorschememodel_clearitemdata_isbase = false;
    mutable bool kcolorschememodel_mimetypes_isbase = false;
    mutable bool kcolorschememodel_mimedata_isbase = false;
    mutable bool kcolorschememodel_candropmimedata_isbase = false;
    mutable bool kcolorschememodel_supporteddropactions_isbase = false;
    mutable bool kcolorschememodel_supporteddragactions_isbase = false;
    mutable bool kcolorschememodel_insertrows_isbase = false;
    mutable bool kcolorschememodel_insertcolumns_isbase = false;
    mutable bool kcolorschememodel_removerows_isbase = false;
    mutable bool kcolorschememodel_removecolumns_isbase = false;
    mutable bool kcolorschememodel_moverows_isbase = false;
    mutable bool kcolorschememodel_movecolumns_isbase = false;
    mutable bool kcolorschememodel_fetchmore_isbase = false;
    mutable bool kcolorschememodel_canfetchmore_isbase = false;
    mutable bool kcolorschememodel_sort_isbase = false;
    mutable bool kcolorschememodel_buddy_isbase = false;
    mutable bool kcolorschememodel_match_isbase = false;
    mutable bool kcolorschememodel_span_isbase = false;
    mutable bool kcolorschememodel_rolenames_isbase = false;
    mutable bool kcolorschememodel_multidata_isbase = false;
    mutable bool kcolorschememodel_submit_isbase = false;
    mutable bool kcolorschememodel_revert_isbase = false;
    mutable bool kcolorschememodel_resetinternaldata_isbase = false;
    mutable bool kcolorschememodel_event_isbase = false;
    mutable bool kcolorschememodel_eventfilter_isbase = false;
    mutable bool kcolorschememodel_timerevent_isbase = false;
    mutable bool kcolorschememodel_childevent_isbase = false;
    mutable bool kcolorschememodel_customevent_isbase = false;
    mutable bool kcolorschememodel_connectnotify_isbase = false;
    mutable bool kcolorschememodel_disconnectnotify_isbase = false;
    mutable bool kcolorschememodel_createindex_isbase = false;
    mutable bool kcolorschememodel_encodedata_isbase = false;
    mutable bool kcolorschememodel_decodedata_isbase = false;
    mutable bool kcolorschememodel_begininsertrows_isbase = false;
    mutable bool kcolorschememodel_endinsertrows_isbase = false;
    mutable bool kcolorschememodel_beginremoverows_isbase = false;
    mutable bool kcolorschememodel_endremoverows_isbase = false;
    mutable bool kcolorschememodel_beginmoverows_isbase = false;
    mutable bool kcolorschememodel_endmoverows_isbase = false;
    mutable bool kcolorschememodel_begininsertcolumns_isbase = false;
    mutable bool kcolorschememodel_endinsertcolumns_isbase = false;
    mutable bool kcolorschememodel_beginremovecolumns_isbase = false;
    mutable bool kcolorschememodel_endremovecolumns_isbase = false;
    mutable bool kcolorschememodel_beginmovecolumns_isbase = false;
    mutable bool kcolorschememodel_endmovecolumns_isbase = false;
    mutable bool kcolorschememodel_beginresetmodel_isbase = false;
    mutable bool kcolorschememodel_endresetmodel_isbase = false;
    mutable bool kcolorschememodel_changepersistentindex_isbase = false;
    mutable bool kcolorschememodel_changepersistentindexlist_isbase = false;
    mutable bool kcolorschememodel_persistentindexlist_isbase = false;
    mutable bool kcolorschememodel_sender_isbase = false;
    mutable bool kcolorschememodel_sendersignalindex_isbase = false;
    mutable bool kcolorschememodel_receivers_isbase = false;
    mutable bool kcolorschememodel_issignalconnected_isbase = false;

  public:
    VirtualKColorSchemeModel() : KColorSchemeModel() {};
    VirtualKColorSchemeModel(QObject* parent) : KColorSchemeModel(parent) {};

    // Callback setters
    inline void setKColorSchemeModel_MetaObject_Callback(KColorSchemeModel_MetaObject_Callback cb) { kcolorschememodel_metaobject_callback = cb; }
    inline void setKColorSchemeModel_Metacast_Callback(KColorSchemeModel_Metacast_Callback cb) { kcolorschememodel_metacast_callback = cb; }
    inline void setKColorSchemeModel_Metacall_Callback(KColorSchemeModel_Metacall_Callback cb) { kcolorschememodel_metacall_callback = cb; }
    inline void setKColorSchemeModel_Data_Callback(KColorSchemeModel_Data_Callback cb) { kcolorschememodel_data_callback = cb; }
    inline void setKColorSchemeModel_RowCount_Callback(KColorSchemeModel_RowCount_Callback cb) { kcolorschememodel_rowcount_callback = cb; }
    inline void setKColorSchemeModel_Index_Callback(KColorSchemeModel_Index_Callback cb) { kcolorschememodel_index_callback = cb; }
    inline void setKColorSchemeModel_Sibling_Callback(KColorSchemeModel_Sibling_Callback cb) { kcolorschememodel_sibling_callback = cb; }
    inline void setKColorSchemeModel_DropMimeData_Callback(KColorSchemeModel_DropMimeData_Callback cb) { kcolorschememodel_dropmimedata_callback = cb; }
    inline void setKColorSchemeModel_Flags_Callback(KColorSchemeModel_Flags_Callback cb) { kcolorschememodel_flags_callback = cb; }
    inline void setKColorSchemeModel_SetData_Callback(KColorSchemeModel_SetData_Callback cb) { kcolorschememodel_setdata_callback = cb; }
    inline void setKColorSchemeModel_HeaderData_Callback(KColorSchemeModel_HeaderData_Callback cb) { kcolorschememodel_headerdata_callback = cb; }
    inline void setKColorSchemeModel_SetHeaderData_Callback(KColorSchemeModel_SetHeaderData_Callback cb) { kcolorschememodel_setheaderdata_callback = cb; }
    inline void setKColorSchemeModel_ItemData_Callback(KColorSchemeModel_ItemData_Callback cb) { kcolorschememodel_itemdata_callback = cb; }
    inline void setKColorSchemeModel_SetItemData_Callback(KColorSchemeModel_SetItemData_Callback cb) { kcolorschememodel_setitemdata_callback = cb; }
    inline void setKColorSchemeModel_ClearItemData_Callback(KColorSchemeModel_ClearItemData_Callback cb) { kcolorschememodel_clearitemdata_callback = cb; }
    inline void setKColorSchemeModel_MimeTypes_Callback(KColorSchemeModel_MimeTypes_Callback cb) { kcolorschememodel_mimetypes_callback = cb; }
    inline void setKColorSchemeModel_MimeData_Callback(KColorSchemeModel_MimeData_Callback cb) { kcolorschememodel_mimedata_callback = cb; }
    inline void setKColorSchemeModel_CanDropMimeData_Callback(KColorSchemeModel_CanDropMimeData_Callback cb) { kcolorschememodel_candropmimedata_callback = cb; }
    inline void setKColorSchemeModel_SupportedDropActions_Callback(KColorSchemeModel_SupportedDropActions_Callback cb) { kcolorschememodel_supporteddropactions_callback = cb; }
    inline void setKColorSchemeModel_SupportedDragActions_Callback(KColorSchemeModel_SupportedDragActions_Callback cb) { kcolorschememodel_supporteddragactions_callback = cb; }
    inline void setKColorSchemeModel_InsertRows_Callback(KColorSchemeModel_InsertRows_Callback cb) { kcolorschememodel_insertrows_callback = cb; }
    inline void setKColorSchemeModel_InsertColumns_Callback(KColorSchemeModel_InsertColumns_Callback cb) { kcolorschememodel_insertcolumns_callback = cb; }
    inline void setKColorSchemeModel_RemoveRows_Callback(KColorSchemeModel_RemoveRows_Callback cb) { kcolorschememodel_removerows_callback = cb; }
    inline void setKColorSchemeModel_RemoveColumns_Callback(KColorSchemeModel_RemoveColumns_Callback cb) { kcolorschememodel_removecolumns_callback = cb; }
    inline void setKColorSchemeModel_MoveRows_Callback(KColorSchemeModel_MoveRows_Callback cb) { kcolorschememodel_moverows_callback = cb; }
    inline void setKColorSchemeModel_MoveColumns_Callback(KColorSchemeModel_MoveColumns_Callback cb) { kcolorschememodel_movecolumns_callback = cb; }
    inline void setKColorSchemeModel_FetchMore_Callback(KColorSchemeModel_FetchMore_Callback cb) { kcolorschememodel_fetchmore_callback = cb; }
    inline void setKColorSchemeModel_CanFetchMore_Callback(KColorSchemeModel_CanFetchMore_Callback cb) { kcolorschememodel_canfetchmore_callback = cb; }
    inline void setKColorSchemeModel_Sort_Callback(KColorSchemeModel_Sort_Callback cb) { kcolorschememodel_sort_callback = cb; }
    inline void setKColorSchemeModel_Buddy_Callback(KColorSchemeModel_Buddy_Callback cb) { kcolorschememodel_buddy_callback = cb; }
    inline void setKColorSchemeModel_Match_Callback(KColorSchemeModel_Match_Callback cb) { kcolorschememodel_match_callback = cb; }
    inline void setKColorSchemeModel_Span_Callback(KColorSchemeModel_Span_Callback cb) { kcolorschememodel_span_callback = cb; }
    inline void setKColorSchemeModel_RoleNames_Callback(KColorSchemeModel_RoleNames_Callback cb) { kcolorschememodel_rolenames_callback = cb; }
    inline void setKColorSchemeModel_MultiData_Callback(KColorSchemeModel_MultiData_Callback cb) { kcolorschememodel_multidata_callback = cb; }
    inline void setKColorSchemeModel_Submit_Callback(KColorSchemeModel_Submit_Callback cb) { kcolorschememodel_submit_callback = cb; }
    inline void setKColorSchemeModel_Revert_Callback(KColorSchemeModel_Revert_Callback cb) { kcolorschememodel_revert_callback = cb; }
    inline void setKColorSchemeModel_ResetInternalData_Callback(KColorSchemeModel_ResetInternalData_Callback cb) { kcolorschememodel_resetinternaldata_callback = cb; }
    inline void setKColorSchemeModel_Event_Callback(KColorSchemeModel_Event_Callback cb) { kcolorschememodel_event_callback = cb; }
    inline void setKColorSchemeModel_EventFilter_Callback(KColorSchemeModel_EventFilter_Callback cb) { kcolorschememodel_eventfilter_callback = cb; }
    inline void setKColorSchemeModel_TimerEvent_Callback(KColorSchemeModel_TimerEvent_Callback cb) { kcolorschememodel_timerevent_callback = cb; }
    inline void setKColorSchemeModel_ChildEvent_Callback(KColorSchemeModel_ChildEvent_Callback cb) { kcolorschememodel_childevent_callback = cb; }
    inline void setKColorSchemeModel_CustomEvent_Callback(KColorSchemeModel_CustomEvent_Callback cb) { kcolorschememodel_customevent_callback = cb; }
    inline void setKColorSchemeModel_ConnectNotify_Callback(KColorSchemeModel_ConnectNotify_Callback cb) { kcolorschememodel_connectnotify_callback = cb; }
    inline void setKColorSchemeModel_DisconnectNotify_Callback(KColorSchemeModel_DisconnectNotify_Callback cb) { kcolorschememodel_disconnectnotify_callback = cb; }
    inline void setKColorSchemeModel_CreateIndex_Callback(KColorSchemeModel_CreateIndex_Callback cb) { kcolorschememodel_createindex_callback = cb; }
    inline void setKColorSchemeModel_EncodeData_Callback(KColorSchemeModel_EncodeData_Callback cb) { kcolorschememodel_encodedata_callback = cb; }
    inline void setKColorSchemeModel_DecodeData_Callback(KColorSchemeModel_DecodeData_Callback cb) { kcolorschememodel_decodedata_callback = cb; }
    inline void setKColorSchemeModel_BeginInsertRows_Callback(KColorSchemeModel_BeginInsertRows_Callback cb) { kcolorschememodel_begininsertrows_callback = cb; }
    inline void setKColorSchemeModel_EndInsertRows_Callback(KColorSchemeModel_EndInsertRows_Callback cb) { kcolorschememodel_endinsertrows_callback = cb; }
    inline void setKColorSchemeModel_BeginRemoveRows_Callback(KColorSchemeModel_BeginRemoveRows_Callback cb) { kcolorschememodel_beginremoverows_callback = cb; }
    inline void setKColorSchemeModel_EndRemoveRows_Callback(KColorSchemeModel_EndRemoveRows_Callback cb) { kcolorschememodel_endremoverows_callback = cb; }
    inline void setKColorSchemeModel_BeginMoveRows_Callback(KColorSchemeModel_BeginMoveRows_Callback cb) { kcolorschememodel_beginmoverows_callback = cb; }
    inline void setKColorSchemeModel_EndMoveRows_Callback(KColorSchemeModel_EndMoveRows_Callback cb) { kcolorschememodel_endmoverows_callback = cb; }
    inline void setKColorSchemeModel_BeginInsertColumns_Callback(KColorSchemeModel_BeginInsertColumns_Callback cb) { kcolorschememodel_begininsertcolumns_callback = cb; }
    inline void setKColorSchemeModel_EndInsertColumns_Callback(KColorSchemeModel_EndInsertColumns_Callback cb) { kcolorschememodel_endinsertcolumns_callback = cb; }
    inline void setKColorSchemeModel_BeginRemoveColumns_Callback(KColorSchemeModel_BeginRemoveColumns_Callback cb) { kcolorschememodel_beginremovecolumns_callback = cb; }
    inline void setKColorSchemeModel_EndRemoveColumns_Callback(KColorSchemeModel_EndRemoveColumns_Callback cb) { kcolorschememodel_endremovecolumns_callback = cb; }
    inline void setKColorSchemeModel_BeginMoveColumns_Callback(KColorSchemeModel_BeginMoveColumns_Callback cb) { kcolorschememodel_beginmovecolumns_callback = cb; }
    inline void setKColorSchemeModel_EndMoveColumns_Callback(KColorSchemeModel_EndMoveColumns_Callback cb) { kcolorschememodel_endmovecolumns_callback = cb; }
    inline void setKColorSchemeModel_BeginResetModel_Callback(KColorSchemeModel_BeginResetModel_Callback cb) { kcolorschememodel_beginresetmodel_callback = cb; }
    inline void setKColorSchemeModel_EndResetModel_Callback(KColorSchemeModel_EndResetModel_Callback cb) { kcolorschememodel_endresetmodel_callback = cb; }
    inline void setKColorSchemeModel_ChangePersistentIndex_Callback(KColorSchemeModel_ChangePersistentIndex_Callback cb) { kcolorschememodel_changepersistentindex_callback = cb; }
    inline void setKColorSchemeModel_ChangePersistentIndexList_Callback(KColorSchemeModel_ChangePersistentIndexList_Callback cb) { kcolorschememodel_changepersistentindexlist_callback = cb; }
    inline void setKColorSchemeModel_PersistentIndexList_Callback(KColorSchemeModel_PersistentIndexList_Callback cb) { kcolorschememodel_persistentindexlist_callback = cb; }
    inline void setKColorSchemeModel_Sender_Callback(KColorSchemeModel_Sender_Callback cb) { kcolorschememodel_sender_callback = cb; }
    inline void setKColorSchemeModel_SenderSignalIndex_Callback(KColorSchemeModel_SenderSignalIndex_Callback cb) { kcolorschememodel_sendersignalindex_callback = cb; }
    inline void setKColorSchemeModel_Receivers_Callback(KColorSchemeModel_Receivers_Callback cb) { kcolorschememodel_receivers_callback = cb; }
    inline void setKColorSchemeModel_IsSignalConnected_Callback(KColorSchemeModel_IsSignalConnected_Callback cb) { kcolorschememodel_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKColorSchemeModel_MetaObject_IsBase(bool value) const { kcolorschememodel_metaobject_isbase = value; }
    inline void setKColorSchemeModel_Metacast_IsBase(bool value) const { kcolorschememodel_metacast_isbase = value; }
    inline void setKColorSchemeModel_Metacall_IsBase(bool value) const { kcolorschememodel_metacall_isbase = value; }
    inline void setKColorSchemeModel_Data_IsBase(bool value) const { kcolorschememodel_data_isbase = value; }
    inline void setKColorSchemeModel_RowCount_IsBase(bool value) const { kcolorschememodel_rowcount_isbase = value; }
    inline void setKColorSchemeModel_Index_IsBase(bool value) const { kcolorschememodel_index_isbase = value; }
    inline void setKColorSchemeModel_Sibling_IsBase(bool value) const { kcolorschememodel_sibling_isbase = value; }
    inline void setKColorSchemeModel_DropMimeData_IsBase(bool value) const { kcolorschememodel_dropmimedata_isbase = value; }
    inline void setKColorSchemeModel_Flags_IsBase(bool value) const { kcolorschememodel_flags_isbase = value; }
    inline void setKColorSchemeModel_SetData_IsBase(bool value) const { kcolorschememodel_setdata_isbase = value; }
    inline void setKColorSchemeModel_HeaderData_IsBase(bool value) const { kcolorschememodel_headerdata_isbase = value; }
    inline void setKColorSchemeModel_SetHeaderData_IsBase(bool value) const { kcolorschememodel_setheaderdata_isbase = value; }
    inline void setKColorSchemeModel_ItemData_IsBase(bool value) const { kcolorschememodel_itemdata_isbase = value; }
    inline void setKColorSchemeModel_SetItemData_IsBase(bool value) const { kcolorschememodel_setitemdata_isbase = value; }
    inline void setKColorSchemeModel_ClearItemData_IsBase(bool value) const { kcolorschememodel_clearitemdata_isbase = value; }
    inline void setKColorSchemeModel_MimeTypes_IsBase(bool value) const { kcolorschememodel_mimetypes_isbase = value; }
    inline void setKColorSchemeModel_MimeData_IsBase(bool value) const { kcolorschememodel_mimedata_isbase = value; }
    inline void setKColorSchemeModel_CanDropMimeData_IsBase(bool value) const { kcolorschememodel_candropmimedata_isbase = value; }
    inline void setKColorSchemeModel_SupportedDropActions_IsBase(bool value) const { kcolorschememodel_supporteddropactions_isbase = value; }
    inline void setKColorSchemeModel_SupportedDragActions_IsBase(bool value) const { kcolorschememodel_supporteddragactions_isbase = value; }
    inline void setKColorSchemeModel_InsertRows_IsBase(bool value) const { kcolorschememodel_insertrows_isbase = value; }
    inline void setKColorSchemeModel_InsertColumns_IsBase(bool value) const { kcolorschememodel_insertcolumns_isbase = value; }
    inline void setKColorSchemeModel_RemoveRows_IsBase(bool value) const { kcolorschememodel_removerows_isbase = value; }
    inline void setKColorSchemeModel_RemoveColumns_IsBase(bool value) const { kcolorschememodel_removecolumns_isbase = value; }
    inline void setKColorSchemeModel_MoveRows_IsBase(bool value) const { kcolorschememodel_moverows_isbase = value; }
    inline void setKColorSchemeModel_MoveColumns_IsBase(bool value) const { kcolorschememodel_movecolumns_isbase = value; }
    inline void setKColorSchemeModel_FetchMore_IsBase(bool value) const { kcolorschememodel_fetchmore_isbase = value; }
    inline void setKColorSchemeModel_CanFetchMore_IsBase(bool value) const { kcolorschememodel_canfetchmore_isbase = value; }
    inline void setKColorSchemeModel_Sort_IsBase(bool value) const { kcolorschememodel_sort_isbase = value; }
    inline void setKColorSchemeModel_Buddy_IsBase(bool value) const { kcolorschememodel_buddy_isbase = value; }
    inline void setKColorSchemeModel_Match_IsBase(bool value) const { kcolorschememodel_match_isbase = value; }
    inline void setKColorSchemeModel_Span_IsBase(bool value) const { kcolorschememodel_span_isbase = value; }
    inline void setKColorSchemeModel_RoleNames_IsBase(bool value) const { kcolorschememodel_rolenames_isbase = value; }
    inline void setKColorSchemeModel_MultiData_IsBase(bool value) const { kcolorschememodel_multidata_isbase = value; }
    inline void setKColorSchemeModel_Submit_IsBase(bool value) const { kcolorschememodel_submit_isbase = value; }
    inline void setKColorSchemeModel_Revert_IsBase(bool value) const { kcolorschememodel_revert_isbase = value; }
    inline void setKColorSchemeModel_ResetInternalData_IsBase(bool value) const { kcolorschememodel_resetinternaldata_isbase = value; }
    inline void setKColorSchemeModel_Event_IsBase(bool value) const { kcolorschememodel_event_isbase = value; }
    inline void setKColorSchemeModel_EventFilter_IsBase(bool value) const { kcolorschememodel_eventfilter_isbase = value; }
    inline void setKColorSchemeModel_TimerEvent_IsBase(bool value) const { kcolorschememodel_timerevent_isbase = value; }
    inline void setKColorSchemeModel_ChildEvent_IsBase(bool value) const { kcolorschememodel_childevent_isbase = value; }
    inline void setKColorSchemeModel_CustomEvent_IsBase(bool value) const { kcolorschememodel_customevent_isbase = value; }
    inline void setKColorSchemeModel_ConnectNotify_IsBase(bool value) const { kcolorschememodel_connectnotify_isbase = value; }
    inline void setKColorSchemeModel_DisconnectNotify_IsBase(bool value) const { kcolorschememodel_disconnectnotify_isbase = value; }
    inline void setKColorSchemeModel_CreateIndex_IsBase(bool value) const { kcolorschememodel_createindex_isbase = value; }
    inline void setKColorSchemeModel_EncodeData_IsBase(bool value) const { kcolorschememodel_encodedata_isbase = value; }
    inline void setKColorSchemeModel_DecodeData_IsBase(bool value) const { kcolorschememodel_decodedata_isbase = value; }
    inline void setKColorSchemeModel_BeginInsertRows_IsBase(bool value) const { kcolorschememodel_begininsertrows_isbase = value; }
    inline void setKColorSchemeModel_EndInsertRows_IsBase(bool value) const { kcolorschememodel_endinsertrows_isbase = value; }
    inline void setKColorSchemeModel_BeginRemoveRows_IsBase(bool value) const { kcolorschememodel_beginremoverows_isbase = value; }
    inline void setKColorSchemeModel_EndRemoveRows_IsBase(bool value) const { kcolorschememodel_endremoverows_isbase = value; }
    inline void setKColorSchemeModel_BeginMoveRows_IsBase(bool value) const { kcolorschememodel_beginmoverows_isbase = value; }
    inline void setKColorSchemeModel_EndMoveRows_IsBase(bool value) const { kcolorschememodel_endmoverows_isbase = value; }
    inline void setKColorSchemeModel_BeginInsertColumns_IsBase(bool value) const { kcolorschememodel_begininsertcolumns_isbase = value; }
    inline void setKColorSchemeModel_EndInsertColumns_IsBase(bool value) const { kcolorschememodel_endinsertcolumns_isbase = value; }
    inline void setKColorSchemeModel_BeginRemoveColumns_IsBase(bool value) const { kcolorschememodel_beginremovecolumns_isbase = value; }
    inline void setKColorSchemeModel_EndRemoveColumns_IsBase(bool value) const { kcolorschememodel_endremovecolumns_isbase = value; }
    inline void setKColorSchemeModel_BeginMoveColumns_IsBase(bool value) const { kcolorschememodel_beginmovecolumns_isbase = value; }
    inline void setKColorSchemeModel_EndMoveColumns_IsBase(bool value) const { kcolorschememodel_endmovecolumns_isbase = value; }
    inline void setKColorSchemeModel_BeginResetModel_IsBase(bool value) const { kcolorschememodel_beginresetmodel_isbase = value; }
    inline void setKColorSchemeModel_EndResetModel_IsBase(bool value) const { kcolorschememodel_endresetmodel_isbase = value; }
    inline void setKColorSchemeModel_ChangePersistentIndex_IsBase(bool value) const { kcolorschememodel_changepersistentindex_isbase = value; }
    inline void setKColorSchemeModel_ChangePersistentIndexList_IsBase(bool value) const { kcolorschememodel_changepersistentindexlist_isbase = value; }
    inline void setKColorSchemeModel_PersistentIndexList_IsBase(bool value) const { kcolorschememodel_persistentindexlist_isbase = value; }
    inline void setKColorSchemeModel_Sender_IsBase(bool value) const { kcolorschememodel_sender_isbase = value; }
    inline void setKColorSchemeModel_SenderSignalIndex_IsBase(bool value) const { kcolorschememodel_sendersignalindex_isbase = value; }
    inline void setKColorSchemeModel_Receivers_IsBase(bool value) const { kcolorschememodel_receivers_isbase = value; }
    inline void setKColorSchemeModel_IsSignalConnected_IsBase(bool value) const { kcolorschememodel_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kcolorschememodel_metaobject_isbase) {
            kcolorschememodel_metaobject_isbase = false;
            return KColorSchemeModel::metaObject();
        }
        auto metaobject_cb = kcolorschememodel_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KColorSchemeModel::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kcolorschememodel_metacast_isbase) {
            kcolorschememodel_metacast_isbase = false;
            return KColorSchemeModel::qt_metacast(param1);
        }
        auto metacast_cb = kcolorschememodel_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KColorSchemeModel::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kcolorschememodel_metacall_isbase) {
            kcolorschememodel_metacall_isbase = false;
            return KColorSchemeModel::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = kcolorschememodel_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KColorSchemeModel::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(const QModelIndex& index, int role) const override {
        if (kcolorschememodel_data_isbase) {
            kcolorschememodel_data_isbase = false;
            return KColorSchemeModel::data(index, role);
        }
        auto data_cb = kcolorschememodel_data_callback;
        if (data_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = role;

            QVariant* callback_ret = data_cb(this, cbval1, cbval2);
            return *callback_ret;
        }
        return KColorSchemeModel::data(index, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual int rowCount(const QModelIndex& parent) const override {
        if (kcolorschememodel_rowcount_isbase) {
            kcolorschememodel_rowcount_isbase = false;
            return KColorSchemeModel::rowCount(parent);
        }
        auto rowcount_cb = kcolorschememodel_rowcount_callback;
        if (rowcount_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            int callback_ret = rowcount_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KColorSchemeModel::rowCount(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
        if (kcolorschememodel_index_isbase) {
            kcolorschememodel_index_isbase = false;
            return KColorSchemeModel::index(row, column, parent);
        }
        auto index_cb = kcolorschememodel_index_callback;
        if (index_cb) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            QModelIndex* callback_ret = index_cb(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        }
        return KColorSchemeModel::index(row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
        if (kcolorschememodel_sibling_isbase) {
            kcolorschememodel_sibling_isbase = false;
            return KColorSchemeModel::sibling(row, column, idx);
        }
        auto sibling_cb = kcolorschememodel_sibling_callback;
        if (sibling_cb) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& idx_ret = idx;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&idx_ret);

            QModelIndex* callback_ret = sibling_cb(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        }
        return KColorSchemeModel::sibling(row, column, idx);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
        if (kcolorschememodel_dropmimedata_isbase) {
            kcolorschememodel_dropmimedata_isbase = false;
            return KColorSchemeModel::dropMimeData(data, action, row, column, parent);
        }
        auto dropmimedata_cb = kcolorschememodel_dropmimedata_callback;
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
        return KColorSchemeModel::dropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
        if (kcolorschememodel_flags_isbase) {
            kcolorschememodel_flags_isbase = false;
            return KColorSchemeModel::flags(index);
        }
        auto flags_cb = kcolorschememodel_flags_callback;
        if (flags_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            int callback_ret = flags_cb(this, cbval1);
            return static_cast<Qt::ItemFlags>(callback_ret);
        }
        return KColorSchemeModel::flags(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
        if (kcolorschememodel_setdata_isbase) {
            kcolorschememodel_setdata_isbase = false;
            return KColorSchemeModel::setData(index, value, role);
        }
        auto setdata_cb = kcolorschememodel_setdata_callback;
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
        return KColorSchemeModel::setData(index, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
        if (kcolorschememodel_headerdata_isbase) {
            kcolorschememodel_headerdata_isbase = false;
            return KColorSchemeModel::headerData(section, orientation, role);
        }
        auto headerdata_cb = kcolorschememodel_headerdata_callback;
        if (headerdata_cb) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            int cbval3 = role;

            QVariant* callback_ret = headerdata_cb(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        }
        return KColorSchemeModel::headerData(section, orientation, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
        if (kcolorschememodel_setheaderdata_isbase) {
            kcolorschememodel_setheaderdata_isbase = false;
            return KColorSchemeModel::setHeaderData(section, orientation, value, role);
        }
        auto setheaderdata_cb = kcolorschememodel_setheaderdata_callback;
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
        return KColorSchemeModel::setHeaderData(section, orientation, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
        if (kcolorschememodel_itemdata_isbase) {
            kcolorschememodel_itemdata_isbase = false;
            return KColorSchemeModel::itemData(index);
        }
        auto itemdata_cb = kcolorschememodel_itemdata_callback;
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
        return KColorSchemeModel::itemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
        if (kcolorschememodel_setitemdata_isbase) {
            kcolorschememodel_setitemdata_isbase = false;
            return KColorSchemeModel::setItemData(index, roles);
        }
        auto setitemdata_cb = kcolorschememodel_setitemdata_callback;
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
        return KColorSchemeModel::setItemData(index, roles);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool clearItemData(const QModelIndex& index) override {
        if (kcolorschememodel_clearitemdata_isbase) {
            kcolorschememodel_clearitemdata_isbase = false;
            return KColorSchemeModel::clearItemData(index);
        }
        auto clearitemdata_cb = kcolorschememodel_clearitemdata_callback;
        if (clearitemdata_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            bool callback_ret = clearitemdata_cb(this, cbval1);
            return callback_ret;
        }
        return KColorSchemeModel::clearItemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> mimeTypes() const override {
        if (kcolorschememodel_mimetypes_isbase) {
            kcolorschememodel_mimetypes_isbase = false;
            return KColorSchemeModel::mimeTypes();
        }
        auto mimetypes_cb = kcolorschememodel_mimetypes_callback;
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
        return KColorSchemeModel::mimeTypes();
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* mimeData(const QList<QModelIndex>& indexes) const override {
        if (kcolorschememodel_mimedata_isbase) {
            kcolorschememodel_mimedata_isbase = false;
            return KColorSchemeModel::mimeData(indexes);
        }
        auto mimedata_cb = kcolorschememodel_mimedata_callback;
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
        return KColorSchemeModel::mimeData(indexes);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
        if (kcolorschememodel_candropmimedata_isbase) {
            kcolorschememodel_candropmimedata_isbase = false;
            return KColorSchemeModel::canDropMimeData(data, action, row, column, parent);
        }
        auto candropmimedata_cb = kcolorschememodel_candropmimedata_callback;
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
        return KColorSchemeModel::canDropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (kcolorschememodel_supporteddropactions_isbase) {
            kcolorschememodel_supporteddropactions_isbase = false;
            return KColorSchemeModel::supportedDropActions();
        }
        auto supporteddropactions_cb = kcolorschememodel_supporteddropactions_callback;
        if (supporteddropactions_cb) {
            int callback_ret = supporteddropactions_cb();
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return KColorSchemeModel::supportedDropActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDragActions() const override {
        if (kcolorschememodel_supporteddragactions_isbase) {
            kcolorschememodel_supporteddragactions_isbase = false;
            return KColorSchemeModel::supportedDragActions();
        }
        auto supporteddragactions_cb = kcolorschememodel_supporteddragactions_callback;
        if (supporteddragactions_cb) {
            int callback_ret = supporteddragactions_cb();
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return KColorSchemeModel::supportedDragActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
        if (kcolorschememodel_insertrows_isbase) {
            kcolorschememodel_insertrows_isbase = false;
            return KColorSchemeModel::insertRows(row, count, parent);
        }
        auto insertrows_cb = kcolorschememodel_insertrows_callback;
        if (insertrows_cb) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = insertrows_cb(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KColorSchemeModel::insertRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
        if (kcolorschememodel_insertcolumns_isbase) {
            kcolorschememodel_insertcolumns_isbase = false;
            return KColorSchemeModel::insertColumns(column, count, parent);
        }
        auto insertcolumns_cb = kcolorschememodel_insertcolumns_callback;
        if (insertcolumns_cb) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = insertcolumns_cb(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KColorSchemeModel::insertColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
        if (kcolorschememodel_removerows_isbase) {
            kcolorschememodel_removerows_isbase = false;
            return KColorSchemeModel::removeRows(row, count, parent);
        }
        auto removerows_cb = kcolorschememodel_removerows_callback;
        if (removerows_cb) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = removerows_cb(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KColorSchemeModel::removeRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
        if (kcolorschememodel_removecolumns_isbase) {
            kcolorschememodel_removecolumns_isbase = false;
            return KColorSchemeModel::removeColumns(column, count, parent);
        }
        auto removecolumns_cb = kcolorschememodel_removecolumns_callback;
        if (removecolumns_cb) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = removecolumns_cb(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KColorSchemeModel::removeColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (kcolorschememodel_moverows_isbase) {
            kcolorschememodel_moverows_isbase = false;
            return KColorSchemeModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
        }
        auto moverows_cb = kcolorschememodel_moverows_callback;
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
        return KColorSchemeModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (kcolorschememodel_movecolumns_isbase) {
            kcolorschememodel_movecolumns_isbase = false;
            return KColorSchemeModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
        }
        auto movecolumns_cb = kcolorschememodel_movecolumns_callback;
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
        return KColorSchemeModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual void fetchMore(const QModelIndex& parent) override {
        if (kcolorschememodel_fetchmore_isbase) {
            kcolorschememodel_fetchmore_isbase = false;
            KColorSchemeModel::fetchMore(parent);
            return;
        }
        auto fetchmore_cb = kcolorschememodel_fetchmore_callback;
        if (fetchmore_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            fetchmore_cb(this, cbval1);
            return;
        }
        KColorSchemeModel::fetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canFetchMore(const QModelIndex& parent) const override {
        if (kcolorschememodel_canfetchmore_isbase) {
            kcolorschememodel_canfetchmore_isbase = false;
            return KColorSchemeModel::canFetchMore(parent);
        }
        auto canfetchmore_cb = kcolorschememodel_canfetchmore_callback;
        if (canfetchmore_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = canfetchmore_cb(this, cbval1);
            return callback_ret;
        }
        return KColorSchemeModel::canFetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void sort(int column, Qt::SortOrder order) override {
        if (kcolorschememodel_sort_isbase) {
            kcolorschememodel_sort_isbase = false;
            KColorSchemeModel::sort(column, order);
            return;
        }
        auto sort_cb = kcolorschememodel_sort_callback;
        if (sort_cb) {
            int cbval1 = column;
            int cbval2 = static_cast<int>(order);

            sort_cb(this, cbval1, cbval2);
            return;
        }
        KColorSchemeModel::sort(column, order);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex buddy(const QModelIndex& index) const override {
        if (kcolorschememodel_buddy_isbase) {
            kcolorschememodel_buddy_isbase = false;
            return KColorSchemeModel::buddy(index);
        }
        auto buddy_cb = kcolorschememodel_buddy_callback;
        if (buddy_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QModelIndex* callback_ret = buddy_cb(this, cbval1);
            return *callback_ret;
        }
        return KColorSchemeModel::buddy(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
        if (kcolorschememodel_match_isbase) {
            kcolorschememodel_match_isbase = false;
            return KColorSchemeModel::match(start, role, value, hits, flags);
        }
        auto match_cb = kcolorschememodel_match_callback;
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
        return KColorSchemeModel::match(start, role, value, hits, flags);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize span(const QModelIndex& index) const override {
        if (kcolorschememodel_span_isbase) {
            kcolorschememodel_span_isbase = false;
            return KColorSchemeModel::span(index);
        }
        auto span_cb = kcolorschememodel_span_callback;
        if (span_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QSize* callback_ret = span_cb(this, cbval1);
            return *callback_ret;
        }
        return KColorSchemeModel::span(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QHash<int, QByteArray> roleNames() const override {
        if (kcolorschememodel_rolenames_isbase) {
            kcolorschememodel_rolenames_isbase = false;
            return KColorSchemeModel::roleNames();
        }
        auto rolenames_cb = kcolorschememodel_rolenames_callback;
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
        return KColorSchemeModel::roleNames();
    }

    // Virtual method for C ABI access and custom callback
    virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
        if (kcolorschememodel_multidata_isbase) {
            kcolorschememodel_multidata_isbase = false;
            KColorSchemeModel::multiData(index, roleDataSpan);
            return;
        }
        auto multidata_cb = kcolorschememodel_multidata_callback;
        if (multidata_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelRoleDataSpan* cbval2 = new QModelRoleDataSpan(roleDataSpan);

            multidata_cb(this, cbval1, cbval2);
            return;
        }
        KColorSchemeModel::multiData(index, roleDataSpan);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool submit() override {
        if (kcolorschememodel_submit_isbase) {
            kcolorschememodel_submit_isbase = false;
            return KColorSchemeModel::submit();
        }
        auto submit_cb = kcolorschememodel_submit_callback;
        if (submit_cb) {
            bool callback_ret = submit_cb();
            return callback_ret;
        }
        return KColorSchemeModel::submit();
    }

    // Virtual method for C ABI access and custom callback
    virtual void revert() override {
        if (kcolorschememodel_revert_isbase) {
            kcolorschememodel_revert_isbase = false;
            KColorSchemeModel::revert();
            return;
        }
        auto revert_cb = kcolorschememodel_revert_callback;
        if (revert_cb) {
            revert_cb();
            return;
        }
        KColorSchemeModel::revert();
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetInternalData() override {
        if (kcolorschememodel_resetinternaldata_isbase) {
            kcolorschememodel_resetinternaldata_isbase = false;
            KColorSchemeModel::resetInternalData();
            return;
        }
        auto resetinternaldata_cb = kcolorschememodel_resetinternaldata_callback;
        if (resetinternaldata_cb) {
            resetinternaldata_cb();
            return;
        }
        KColorSchemeModel::resetInternalData();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kcolorschememodel_event_isbase) {
            kcolorschememodel_event_isbase = false;
            return KColorSchemeModel::event(event);
        }
        auto event_cb = kcolorschememodel_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KColorSchemeModel::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kcolorschememodel_eventfilter_isbase) {
            kcolorschememodel_eventfilter_isbase = false;
            return KColorSchemeModel::eventFilter(watched, event);
        }
        auto eventfilter_cb = kcolorschememodel_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KColorSchemeModel::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kcolorschememodel_timerevent_isbase) {
            kcolorschememodel_timerevent_isbase = false;
            KColorSchemeModel::timerEvent(event);
            return;
        }
        auto timerevent_cb = kcolorschememodel_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KColorSchemeModel::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kcolorschememodel_childevent_isbase) {
            kcolorschememodel_childevent_isbase = false;
            KColorSchemeModel::childEvent(event);
            return;
        }
        auto childevent_cb = kcolorschememodel_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KColorSchemeModel::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kcolorschememodel_customevent_isbase) {
            kcolorschememodel_customevent_isbase = false;
            KColorSchemeModel::customEvent(event);
            return;
        }
        auto customevent_cb = kcolorschememodel_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KColorSchemeModel::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kcolorschememodel_connectnotify_isbase) {
            kcolorschememodel_connectnotify_isbase = false;
            KColorSchemeModel::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = kcolorschememodel_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KColorSchemeModel::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kcolorschememodel_disconnectnotify_isbase) {
            kcolorschememodel_disconnectnotify_isbase = false;
            KColorSchemeModel::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = kcolorschememodel_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KColorSchemeModel::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QModelIndex createIndex(int row, int column) const {
        if (kcolorschememodel_createindex_isbase) {
            kcolorschememodel_createindex_isbase = false;
            return KColorSchemeModel::createIndex(row, column);
        }
        auto createindex_cb = kcolorschememodel_createindex_callback;
        if (createindex_cb) {
            int cbval1 = row;
            int cbval2 = column;

            QModelIndex* callback_ret = createindex_cb(this, cbval1, cbval2);
            return *callback_ret;
        }
        return KColorSchemeModel::createIndex(row, column);
    }

    // Virtual method for C ABI access and custom callback
    void encodeData(const QList<QModelIndex>& indexes, QDataStream& stream) const {
        if (kcolorschememodel_encodedata_isbase) {
            kcolorschememodel_encodedata_isbase = false;
            KColorSchemeModel::encodeData(indexes, stream);
            return;
        }
        auto encodedata_cb = kcolorschememodel_encodedata_callback;
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
        KColorSchemeModel::encodeData(indexes, stream);
    }

    // Virtual method for C ABI access and custom callback
    bool decodeData(int row, int column, const QModelIndex& parent, QDataStream& stream) {
        if (kcolorschememodel_decodedata_isbase) {
            kcolorschememodel_decodedata_isbase = false;
            return KColorSchemeModel::decodeData(row, column, parent, stream);
        }
        auto decodedata_cb = kcolorschememodel_decodedata_callback;
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
        return KColorSchemeModel::decodeData(row, column, parent, stream);
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertRows(const QModelIndex& parent, int first, int last) {
        if (kcolorschememodel_begininsertrows_isbase) {
            kcolorschememodel_begininsertrows_isbase = false;
            KColorSchemeModel::beginInsertRows(parent, first, last);
            return;
        }
        auto begininsertrows_cb = kcolorschememodel_begininsertrows_callback;
        if (begininsertrows_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            begininsertrows_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        KColorSchemeModel::beginInsertRows(parent, first, last);
    }

    // Virtual method for C ABI access and custom callback
    void endInsertRows() {
        if (kcolorschememodel_endinsertrows_isbase) {
            kcolorschememodel_endinsertrows_isbase = false;
            KColorSchemeModel::endInsertRows();
            return;
        }
        auto endinsertrows_cb = kcolorschememodel_endinsertrows_callback;
        if (endinsertrows_cb) {
            endinsertrows_cb();
            return;
        }
        KColorSchemeModel::endInsertRows();
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveRows(const QModelIndex& parent, int first, int last) {
        if (kcolorschememodel_beginremoverows_isbase) {
            kcolorschememodel_beginremoverows_isbase = false;
            KColorSchemeModel::beginRemoveRows(parent, first, last);
            return;
        }
        auto beginremoverows_cb = kcolorschememodel_beginremoverows_callback;
        if (beginremoverows_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            beginremoverows_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        KColorSchemeModel::beginRemoveRows(parent, first, last);
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveRows() {
        if (kcolorschememodel_endremoverows_isbase) {
            kcolorschememodel_endremoverows_isbase = false;
            KColorSchemeModel::endRemoveRows();
            return;
        }
        auto endremoverows_cb = kcolorschememodel_endremoverows_callback;
        if (endremoverows_cb) {
            endremoverows_cb();
            return;
        }
        KColorSchemeModel::endRemoveRows();
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveRows(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationRow) {
        if (kcolorschememodel_beginmoverows_isbase) {
            kcolorschememodel_beginmoverows_isbase = false;
            return KColorSchemeModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
        }
        auto beginmoverows_cb = kcolorschememodel_beginmoverows_callback;
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
        return KColorSchemeModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
    }

    // Virtual method for C ABI access and custom callback
    void endMoveRows() {
        if (kcolorschememodel_endmoverows_isbase) {
            kcolorschememodel_endmoverows_isbase = false;
            KColorSchemeModel::endMoveRows();
            return;
        }
        auto endmoverows_cb = kcolorschememodel_endmoverows_callback;
        if (endmoverows_cb) {
            endmoverows_cb();
            return;
        }
        KColorSchemeModel::endMoveRows();
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertColumns(const QModelIndex& parent, int first, int last) {
        if (kcolorschememodel_begininsertcolumns_isbase) {
            kcolorschememodel_begininsertcolumns_isbase = false;
            KColorSchemeModel::beginInsertColumns(parent, first, last);
            return;
        }
        auto begininsertcolumns_cb = kcolorschememodel_begininsertcolumns_callback;
        if (begininsertcolumns_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            begininsertcolumns_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        KColorSchemeModel::beginInsertColumns(parent, first, last);
    }

    // Virtual method for C ABI access and custom callback
    void endInsertColumns() {
        if (kcolorschememodel_endinsertcolumns_isbase) {
            kcolorschememodel_endinsertcolumns_isbase = false;
            KColorSchemeModel::endInsertColumns();
            return;
        }
        auto endinsertcolumns_cb = kcolorschememodel_endinsertcolumns_callback;
        if (endinsertcolumns_cb) {
            endinsertcolumns_cb();
            return;
        }
        KColorSchemeModel::endInsertColumns();
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveColumns(const QModelIndex& parent, int first, int last) {
        if (kcolorschememodel_beginremovecolumns_isbase) {
            kcolorschememodel_beginremovecolumns_isbase = false;
            KColorSchemeModel::beginRemoveColumns(parent, first, last);
            return;
        }
        auto beginremovecolumns_cb = kcolorschememodel_beginremovecolumns_callback;
        if (beginremovecolumns_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            beginremovecolumns_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        KColorSchemeModel::beginRemoveColumns(parent, first, last);
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveColumns() {
        if (kcolorschememodel_endremovecolumns_isbase) {
            kcolorschememodel_endremovecolumns_isbase = false;
            KColorSchemeModel::endRemoveColumns();
            return;
        }
        auto endremovecolumns_cb = kcolorschememodel_endremovecolumns_callback;
        if (endremovecolumns_cb) {
            endremovecolumns_cb();
            return;
        }
        KColorSchemeModel::endRemoveColumns();
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveColumns(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationColumn) {
        if (kcolorschememodel_beginmovecolumns_isbase) {
            kcolorschememodel_beginmovecolumns_isbase = false;
            return KColorSchemeModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
        }
        auto beginmovecolumns_cb = kcolorschememodel_beginmovecolumns_callback;
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
        return KColorSchemeModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
    }

    // Virtual method for C ABI access and custom callback
    void endMoveColumns() {
        if (kcolorschememodel_endmovecolumns_isbase) {
            kcolorschememodel_endmovecolumns_isbase = false;
            KColorSchemeModel::endMoveColumns();
            return;
        }
        auto endmovecolumns_cb = kcolorschememodel_endmovecolumns_callback;
        if (endmovecolumns_cb) {
            endmovecolumns_cb();
            return;
        }
        KColorSchemeModel::endMoveColumns();
    }

    // Virtual method for C ABI access and custom callback
    void beginResetModel() {
        if (kcolorschememodel_beginresetmodel_isbase) {
            kcolorschememodel_beginresetmodel_isbase = false;
            KColorSchemeModel::beginResetModel();
            return;
        }
        auto beginresetmodel_cb = kcolorschememodel_beginresetmodel_callback;
        if (beginresetmodel_cb) {
            beginresetmodel_cb();
            return;
        }
        KColorSchemeModel::beginResetModel();
    }

    // Virtual method for C ABI access and custom callback
    void endResetModel() {
        if (kcolorschememodel_endresetmodel_isbase) {
            kcolorschememodel_endresetmodel_isbase = false;
            KColorSchemeModel::endResetModel();
            return;
        }
        auto endresetmodel_cb = kcolorschememodel_endresetmodel_callback;
        if (endresetmodel_cb) {
            endresetmodel_cb();
            return;
        }
        KColorSchemeModel::endResetModel();
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndex(const QModelIndex& from, const QModelIndex& to) {
        if (kcolorschememodel_changepersistentindex_isbase) {
            kcolorschememodel_changepersistentindex_isbase = false;
            KColorSchemeModel::changePersistentIndex(from, to);
            return;
        }
        auto changepersistentindex_cb = kcolorschememodel_changepersistentindex_callback;
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
        KColorSchemeModel::changePersistentIndex(from, to);
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndexList(const QList<QModelIndex>& from, const QList<QModelIndex>& to) {
        if (kcolorschememodel_changepersistentindexlist_isbase) {
            kcolorschememodel_changepersistentindexlist_isbase = false;
            KColorSchemeModel::changePersistentIndexList(from, to);
            return;
        }
        auto changepersistentindexlist_cb = kcolorschememodel_changepersistentindexlist_callback;
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
        KColorSchemeModel::changePersistentIndexList(from, to);
    }

    // Virtual method for C ABI access and custom callback
    QList<QModelIndex> persistentIndexList() const {
        if (kcolorschememodel_persistentindexlist_isbase) {
            kcolorschememodel_persistentindexlist_isbase = false;
            return KColorSchemeModel::persistentIndexList();
        }
        auto persistentindexlist_cb = kcolorschememodel_persistentindexlist_callback;
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
        return KColorSchemeModel::persistentIndexList();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kcolorschememodel_sender_isbase) {
            kcolorschememodel_sender_isbase = false;
            return KColorSchemeModel::sender();
        }
        auto sender_cb = kcolorschememodel_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KColorSchemeModel::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kcolorschememodel_sendersignalindex_isbase) {
            kcolorschememodel_sendersignalindex_isbase = false;
            return KColorSchemeModel::senderSignalIndex();
        }
        auto sendersignalindex_cb = kcolorschememodel_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KColorSchemeModel::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kcolorschememodel_receivers_isbase) {
            kcolorschememodel_receivers_isbase = false;
            return KColorSchemeModel::receivers(signal);
        }
        auto receivers_cb = kcolorschememodel_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KColorSchemeModel::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kcolorschememodel_issignalconnected_isbase) {
            kcolorschememodel_issignalconnected_isbase = false;
            return KColorSchemeModel::isSignalConnected(signal);
        }
        auto issignalconnected_cb = kcolorschememodel_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KColorSchemeModel::isSignalConnected(signal);
    }

    // Friend functions
    friend void KColorSchemeModel_ResetInternalData(KColorSchemeModel* self);
    friend void KColorSchemeModel_SuperResetInternalData(KColorSchemeModel* self);
    friend void KColorSchemeModel_TimerEvent(KColorSchemeModel* self, QTimerEvent* event);
    friend void KColorSchemeModel_SuperTimerEvent(KColorSchemeModel* self, QTimerEvent* event);
    friend void KColorSchemeModel_ChildEvent(KColorSchemeModel* self, QChildEvent* event);
    friend void KColorSchemeModel_SuperChildEvent(KColorSchemeModel* self, QChildEvent* event);
    friend void KColorSchemeModel_CustomEvent(KColorSchemeModel* self, QEvent* event);
    friend void KColorSchemeModel_SuperCustomEvent(KColorSchemeModel* self, QEvent* event);
    friend void KColorSchemeModel_ConnectNotify(KColorSchemeModel* self, const QMetaMethod* signal);
    friend void KColorSchemeModel_SuperConnectNotify(KColorSchemeModel* self, const QMetaMethod* signal);
    friend void KColorSchemeModel_DisconnectNotify(KColorSchemeModel* self, const QMetaMethod* signal);
    friend void KColorSchemeModel_SuperDisconnectNotify(KColorSchemeModel* self, const QMetaMethod* signal);
    friend QModelIndex* KColorSchemeModel_CreateIndex(const KColorSchemeModel* self, int row, int column);
    friend QModelIndex* KColorSchemeModel_SuperCreateIndex(const KColorSchemeModel* self, int row, int column);
    friend void KColorSchemeModel_EncodeData(const KColorSchemeModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
    friend void KColorSchemeModel_SuperEncodeData(const KColorSchemeModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
    friend bool KColorSchemeModel_DecodeData(KColorSchemeModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
    friend bool KColorSchemeModel_SuperDecodeData(KColorSchemeModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
    friend void KColorSchemeModel_BeginInsertRows(KColorSchemeModel* self, const QModelIndex* parent, int first, int last);
    friend void KColorSchemeModel_SuperBeginInsertRows(KColorSchemeModel* self, const QModelIndex* parent, int first, int last);
    friend void KColorSchemeModel_EndInsertRows(KColorSchemeModel* self);
    friend void KColorSchemeModel_SuperEndInsertRows(KColorSchemeModel* self);
    friend void KColorSchemeModel_BeginRemoveRows(KColorSchemeModel* self, const QModelIndex* parent, int first, int last);
    friend void KColorSchemeModel_SuperBeginRemoveRows(KColorSchemeModel* self, const QModelIndex* parent, int first, int last);
    friend void KColorSchemeModel_EndRemoveRows(KColorSchemeModel* self);
    friend void KColorSchemeModel_SuperEndRemoveRows(KColorSchemeModel* self);
    friend bool KColorSchemeModel_BeginMoveRows(KColorSchemeModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
    friend bool KColorSchemeModel_SuperBeginMoveRows(KColorSchemeModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
    friend void KColorSchemeModel_EndMoveRows(KColorSchemeModel* self);
    friend void KColorSchemeModel_SuperEndMoveRows(KColorSchemeModel* self);
    friend void KColorSchemeModel_BeginInsertColumns(KColorSchemeModel* self, const QModelIndex* parent, int first, int last);
    friend void KColorSchemeModel_SuperBeginInsertColumns(KColorSchemeModel* self, const QModelIndex* parent, int first, int last);
    friend void KColorSchemeModel_EndInsertColumns(KColorSchemeModel* self);
    friend void KColorSchemeModel_SuperEndInsertColumns(KColorSchemeModel* self);
    friend void KColorSchemeModel_BeginRemoveColumns(KColorSchemeModel* self, const QModelIndex* parent, int first, int last);
    friend void KColorSchemeModel_SuperBeginRemoveColumns(KColorSchemeModel* self, const QModelIndex* parent, int first, int last);
    friend void KColorSchemeModel_EndRemoveColumns(KColorSchemeModel* self);
    friend void KColorSchemeModel_SuperEndRemoveColumns(KColorSchemeModel* self);
    friend bool KColorSchemeModel_BeginMoveColumns(KColorSchemeModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
    friend bool KColorSchemeModel_SuperBeginMoveColumns(KColorSchemeModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
    friend void KColorSchemeModel_EndMoveColumns(KColorSchemeModel* self);
    friend void KColorSchemeModel_SuperEndMoveColumns(KColorSchemeModel* self);
    friend void KColorSchemeModel_BeginResetModel(KColorSchemeModel* self);
    friend void KColorSchemeModel_SuperBeginResetModel(KColorSchemeModel* self);
    friend void KColorSchemeModel_EndResetModel(KColorSchemeModel* self);
    friend void KColorSchemeModel_SuperEndResetModel(KColorSchemeModel* self);
    friend void KColorSchemeModel_ChangePersistentIndex(KColorSchemeModel* self, const QModelIndex* from, const QModelIndex* to);
    friend void KColorSchemeModel_SuperChangePersistentIndex(KColorSchemeModel* self, const QModelIndex* from, const QModelIndex* to);
    friend void KColorSchemeModel_ChangePersistentIndexList(KColorSchemeModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
    friend void KColorSchemeModel_SuperChangePersistentIndexList(KColorSchemeModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
    friend libqt_list /* of QModelIndex* */ KColorSchemeModel_PersistentIndexList(const KColorSchemeModel* self);
    friend libqt_list /* of QModelIndex* */ KColorSchemeModel_SuperPersistentIndexList(const KColorSchemeModel* self);
    friend QObject* KColorSchemeModel_Sender(const KColorSchemeModel* self);
    friend QObject* KColorSchemeModel_SuperSender(const KColorSchemeModel* self);
    friend int KColorSchemeModel_SenderSignalIndex(const KColorSchemeModel* self);
    friend int KColorSchemeModel_SuperSenderSignalIndex(const KColorSchemeModel* self);
    friend int KColorSchemeModel_Receivers(const KColorSchemeModel* self, const char* signal);
    friend int KColorSchemeModel_SuperReceivers(const KColorSchemeModel* self, const char* signal);
    friend bool KColorSchemeModel_IsSignalConnected(const KColorSchemeModel* self, const QMetaMethod* signal);
    friend bool KColorSchemeModel_SuperIsSignalConnected(const KColorSchemeModel* self, const QMetaMethod* signal);
};

#endif
