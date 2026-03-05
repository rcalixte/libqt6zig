#pragma once
#ifndef SRC_EXTRAS_KNEWSTUFFC_LIBVIRTUALPROVIDERSMODEL_H
#define SRC_EXTRAS_KNEWSTUFFC_LIBVIRTUALPROVIDERSMODEL_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KNSCore::ProvidersModel so that we can call protected methods
class VirtualKNSCoreProvidersModel final : public KNSCore::ProvidersModel {

  public:
    // Virtual class boolean flag
    bool isVirtualKNSCoreProvidersModel = true;

    // Virtual class public types (including callbacks)
    using KNSCore__ProvidersModel_MetaObject_Callback = QMetaObject* (*)();
    using KNSCore__ProvidersModel_Metacast_Callback = void* (*)(KNSCore__ProvidersModel*, const char*);
    using KNSCore__ProvidersModel_Metacall_Callback = int (*)(KNSCore__ProvidersModel*, int, int, void**);
    using KNSCore__ProvidersModel_RoleNames_Callback = libqt_map /* of int to libqt_string */ (*)();
    using KNSCore__ProvidersModel_Data_Callback = QVariant* (*)(const KNSCore__ProvidersModel*, QModelIndex*, int);
    using KNSCore__ProvidersModel_RowCount_Callback = int (*)(const KNSCore__ProvidersModel*, QModelIndex*);
    using KNSCore__ProvidersModel_Index_Callback = QModelIndex* (*)(const KNSCore__ProvidersModel*, int, int, QModelIndex*);
    using KNSCore__ProvidersModel_Sibling_Callback = QModelIndex* (*)(const KNSCore__ProvidersModel*, int, int, QModelIndex*);
    using KNSCore__ProvidersModel_DropMimeData_Callback = bool (*)(KNSCore__ProvidersModel*, QMimeData*, int, int, int, QModelIndex*);
    using KNSCore__ProvidersModel_Flags_Callback = int (*)(const KNSCore__ProvidersModel*, QModelIndex*);
    using KNSCore__ProvidersModel_SetData_Callback = bool (*)(KNSCore__ProvidersModel*, QModelIndex*, QVariant*, int);
    using KNSCore__ProvidersModel_HeaderData_Callback = QVariant* (*)(const KNSCore__ProvidersModel*, int, int, int);
    using KNSCore__ProvidersModel_SetHeaderData_Callback = bool (*)(KNSCore__ProvidersModel*, int, int, QVariant*, int);
    using KNSCore__ProvidersModel_ItemData_Callback = libqt_map /* of int to QVariant* */ (*)(const KNSCore__ProvidersModel*, QModelIndex*);
    using KNSCore__ProvidersModel_SetItemData_Callback = bool (*)(KNSCore__ProvidersModel*, QModelIndex*, libqt_map /* of int to QVariant* */);
    using KNSCore__ProvidersModel_ClearItemData_Callback = bool (*)(KNSCore__ProvidersModel*, QModelIndex*);
    using KNSCore__ProvidersModel_MimeTypes_Callback = const char** (*)();
    using KNSCore__ProvidersModel_MimeData_Callback = QMimeData* (*)(const KNSCore__ProvidersModel*, libqt_list /* of QModelIndex* */);
    using KNSCore__ProvidersModel_CanDropMimeData_Callback = bool (*)(const KNSCore__ProvidersModel*, QMimeData*, int, int, int, QModelIndex*);
    using KNSCore__ProvidersModel_SupportedDropActions_Callback = int (*)();
    using KNSCore__ProvidersModel_SupportedDragActions_Callback = int (*)();
    using KNSCore__ProvidersModel_InsertRows_Callback = bool (*)(KNSCore__ProvidersModel*, int, int, QModelIndex*);
    using KNSCore__ProvidersModel_InsertColumns_Callback = bool (*)(KNSCore__ProvidersModel*, int, int, QModelIndex*);
    using KNSCore__ProvidersModel_RemoveRows_Callback = bool (*)(KNSCore__ProvidersModel*, int, int, QModelIndex*);
    using KNSCore__ProvidersModel_RemoveColumns_Callback = bool (*)(KNSCore__ProvidersModel*, int, int, QModelIndex*);
    using KNSCore__ProvidersModel_MoveRows_Callback = bool (*)(KNSCore__ProvidersModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KNSCore__ProvidersModel_MoveColumns_Callback = bool (*)(KNSCore__ProvidersModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KNSCore__ProvidersModel_FetchMore_Callback = void (*)(KNSCore__ProvidersModel*, QModelIndex*);
    using KNSCore__ProvidersModel_CanFetchMore_Callback = bool (*)(const KNSCore__ProvidersModel*, QModelIndex*);
    using KNSCore__ProvidersModel_Sort_Callback = void (*)(KNSCore__ProvidersModel*, int, int);
    using KNSCore__ProvidersModel_Buddy_Callback = QModelIndex* (*)(const KNSCore__ProvidersModel*, QModelIndex*);
    using KNSCore__ProvidersModel_Match_Callback = libqt_list /* of QModelIndex* */ (*)(const KNSCore__ProvidersModel*, QModelIndex*, int, QVariant*, int, int);
    using KNSCore__ProvidersModel_Span_Callback = QSize* (*)(const KNSCore__ProvidersModel*, QModelIndex*);
    using KNSCore__ProvidersModel_MultiData_Callback = void (*)(const KNSCore__ProvidersModel*, QModelIndex*, QModelRoleDataSpan*);
    using KNSCore__ProvidersModel_Submit_Callback = bool (*)();
    using KNSCore__ProvidersModel_Revert_Callback = void (*)();
    using KNSCore__ProvidersModel_ResetInternalData_Callback = void (*)();
    using KNSCore__ProvidersModel_Event_Callback = bool (*)(KNSCore__ProvidersModel*, QEvent*);
    using KNSCore__ProvidersModel_EventFilter_Callback = bool (*)(KNSCore__ProvidersModel*, QObject*, QEvent*);
    using KNSCore__ProvidersModel_TimerEvent_Callback = void (*)(KNSCore__ProvidersModel*, QTimerEvent*);
    using KNSCore__ProvidersModel_ChildEvent_Callback = void (*)(KNSCore__ProvidersModel*, QChildEvent*);
    using KNSCore__ProvidersModel_CustomEvent_Callback = void (*)(KNSCore__ProvidersModel*, QEvent*);
    using KNSCore__ProvidersModel_ConnectNotify_Callback = void (*)(KNSCore__ProvidersModel*, QMetaMethod*);
    using KNSCore__ProvidersModel_DisconnectNotify_Callback = void (*)(KNSCore__ProvidersModel*, QMetaMethod*);
    using KNSCore__ProvidersModel_CreateIndex_Callback = QModelIndex* (*)(const KNSCore__ProvidersModel*, int, int);
    using KNSCore__ProvidersModel_EncodeData_Callback = void (*)(const KNSCore__ProvidersModel*, libqt_list /* of QModelIndex* */, QDataStream*);
    using KNSCore__ProvidersModel_DecodeData_Callback = bool (*)(KNSCore__ProvidersModel*, int, int, QModelIndex*, QDataStream*);
    using KNSCore__ProvidersModel_BeginInsertRows_Callback = void (*)(KNSCore__ProvidersModel*, QModelIndex*, int, int);
    using KNSCore__ProvidersModel_EndInsertRows_Callback = void (*)();
    using KNSCore__ProvidersModel_BeginRemoveRows_Callback = void (*)(KNSCore__ProvidersModel*, QModelIndex*, int, int);
    using KNSCore__ProvidersModel_EndRemoveRows_Callback = void (*)();
    using KNSCore__ProvidersModel_BeginMoveRows_Callback = bool (*)(KNSCore__ProvidersModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KNSCore__ProvidersModel_EndMoveRows_Callback = void (*)();
    using KNSCore__ProvidersModel_BeginInsertColumns_Callback = void (*)(KNSCore__ProvidersModel*, QModelIndex*, int, int);
    using KNSCore__ProvidersModel_EndInsertColumns_Callback = void (*)();
    using KNSCore__ProvidersModel_BeginRemoveColumns_Callback = void (*)(KNSCore__ProvidersModel*, QModelIndex*, int, int);
    using KNSCore__ProvidersModel_EndRemoveColumns_Callback = void (*)();
    using KNSCore__ProvidersModel_BeginMoveColumns_Callback = bool (*)(KNSCore__ProvidersModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KNSCore__ProvidersModel_EndMoveColumns_Callback = void (*)();
    using KNSCore__ProvidersModel_BeginResetModel_Callback = void (*)();
    using KNSCore__ProvidersModel_EndResetModel_Callback = void (*)();
    using KNSCore__ProvidersModel_ChangePersistentIndex_Callback = void (*)(KNSCore__ProvidersModel*, QModelIndex*, QModelIndex*);
    using KNSCore__ProvidersModel_ChangePersistentIndexList_Callback = void (*)(KNSCore__ProvidersModel*, libqt_list /* of QModelIndex* */, libqt_list /* of QModelIndex* */);
    using KNSCore__ProvidersModel_PersistentIndexList_Callback = libqt_list /* of QModelIndex* */ (*)();
    using KNSCore__ProvidersModel_Sender_Callback = QObject* (*)();
    using KNSCore__ProvidersModel_SenderSignalIndex_Callback = int (*)();
    using KNSCore__ProvidersModel_Receivers_Callback = int (*)(const KNSCore__ProvidersModel*, const char*);
    using KNSCore__ProvidersModel_IsSignalConnected_Callback = bool (*)(const KNSCore__ProvidersModel*, QMetaMethod*);

  protected:
    // Instance callback storage
    KNSCore__ProvidersModel_MetaObject_Callback knscore__providersmodel_metaobject_callback = nullptr;
    KNSCore__ProvidersModel_Metacast_Callback knscore__providersmodel_metacast_callback = nullptr;
    KNSCore__ProvidersModel_Metacall_Callback knscore__providersmodel_metacall_callback = nullptr;
    KNSCore__ProvidersModel_RoleNames_Callback knscore__providersmodel_rolenames_callback = nullptr;
    KNSCore__ProvidersModel_Data_Callback knscore__providersmodel_data_callback = nullptr;
    KNSCore__ProvidersModel_RowCount_Callback knscore__providersmodel_rowcount_callback = nullptr;
    KNSCore__ProvidersModel_Index_Callback knscore__providersmodel_index_callback = nullptr;
    KNSCore__ProvidersModel_Sibling_Callback knscore__providersmodel_sibling_callback = nullptr;
    KNSCore__ProvidersModel_DropMimeData_Callback knscore__providersmodel_dropmimedata_callback = nullptr;
    KNSCore__ProvidersModel_Flags_Callback knscore__providersmodel_flags_callback = nullptr;
    KNSCore__ProvidersModel_SetData_Callback knscore__providersmodel_setdata_callback = nullptr;
    KNSCore__ProvidersModel_HeaderData_Callback knscore__providersmodel_headerdata_callback = nullptr;
    KNSCore__ProvidersModel_SetHeaderData_Callback knscore__providersmodel_setheaderdata_callback = nullptr;
    KNSCore__ProvidersModel_ItemData_Callback knscore__providersmodel_itemdata_callback = nullptr;
    KNSCore__ProvidersModel_SetItemData_Callback knscore__providersmodel_setitemdata_callback = nullptr;
    KNSCore__ProvidersModel_ClearItemData_Callback knscore__providersmodel_clearitemdata_callback = nullptr;
    KNSCore__ProvidersModel_MimeTypes_Callback knscore__providersmodel_mimetypes_callback = nullptr;
    KNSCore__ProvidersModel_MimeData_Callback knscore__providersmodel_mimedata_callback = nullptr;
    KNSCore__ProvidersModel_CanDropMimeData_Callback knscore__providersmodel_candropmimedata_callback = nullptr;
    KNSCore__ProvidersModel_SupportedDropActions_Callback knscore__providersmodel_supporteddropactions_callback = nullptr;
    KNSCore__ProvidersModel_SupportedDragActions_Callback knscore__providersmodel_supporteddragactions_callback = nullptr;
    KNSCore__ProvidersModel_InsertRows_Callback knscore__providersmodel_insertrows_callback = nullptr;
    KNSCore__ProvidersModel_InsertColumns_Callback knscore__providersmodel_insertcolumns_callback = nullptr;
    KNSCore__ProvidersModel_RemoveRows_Callback knscore__providersmodel_removerows_callback = nullptr;
    KNSCore__ProvidersModel_RemoveColumns_Callback knscore__providersmodel_removecolumns_callback = nullptr;
    KNSCore__ProvidersModel_MoveRows_Callback knscore__providersmodel_moverows_callback = nullptr;
    KNSCore__ProvidersModel_MoveColumns_Callback knscore__providersmodel_movecolumns_callback = nullptr;
    KNSCore__ProvidersModel_FetchMore_Callback knscore__providersmodel_fetchmore_callback = nullptr;
    KNSCore__ProvidersModel_CanFetchMore_Callback knscore__providersmodel_canfetchmore_callback = nullptr;
    KNSCore__ProvidersModel_Sort_Callback knscore__providersmodel_sort_callback = nullptr;
    KNSCore__ProvidersModel_Buddy_Callback knscore__providersmodel_buddy_callback = nullptr;
    KNSCore__ProvidersModel_Match_Callback knscore__providersmodel_match_callback = nullptr;
    KNSCore__ProvidersModel_Span_Callback knscore__providersmodel_span_callback = nullptr;
    KNSCore__ProvidersModel_MultiData_Callback knscore__providersmodel_multidata_callback = nullptr;
    KNSCore__ProvidersModel_Submit_Callback knscore__providersmodel_submit_callback = nullptr;
    KNSCore__ProvidersModel_Revert_Callback knscore__providersmodel_revert_callback = nullptr;
    KNSCore__ProvidersModel_ResetInternalData_Callback knscore__providersmodel_resetinternaldata_callback = nullptr;
    KNSCore__ProvidersModel_Event_Callback knscore__providersmodel_event_callback = nullptr;
    KNSCore__ProvidersModel_EventFilter_Callback knscore__providersmodel_eventfilter_callback = nullptr;
    KNSCore__ProvidersModel_TimerEvent_Callback knscore__providersmodel_timerevent_callback = nullptr;
    KNSCore__ProvidersModel_ChildEvent_Callback knscore__providersmodel_childevent_callback = nullptr;
    KNSCore__ProvidersModel_CustomEvent_Callback knscore__providersmodel_customevent_callback = nullptr;
    KNSCore__ProvidersModel_ConnectNotify_Callback knscore__providersmodel_connectnotify_callback = nullptr;
    KNSCore__ProvidersModel_DisconnectNotify_Callback knscore__providersmodel_disconnectnotify_callback = nullptr;
    KNSCore__ProvidersModel_CreateIndex_Callback knscore__providersmodel_createindex_callback = nullptr;
    KNSCore__ProvidersModel_EncodeData_Callback knscore__providersmodel_encodedata_callback = nullptr;
    KNSCore__ProvidersModel_DecodeData_Callback knscore__providersmodel_decodedata_callback = nullptr;
    KNSCore__ProvidersModel_BeginInsertRows_Callback knscore__providersmodel_begininsertrows_callback = nullptr;
    KNSCore__ProvidersModel_EndInsertRows_Callback knscore__providersmodel_endinsertrows_callback = nullptr;
    KNSCore__ProvidersModel_BeginRemoveRows_Callback knscore__providersmodel_beginremoverows_callback = nullptr;
    KNSCore__ProvidersModel_EndRemoveRows_Callback knscore__providersmodel_endremoverows_callback = nullptr;
    KNSCore__ProvidersModel_BeginMoveRows_Callback knscore__providersmodel_beginmoverows_callback = nullptr;
    KNSCore__ProvidersModel_EndMoveRows_Callback knscore__providersmodel_endmoverows_callback = nullptr;
    KNSCore__ProvidersModel_BeginInsertColumns_Callback knscore__providersmodel_begininsertcolumns_callback = nullptr;
    KNSCore__ProvidersModel_EndInsertColumns_Callback knscore__providersmodel_endinsertcolumns_callback = nullptr;
    KNSCore__ProvidersModel_BeginRemoveColumns_Callback knscore__providersmodel_beginremovecolumns_callback = nullptr;
    KNSCore__ProvidersModel_EndRemoveColumns_Callback knscore__providersmodel_endremovecolumns_callback = nullptr;
    KNSCore__ProvidersModel_BeginMoveColumns_Callback knscore__providersmodel_beginmovecolumns_callback = nullptr;
    KNSCore__ProvidersModel_EndMoveColumns_Callback knscore__providersmodel_endmovecolumns_callback = nullptr;
    KNSCore__ProvidersModel_BeginResetModel_Callback knscore__providersmodel_beginresetmodel_callback = nullptr;
    KNSCore__ProvidersModel_EndResetModel_Callback knscore__providersmodel_endresetmodel_callback = nullptr;
    KNSCore__ProvidersModel_ChangePersistentIndex_Callback knscore__providersmodel_changepersistentindex_callback = nullptr;
    KNSCore__ProvidersModel_ChangePersistentIndexList_Callback knscore__providersmodel_changepersistentindexlist_callback = nullptr;
    KNSCore__ProvidersModel_PersistentIndexList_Callback knscore__providersmodel_persistentindexlist_callback = nullptr;
    KNSCore__ProvidersModel_Sender_Callback knscore__providersmodel_sender_callback = nullptr;
    KNSCore__ProvidersModel_SenderSignalIndex_Callback knscore__providersmodel_sendersignalindex_callback = nullptr;
    KNSCore__ProvidersModel_Receivers_Callback knscore__providersmodel_receivers_callback = nullptr;
    KNSCore__ProvidersModel_IsSignalConnected_Callback knscore__providersmodel_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool knscore__providersmodel_metaobject_isbase = false;
    mutable bool knscore__providersmodel_metacast_isbase = false;
    mutable bool knscore__providersmodel_metacall_isbase = false;
    mutable bool knscore__providersmodel_rolenames_isbase = false;
    mutable bool knscore__providersmodel_data_isbase = false;
    mutable bool knscore__providersmodel_rowcount_isbase = false;
    mutable bool knscore__providersmodel_index_isbase = false;
    mutable bool knscore__providersmodel_sibling_isbase = false;
    mutable bool knscore__providersmodel_dropmimedata_isbase = false;
    mutable bool knscore__providersmodel_flags_isbase = false;
    mutable bool knscore__providersmodel_setdata_isbase = false;
    mutable bool knscore__providersmodel_headerdata_isbase = false;
    mutable bool knscore__providersmodel_setheaderdata_isbase = false;
    mutable bool knscore__providersmodel_itemdata_isbase = false;
    mutable bool knscore__providersmodel_setitemdata_isbase = false;
    mutable bool knscore__providersmodel_clearitemdata_isbase = false;
    mutable bool knscore__providersmodel_mimetypes_isbase = false;
    mutable bool knscore__providersmodel_mimedata_isbase = false;
    mutable bool knscore__providersmodel_candropmimedata_isbase = false;
    mutable bool knscore__providersmodel_supporteddropactions_isbase = false;
    mutable bool knscore__providersmodel_supporteddragactions_isbase = false;
    mutable bool knscore__providersmodel_insertrows_isbase = false;
    mutable bool knscore__providersmodel_insertcolumns_isbase = false;
    mutable bool knscore__providersmodel_removerows_isbase = false;
    mutable bool knscore__providersmodel_removecolumns_isbase = false;
    mutable bool knscore__providersmodel_moverows_isbase = false;
    mutable bool knscore__providersmodel_movecolumns_isbase = false;
    mutable bool knscore__providersmodel_fetchmore_isbase = false;
    mutable bool knscore__providersmodel_canfetchmore_isbase = false;
    mutable bool knscore__providersmodel_sort_isbase = false;
    mutable bool knscore__providersmodel_buddy_isbase = false;
    mutable bool knscore__providersmodel_match_isbase = false;
    mutable bool knscore__providersmodel_span_isbase = false;
    mutable bool knscore__providersmodel_multidata_isbase = false;
    mutable bool knscore__providersmodel_submit_isbase = false;
    mutable bool knscore__providersmodel_revert_isbase = false;
    mutable bool knscore__providersmodel_resetinternaldata_isbase = false;
    mutable bool knscore__providersmodel_event_isbase = false;
    mutable bool knscore__providersmodel_eventfilter_isbase = false;
    mutable bool knscore__providersmodel_timerevent_isbase = false;
    mutable bool knscore__providersmodel_childevent_isbase = false;
    mutable bool knscore__providersmodel_customevent_isbase = false;
    mutable bool knscore__providersmodel_connectnotify_isbase = false;
    mutable bool knscore__providersmodel_disconnectnotify_isbase = false;
    mutable bool knscore__providersmodel_createindex_isbase = false;
    mutable bool knscore__providersmodel_encodedata_isbase = false;
    mutable bool knscore__providersmodel_decodedata_isbase = false;
    mutable bool knscore__providersmodel_begininsertrows_isbase = false;
    mutable bool knscore__providersmodel_endinsertrows_isbase = false;
    mutable bool knscore__providersmodel_beginremoverows_isbase = false;
    mutable bool knscore__providersmodel_endremoverows_isbase = false;
    mutable bool knscore__providersmodel_beginmoverows_isbase = false;
    mutable bool knscore__providersmodel_endmoverows_isbase = false;
    mutable bool knscore__providersmodel_begininsertcolumns_isbase = false;
    mutable bool knscore__providersmodel_endinsertcolumns_isbase = false;
    mutable bool knscore__providersmodel_beginremovecolumns_isbase = false;
    mutable bool knscore__providersmodel_endremovecolumns_isbase = false;
    mutable bool knscore__providersmodel_beginmovecolumns_isbase = false;
    mutable bool knscore__providersmodel_endmovecolumns_isbase = false;
    mutable bool knscore__providersmodel_beginresetmodel_isbase = false;
    mutable bool knscore__providersmodel_endresetmodel_isbase = false;
    mutable bool knscore__providersmodel_changepersistentindex_isbase = false;
    mutable bool knscore__providersmodel_changepersistentindexlist_isbase = false;
    mutable bool knscore__providersmodel_persistentindexlist_isbase = false;
    mutable bool knscore__providersmodel_sender_isbase = false;
    mutable bool knscore__providersmodel_sendersignalindex_isbase = false;
    mutable bool knscore__providersmodel_receivers_isbase = false;
    mutable bool knscore__providersmodel_issignalconnected_isbase = false;

  public:
    VirtualKNSCoreProvidersModel() : KNSCore::ProvidersModel() {};
    VirtualKNSCoreProvidersModel(QObject* parent) : KNSCore::ProvidersModel(parent) {};

    // Callback setters
    inline void setKNSCore__ProvidersModel_MetaObject_Callback(KNSCore__ProvidersModel_MetaObject_Callback cb) { knscore__providersmodel_metaobject_callback = cb; }
    inline void setKNSCore__ProvidersModel_Metacast_Callback(KNSCore__ProvidersModel_Metacast_Callback cb) { knscore__providersmodel_metacast_callback = cb; }
    inline void setKNSCore__ProvidersModel_Metacall_Callback(KNSCore__ProvidersModel_Metacall_Callback cb) { knscore__providersmodel_metacall_callback = cb; }
    inline void setKNSCore__ProvidersModel_RoleNames_Callback(KNSCore__ProvidersModel_RoleNames_Callback cb) { knscore__providersmodel_rolenames_callback = cb; }
    inline void setKNSCore__ProvidersModel_Data_Callback(KNSCore__ProvidersModel_Data_Callback cb) { knscore__providersmodel_data_callback = cb; }
    inline void setKNSCore__ProvidersModel_RowCount_Callback(KNSCore__ProvidersModel_RowCount_Callback cb) { knscore__providersmodel_rowcount_callback = cb; }
    inline void setKNSCore__ProvidersModel_Index_Callback(KNSCore__ProvidersModel_Index_Callback cb) { knscore__providersmodel_index_callback = cb; }
    inline void setKNSCore__ProvidersModel_Sibling_Callback(KNSCore__ProvidersModel_Sibling_Callback cb) { knscore__providersmodel_sibling_callback = cb; }
    inline void setKNSCore__ProvidersModel_DropMimeData_Callback(KNSCore__ProvidersModel_DropMimeData_Callback cb) { knscore__providersmodel_dropmimedata_callback = cb; }
    inline void setKNSCore__ProvidersModel_Flags_Callback(KNSCore__ProvidersModel_Flags_Callback cb) { knscore__providersmodel_flags_callback = cb; }
    inline void setKNSCore__ProvidersModel_SetData_Callback(KNSCore__ProvidersModel_SetData_Callback cb) { knscore__providersmodel_setdata_callback = cb; }
    inline void setKNSCore__ProvidersModel_HeaderData_Callback(KNSCore__ProvidersModel_HeaderData_Callback cb) { knscore__providersmodel_headerdata_callback = cb; }
    inline void setKNSCore__ProvidersModel_SetHeaderData_Callback(KNSCore__ProvidersModel_SetHeaderData_Callback cb) { knscore__providersmodel_setheaderdata_callback = cb; }
    inline void setKNSCore__ProvidersModel_ItemData_Callback(KNSCore__ProvidersModel_ItemData_Callback cb) { knscore__providersmodel_itemdata_callback = cb; }
    inline void setKNSCore__ProvidersModel_SetItemData_Callback(KNSCore__ProvidersModel_SetItemData_Callback cb) { knscore__providersmodel_setitemdata_callback = cb; }
    inline void setKNSCore__ProvidersModel_ClearItemData_Callback(KNSCore__ProvidersModel_ClearItemData_Callback cb) { knscore__providersmodel_clearitemdata_callback = cb; }
    inline void setKNSCore__ProvidersModel_MimeTypes_Callback(KNSCore__ProvidersModel_MimeTypes_Callback cb) { knscore__providersmodel_mimetypes_callback = cb; }
    inline void setKNSCore__ProvidersModel_MimeData_Callback(KNSCore__ProvidersModel_MimeData_Callback cb) { knscore__providersmodel_mimedata_callback = cb; }
    inline void setKNSCore__ProvidersModel_CanDropMimeData_Callback(KNSCore__ProvidersModel_CanDropMimeData_Callback cb) { knscore__providersmodel_candropmimedata_callback = cb; }
    inline void setKNSCore__ProvidersModel_SupportedDropActions_Callback(KNSCore__ProvidersModel_SupportedDropActions_Callback cb) { knscore__providersmodel_supporteddropactions_callback = cb; }
    inline void setKNSCore__ProvidersModel_SupportedDragActions_Callback(KNSCore__ProvidersModel_SupportedDragActions_Callback cb) { knscore__providersmodel_supporteddragactions_callback = cb; }
    inline void setKNSCore__ProvidersModel_InsertRows_Callback(KNSCore__ProvidersModel_InsertRows_Callback cb) { knscore__providersmodel_insertrows_callback = cb; }
    inline void setKNSCore__ProvidersModel_InsertColumns_Callback(KNSCore__ProvidersModel_InsertColumns_Callback cb) { knscore__providersmodel_insertcolumns_callback = cb; }
    inline void setKNSCore__ProvidersModel_RemoveRows_Callback(KNSCore__ProvidersModel_RemoveRows_Callback cb) { knscore__providersmodel_removerows_callback = cb; }
    inline void setKNSCore__ProvidersModel_RemoveColumns_Callback(KNSCore__ProvidersModel_RemoveColumns_Callback cb) { knscore__providersmodel_removecolumns_callback = cb; }
    inline void setKNSCore__ProvidersModel_MoveRows_Callback(KNSCore__ProvidersModel_MoveRows_Callback cb) { knscore__providersmodel_moverows_callback = cb; }
    inline void setKNSCore__ProvidersModel_MoveColumns_Callback(KNSCore__ProvidersModel_MoveColumns_Callback cb) { knscore__providersmodel_movecolumns_callback = cb; }
    inline void setKNSCore__ProvidersModel_FetchMore_Callback(KNSCore__ProvidersModel_FetchMore_Callback cb) { knscore__providersmodel_fetchmore_callback = cb; }
    inline void setKNSCore__ProvidersModel_CanFetchMore_Callback(KNSCore__ProvidersModel_CanFetchMore_Callback cb) { knscore__providersmodel_canfetchmore_callback = cb; }
    inline void setKNSCore__ProvidersModel_Sort_Callback(KNSCore__ProvidersModel_Sort_Callback cb) { knscore__providersmodel_sort_callback = cb; }
    inline void setKNSCore__ProvidersModel_Buddy_Callback(KNSCore__ProvidersModel_Buddy_Callback cb) { knscore__providersmodel_buddy_callback = cb; }
    inline void setKNSCore__ProvidersModel_Match_Callback(KNSCore__ProvidersModel_Match_Callback cb) { knscore__providersmodel_match_callback = cb; }
    inline void setKNSCore__ProvidersModel_Span_Callback(KNSCore__ProvidersModel_Span_Callback cb) { knscore__providersmodel_span_callback = cb; }
    inline void setKNSCore__ProvidersModel_MultiData_Callback(KNSCore__ProvidersModel_MultiData_Callback cb) { knscore__providersmodel_multidata_callback = cb; }
    inline void setKNSCore__ProvidersModel_Submit_Callback(KNSCore__ProvidersModel_Submit_Callback cb) { knscore__providersmodel_submit_callback = cb; }
    inline void setKNSCore__ProvidersModel_Revert_Callback(KNSCore__ProvidersModel_Revert_Callback cb) { knscore__providersmodel_revert_callback = cb; }
    inline void setKNSCore__ProvidersModel_ResetInternalData_Callback(KNSCore__ProvidersModel_ResetInternalData_Callback cb) { knscore__providersmodel_resetinternaldata_callback = cb; }
    inline void setKNSCore__ProvidersModel_Event_Callback(KNSCore__ProvidersModel_Event_Callback cb) { knscore__providersmodel_event_callback = cb; }
    inline void setKNSCore__ProvidersModel_EventFilter_Callback(KNSCore__ProvidersModel_EventFilter_Callback cb) { knscore__providersmodel_eventfilter_callback = cb; }
    inline void setKNSCore__ProvidersModel_TimerEvent_Callback(KNSCore__ProvidersModel_TimerEvent_Callback cb) { knscore__providersmodel_timerevent_callback = cb; }
    inline void setKNSCore__ProvidersModel_ChildEvent_Callback(KNSCore__ProvidersModel_ChildEvent_Callback cb) { knscore__providersmodel_childevent_callback = cb; }
    inline void setKNSCore__ProvidersModel_CustomEvent_Callback(KNSCore__ProvidersModel_CustomEvent_Callback cb) { knscore__providersmodel_customevent_callback = cb; }
    inline void setKNSCore__ProvidersModel_ConnectNotify_Callback(KNSCore__ProvidersModel_ConnectNotify_Callback cb) { knscore__providersmodel_connectnotify_callback = cb; }
    inline void setKNSCore__ProvidersModel_DisconnectNotify_Callback(KNSCore__ProvidersModel_DisconnectNotify_Callback cb) { knscore__providersmodel_disconnectnotify_callback = cb; }
    inline void setKNSCore__ProvidersModel_CreateIndex_Callback(KNSCore__ProvidersModel_CreateIndex_Callback cb) { knscore__providersmodel_createindex_callback = cb; }
    inline void setKNSCore__ProvidersModel_EncodeData_Callback(KNSCore__ProvidersModel_EncodeData_Callback cb) { knscore__providersmodel_encodedata_callback = cb; }
    inline void setKNSCore__ProvidersModel_DecodeData_Callback(KNSCore__ProvidersModel_DecodeData_Callback cb) { knscore__providersmodel_decodedata_callback = cb; }
    inline void setKNSCore__ProvidersModel_BeginInsertRows_Callback(KNSCore__ProvidersModel_BeginInsertRows_Callback cb) { knscore__providersmodel_begininsertrows_callback = cb; }
    inline void setKNSCore__ProvidersModel_EndInsertRows_Callback(KNSCore__ProvidersModel_EndInsertRows_Callback cb) { knscore__providersmodel_endinsertrows_callback = cb; }
    inline void setKNSCore__ProvidersModel_BeginRemoveRows_Callback(KNSCore__ProvidersModel_BeginRemoveRows_Callback cb) { knscore__providersmodel_beginremoverows_callback = cb; }
    inline void setKNSCore__ProvidersModel_EndRemoveRows_Callback(KNSCore__ProvidersModel_EndRemoveRows_Callback cb) { knscore__providersmodel_endremoverows_callback = cb; }
    inline void setKNSCore__ProvidersModel_BeginMoveRows_Callback(KNSCore__ProvidersModel_BeginMoveRows_Callback cb) { knscore__providersmodel_beginmoverows_callback = cb; }
    inline void setKNSCore__ProvidersModel_EndMoveRows_Callback(KNSCore__ProvidersModel_EndMoveRows_Callback cb) { knscore__providersmodel_endmoverows_callback = cb; }
    inline void setKNSCore__ProvidersModel_BeginInsertColumns_Callback(KNSCore__ProvidersModel_BeginInsertColumns_Callback cb) { knscore__providersmodel_begininsertcolumns_callback = cb; }
    inline void setKNSCore__ProvidersModel_EndInsertColumns_Callback(KNSCore__ProvidersModel_EndInsertColumns_Callback cb) { knscore__providersmodel_endinsertcolumns_callback = cb; }
    inline void setKNSCore__ProvidersModel_BeginRemoveColumns_Callback(KNSCore__ProvidersModel_BeginRemoveColumns_Callback cb) { knscore__providersmodel_beginremovecolumns_callback = cb; }
    inline void setKNSCore__ProvidersModel_EndRemoveColumns_Callback(KNSCore__ProvidersModel_EndRemoveColumns_Callback cb) { knscore__providersmodel_endremovecolumns_callback = cb; }
    inline void setKNSCore__ProvidersModel_BeginMoveColumns_Callback(KNSCore__ProvidersModel_BeginMoveColumns_Callback cb) { knscore__providersmodel_beginmovecolumns_callback = cb; }
    inline void setKNSCore__ProvidersModel_EndMoveColumns_Callback(KNSCore__ProvidersModel_EndMoveColumns_Callback cb) { knscore__providersmodel_endmovecolumns_callback = cb; }
    inline void setKNSCore__ProvidersModel_BeginResetModel_Callback(KNSCore__ProvidersModel_BeginResetModel_Callback cb) { knscore__providersmodel_beginresetmodel_callback = cb; }
    inline void setKNSCore__ProvidersModel_EndResetModel_Callback(KNSCore__ProvidersModel_EndResetModel_Callback cb) { knscore__providersmodel_endresetmodel_callback = cb; }
    inline void setKNSCore__ProvidersModel_ChangePersistentIndex_Callback(KNSCore__ProvidersModel_ChangePersistentIndex_Callback cb) { knscore__providersmodel_changepersistentindex_callback = cb; }
    inline void setKNSCore__ProvidersModel_ChangePersistentIndexList_Callback(KNSCore__ProvidersModel_ChangePersistentIndexList_Callback cb) { knscore__providersmodel_changepersistentindexlist_callback = cb; }
    inline void setKNSCore__ProvidersModel_PersistentIndexList_Callback(KNSCore__ProvidersModel_PersistentIndexList_Callback cb) { knscore__providersmodel_persistentindexlist_callback = cb; }
    inline void setKNSCore__ProvidersModel_Sender_Callback(KNSCore__ProvidersModel_Sender_Callback cb) { knscore__providersmodel_sender_callback = cb; }
    inline void setKNSCore__ProvidersModel_SenderSignalIndex_Callback(KNSCore__ProvidersModel_SenderSignalIndex_Callback cb) { knscore__providersmodel_sendersignalindex_callback = cb; }
    inline void setKNSCore__ProvidersModel_Receivers_Callback(KNSCore__ProvidersModel_Receivers_Callback cb) { knscore__providersmodel_receivers_callback = cb; }
    inline void setKNSCore__ProvidersModel_IsSignalConnected_Callback(KNSCore__ProvidersModel_IsSignalConnected_Callback cb) { knscore__providersmodel_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKNSCore__ProvidersModel_MetaObject_IsBase(bool value) const { knscore__providersmodel_metaobject_isbase = value; }
    inline void setKNSCore__ProvidersModel_Metacast_IsBase(bool value) const { knscore__providersmodel_metacast_isbase = value; }
    inline void setKNSCore__ProvidersModel_Metacall_IsBase(bool value) const { knscore__providersmodel_metacall_isbase = value; }
    inline void setKNSCore__ProvidersModel_RoleNames_IsBase(bool value) const { knscore__providersmodel_rolenames_isbase = value; }
    inline void setKNSCore__ProvidersModel_Data_IsBase(bool value) const { knscore__providersmodel_data_isbase = value; }
    inline void setKNSCore__ProvidersModel_RowCount_IsBase(bool value) const { knscore__providersmodel_rowcount_isbase = value; }
    inline void setKNSCore__ProvidersModel_Index_IsBase(bool value) const { knscore__providersmodel_index_isbase = value; }
    inline void setKNSCore__ProvidersModel_Sibling_IsBase(bool value) const { knscore__providersmodel_sibling_isbase = value; }
    inline void setKNSCore__ProvidersModel_DropMimeData_IsBase(bool value) const { knscore__providersmodel_dropmimedata_isbase = value; }
    inline void setKNSCore__ProvidersModel_Flags_IsBase(bool value) const { knscore__providersmodel_flags_isbase = value; }
    inline void setKNSCore__ProvidersModel_SetData_IsBase(bool value) const { knscore__providersmodel_setdata_isbase = value; }
    inline void setKNSCore__ProvidersModel_HeaderData_IsBase(bool value) const { knscore__providersmodel_headerdata_isbase = value; }
    inline void setKNSCore__ProvidersModel_SetHeaderData_IsBase(bool value) const { knscore__providersmodel_setheaderdata_isbase = value; }
    inline void setKNSCore__ProvidersModel_ItemData_IsBase(bool value) const { knscore__providersmodel_itemdata_isbase = value; }
    inline void setKNSCore__ProvidersModel_SetItemData_IsBase(bool value) const { knscore__providersmodel_setitemdata_isbase = value; }
    inline void setKNSCore__ProvidersModel_ClearItemData_IsBase(bool value) const { knscore__providersmodel_clearitemdata_isbase = value; }
    inline void setKNSCore__ProvidersModel_MimeTypes_IsBase(bool value) const { knscore__providersmodel_mimetypes_isbase = value; }
    inline void setKNSCore__ProvidersModel_MimeData_IsBase(bool value) const { knscore__providersmodel_mimedata_isbase = value; }
    inline void setKNSCore__ProvidersModel_CanDropMimeData_IsBase(bool value) const { knscore__providersmodel_candropmimedata_isbase = value; }
    inline void setKNSCore__ProvidersModel_SupportedDropActions_IsBase(bool value) const { knscore__providersmodel_supporteddropactions_isbase = value; }
    inline void setKNSCore__ProvidersModel_SupportedDragActions_IsBase(bool value) const { knscore__providersmodel_supporteddragactions_isbase = value; }
    inline void setKNSCore__ProvidersModel_InsertRows_IsBase(bool value) const { knscore__providersmodel_insertrows_isbase = value; }
    inline void setKNSCore__ProvidersModel_InsertColumns_IsBase(bool value) const { knscore__providersmodel_insertcolumns_isbase = value; }
    inline void setKNSCore__ProvidersModel_RemoveRows_IsBase(bool value) const { knscore__providersmodel_removerows_isbase = value; }
    inline void setKNSCore__ProvidersModel_RemoveColumns_IsBase(bool value) const { knscore__providersmodel_removecolumns_isbase = value; }
    inline void setKNSCore__ProvidersModel_MoveRows_IsBase(bool value) const { knscore__providersmodel_moverows_isbase = value; }
    inline void setKNSCore__ProvidersModel_MoveColumns_IsBase(bool value) const { knscore__providersmodel_movecolumns_isbase = value; }
    inline void setKNSCore__ProvidersModel_FetchMore_IsBase(bool value) const { knscore__providersmodel_fetchmore_isbase = value; }
    inline void setKNSCore__ProvidersModel_CanFetchMore_IsBase(bool value) const { knscore__providersmodel_canfetchmore_isbase = value; }
    inline void setKNSCore__ProvidersModel_Sort_IsBase(bool value) const { knscore__providersmodel_sort_isbase = value; }
    inline void setKNSCore__ProvidersModel_Buddy_IsBase(bool value) const { knscore__providersmodel_buddy_isbase = value; }
    inline void setKNSCore__ProvidersModel_Match_IsBase(bool value) const { knscore__providersmodel_match_isbase = value; }
    inline void setKNSCore__ProvidersModel_Span_IsBase(bool value) const { knscore__providersmodel_span_isbase = value; }
    inline void setKNSCore__ProvidersModel_MultiData_IsBase(bool value) const { knscore__providersmodel_multidata_isbase = value; }
    inline void setKNSCore__ProvidersModel_Submit_IsBase(bool value) const { knscore__providersmodel_submit_isbase = value; }
    inline void setKNSCore__ProvidersModel_Revert_IsBase(bool value) const { knscore__providersmodel_revert_isbase = value; }
    inline void setKNSCore__ProvidersModel_ResetInternalData_IsBase(bool value) const { knscore__providersmodel_resetinternaldata_isbase = value; }
    inline void setKNSCore__ProvidersModel_Event_IsBase(bool value) const { knscore__providersmodel_event_isbase = value; }
    inline void setKNSCore__ProvidersModel_EventFilter_IsBase(bool value) const { knscore__providersmodel_eventfilter_isbase = value; }
    inline void setKNSCore__ProvidersModel_TimerEvent_IsBase(bool value) const { knscore__providersmodel_timerevent_isbase = value; }
    inline void setKNSCore__ProvidersModel_ChildEvent_IsBase(bool value) const { knscore__providersmodel_childevent_isbase = value; }
    inline void setKNSCore__ProvidersModel_CustomEvent_IsBase(bool value) const { knscore__providersmodel_customevent_isbase = value; }
    inline void setKNSCore__ProvidersModel_ConnectNotify_IsBase(bool value) const { knscore__providersmodel_connectnotify_isbase = value; }
    inline void setKNSCore__ProvidersModel_DisconnectNotify_IsBase(bool value) const { knscore__providersmodel_disconnectnotify_isbase = value; }
    inline void setKNSCore__ProvidersModel_CreateIndex_IsBase(bool value) const { knscore__providersmodel_createindex_isbase = value; }
    inline void setKNSCore__ProvidersModel_EncodeData_IsBase(bool value) const { knscore__providersmodel_encodedata_isbase = value; }
    inline void setKNSCore__ProvidersModel_DecodeData_IsBase(bool value) const { knscore__providersmodel_decodedata_isbase = value; }
    inline void setKNSCore__ProvidersModel_BeginInsertRows_IsBase(bool value) const { knscore__providersmodel_begininsertrows_isbase = value; }
    inline void setKNSCore__ProvidersModel_EndInsertRows_IsBase(bool value) const { knscore__providersmodel_endinsertrows_isbase = value; }
    inline void setKNSCore__ProvidersModel_BeginRemoveRows_IsBase(bool value) const { knscore__providersmodel_beginremoverows_isbase = value; }
    inline void setKNSCore__ProvidersModel_EndRemoveRows_IsBase(bool value) const { knscore__providersmodel_endremoverows_isbase = value; }
    inline void setKNSCore__ProvidersModel_BeginMoveRows_IsBase(bool value) const { knscore__providersmodel_beginmoverows_isbase = value; }
    inline void setKNSCore__ProvidersModel_EndMoveRows_IsBase(bool value) const { knscore__providersmodel_endmoverows_isbase = value; }
    inline void setKNSCore__ProvidersModel_BeginInsertColumns_IsBase(bool value) const { knscore__providersmodel_begininsertcolumns_isbase = value; }
    inline void setKNSCore__ProvidersModel_EndInsertColumns_IsBase(bool value) const { knscore__providersmodel_endinsertcolumns_isbase = value; }
    inline void setKNSCore__ProvidersModel_BeginRemoveColumns_IsBase(bool value) const { knscore__providersmodel_beginremovecolumns_isbase = value; }
    inline void setKNSCore__ProvidersModel_EndRemoveColumns_IsBase(bool value) const { knscore__providersmodel_endremovecolumns_isbase = value; }
    inline void setKNSCore__ProvidersModel_BeginMoveColumns_IsBase(bool value) const { knscore__providersmodel_beginmovecolumns_isbase = value; }
    inline void setKNSCore__ProvidersModel_EndMoveColumns_IsBase(bool value) const { knscore__providersmodel_endmovecolumns_isbase = value; }
    inline void setKNSCore__ProvidersModel_BeginResetModel_IsBase(bool value) const { knscore__providersmodel_beginresetmodel_isbase = value; }
    inline void setKNSCore__ProvidersModel_EndResetModel_IsBase(bool value) const { knscore__providersmodel_endresetmodel_isbase = value; }
    inline void setKNSCore__ProvidersModel_ChangePersistentIndex_IsBase(bool value) const { knscore__providersmodel_changepersistentindex_isbase = value; }
    inline void setKNSCore__ProvidersModel_ChangePersistentIndexList_IsBase(bool value) const { knscore__providersmodel_changepersistentindexlist_isbase = value; }
    inline void setKNSCore__ProvidersModel_PersistentIndexList_IsBase(bool value) const { knscore__providersmodel_persistentindexlist_isbase = value; }
    inline void setKNSCore__ProvidersModel_Sender_IsBase(bool value) const { knscore__providersmodel_sender_isbase = value; }
    inline void setKNSCore__ProvidersModel_SenderSignalIndex_IsBase(bool value) const { knscore__providersmodel_sendersignalindex_isbase = value; }
    inline void setKNSCore__ProvidersModel_Receivers_IsBase(bool value) const { knscore__providersmodel_receivers_isbase = value; }
    inline void setKNSCore__ProvidersModel_IsSignalConnected_IsBase(bool value) const { knscore__providersmodel_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (knscore__providersmodel_metaobject_isbase) {
            knscore__providersmodel_metaobject_isbase = false;
            return KNSCore__ProvidersModel::metaObject();
        }
        auto metaobject_cb = knscore__providersmodel_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KNSCore__ProvidersModel::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (knscore__providersmodel_metacast_isbase) {
            knscore__providersmodel_metacast_isbase = false;
            return KNSCore__ProvidersModel::qt_metacast(param1);
        }
        auto metacast_cb = knscore__providersmodel_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KNSCore__ProvidersModel::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (knscore__providersmodel_metacall_isbase) {
            knscore__providersmodel_metacall_isbase = false;
            return KNSCore__ProvidersModel::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = knscore__providersmodel_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KNSCore__ProvidersModel::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QHash<int, QByteArray> roleNames() const override {
        if (knscore__providersmodel_rolenames_isbase) {
            knscore__providersmodel_rolenames_isbase = false;
            return KNSCore__ProvidersModel::roleNames();
        }
        auto rolenames_cb = knscore__providersmodel_rolenames_callback;
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
        return KNSCore__ProvidersModel::roleNames();
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(const QModelIndex& index, int role) const override {
        if (knscore__providersmodel_data_isbase) {
            knscore__providersmodel_data_isbase = false;
            return KNSCore__ProvidersModel::data(index, role);
        }
        auto data_cb = knscore__providersmodel_data_callback;
        if (data_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = role;

            QVariant* callback_ret = data_cb(this, cbval1, cbval2);
            return *callback_ret;
        }
        return KNSCore__ProvidersModel::data(index, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual int rowCount(const QModelIndex& parent) const override {
        if (knscore__providersmodel_rowcount_isbase) {
            knscore__providersmodel_rowcount_isbase = false;
            return KNSCore__ProvidersModel::rowCount(parent);
        }
        auto rowcount_cb = knscore__providersmodel_rowcount_callback;
        if (rowcount_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            int callback_ret = rowcount_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KNSCore__ProvidersModel::rowCount(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
        if (knscore__providersmodel_index_isbase) {
            knscore__providersmodel_index_isbase = false;
            return KNSCore__ProvidersModel::index(row, column, parent);
        }
        auto index_cb = knscore__providersmodel_index_callback;
        if (index_cb) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            QModelIndex* callback_ret = index_cb(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        }
        return KNSCore__ProvidersModel::index(row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
        if (knscore__providersmodel_sibling_isbase) {
            knscore__providersmodel_sibling_isbase = false;
            return KNSCore__ProvidersModel::sibling(row, column, idx);
        }
        auto sibling_cb = knscore__providersmodel_sibling_callback;
        if (sibling_cb) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& idx_ret = idx;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&idx_ret);

            QModelIndex* callback_ret = sibling_cb(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        }
        return KNSCore__ProvidersModel::sibling(row, column, idx);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
        if (knscore__providersmodel_dropmimedata_isbase) {
            knscore__providersmodel_dropmimedata_isbase = false;
            return KNSCore__ProvidersModel::dropMimeData(data, action, row, column, parent);
        }
        auto dropmimedata_cb = knscore__providersmodel_dropmimedata_callback;
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
        return KNSCore__ProvidersModel::dropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
        if (knscore__providersmodel_flags_isbase) {
            knscore__providersmodel_flags_isbase = false;
            return KNSCore__ProvidersModel::flags(index);
        }
        auto flags_cb = knscore__providersmodel_flags_callback;
        if (flags_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            int callback_ret = flags_cb(this, cbval1);
            return static_cast<Qt::ItemFlags>(callback_ret);
        }
        return KNSCore__ProvidersModel::flags(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
        if (knscore__providersmodel_setdata_isbase) {
            knscore__providersmodel_setdata_isbase = false;
            return KNSCore__ProvidersModel::setData(index, value, role);
        }
        auto setdata_cb = knscore__providersmodel_setdata_callback;
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
        return KNSCore__ProvidersModel::setData(index, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
        if (knscore__providersmodel_headerdata_isbase) {
            knscore__providersmodel_headerdata_isbase = false;
            return KNSCore__ProvidersModel::headerData(section, orientation, role);
        }
        auto headerdata_cb = knscore__providersmodel_headerdata_callback;
        if (headerdata_cb) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            int cbval3 = role;

            QVariant* callback_ret = headerdata_cb(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        }
        return KNSCore__ProvidersModel::headerData(section, orientation, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
        if (knscore__providersmodel_setheaderdata_isbase) {
            knscore__providersmodel_setheaderdata_isbase = false;
            return KNSCore__ProvidersModel::setHeaderData(section, orientation, value, role);
        }
        auto setheaderdata_cb = knscore__providersmodel_setheaderdata_callback;
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
        return KNSCore__ProvidersModel::setHeaderData(section, orientation, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
        if (knscore__providersmodel_itemdata_isbase) {
            knscore__providersmodel_itemdata_isbase = false;
            return KNSCore__ProvidersModel::itemData(index);
        }
        auto itemdata_cb = knscore__providersmodel_itemdata_callback;
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
        return KNSCore__ProvidersModel::itemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
        if (knscore__providersmodel_setitemdata_isbase) {
            knscore__providersmodel_setitemdata_isbase = false;
            return KNSCore__ProvidersModel::setItemData(index, roles);
        }
        auto setitemdata_cb = knscore__providersmodel_setitemdata_callback;
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
        return KNSCore__ProvidersModel::setItemData(index, roles);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool clearItemData(const QModelIndex& index) override {
        if (knscore__providersmodel_clearitemdata_isbase) {
            knscore__providersmodel_clearitemdata_isbase = false;
            return KNSCore__ProvidersModel::clearItemData(index);
        }
        auto clearitemdata_cb = knscore__providersmodel_clearitemdata_callback;
        if (clearitemdata_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            bool callback_ret = clearitemdata_cb(this, cbval1);
            return callback_ret;
        }
        return KNSCore__ProvidersModel::clearItemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> mimeTypes() const override {
        if (knscore__providersmodel_mimetypes_isbase) {
            knscore__providersmodel_mimetypes_isbase = false;
            return KNSCore__ProvidersModel::mimeTypes();
        }
        auto mimetypes_cb = knscore__providersmodel_mimetypes_callback;
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
        return KNSCore__ProvidersModel::mimeTypes();
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* mimeData(const QList<QModelIndex>& indexes) const override {
        if (knscore__providersmodel_mimedata_isbase) {
            knscore__providersmodel_mimedata_isbase = false;
            return KNSCore__ProvidersModel::mimeData(indexes);
        }
        auto mimedata_cb = knscore__providersmodel_mimedata_callback;
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
        return KNSCore__ProvidersModel::mimeData(indexes);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
        if (knscore__providersmodel_candropmimedata_isbase) {
            knscore__providersmodel_candropmimedata_isbase = false;
            return KNSCore__ProvidersModel::canDropMimeData(data, action, row, column, parent);
        }
        auto candropmimedata_cb = knscore__providersmodel_candropmimedata_callback;
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
        return KNSCore__ProvidersModel::canDropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (knscore__providersmodel_supporteddropactions_isbase) {
            knscore__providersmodel_supporteddropactions_isbase = false;
            return KNSCore__ProvidersModel::supportedDropActions();
        }
        auto supporteddropactions_cb = knscore__providersmodel_supporteddropactions_callback;
        if (supporteddropactions_cb) {
            int callback_ret = supporteddropactions_cb();
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return KNSCore__ProvidersModel::supportedDropActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDragActions() const override {
        if (knscore__providersmodel_supporteddragactions_isbase) {
            knscore__providersmodel_supporteddragactions_isbase = false;
            return KNSCore__ProvidersModel::supportedDragActions();
        }
        auto supporteddragactions_cb = knscore__providersmodel_supporteddragactions_callback;
        if (supporteddragactions_cb) {
            int callback_ret = supporteddragactions_cb();
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return KNSCore__ProvidersModel::supportedDragActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
        if (knscore__providersmodel_insertrows_isbase) {
            knscore__providersmodel_insertrows_isbase = false;
            return KNSCore__ProvidersModel::insertRows(row, count, parent);
        }
        auto insertrows_cb = knscore__providersmodel_insertrows_callback;
        if (insertrows_cb) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = insertrows_cb(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KNSCore__ProvidersModel::insertRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
        if (knscore__providersmodel_insertcolumns_isbase) {
            knscore__providersmodel_insertcolumns_isbase = false;
            return KNSCore__ProvidersModel::insertColumns(column, count, parent);
        }
        auto insertcolumns_cb = knscore__providersmodel_insertcolumns_callback;
        if (insertcolumns_cb) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = insertcolumns_cb(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KNSCore__ProvidersModel::insertColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
        if (knscore__providersmodel_removerows_isbase) {
            knscore__providersmodel_removerows_isbase = false;
            return KNSCore__ProvidersModel::removeRows(row, count, parent);
        }
        auto removerows_cb = knscore__providersmodel_removerows_callback;
        if (removerows_cb) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = removerows_cb(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KNSCore__ProvidersModel::removeRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
        if (knscore__providersmodel_removecolumns_isbase) {
            knscore__providersmodel_removecolumns_isbase = false;
            return KNSCore__ProvidersModel::removeColumns(column, count, parent);
        }
        auto removecolumns_cb = knscore__providersmodel_removecolumns_callback;
        if (removecolumns_cb) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = removecolumns_cb(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KNSCore__ProvidersModel::removeColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (knscore__providersmodel_moverows_isbase) {
            knscore__providersmodel_moverows_isbase = false;
            return KNSCore__ProvidersModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
        }
        auto moverows_cb = knscore__providersmodel_moverows_callback;
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
        return KNSCore__ProvidersModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (knscore__providersmodel_movecolumns_isbase) {
            knscore__providersmodel_movecolumns_isbase = false;
            return KNSCore__ProvidersModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
        }
        auto movecolumns_cb = knscore__providersmodel_movecolumns_callback;
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
        return KNSCore__ProvidersModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual void fetchMore(const QModelIndex& parent) override {
        if (knscore__providersmodel_fetchmore_isbase) {
            knscore__providersmodel_fetchmore_isbase = false;
            KNSCore__ProvidersModel::fetchMore(parent);
            return;
        }
        auto fetchmore_cb = knscore__providersmodel_fetchmore_callback;
        if (fetchmore_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            fetchmore_cb(this, cbval1);
            return;
        }
        KNSCore__ProvidersModel::fetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canFetchMore(const QModelIndex& parent) const override {
        if (knscore__providersmodel_canfetchmore_isbase) {
            knscore__providersmodel_canfetchmore_isbase = false;
            return KNSCore__ProvidersModel::canFetchMore(parent);
        }
        auto canfetchmore_cb = knscore__providersmodel_canfetchmore_callback;
        if (canfetchmore_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = canfetchmore_cb(this, cbval1);
            return callback_ret;
        }
        return KNSCore__ProvidersModel::canFetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void sort(int column, Qt::SortOrder order) override {
        if (knscore__providersmodel_sort_isbase) {
            knscore__providersmodel_sort_isbase = false;
            KNSCore__ProvidersModel::sort(column, order);
            return;
        }
        auto sort_cb = knscore__providersmodel_sort_callback;
        if (sort_cb) {
            int cbval1 = column;
            int cbval2 = static_cast<int>(order);

            sort_cb(this, cbval1, cbval2);
            return;
        }
        KNSCore__ProvidersModel::sort(column, order);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex buddy(const QModelIndex& index) const override {
        if (knscore__providersmodel_buddy_isbase) {
            knscore__providersmodel_buddy_isbase = false;
            return KNSCore__ProvidersModel::buddy(index);
        }
        auto buddy_cb = knscore__providersmodel_buddy_callback;
        if (buddy_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QModelIndex* callback_ret = buddy_cb(this, cbval1);
            return *callback_ret;
        }
        return KNSCore__ProvidersModel::buddy(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
        if (knscore__providersmodel_match_isbase) {
            knscore__providersmodel_match_isbase = false;
            return KNSCore__ProvidersModel::match(start, role, value, hits, flags);
        }
        auto match_cb = knscore__providersmodel_match_callback;
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
        return KNSCore__ProvidersModel::match(start, role, value, hits, flags);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize span(const QModelIndex& index) const override {
        if (knscore__providersmodel_span_isbase) {
            knscore__providersmodel_span_isbase = false;
            return KNSCore__ProvidersModel::span(index);
        }
        auto span_cb = knscore__providersmodel_span_callback;
        if (span_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QSize* callback_ret = span_cb(this, cbval1);
            return *callback_ret;
        }
        return KNSCore__ProvidersModel::span(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
        if (knscore__providersmodel_multidata_isbase) {
            knscore__providersmodel_multidata_isbase = false;
            KNSCore__ProvidersModel::multiData(index, roleDataSpan);
            return;
        }
        auto multidata_cb = knscore__providersmodel_multidata_callback;
        if (multidata_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelRoleDataSpan* cbval2 = new QModelRoleDataSpan(roleDataSpan);

            multidata_cb(this, cbval1, cbval2);
            return;
        }
        KNSCore__ProvidersModel::multiData(index, roleDataSpan);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool submit() override {
        if (knscore__providersmodel_submit_isbase) {
            knscore__providersmodel_submit_isbase = false;
            return KNSCore__ProvidersModel::submit();
        }
        auto submit_cb = knscore__providersmodel_submit_callback;
        if (submit_cb) {
            bool callback_ret = submit_cb();
            return callback_ret;
        }
        return KNSCore__ProvidersModel::submit();
    }

    // Virtual method for C ABI access and custom callback
    virtual void revert() override {
        if (knscore__providersmodel_revert_isbase) {
            knscore__providersmodel_revert_isbase = false;
            KNSCore__ProvidersModel::revert();
            return;
        }
        auto revert_cb = knscore__providersmodel_revert_callback;
        if (revert_cb) {
            revert_cb();
            return;
        }
        KNSCore__ProvidersModel::revert();
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetInternalData() override {
        if (knscore__providersmodel_resetinternaldata_isbase) {
            knscore__providersmodel_resetinternaldata_isbase = false;
            KNSCore__ProvidersModel::resetInternalData();
            return;
        }
        auto resetinternaldata_cb = knscore__providersmodel_resetinternaldata_callback;
        if (resetinternaldata_cb) {
            resetinternaldata_cb();
            return;
        }
        KNSCore__ProvidersModel::resetInternalData();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (knscore__providersmodel_event_isbase) {
            knscore__providersmodel_event_isbase = false;
            return KNSCore__ProvidersModel::event(event);
        }
        auto event_cb = knscore__providersmodel_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KNSCore__ProvidersModel::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (knscore__providersmodel_eventfilter_isbase) {
            knscore__providersmodel_eventfilter_isbase = false;
            return KNSCore__ProvidersModel::eventFilter(watched, event);
        }
        auto eventfilter_cb = knscore__providersmodel_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KNSCore__ProvidersModel::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (knscore__providersmodel_timerevent_isbase) {
            knscore__providersmodel_timerevent_isbase = false;
            KNSCore__ProvidersModel::timerEvent(event);
            return;
        }
        auto timerevent_cb = knscore__providersmodel_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KNSCore__ProvidersModel::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (knscore__providersmodel_childevent_isbase) {
            knscore__providersmodel_childevent_isbase = false;
            KNSCore__ProvidersModel::childEvent(event);
            return;
        }
        auto childevent_cb = knscore__providersmodel_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KNSCore__ProvidersModel::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (knscore__providersmodel_customevent_isbase) {
            knscore__providersmodel_customevent_isbase = false;
            KNSCore__ProvidersModel::customEvent(event);
            return;
        }
        auto customevent_cb = knscore__providersmodel_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KNSCore__ProvidersModel::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (knscore__providersmodel_connectnotify_isbase) {
            knscore__providersmodel_connectnotify_isbase = false;
            KNSCore__ProvidersModel::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = knscore__providersmodel_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KNSCore__ProvidersModel::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (knscore__providersmodel_disconnectnotify_isbase) {
            knscore__providersmodel_disconnectnotify_isbase = false;
            KNSCore__ProvidersModel::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = knscore__providersmodel_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KNSCore__ProvidersModel::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QModelIndex createIndex(int row, int column) const {
        if (knscore__providersmodel_createindex_isbase) {
            knscore__providersmodel_createindex_isbase = false;
            return KNSCore__ProvidersModel::createIndex(row, column);
        }
        auto createindex_cb = knscore__providersmodel_createindex_callback;
        if (createindex_cb) {
            int cbval1 = row;
            int cbval2 = column;

            QModelIndex* callback_ret = createindex_cb(this, cbval1, cbval2);
            return *callback_ret;
        }
        return KNSCore__ProvidersModel::createIndex(row, column);
    }

    // Virtual method for C ABI access and custom callback
    void encodeData(const QList<QModelIndex>& indexes, QDataStream& stream) const {
        if (knscore__providersmodel_encodedata_isbase) {
            knscore__providersmodel_encodedata_isbase = false;
            KNSCore__ProvidersModel::encodeData(indexes, stream);
            return;
        }
        auto encodedata_cb = knscore__providersmodel_encodedata_callback;
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
        KNSCore__ProvidersModel::encodeData(indexes, stream);
    }

    // Virtual method for C ABI access and custom callback
    bool decodeData(int row, int column, const QModelIndex& parent, QDataStream& stream) {
        if (knscore__providersmodel_decodedata_isbase) {
            knscore__providersmodel_decodedata_isbase = false;
            return KNSCore__ProvidersModel::decodeData(row, column, parent, stream);
        }
        auto decodedata_cb = knscore__providersmodel_decodedata_callback;
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
        return KNSCore__ProvidersModel::decodeData(row, column, parent, stream);
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertRows(const QModelIndex& parent, int first, int last) {
        if (knscore__providersmodel_begininsertrows_isbase) {
            knscore__providersmodel_begininsertrows_isbase = false;
            KNSCore__ProvidersModel::beginInsertRows(parent, first, last);
            return;
        }
        auto begininsertrows_cb = knscore__providersmodel_begininsertrows_callback;
        if (begininsertrows_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            begininsertrows_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        KNSCore__ProvidersModel::beginInsertRows(parent, first, last);
    }

    // Virtual method for C ABI access and custom callback
    void endInsertRows() {
        if (knscore__providersmodel_endinsertrows_isbase) {
            knscore__providersmodel_endinsertrows_isbase = false;
            KNSCore__ProvidersModel::endInsertRows();
            return;
        }
        auto endinsertrows_cb = knscore__providersmodel_endinsertrows_callback;
        if (endinsertrows_cb) {
            endinsertrows_cb();
            return;
        }
        KNSCore__ProvidersModel::endInsertRows();
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveRows(const QModelIndex& parent, int first, int last) {
        if (knscore__providersmodel_beginremoverows_isbase) {
            knscore__providersmodel_beginremoverows_isbase = false;
            KNSCore__ProvidersModel::beginRemoveRows(parent, first, last);
            return;
        }
        auto beginremoverows_cb = knscore__providersmodel_beginremoverows_callback;
        if (beginremoverows_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            beginremoverows_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        KNSCore__ProvidersModel::beginRemoveRows(parent, first, last);
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveRows() {
        if (knscore__providersmodel_endremoverows_isbase) {
            knscore__providersmodel_endremoverows_isbase = false;
            KNSCore__ProvidersModel::endRemoveRows();
            return;
        }
        auto endremoverows_cb = knscore__providersmodel_endremoverows_callback;
        if (endremoverows_cb) {
            endremoverows_cb();
            return;
        }
        KNSCore__ProvidersModel::endRemoveRows();
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveRows(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationRow) {
        if (knscore__providersmodel_beginmoverows_isbase) {
            knscore__providersmodel_beginmoverows_isbase = false;
            return KNSCore__ProvidersModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
        }
        auto beginmoverows_cb = knscore__providersmodel_beginmoverows_callback;
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
        return KNSCore__ProvidersModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
    }

    // Virtual method for C ABI access and custom callback
    void endMoveRows() {
        if (knscore__providersmodel_endmoverows_isbase) {
            knscore__providersmodel_endmoverows_isbase = false;
            KNSCore__ProvidersModel::endMoveRows();
            return;
        }
        auto endmoverows_cb = knscore__providersmodel_endmoverows_callback;
        if (endmoverows_cb) {
            endmoverows_cb();
            return;
        }
        KNSCore__ProvidersModel::endMoveRows();
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertColumns(const QModelIndex& parent, int first, int last) {
        if (knscore__providersmodel_begininsertcolumns_isbase) {
            knscore__providersmodel_begininsertcolumns_isbase = false;
            KNSCore__ProvidersModel::beginInsertColumns(parent, first, last);
            return;
        }
        auto begininsertcolumns_cb = knscore__providersmodel_begininsertcolumns_callback;
        if (begininsertcolumns_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            begininsertcolumns_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        KNSCore__ProvidersModel::beginInsertColumns(parent, first, last);
    }

    // Virtual method for C ABI access and custom callback
    void endInsertColumns() {
        if (knscore__providersmodel_endinsertcolumns_isbase) {
            knscore__providersmodel_endinsertcolumns_isbase = false;
            KNSCore__ProvidersModel::endInsertColumns();
            return;
        }
        auto endinsertcolumns_cb = knscore__providersmodel_endinsertcolumns_callback;
        if (endinsertcolumns_cb) {
            endinsertcolumns_cb();
            return;
        }
        KNSCore__ProvidersModel::endInsertColumns();
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveColumns(const QModelIndex& parent, int first, int last) {
        if (knscore__providersmodel_beginremovecolumns_isbase) {
            knscore__providersmodel_beginremovecolumns_isbase = false;
            KNSCore__ProvidersModel::beginRemoveColumns(parent, first, last);
            return;
        }
        auto beginremovecolumns_cb = knscore__providersmodel_beginremovecolumns_callback;
        if (beginremovecolumns_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            beginremovecolumns_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        KNSCore__ProvidersModel::beginRemoveColumns(parent, first, last);
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveColumns() {
        if (knscore__providersmodel_endremovecolumns_isbase) {
            knscore__providersmodel_endremovecolumns_isbase = false;
            KNSCore__ProvidersModel::endRemoveColumns();
            return;
        }
        auto endremovecolumns_cb = knscore__providersmodel_endremovecolumns_callback;
        if (endremovecolumns_cb) {
            endremovecolumns_cb();
            return;
        }
        KNSCore__ProvidersModel::endRemoveColumns();
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveColumns(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationColumn) {
        if (knscore__providersmodel_beginmovecolumns_isbase) {
            knscore__providersmodel_beginmovecolumns_isbase = false;
            return KNSCore__ProvidersModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
        }
        auto beginmovecolumns_cb = knscore__providersmodel_beginmovecolumns_callback;
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
        return KNSCore__ProvidersModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
    }

    // Virtual method for C ABI access and custom callback
    void endMoveColumns() {
        if (knscore__providersmodel_endmovecolumns_isbase) {
            knscore__providersmodel_endmovecolumns_isbase = false;
            KNSCore__ProvidersModel::endMoveColumns();
            return;
        }
        auto endmovecolumns_cb = knscore__providersmodel_endmovecolumns_callback;
        if (endmovecolumns_cb) {
            endmovecolumns_cb();
            return;
        }
        KNSCore__ProvidersModel::endMoveColumns();
    }

    // Virtual method for C ABI access and custom callback
    void beginResetModel() {
        if (knscore__providersmodel_beginresetmodel_isbase) {
            knscore__providersmodel_beginresetmodel_isbase = false;
            KNSCore__ProvidersModel::beginResetModel();
            return;
        }
        auto beginresetmodel_cb = knscore__providersmodel_beginresetmodel_callback;
        if (beginresetmodel_cb) {
            beginresetmodel_cb();
            return;
        }
        KNSCore__ProvidersModel::beginResetModel();
    }

    // Virtual method for C ABI access and custom callback
    void endResetModel() {
        if (knscore__providersmodel_endresetmodel_isbase) {
            knscore__providersmodel_endresetmodel_isbase = false;
            KNSCore__ProvidersModel::endResetModel();
            return;
        }
        auto endresetmodel_cb = knscore__providersmodel_endresetmodel_callback;
        if (endresetmodel_cb) {
            endresetmodel_cb();
            return;
        }
        KNSCore__ProvidersModel::endResetModel();
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndex(const QModelIndex& from, const QModelIndex& to) {
        if (knscore__providersmodel_changepersistentindex_isbase) {
            knscore__providersmodel_changepersistentindex_isbase = false;
            KNSCore__ProvidersModel::changePersistentIndex(from, to);
            return;
        }
        auto changepersistentindex_cb = knscore__providersmodel_changepersistentindex_callback;
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
        KNSCore__ProvidersModel::changePersistentIndex(from, to);
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndexList(const QList<QModelIndex>& from, const QList<QModelIndex>& to) {
        if (knscore__providersmodel_changepersistentindexlist_isbase) {
            knscore__providersmodel_changepersistentindexlist_isbase = false;
            KNSCore__ProvidersModel::changePersistentIndexList(from, to);
            return;
        }
        auto changepersistentindexlist_cb = knscore__providersmodel_changepersistentindexlist_callback;
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
        KNSCore__ProvidersModel::changePersistentIndexList(from, to);
    }

    // Virtual method for C ABI access and custom callback
    QList<QModelIndex> persistentIndexList() const {
        if (knscore__providersmodel_persistentindexlist_isbase) {
            knscore__providersmodel_persistentindexlist_isbase = false;
            return KNSCore__ProvidersModel::persistentIndexList();
        }
        auto persistentindexlist_cb = knscore__providersmodel_persistentindexlist_callback;
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
        return KNSCore__ProvidersModel::persistentIndexList();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (knscore__providersmodel_sender_isbase) {
            knscore__providersmodel_sender_isbase = false;
            return KNSCore__ProvidersModel::sender();
        }
        auto sender_cb = knscore__providersmodel_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KNSCore__ProvidersModel::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (knscore__providersmodel_sendersignalindex_isbase) {
            knscore__providersmodel_sendersignalindex_isbase = false;
            return KNSCore__ProvidersModel::senderSignalIndex();
        }
        auto sendersignalindex_cb = knscore__providersmodel_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KNSCore__ProvidersModel::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (knscore__providersmodel_receivers_isbase) {
            knscore__providersmodel_receivers_isbase = false;
            return KNSCore__ProvidersModel::receivers(signal);
        }
        auto receivers_cb = knscore__providersmodel_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KNSCore__ProvidersModel::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (knscore__providersmodel_issignalconnected_isbase) {
            knscore__providersmodel_issignalconnected_isbase = false;
            return KNSCore__ProvidersModel::isSignalConnected(signal);
        }
        auto issignalconnected_cb = knscore__providersmodel_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KNSCore__ProvidersModel::isSignalConnected(signal);
    }

    // Friend functions
    friend void KNSCore__ProvidersModel_ResetInternalData(KNSCore::ProvidersModel* self);
    friend void KNSCore__ProvidersModel_SuperResetInternalData(KNSCore::ProvidersModel* self);
    friend void KNSCore__ProvidersModel_TimerEvent(KNSCore::ProvidersModel* self, QTimerEvent* event);
    friend void KNSCore__ProvidersModel_SuperTimerEvent(KNSCore::ProvidersModel* self, QTimerEvent* event);
    friend void KNSCore__ProvidersModel_ChildEvent(KNSCore::ProvidersModel* self, QChildEvent* event);
    friend void KNSCore__ProvidersModel_SuperChildEvent(KNSCore::ProvidersModel* self, QChildEvent* event);
    friend void KNSCore__ProvidersModel_CustomEvent(KNSCore::ProvidersModel* self, QEvent* event);
    friend void KNSCore__ProvidersModel_SuperCustomEvent(KNSCore::ProvidersModel* self, QEvent* event);
    friend void KNSCore__ProvidersModel_ConnectNotify(KNSCore::ProvidersModel* self, const QMetaMethod* signal);
    friend void KNSCore__ProvidersModel_SuperConnectNotify(KNSCore::ProvidersModel* self, const QMetaMethod* signal);
    friend void KNSCore__ProvidersModel_DisconnectNotify(KNSCore::ProvidersModel* self, const QMetaMethod* signal);
    friend void KNSCore__ProvidersModel_SuperDisconnectNotify(KNSCore::ProvidersModel* self, const QMetaMethod* signal);
    friend QModelIndex* KNSCore__ProvidersModel_CreateIndex(const KNSCore::ProvidersModel* self, int row, int column);
    friend QModelIndex* KNSCore__ProvidersModel_SuperCreateIndex(const KNSCore::ProvidersModel* self, int row, int column);
    friend void KNSCore__ProvidersModel_EncodeData(const KNSCore::ProvidersModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
    friend void KNSCore__ProvidersModel_SuperEncodeData(const KNSCore::ProvidersModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
    friend bool KNSCore__ProvidersModel_DecodeData(KNSCore::ProvidersModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
    friend bool KNSCore__ProvidersModel_SuperDecodeData(KNSCore::ProvidersModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
    friend void KNSCore__ProvidersModel_BeginInsertRows(KNSCore::ProvidersModel* self, const QModelIndex* parent, int first, int last);
    friend void KNSCore__ProvidersModel_SuperBeginInsertRows(KNSCore::ProvidersModel* self, const QModelIndex* parent, int first, int last);
    friend void KNSCore__ProvidersModel_EndInsertRows(KNSCore::ProvidersModel* self);
    friend void KNSCore__ProvidersModel_SuperEndInsertRows(KNSCore::ProvidersModel* self);
    friend void KNSCore__ProvidersModel_BeginRemoveRows(KNSCore::ProvidersModel* self, const QModelIndex* parent, int first, int last);
    friend void KNSCore__ProvidersModel_SuperBeginRemoveRows(KNSCore::ProvidersModel* self, const QModelIndex* parent, int first, int last);
    friend void KNSCore__ProvidersModel_EndRemoveRows(KNSCore::ProvidersModel* self);
    friend void KNSCore__ProvidersModel_SuperEndRemoveRows(KNSCore::ProvidersModel* self);
    friend bool KNSCore__ProvidersModel_BeginMoveRows(KNSCore::ProvidersModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
    friend bool KNSCore__ProvidersModel_SuperBeginMoveRows(KNSCore::ProvidersModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
    friend void KNSCore__ProvidersModel_EndMoveRows(KNSCore::ProvidersModel* self);
    friend void KNSCore__ProvidersModel_SuperEndMoveRows(KNSCore::ProvidersModel* self);
    friend void KNSCore__ProvidersModel_BeginInsertColumns(KNSCore::ProvidersModel* self, const QModelIndex* parent, int first, int last);
    friend void KNSCore__ProvidersModel_SuperBeginInsertColumns(KNSCore::ProvidersModel* self, const QModelIndex* parent, int first, int last);
    friend void KNSCore__ProvidersModel_EndInsertColumns(KNSCore::ProvidersModel* self);
    friend void KNSCore__ProvidersModel_SuperEndInsertColumns(KNSCore::ProvidersModel* self);
    friend void KNSCore__ProvidersModel_BeginRemoveColumns(KNSCore::ProvidersModel* self, const QModelIndex* parent, int first, int last);
    friend void KNSCore__ProvidersModel_SuperBeginRemoveColumns(KNSCore::ProvidersModel* self, const QModelIndex* parent, int first, int last);
    friend void KNSCore__ProvidersModel_EndRemoveColumns(KNSCore::ProvidersModel* self);
    friend void KNSCore__ProvidersModel_SuperEndRemoveColumns(KNSCore::ProvidersModel* self);
    friend bool KNSCore__ProvidersModel_BeginMoveColumns(KNSCore::ProvidersModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
    friend bool KNSCore__ProvidersModel_SuperBeginMoveColumns(KNSCore::ProvidersModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
    friend void KNSCore__ProvidersModel_EndMoveColumns(KNSCore::ProvidersModel* self);
    friend void KNSCore__ProvidersModel_SuperEndMoveColumns(KNSCore::ProvidersModel* self);
    friend void KNSCore__ProvidersModel_BeginResetModel(KNSCore::ProvidersModel* self);
    friend void KNSCore__ProvidersModel_SuperBeginResetModel(KNSCore::ProvidersModel* self);
    friend void KNSCore__ProvidersModel_EndResetModel(KNSCore::ProvidersModel* self);
    friend void KNSCore__ProvidersModel_SuperEndResetModel(KNSCore::ProvidersModel* self);
    friend void KNSCore__ProvidersModel_ChangePersistentIndex(KNSCore::ProvidersModel* self, const QModelIndex* from, const QModelIndex* to);
    friend void KNSCore__ProvidersModel_SuperChangePersistentIndex(KNSCore::ProvidersModel* self, const QModelIndex* from, const QModelIndex* to);
    friend void KNSCore__ProvidersModel_ChangePersistentIndexList(KNSCore::ProvidersModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
    friend void KNSCore__ProvidersModel_SuperChangePersistentIndexList(KNSCore::ProvidersModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
    friend libqt_list /* of QModelIndex* */ KNSCore__ProvidersModel_PersistentIndexList(const KNSCore::ProvidersModel* self);
    friend libqt_list /* of QModelIndex* */ KNSCore__ProvidersModel_SuperPersistentIndexList(const KNSCore::ProvidersModel* self);
    friend QObject* KNSCore__ProvidersModel_Sender(const KNSCore::ProvidersModel* self);
    friend QObject* KNSCore__ProvidersModel_SuperSender(const KNSCore::ProvidersModel* self);
    friend int KNSCore__ProvidersModel_SenderSignalIndex(const KNSCore::ProvidersModel* self);
    friend int KNSCore__ProvidersModel_SuperSenderSignalIndex(const KNSCore::ProvidersModel* self);
    friend int KNSCore__ProvidersModel_Receivers(const KNSCore::ProvidersModel* self, const char* signal);
    friend int KNSCore__ProvidersModel_SuperReceivers(const KNSCore::ProvidersModel* self, const char* signal);
    friend bool KNSCore__ProvidersModel_IsSignalConnected(const KNSCore::ProvidersModel* self, const QMetaMethod* signal);
    friend bool KNSCore__ProvidersModel_SuperIsSignalConnected(const KNSCore::ProvidersModel* self, const QMetaMethod* signal);
};

#endif
