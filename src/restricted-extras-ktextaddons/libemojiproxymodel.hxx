#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBVIRTUALEMOJIPROXYMODEL_H
#define SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBVIRTUALEMOJIPROXYMODEL_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextEmoticonsCore::EmojiProxyModel so that we can call protected methods
class VirtualTextEmoticonsCoreEmojiProxyModel final : public TextEmoticonsCore::EmojiProxyModel {

  public:
    // Virtual class boolean flag
    bool isVirtualTextEmoticonsCoreEmojiProxyModel = true;

    // Virtual class public types (including callbacks)
    using TextEmoticonsCore__EmojiProxyModel_MetaObject_Callback = QMetaObject* (*)();
    using TextEmoticonsCore__EmojiProxyModel_Metacast_Callback = void* (*)(TextEmoticonsCore__EmojiProxyModel*, const char*);
    using TextEmoticonsCore__EmojiProxyModel_Metacall_Callback = int (*)(TextEmoticonsCore__EmojiProxyModel*, int, int, void**);
    using TextEmoticonsCore__EmojiProxyModel_FilterAcceptsRow_Callback = bool (*)(const TextEmoticonsCore__EmojiProxyModel*, int, QModelIndex*);
    using TextEmoticonsCore__EmojiProxyModel_LessThan_Callback = bool (*)(const TextEmoticonsCore__EmojiProxyModel*, QModelIndex*, QModelIndex*);
    using TextEmoticonsCore__EmojiProxyModel_SetSourceModel_Callback = void (*)(TextEmoticonsCore__EmojiProxyModel*, QAbstractItemModel*);
    using TextEmoticonsCore__EmojiProxyModel_MapToSource_Callback = QModelIndex* (*)(const TextEmoticonsCore__EmojiProxyModel*, QModelIndex*);
    using TextEmoticonsCore__EmojiProxyModel_MapFromSource_Callback = QModelIndex* (*)(const TextEmoticonsCore__EmojiProxyModel*, QModelIndex*);
    using TextEmoticonsCore__EmojiProxyModel_MapSelectionToSource_Callback = QItemSelection* (*)(const TextEmoticonsCore__EmojiProxyModel*, QItemSelection*);
    using TextEmoticonsCore__EmojiProxyModel_MapSelectionFromSource_Callback = QItemSelection* (*)(const TextEmoticonsCore__EmojiProxyModel*, QItemSelection*);
    using TextEmoticonsCore__EmojiProxyModel_FilterAcceptsColumn_Callback = bool (*)(const TextEmoticonsCore__EmojiProxyModel*, int, QModelIndex*);
    using TextEmoticonsCore__EmojiProxyModel_Index_Callback = QModelIndex* (*)(const TextEmoticonsCore__EmojiProxyModel*, int, int, QModelIndex*);
    using TextEmoticonsCore__EmojiProxyModel_Parent_Callback = QModelIndex* (*)(const TextEmoticonsCore__EmojiProxyModel*, QModelIndex*);
    using TextEmoticonsCore__EmojiProxyModel_Sibling_Callback = QModelIndex* (*)(const TextEmoticonsCore__EmojiProxyModel*, int, int, QModelIndex*);
    using TextEmoticonsCore__EmojiProxyModel_RowCount_Callback = int (*)(const TextEmoticonsCore__EmojiProxyModel*, QModelIndex*);
    using TextEmoticonsCore__EmojiProxyModel_ColumnCount_Callback = int (*)(const TextEmoticonsCore__EmojiProxyModel*, QModelIndex*);
    using TextEmoticonsCore__EmojiProxyModel_HasChildren_Callback = bool (*)(const TextEmoticonsCore__EmojiProxyModel*, QModelIndex*);
    using TextEmoticonsCore__EmojiProxyModel_Data_Callback = QVariant* (*)(const TextEmoticonsCore__EmojiProxyModel*, QModelIndex*, int);
    using TextEmoticonsCore__EmojiProxyModel_SetData_Callback = bool (*)(TextEmoticonsCore__EmojiProxyModel*, QModelIndex*, QVariant*, int);
    using TextEmoticonsCore__EmojiProxyModel_HeaderData_Callback = QVariant* (*)(const TextEmoticonsCore__EmojiProxyModel*, int, int, int);
    using TextEmoticonsCore__EmojiProxyModel_SetHeaderData_Callback = bool (*)(TextEmoticonsCore__EmojiProxyModel*, int, int, QVariant*, int);
    using TextEmoticonsCore__EmojiProxyModel_MimeData_Callback = QMimeData* (*)(const TextEmoticonsCore__EmojiProxyModel*, libqt_list /* of QModelIndex* */);
    using TextEmoticonsCore__EmojiProxyModel_DropMimeData_Callback = bool (*)(TextEmoticonsCore__EmojiProxyModel*, QMimeData*, int, int, int, QModelIndex*);
    using TextEmoticonsCore__EmojiProxyModel_InsertRows_Callback = bool (*)(TextEmoticonsCore__EmojiProxyModel*, int, int, QModelIndex*);
    using TextEmoticonsCore__EmojiProxyModel_InsertColumns_Callback = bool (*)(TextEmoticonsCore__EmojiProxyModel*, int, int, QModelIndex*);
    using TextEmoticonsCore__EmojiProxyModel_RemoveRows_Callback = bool (*)(TextEmoticonsCore__EmojiProxyModel*, int, int, QModelIndex*);
    using TextEmoticonsCore__EmojiProxyModel_RemoveColumns_Callback = bool (*)(TextEmoticonsCore__EmojiProxyModel*, int, int, QModelIndex*);
    using TextEmoticonsCore__EmojiProxyModel_FetchMore_Callback = void (*)(TextEmoticonsCore__EmojiProxyModel*, QModelIndex*);
    using TextEmoticonsCore__EmojiProxyModel_CanFetchMore_Callback = bool (*)(const TextEmoticonsCore__EmojiProxyModel*, QModelIndex*);
    using TextEmoticonsCore__EmojiProxyModel_Flags_Callback = int (*)(const TextEmoticonsCore__EmojiProxyModel*, QModelIndex*);
    using TextEmoticonsCore__EmojiProxyModel_Buddy_Callback = QModelIndex* (*)(const TextEmoticonsCore__EmojiProxyModel*, QModelIndex*);
    using TextEmoticonsCore__EmojiProxyModel_Match_Callback = libqt_list /* of QModelIndex* */ (*)(const TextEmoticonsCore__EmojiProxyModel*, QModelIndex*, int, QVariant*, int, int);
    using TextEmoticonsCore__EmojiProxyModel_Span_Callback = QSize* (*)(const TextEmoticonsCore__EmojiProxyModel*, QModelIndex*);
    using TextEmoticonsCore__EmojiProxyModel_Sort_Callback = void (*)(TextEmoticonsCore__EmojiProxyModel*, int, int);
    using TextEmoticonsCore__EmojiProxyModel_MimeTypes_Callback = const char** (*)();
    using TextEmoticonsCore__EmojiProxyModel_SupportedDropActions_Callback = int (*)();
    using TextEmoticonsCore__EmojiProxyModel_Submit_Callback = bool (*)();
    using TextEmoticonsCore__EmojiProxyModel_Revert_Callback = void (*)();
    using TextEmoticonsCore__EmojiProxyModel_ItemData_Callback = libqt_map /* of int to QVariant* */ (*)(const TextEmoticonsCore__EmojiProxyModel*, QModelIndex*);
    using TextEmoticonsCore__EmojiProxyModel_SetItemData_Callback = bool (*)(TextEmoticonsCore__EmojiProxyModel*, QModelIndex*, libqt_map /* of int to QVariant* */);
    using TextEmoticonsCore__EmojiProxyModel_ClearItemData_Callback = bool (*)(TextEmoticonsCore__EmojiProxyModel*, QModelIndex*);
    using TextEmoticonsCore__EmojiProxyModel_CanDropMimeData_Callback = bool (*)(const TextEmoticonsCore__EmojiProxyModel*, QMimeData*, int, int, int, QModelIndex*);
    using TextEmoticonsCore__EmojiProxyModel_SupportedDragActions_Callback = int (*)();
    using TextEmoticonsCore__EmojiProxyModel_RoleNames_Callback = libqt_map /* of int to libqt_string */ (*)();
    using TextEmoticonsCore__EmojiProxyModel_MoveRows_Callback = bool (*)(TextEmoticonsCore__EmojiProxyModel*, QModelIndex*, int, int, QModelIndex*, int);
    using TextEmoticonsCore__EmojiProxyModel_MoveColumns_Callback = bool (*)(TextEmoticonsCore__EmojiProxyModel*, QModelIndex*, int, int, QModelIndex*, int);
    using TextEmoticonsCore__EmojiProxyModel_MultiData_Callback = void (*)(const TextEmoticonsCore__EmojiProxyModel*, QModelIndex*, QModelRoleDataSpan*);
    using TextEmoticonsCore__EmojiProxyModel_ResetInternalData_Callback = void (*)();
    using TextEmoticonsCore__EmojiProxyModel_Event_Callback = bool (*)(TextEmoticonsCore__EmojiProxyModel*, QEvent*);
    using TextEmoticonsCore__EmojiProxyModel_EventFilter_Callback = bool (*)(TextEmoticonsCore__EmojiProxyModel*, QObject*, QEvent*);
    using TextEmoticonsCore__EmojiProxyModel_TimerEvent_Callback = void (*)(TextEmoticonsCore__EmojiProxyModel*, QTimerEvent*);
    using TextEmoticonsCore__EmojiProxyModel_ChildEvent_Callback = void (*)(TextEmoticonsCore__EmojiProxyModel*, QChildEvent*);
    using TextEmoticonsCore__EmojiProxyModel_CustomEvent_Callback = void (*)(TextEmoticonsCore__EmojiProxyModel*, QEvent*);
    using TextEmoticonsCore__EmojiProxyModel_ConnectNotify_Callback = void (*)(TextEmoticonsCore__EmojiProxyModel*, QMetaMethod*);
    using TextEmoticonsCore__EmojiProxyModel_DisconnectNotify_Callback = void (*)(TextEmoticonsCore__EmojiProxyModel*, QMetaMethod*);
    using TextEmoticonsCore__EmojiProxyModel_InvalidateFilter_Callback = void (*)();
    using TextEmoticonsCore__EmojiProxyModel_InvalidateRowsFilter_Callback = void (*)();
    using TextEmoticonsCore__EmojiProxyModel_InvalidateColumnsFilter_Callback = void (*)();
    using TextEmoticonsCore__EmojiProxyModel_CreateSourceIndex_Callback = QModelIndex* (*)(const TextEmoticonsCore__EmojiProxyModel*, int, int, void*);
    using TextEmoticonsCore__EmojiProxyModel_CreateIndex_Callback = QModelIndex* (*)(const TextEmoticonsCore__EmojiProxyModel*, int, int);
    using TextEmoticonsCore__EmojiProxyModel_EncodeData_Callback = void (*)(const TextEmoticonsCore__EmojiProxyModel*, libqt_list /* of QModelIndex* */, QDataStream*);
    using TextEmoticonsCore__EmojiProxyModel_DecodeData_Callback = bool (*)(TextEmoticonsCore__EmojiProxyModel*, int, int, QModelIndex*, QDataStream*);
    using TextEmoticonsCore__EmojiProxyModel_BeginInsertRows_Callback = void (*)(TextEmoticonsCore__EmojiProxyModel*, QModelIndex*, int, int);
    using TextEmoticonsCore__EmojiProxyModel_EndInsertRows_Callback = void (*)();
    using TextEmoticonsCore__EmojiProxyModel_BeginRemoveRows_Callback = void (*)(TextEmoticonsCore__EmojiProxyModel*, QModelIndex*, int, int);
    using TextEmoticonsCore__EmojiProxyModel_EndRemoveRows_Callback = void (*)();
    using TextEmoticonsCore__EmojiProxyModel_BeginMoveRows_Callback = bool (*)(TextEmoticonsCore__EmojiProxyModel*, QModelIndex*, int, int, QModelIndex*, int);
    using TextEmoticonsCore__EmojiProxyModel_EndMoveRows_Callback = void (*)();
    using TextEmoticonsCore__EmojiProxyModel_BeginInsertColumns_Callback = void (*)(TextEmoticonsCore__EmojiProxyModel*, QModelIndex*, int, int);
    using TextEmoticonsCore__EmojiProxyModel_EndInsertColumns_Callback = void (*)();
    using TextEmoticonsCore__EmojiProxyModel_BeginRemoveColumns_Callback = void (*)(TextEmoticonsCore__EmojiProxyModel*, QModelIndex*, int, int);
    using TextEmoticonsCore__EmojiProxyModel_EndRemoveColumns_Callback = void (*)();
    using TextEmoticonsCore__EmojiProxyModel_BeginMoveColumns_Callback = bool (*)(TextEmoticonsCore__EmojiProxyModel*, QModelIndex*, int, int, QModelIndex*, int);
    using TextEmoticonsCore__EmojiProxyModel_EndMoveColumns_Callback = void (*)();
    using TextEmoticonsCore__EmojiProxyModel_BeginResetModel_Callback = void (*)();
    using TextEmoticonsCore__EmojiProxyModel_EndResetModel_Callback = void (*)();
    using TextEmoticonsCore__EmojiProxyModel_ChangePersistentIndex_Callback = void (*)(TextEmoticonsCore__EmojiProxyModel*, QModelIndex*, QModelIndex*);
    using TextEmoticonsCore__EmojiProxyModel_ChangePersistentIndexList_Callback = void (*)(TextEmoticonsCore__EmojiProxyModel*, libqt_list /* of QModelIndex* */, libqt_list /* of QModelIndex* */);
    using TextEmoticonsCore__EmojiProxyModel_PersistentIndexList_Callback = libqt_list /* of QModelIndex* */ (*)();
    using TextEmoticonsCore__EmojiProxyModel_Sender_Callback = QObject* (*)();
    using TextEmoticonsCore__EmojiProxyModel_SenderSignalIndex_Callback = int (*)();
    using TextEmoticonsCore__EmojiProxyModel_Receivers_Callback = int (*)(const TextEmoticonsCore__EmojiProxyModel*, const char*);
    using TextEmoticonsCore__EmojiProxyModel_IsSignalConnected_Callback = bool (*)(const TextEmoticonsCore__EmojiProxyModel*, QMetaMethod*);

  protected:
    // Instance callback storage
    TextEmoticonsCore__EmojiProxyModel_MetaObject_Callback textemoticonscore__emojiproxymodel_metaobject_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_Metacast_Callback textemoticonscore__emojiproxymodel_metacast_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_Metacall_Callback textemoticonscore__emojiproxymodel_metacall_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_FilterAcceptsRow_Callback textemoticonscore__emojiproxymodel_filteracceptsrow_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_LessThan_Callback textemoticonscore__emojiproxymodel_lessthan_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_SetSourceModel_Callback textemoticonscore__emojiproxymodel_setsourcemodel_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_MapToSource_Callback textemoticonscore__emojiproxymodel_maptosource_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_MapFromSource_Callback textemoticonscore__emojiproxymodel_mapfromsource_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_MapSelectionToSource_Callback textemoticonscore__emojiproxymodel_mapselectiontosource_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_MapSelectionFromSource_Callback textemoticonscore__emojiproxymodel_mapselectionfromsource_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_FilterAcceptsColumn_Callback textemoticonscore__emojiproxymodel_filteracceptscolumn_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_Index_Callback textemoticonscore__emojiproxymodel_index_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_Parent_Callback textemoticonscore__emojiproxymodel_parent_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_Sibling_Callback textemoticonscore__emojiproxymodel_sibling_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_RowCount_Callback textemoticonscore__emojiproxymodel_rowcount_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_ColumnCount_Callback textemoticonscore__emojiproxymodel_columncount_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_HasChildren_Callback textemoticonscore__emojiproxymodel_haschildren_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_Data_Callback textemoticonscore__emojiproxymodel_data_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_SetData_Callback textemoticonscore__emojiproxymodel_setdata_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_HeaderData_Callback textemoticonscore__emojiproxymodel_headerdata_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_SetHeaderData_Callback textemoticonscore__emojiproxymodel_setheaderdata_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_MimeData_Callback textemoticonscore__emojiproxymodel_mimedata_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_DropMimeData_Callback textemoticonscore__emojiproxymodel_dropmimedata_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_InsertRows_Callback textemoticonscore__emojiproxymodel_insertrows_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_InsertColumns_Callback textemoticonscore__emojiproxymodel_insertcolumns_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_RemoveRows_Callback textemoticonscore__emojiproxymodel_removerows_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_RemoveColumns_Callback textemoticonscore__emojiproxymodel_removecolumns_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_FetchMore_Callback textemoticonscore__emojiproxymodel_fetchmore_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_CanFetchMore_Callback textemoticonscore__emojiproxymodel_canfetchmore_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_Flags_Callback textemoticonscore__emojiproxymodel_flags_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_Buddy_Callback textemoticonscore__emojiproxymodel_buddy_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_Match_Callback textemoticonscore__emojiproxymodel_match_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_Span_Callback textemoticonscore__emojiproxymodel_span_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_Sort_Callback textemoticonscore__emojiproxymodel_sort_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_MimeTypes_Callback textemoticonscore__emojiproxymodel_mimetypes_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_SupportedDropActions_Callback textemoticonscore__emojiproxymodel_supporteddropactions_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_Submit_Callback textemoticonscore__emojiproxymodel_submit_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_Revert_Callback textemoticonscore__emojiproxymodel_revert_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_ItemData_Callback textemoticonscore__emojiproxymodel_itemdata_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_SetItemData_Callback textemoticonscore__emojiproxymodel_setitemdata_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_ClearItemData_Callback textemoticonscore__emojiproxymodel_clearitemdata_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_CanDropMimeData_Callback textemoticonscore__emojiproxymodel_candropmimedata_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_SupportedDragActions_Callback textemoticonscore__emojiproxymodel_supporteddragactions_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_RoleNames_Callback textemoticonscore__emojiproxymodel_rolenames_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_MoveRows_Callback textemoticonscore__emojiproxymodel_moverows_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_MoveColumns_Callback textemoticonscore__emojiproxymodel_movecolumns_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_MultiData_Callback textemoticonscore__emojiproxymodel_multidata_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_ResetInternalData_Callback textemoticonscore__emojiproxymodel_resetinternaldata_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_Event_Callback textemoticonscore__emojiproxymodel_event_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_EventFilter_Callback textemoticonscore__emojiproxymodel_eventfilter_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_TimerEvent_Callback textemoticonscore__emojiproxymodel_timerevent_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_ChildEvent_Callback textemoticonscore__emojiproxymodel_childevent_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_CustomEvent_Callback textemoticonscore__emojiproxymodel_customevent_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_ConnectNotify_Callback textemoticonscore__emojiproxymodel_connectnotify_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_DisconnectNotify_Callback textemoticonscore__emojiproxymodel_disconnectnotify_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_InvalidateFilter_Callback textemoticonscore__emojiproxymodel_invalidatefilter_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_InvalidateRowsFilter_Callback textemoticonscore__emojiproxymodel_invalidaterowsfilter_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_InvalidateColumnsFilter_Callback textemoticonscore__emojiproxymodel_invalidatecolumnsfilter_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_CreateSourceIndex_Callback textemoticonscore__emojiproxymodel_createsourceindex_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_CreateIndex_Callback textemoticonscore__emojiproxymodel_createindex_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_EncodeData_Callback textemoticonscore__emojiproxymodel_encodedata_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_DecodeData_Callback textemoticonscore__emojiproxymodel_decodedata_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_BeginInsertRows_Callback textemoticonscore__emojiproxymodel_begininsertrows_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_EndInsertRows_Callback textemoticonscore__emojiproxymodel_endinsertrows_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_BeginRemoveRows_Callback textemoticonscore__emojiproxymodel_beginremoverows_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_EndRemoveRows_Callback textemoticonscore__emojiproxymodel_endremoverows_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_BeginMoveRows_Callback textemoticonscore__emojiproxymodel_beginmoverows_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_EndMoveRows_Callback textemoticonscore__emojiproxymodel_endmoverows_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_BeginInsertColumns_Callback textemoticonscore__emojiproxymodel_begininsertcolumns_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_EndInsertColumns_Callback textemoticonscore__emojiproxymodel_endinsertcolumns_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_BeginRemoveColumns_Callback textemoticonscore__emojiproxymodel_beginremovecolumns_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_EndRemoveColumns_Callback textemoticonscore__emojiproxymodel_endremovecolumns_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_BeginMoveColumns_Callback textemoticonscore__emojiproxymodel_beginmovecolumns_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_EndMoveColumns_Callback textemoticonscore__emojiproxymodel_endmovecolumns_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_BeginResetModel_Callback textemoticonscore__emojiproxymodel_beginresetmodel_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_EndResetModel_Callback textemoticonscore__emojiproxymodel_endresetmodel_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_ChangePersistentIndex_Callback textemoticonscore__emojiproxymodel_changepersistentindex_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_ChangePersistentIndexList_Callback textemoticonscore__emojiproxymodel_changepersistentindexlist_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_PersistentIndexList_Callback textemoticonscore__emojiproxymodel_persistentindexlist_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_Sender_Callback textemoticonscore__emojiproxymodel_sender_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_SenderSignalIndex_Callback textemoticonscore__emojiproxymodel_sendersignalindex_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_Receivers_Callback textemoticonscore__emojiproxymodel_receivers_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_IsSignalConnected_Callback textemoticonscore__emojiproxymodel_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool textemoticonscore__emojiproxymodel_metaobject_isbase = false;
    mutable bool textemoticonscore__emojiproxymodel_metacast_isbase = false;
    mutable bool textemoticonscore__emojiproxymodel_metacall_isbase = false;
    mutable bool textemoticonscore__emojiproxymodel_filteracceptsrow_isbase = false;
    mutable bool textemoticonscore__emojiproxymodel_lessthan_isbase = false;
    mutable bool textemoticonscore__emojiproxymodel_setsourcemodel_isbase = false;
    mutable bool textemoticonscore__emojiproxymodel_maptosource_isbase = false;
    mutable bool textemoticonscore__emojiproxymodel_mapfromsource_isbase = false;
    mutable bool textemoticonscore__emojiproxymodel_mapselectiontosource_isbase = false;
    mutable bool textemoticonscore__emojiproxymodel_mapselectionfromsource_isbase = false;
    mutable bool textemoticonscore__emojiproxymodel_filteracceptscolumn_isbase = false;
    mutable bool textemoticonscore__emojiproxymodel_index_isbase = false;
    mutable bool textemoticonscore__emojiproxymodel_parent_isbase = false;
    mutable bool textemoticonscore__emojiproxymodel_sibling_isbase = false;
    mutable bool textemoticonscore__emojiproxymodel_rowcount_isbase = false;
    mutable bool textemoticonscore__emojiproxymodel_columncount_isbase = false;
    mutable bool textemoticonscore__emojiproxymodel_haschildren_isbase = false;
    mutable bool textemoticonscore__emojiproxymodel_data_isbase = false;
    mutable bool textemoticonscore__emojiproxymodel_setdata_isbase = false;
    mutable bool textemoticonscore__emojiproxymodel_headerdata_isbase = false;
    mutable bool textemoticonscore__emojiproxymodel_setheaderdata_isbase = false;
    mutable bool textemoticonscore__emojiproxymodel_mimedata_isbase = false;
    mutable bool textemoticonscore__emojiproxymodel_dropmimedata_isbase = false;
    mutable bool textemoticonscore__emojiproxymodel_insertrows_isbase = false;
    mutable bool textemoticonscore__emojiproxymodel_insertcolumns_isbase = false;
    mutable bool textemoticonscore__emojiproxymodel_removerows_isbase = false;
    mutable bool textemoticonscore__emojiproxymodel_removecolumns_isbase = false;
    mutable bool textemoticonscore__emojiproxymodel_fetchmore_isbase = false;
    mutable bool textemoticonscore__emojiproxymodel_canfetchmore_isbase = false;
    mutable bool textemoticonscore__emojiproxymodel_flags_isbase = false;
    mutable bool textemoticonscore__emojiproxymodel_buddy_isbase = false;
    mutable bool textemoticonscore__emojiproxymodel_match_isbase = false;
    mutable bool textemoticonscore__emojiproxymodel_span_isbase = false;
    mutable bool textemoticonscore__emojiproxymodel_sort_isbase = false;
    mutable bool textemoticonscore__emojiproxymodel_mimetypes_isbase = false;
    mutable bool textemoticonscore__emojiproxymodel_supporteddropactions_isbase = false;
    mutable bool textemoticonscore__emojiproxymodel_submit_isbase = false;
    mutable bool textemoticonscore__emojiproxymodel_revert_isbase = false;
    mutable bool textemoticonscore__emojiproxymodel_itemdata_isbase = false;
    mutable bool textemoticonscore__emojiproxymodel_setitemdata_isbase = false;
    mutable bool textemoticonscore__emojiproxymodel_clearitemdata_isbase = false;
    mutable bool textemoticonscore__emojiproxymodel_candropmimedata_isbase = false;
    mutable bool textemoticonscore__emojiproxymodel_supporteddragactions_isbase = false;
    mutable bool textemoticonscore__emojiproxymodel_rolenames_isbase = false;
    mutable bool textemoticonscore__emojiproxymodel_moverows_isbase = false;
    mutable bool textemoticonscore__emojiproxymodel_movecolumns_isbase = false;
    mutable bool textemoticonscore__emojiproxymodel_multidata_isbase = false;
    mutable bool textemoticonscore__emojiproxymodel_resetinternaldata_isbase = false;
    mutable bool textemoticonscore__emojiproxymodel_event_isbase = false;
    mutable bool textemoticonscore__emojiproxymodel_eventfilter_isbase = false;
    mutable bool textemoticonscore__emojiproxymodel_timerevent_isbase = false;
    mutable bool textemoticonscore__emojiproxymodel_childevent_isbase = false;
    mutable bool textemoticonscore__emojiproxymodel_customevent_isbase = false;
    mutable bool textemoticonscore__emojiproxymodel_connectnotify_isbase = false;
    mutable bool textemoticonscore__emojiproxymodel_disconnectnotify_isbase = false;
    mutable bool textemoticonscore__emojiproxymodel_invalidatefilter_isbase = false;
    mutable bool textemoticonscore__emojiproxymodel_invalidaterowsfilter_isbase = false;
    mutable bool textemoticonscore__emojiproxymodel_invalidatecolumnsfilter_isbase = false;
    mutable bool textemoticonscore__emojiproxymodel_createsourceindex_isbase = false;
    mutable bool textemoticonscore__emojiproxymodel_createindex_isbase = false;
    mutable bool textemoticonscore__emojiproxymodel_encodedata_isbase = false;
    mutable bool textemoticonscore__emojiproxymodel_decodedata_isbase = false;
    mutable bool textemoticonscore__emojiproxymodel_begininsertrows_isbase = false;
    mutable bool textemoticonscore__emojiproxymodel_endinsertrows_isbase = false;
    mutable bool textemoticonscore__emojiproxymodel_beginremoverows_isbase = false;
    mutable bool textemoticonscore__emojiproxymodel_endremoverows_isbase = false;
    mutable bool textemoticonscore__emojiproxymodel_beginmoverows_isbase = false;
    mutable bool textemoticonscore__emojiproxymodel_endmoverows_isbase = false;
    mutable bool textemoticonscore__emojiproxymodel_begininsertcolumns_isbase = false;
    mutable bool textemoticonscore__emojiproxymodel_endinsertcolumns_isbase = false;
    mutable bool textemoticonscore__emojiproxymodel_beginremovecolumns_isbase = false;
    mutable bool textemoticonscore__emojiproxymodel_endremovecolumns_isbase = false;
    mutable bool textemoticonscore__emojiproxymodel_beginmovecolumns_isbase = false;
    mutable bool textemoticonscore__emojiproxymodel_endmovecolumns_isbase = false;
    mutable bool textemoticonscore__emojiproxymodel_beginresetmodel_isbase = false;
    mutable bool textemoticonscore__emojiproxymodel_endresetmodel_isbase = false;
    mutable bool textemoticonscore__emojiproxymodel_changepersistentindex_isbase = false;
    mutable bool textemoticonscore__emojiproxymodel_changepersistentindexlist_isbase = false;
    mutable bool textemoticonscore__emojiproxymodel_persistentindexlist_isbase = false;
    mutable bool textemoticonscore__emojiproxymodel_sender_isbase = false;
    mutable bool textemoticonscore__emojiproxymodel_sendersignalindex_isbase = false;
    mutable bool textemoticonscore__emojiproxymodel_receivers_isbase = false;
    mutable bool textemoticonscore__emojiproxymodel_issignalconnected_isbase = false;

  public:
    VirtualTextEmoticonsCoreEmojiProxyModel() : TextEmoticonsCore::EmojiProxyModel() {};
    VirtualTextEmoticonsCoreEmojiProxyModel(QObject* parent) : TextEmoticonsCore::EmojiProxyModel(parent) {};

    // Callback setters
    inline void setTextEmoticonsCore__EmojiProxyModel_MetaObject_Callback(TextEmoticonsCore__EmojiProxyModel_MetaObject_Callback cb) { textemoticonscore__emojiproxymodel_metaobject_callback = cb; }
    inline void setTextEmoticonsCore__EmojiProxyModel_Metacast_Callback(TextEmoticonsCore__EmojiProxyModel_Metacast_Callback cb) { textemoticonscore__emojiproxymodel_metacast_callback = cb; }
    inline void setTextEmoticonsCore__EmojiProxyModel_Metacall_Callback(TextEmoticonsCore__EmojiProxyModel_Metacall_Callback cb) { textemoticonscore__emojiproxymodel_metacall_callback = cb; }
    inline void setTextEmoticonsCore__EmojiProxyModel_FilterAcceptsRow_Callback(TextEmoticonsCore__EmojiProxyModel_FilterAcceptsRow_Callback cb) { textemoticonscore__emojiproxymodel_filteracceptsrow_callback = cb; }
    inline void setTextEmoticonsCore__EmojiProxyModel_LessThan_Callback(TextEmoticonsCore__EmojiProxyModel_LessThan_Callback cb) { textemoticonscore__emojiproxymodel_lessthan_callback = cb; }
    inline void setTextEmoticonsCore__EmojiProxyModel_SetSourceModel_Callback(TextEmoticonsCore__EmojiProxyModel_SetSourceModel_Callback cb) { textemoticonscore__emojiproxymodel_setsourcemodel_callback = cb; }
    inline void setTextEmoticonsCore__EmojiProxyModel_MapToSource_Callback(TextEmoticonsCore__EmojiProxyModel_MapToSource_Callback cb) { textemoticonscore__emojiproxymodel_maptosource_callback = cb; }
    inline void setTextEmoticonsCore__EmojiProxyModel_MapFromSource_Callback(TextEmoticonsCore__EmojiProxyModel_MapFromSource_Callback cb) { textemoticonscore__emojiproxymodel_mapfromsource_callback = cb; }
    inline void setTextEmoticonsCore__EmojiProxyModel_MapSelectionToSource_Callback(TextEmoticonsCore__EmojiProxyModel_MapSelectionToSource_Callback cb) { textemoticonscore__emojiproxymodel_mapselectiontosource_callback = cb; }
    inline void setTextEmoticonsCore__EmojiProxyModel_MapSelectionFromSource_Callback(TextEmoticonsCore__EmojiProxyModel_MapSelectionFromSource_Callback cb) { textemoticonscore__emojiproxymodel_mapselectionfromsource_callback = cb; }
    inline void setTextEmoticonsCore__EmojiProxyModel_FilterAcceptsColumn_Callback(TextEmoticonsCore__EmojiProxyModel_FilterAcceptsColumn_Callback cb) { textemoticonscore__emojiproxymodel_filteracceptscolumn_callback = cb; }
    inline void setTextEmoticonsCore__EmojiProxyModel_Index_Callback(TextEmoticonsCore__EmojiProxyModel_Index_Callback cb) { textemoticonscore__emojiproxymodel_index_callback = cb; }
    inline void setTextEmoticonsCore__EmojiProxyModel_Parent_Callback(TextEmoticonsCore__EmojiProxyModel_Parent_Callback cb) { textemoticonscore__emojiproxymodel_parent_callback = cb; }
    inline void setTextEmoticonsCore__EmojiProxyModel_Sibling_Callback(TextEmoticonsCore__EmojiProxyModel_Sibling_Callback cb) { textemoticonscore__emojiproxymodel_sibling_callback = cb; }
    inline void setTextEmoticonsCore__EmojiProxyModel_RowCount_Callback(TextEmoticonsCore__EmojiProxyModel_RowCount_Callback cb) { textemoticonscore__emojiproxymodel_rowcount_callback = cb; }
    inline void setTextEmoticonsCore__EmojiProxyModel_ColumnCount_Callback(TextEmoticonsCore__EmojiProxyModel_ColumnCount_Callback cb) { textemoticonscore__emojiproxymodel_columncount_callback = cb; }
    inline void setTextEmoticonsCore__EmojiProxyModel_HasChildren_Callback(TextEmoticonsCore__EmojiProxyModel_HasChildren_Callback cb) { textemoticonscore__emojiproxymodel_haschildren_callback = cb; }
    inline void setTextEmoticonsCore__EmojiProxyModel_Data_Callback(TextEmoticonsCore__EmojiProxyModel_Data_Callback cb) { textemoticonscore__emojiproxymodel_data_callback = cb; }
    inline void setTextEmoticonsCore__EmojiProxyModel_SetData_Callback(TextEmoticonsCore__EmojiProxyModel_SetData_Callback cb) { textemoticonscore__emojiproxymodel_setdata_callback = cb; }
    inline void setTextEmoticonsCore__EmojiProxyModel_HeaderData_Callback(TextEmoticonsCore__EmojiProxyModel_HeaderData_Callback cb) { textemoticonscore__emojiproxymodel_headerdata_callback = cb; }
    inline void setTextEmoticonsCore__EmojiProxyModel_SetHeaderData_Callback(TextEmoticonsCore__EmojiProxyModel_SetHeaderData_Callback cb) { textemoticonscore__emojiproxymodel_setheaderdata_callback = cb; }
    inline void setTextEmoticonsCore__EmojiProxyModel_MimeData_Callback(TextEmoticonsCore__EmojiProxyModel_MimeData_Callback cb) { textemoticonscore__emojiproxymodel_mimedata_callback = cb; }
    inline void setTextEmoticonsCore__EmojiProxyModel_DropMimeData_Callback(TextEmoticonsCore__EmojiProxyModel_DropMimeData_Callback cb) { textemoticonscore__emojiproxymodel_dropmimedata_callback = cb; }
    inline void setTextEmoticonsCore__EmojiProxyModel_InsertRows_Callback(TextEmoticonsCore__EmojiProxyModel_InsertRows_Callback cb) { textemoticonscore__emojiproxymodel_insertrows_callback = cb; }
    inline void setTextEmoticonsCore__EmojiProxyModel_InsertColumns_Callback(TextEmoticonsCore__EmojiProxyModel_InsertColumns_Callback cb) { textemoticonscore__emojiproxymodel_insertcolumns_callback = cb; }
    inline void setTextEmoticonsCore__EmojiProxyModel_RemoveRows_Callback(TextEmoticonsCore__EmojiProxyModel_RemoveRows_Callback cb) { textemoticonscore__emojiproxymodel_removerows_callback = cb; }
    inline void setTextEmoticonsCore__EmojiProxyModel_RemoveColumns_Callback(TextEmoticonsCore__EmojiProxyModel_RemoveColumns_Callback cb) { textemoticonscore__emojiproxymodel_removecolumns_callback = cb; }
    inline void setTextEmoticonsCore__EmojiProxyModel_FetchMore_Callback(TextEmoticonsCore__EmojiProxyModel_FetchMore_Callback cb) { textemoticonscore__emojiproxymodel_fetchmore_callback = cb; }
    inline void setTextEmoticonsCore__EmojiProxyModel_CanFetchMore_Callback(TextEmoticonsCore__EmojiProxyModel_CanFetchMore_Callback cb) { textemoticonscore__emojiproxymodel_canfetchmore_callback = cb; }
    inline void setTextEmoticonsCore__EmojiProxyModel_Flags_Callback(TextEmoticonsCore__EmojiProxyModel_Flags_Callback cb) { textemoticonscore__emojiproxymodel_flags_callback = cb; }
    inline void setTextEmoticonsCore__EmojiProxyModel_Buddy_Callback(TextEmoticonsCore__EmojiProxyModel_Buddy_Callback cb) { textemoticonscore__emojiproxymodel_buddy_callback = cb; }
    inline void setTextEmoticonsCore__EmojiProxyModel_Match_Callback(TextEmoticonsCore__EmojiProxyModel_Match_Callback cb) { textemoticonscore__emojiproxymodel_match_callback = cb; }
    inline void setTextEmoticonsCore__EmojiProxyModel_Span_Callback(TextEmoticonsCore__EmojiProxyModel_Span_Callback cb) { textemoticonscore__emojiproxymodel_span_callback = cb; }
    inline void setTextEmoticonsCore__EmojiProxyModel_Sort_Callback(TextEmoticonsCore__EmojiProxyModel_Sort_Callback cb) { textemoticonscore__emojiproxymodel_sort_callback = cb; }
    inline void setTextEmoticonsCore__EmojiProxyModel_MimeTypes_Callback(TextEmoticonsCore__EmojiProxyModel_MimeTypes_Callback cb) { textemoticonscore__emojiproxymodel_mimetypes_callback = cb; }
    inline void setTextEmoticonsCore__EmojiProxyModel_SupportedDropActions_Callback(TextEmoticonsCore__EmojiProxyModel_SupportedDropActions_Callback cb) { textemoticonscore__emojiproxymodel_supporteddropactions_callback = cb; }
    inline void setTextEmoticonsCore__EmojiProxyModel_Submit_Callback(TextEmoticonsCore__EmojiProxyModel_Submit_Callback cb) { textemoticonscore__emojiproxymodel_submit_callback = cb; }
    inline void setTextEmoticonsCore__EmojiProxyModel_Revert_Callback(TextEmoticonsCore__EmojiProxyModel_Revert_Callback cb) { textemoticonscore__emojiproxymodel_revert_callback = cb; }
    inline void setTextEmoticonsCore__EmojiProxyModel_ItemData_Callback(TextEmoticonsCore__EmojiProxyModel_ItemData_Callback cb) { textemoticonscore__emojiproxymodel_itemdata_callback = cb; }
    inline void setTextEmoticonsCore__EmojiProxyModel_SetItemData_Callback(TextEmoticonsCore__EmojiProxyModel_SetItemData_Callback cb) { textemoticonscore__emojiproxymodel_setitemdata_callback = cb; }
    inline void setTextEmoticonsCore__EmojiProxyModel_ClearItemData_Callback(TextEmoticonsCore__EmojiProxyModel_ClearItemData_Callback cb) { textemoticonscore__emojiproxymodel_clearitemdata_callback = cb; }
    inline void setTextEmoticonsCore__EmojiProxyModel_CanDropMimeData_Callback(TextEmoticonsCore__EmojiProxyModel_CanDropMimeData_Callback cb) { textemoticonscore__emojiproxymodel_candropmimedata_callback = cb; }
    inline void setTextEmoticonsCore__EmojiProxyModel_SupportedDragActions_Callback(TextEmoticonsCore__EmojiProxyModel_SupportedDragActions_Callback cb) { textemoticonscore__emojiproxymodel_supporteddragactions_callback = cb; }
    inline void setTextEmoticonsCore__EmojiProxyModel_RoleNames_Callback(TextEmoticonsCore__EmojiProxyModel_RoleNames_Callback cb) { textemoticonscore__emojiproxymodel_rolenames_callback = cb; }
    inline void setTextEmoticonsCore__EmojiProxyModel_MoveRows_Callback(TextEmoticonsCore__EmojiProxyModel_MoveRows_Callback cb) { textemoticonscore__emojiproxymodel_moverows_callback = cb; }
    inline void setTextEmoticonsCore__EmojiProxyModel_MoveColumns_Callback(TextEmoticonsCore__EmojiProxyModel_MoveColumns_Callback cb) { textemoticonscore__emojiproxymodel_movecolumns_callback = cb; }
    inline void setTextEmoticonsCore__EmojiProxyModel_MultiData_Callback(TextEmoticonsCore__EmojiProxyModel_MultiData_Callback cb) { textemoticonscore__emojiproxymodel_multidata_callback = cb; }
    inline void setTextEmoticonsCore__EmojiProxyModel_ResetInternalData_Callback(TextEmoticonsCore__EmojiProxyModel_ResetInternalData_Callback cb) { textemoticonscore__emojiproxymodel_resetinternaldata_callback = cb; }
    inline void setTextEmoticonsCore__EmojiProxyModel_Event_Callback(TextEmoticonsCore__EmojiProxyModel_Event_Callback cb) { textemoticonscore__emojiproxymodel_event_callback = cb; }
    inline void setTextEmoticonsCore__EmojiProxyModel_EventFilter_Callback(TextEmoticonsCore__EmojiProxyModel_EventFilter_Callback cb) { textemoticonscore__emojiproxymodel_eventfilter_callback = cb; }
    inline void setTextEmoticonsCore__EmojiProxyModel_TimerEvent_Callback(TextEmoticonsCore__EmojiProxyModel_TimerEvent_Callback cb) { textemoticonscore__emojiproxymodel_timerevent_callback = cb; }
    inline void setTextEmoticonsCore__EmojiProxyModel_ChildEvent_Callback(TextEmoticonsCore__EmojiProxyModel_ChildEvent_Callback cb) { textemoticonscore__emojiproxymodel_childevent_callback = cb; }
    inline void setTextEmoticonsCore__EmojiProxyModel_CustomEvent_Callback(TextEmoticonsCore__EmojiProxyModel_CustomEvent_Callback cb) { textemoticonscore__emojiproxymodel_customevent_callback = cb; }
    inline void setTextEmoticonsCore__EmojiProxyModel_ConnectNotify_Callback(TextEmoticonsCore__EmojiProxyModel_ConnectNotify_Callback cb) { textemoticonscore__emojiproxymodel_connectnotify_callback = cb; }
    inline void setTextEmoticonsCore__EmojiProxyModel_DisconnectNotify_Callback(TextEmoticonsCore__EmojiProxyModel_DisconnectNotify_Callback cb) { textemoticonscore__emojiproxymodel_disconnectnotify_callback = cb; }
    inline void setTextEmoticonsCore__EmojiProxyModel_InvalidateFilter_Callback(TextEmoticonsCore__EmojiProxyModel_InvalidateFilter_Callback cb) { textemoticonscore__emojiproxymodel_invalidatefilter_callback = cb; }
    inline void setTextEmoticonsCore__EmojiProxyModel_InvalidateRowsFilter_Callback(TextEmoticonsCore__EmojiProxyModel_InvalidateRowsFilter_Callback cb) { textemoticonscore__emojiproxymodel_invalidaterowsfilter_callback = cb; }
    inline void setTextEmoticonsCore__EmojiProxyModel_InvalidateColumnsFilter_Callback(TextEmoticonsCore__EmojiProxyModel_InvalidateColumnsFilter_Callback cb) { textemoticonscore__emojiproxymodel_invalidatecolumnsfilter_callback = cb; }
    inline void setTextEmoticonsCore__EmojiProxyModel_CreateSourceIndex_Callback(TextEmoticonsCore__EmojiProxyModel_CreateSourceIndex_Callback cb) { textemoticonscore__emojiproxymodel_createsourceindex_callback = cb; }
    inline void setTextEmoticonsCore__EmojiProxyModel_CreateIndex_Callback(TextEmoticonsCore__EmojiProxyModel_CreateIndex_Callback cb) { textemoticonscore__emojiproxymodel_createindex_callback = cb; }
    inline void setTextEmoticonsCore__EmojiProxyModel_EncodeData_Callback(TextEmoticonsCore__EmojiProxyModel_EncodeData_Callback cb) { textemoticonscore__emojiproxymodel_encodedata_callback = cb; }
    inline void setTextEmoticonsCore__EmojiProxyModel_DecodeData_Callback(TextEmoticonsCore__EmojiProxyModel_DecodeData_Callback cb) { textemoticonscore__emojiproxymodel_decodedata_callback = cb; }
    inline void setTextEmoticonsCore__EmojiProxyModel_BeginInsertRows_Callback(TextEmoticonsCore__EmojiProxyModel_BeginInsertRows_Callback cb) { textemoticonscore__emojiproxymodel_begininsertrows_callback = cb; }
    inline void setTextEmoticonsCore__EmojiProxyModel_EndInsertRows_Callback(TextEmoticonsCore__EmojiProxyModel_EndInsertRows_Callback cb) { textemoticonscore__emojiproxymodel_endinsertrows_callback = cb; }
    inline void setTextEmoticonsCore__EmojiProxyModel_BeginRemoveRows_Callback(TextEmoticonsCore__EmojiProxyModel_BeginRemoveRows_Callback cb) { textemoticonscore__emojiproxymodel_beginremoverows_callback = cb; }
    inline void setTextEmoticonsCore__EmojiProxyModel_EndRemoveRows_Callback(TextEmoticonsCore__EmojiProxyModel_EndRemoveRows_Callback cb) { textemoticonscore__emojiproxymodel_endremoverows_callback = cb; }
    inline void setTextEmoticonsCore__EmojiProxyModel_BeginMoveRows_Callback(TextEmoticonsCore__EmojiProxyModel_BeginMoveRows_Callback cb) { textemoticonscore__emojiproxymodel_beginmoverows_callback = cb; }
    inline void setTextEmoticonsCore__EmojiProxyModel_EndMoveRows_Callback(TextEmoticonsCore__EmojiProxyModel_EndMoveRows_Callback cb) { textemoticonscore__emojiproxymodel_endmoverows_callback = cb; }
    inline void setTextEmoticonsCore__EmojiProxyModel_BeginInsertColumns_Callback(TextEmoticonsCore__EmojiProxyModel_BeginInsertColumns_Callback cb) { textemoticonscore__emojiproxymodel_begininsertcolumns_callback = cb; }
    inline void setTextEmoticonsCore__EmojiProxyModel_EndInsertColumns_Callback(TextEmoticonsCore__EmojiProxyModel_EndInsertColumns_Callback cb) { textemoticonscore__emojiproxymodel_endinsertcolumns_callback = cb; }
    inline void setTextEmoticonsCore__EmojiProxyModel_BeginRemoveColumns_Callback(TextEmoticonsCore__EmojiProxyModel_BeginRemoveColumns_Callback cb) { textemoticonscore__emojiproxymodel_beginremovecolumns_callback = cb; }
    inline void setTextEmoticonsCore__EmojiProxyModel_EndRemoveColumns_Callback(TextEmoticonsCore__EmojiProxyModel_EndRemoveColumns_Callback cb) { textemoticonscore__emojiproxymodel_endremovecolumns_callback = cb; }
    inline void setTextEmoticonsCore__EmojiProxyModel_BeginMoveColumns_Callback(TextEmoticonsCore__EmojiProxyModel_BeginMoveColumns_Callback cb) { textemoticonscore__emojiproxymodel_beginmovecolumns_callback = cb; }
    inline void setTextEmoticonsCore__EmojiProxyModel_EndMoveColumns_Callback(TextEmoticonsCore__EmojiProxyModel_EndMoveColumns_Callback cb) { textemoticonscore__emojiproxymodel_endmovecolumns_callback = cb; }
    inline void setTextEmoticonsCore__EmojiProxyModel_BeginResetModel_Callback(TextEmoticonsCore__EmojiProxyModel_BeginResetModel_Callback cb) { textemoticonscore__emojiproxymodel_beginresetmodel_callback = cb; }
    inline void setTextEmoticonsCore__EmojiProxyModel_EndResetModel_Callback(TextEmoticonsCore__EmojiProxyModel_EndResetModel_Callback cb) { textemoticonscore__emojiproxymodel_endresetmodel_callback = cb; }
    inline void setTextEmoticonsCore__EmojiProxyModel_ChangePersistentIndex_Callback(TextEmoticonsCore__EmojiProxyModel_ChangePersistentIndex_Callback cb) { textemoticonscore__emojiproxymodel_changepersistentindex_callback = cb; }
    inline void setTextEmoticonsCore__EmojiProxyModel_ChangePersistentIndexList_Callback(TextEmoticonsCore__EmojiProxyModel_ChangePersistentIndexList_Callback cb) { textemoticonscore__emojiproxymodel_changepersistentindexlist_callback = cb; }
    inline void setTextEmoticonsCore__EmojiProxyModel_PersistentIndexList_Callback(TextEmoticonsCore__EmojiProxyModel_PersistentIndexList_Callback cb) { textemoticonscore__emojiproxymodel_persistentindexlist_callback = cb; }
    inline void setTextEmoticonsCore__EmojiProxyModel_Sender_Callback(TextEmoticonsCore__EmojiProxyModel_Sender_Callback cb) { textemoticonscore__emojiproxymodel_sender_callback = cb; }
    inline void setTextEmoticonsCore__EmojiProxyModel_SenderSignalIndex_Callback(TextEmoticonsCore__EmojiProxyModel_SenderSignalIndex_Callback cb) { textemoticonscore__emojiproxymodel_sendersignalindex_callback = cb; }
    inline void setTextEmoticonsCore__EmojiProxyModel_Receivers_Callback(TextEmoticonsCore__EmojiProxyModel_Receivers_Callback cb) { textemoticonscore__emojiproxymodel_receivers_callback = cb; }
    inline void setTextEmoticonsCore__EmojiProxyModel_IsSignalConnected_Callback(TextEmoticonsCore__EmojiProxyModel_IsSignalConnected_Callback cb) { textemoticonscore__emojiproxymodel_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setTextEmoticonsCore__EmojiProxyModel_MetaObject_IsBase(bool value) const { textemoticonscore__emojiproxymodel_metaobject_isbase = value; }
    inline void setTextEmoticonsCore__EmojiProxyModel_Metacast_IsBase(bool value) const { textemoticonscore__emojiproxymodel_metacast_isbase = value; }
    inline void setTextEmoticonsCore__EmojiProxyModel_Metacall_IsBase(bool value) const { textemoticonscore__emojiproxymodel_metacall_isbase = value; }
    inline void setTextEmoticonsCore__EmojiProxyModel_FilterAcceptsRow_IsBase(bool value) const { textemoticonscore__emojiproxymodel_filteracceptsrow_isbase = value; }
    inline void setTextEmoticonsCore__EmojiProxyModel_LessThan_IsBase(bool value) const { textemoticonscore__emojiproxymodel_lessthan_isbase = value; }
    inline void setTextEmoticonsCore__EmojiProxyModel_SetSourceModel_IsBase(bool value) const { textemoticonscore__emojiproxymodel_setsourcemodel_isbase = value; }
    inline void setTextEmoticonsCore__EmojiProxyModel_MapToSource_IsBase(bool value) const { textemoticonscore__emojiproxymodel_maptosource_isbase = value; }
    inline void setTextEmoticonsCore__EmojiProxyModel_MapFromSource_IsBase(bool value) const { textemoticonscore__emojiproxymodel_mapfromsource_isbase = value; }
    inline void setTextEmoticonsCore__EmojiProxyModel_MapSelectionToSource_IsBase(bool value) const { textemoticonscore__emojiproxymodel_mapselectiontosource_isbase = value; }
    inline void setTextEmoticonsCore__EmojiProxyModel_MapSelectionFromSource_IsBase(bool value) const { textemoticonscore__emojiproxymodel_mapselectionfromsource_isbase = value; }
    inline void setTextEmoticonsCore__EmojiProxyModel_FilterAcceptsColumn_IsBase(bool value) const { textemoticonscore__emojiproxymodel_filteracceptscolumn_isbase = value; }
    inline void setTextEmoticonsCore__EmojiProxyModel_Index_IsBase(bool value) const { textemoticonscore__emojiproxymodel_index_isbase = value; }
    inline void setTextEmoticonsCore__EmojiProxyModel_Parent_IsBase(bool value) const { textemoticonscore__emojiproxymodel_parent_isbase = value; }
    inline void setTextEmoticonsCore__EmojiProxyModel_Sibling_IsBase(bool value) const { textemoticonscore__emojiproxymodel_sibling_isbase = value; }
    inline void setTextEmoticonsCore__EmojiProxyModel_RowCount_IsBase(bool value) const { textemoticonscore__emojiproxymodel_rowcount_isbase = value; }
    inline void setTextEmoticonsCore__EmojiProxyModel_ColumnCount_IsBase(bool value) const { textemoticonscore__emojiproxymodel_columncount_isbase = value; }
    inline void setTextEmoticonsCore__EmojiProxyModel_HasChildren_IsBase(bool value) const { textemoticonscore__emojiproxymodel_haschildren_isbase = value; }
    inline void setTextEmoticonsCore__EmojiProxyModel_Data_IsBase(bool value) const { textemoticonscore__emojiproxymodel_data_isbase = value; }
    inline void setTextEmoticonsCore__EmojiProxyModel_SetData_IsBase(bool value) const { textemoticonscore__emojiproxymodel_setdata_isbase = value; }
    inline void setTextEmoticonsCore__EmojiProxyModel_HeaderData_IsBase(bool value) const { textemoticonscore__emojiproxymodel_headerdata_isbase = value; }
    inline void setTextEmoticonsCore__EmojiProxyModel_SetHeaderData_IsBase(bool value) const { textemoticonscore__emojiproxymodel_setheaderdata_isbase = value; }
    inline void setTextEmoticonsCore__EmojiProxyModel_MimeData_IsBase(bool value) const { textemoticonscore__emojiproxymodel_mimedata_isbase = value; }
    inline void setTextEmoticonsCore__EmojiProxyModel_DropMimeData_IsBase(bool value) const { textemoticonscore__emojiproxymodel_dropmimedata_isbase = value; }
    inline void setTextEmoticonsCore__EmojiProxyModel_InsertRows_IsBase(bool value) const { textemoticonscore__emojiproxymodel_insertrows_isbase = value; }
    inline void setTextEmoticonsCore__EmojiProxyModel_InsertColumns_IsBase(bool value) const { textemoticonscore__emojiproxymodel_insertcolumns_isbase = value; }
    inline void setTextEmoticonsCore__EmojiProxyModel_RemoveRows_IsBase(bool value) const { textemoticonscore__emojiproxymodel_removerows_isbase = value; }
    inline void setTextEmoticonsCore__EmojiProxyModel_RemoveColumns_IsBase(bool value) const { textemoticonscore__emojiproxymodel_removecolumns_isbase = value; }
    inline void setTextEmoticonsCore__EmojiProxyModel_FetchMore_IsBase(bool value) const { textemoticonscore__emojiproxymodel_fetchmore_isbase = value; }
    inline void setTextEmoticonsCore__EmojiProxyModel_CanFetchMore_IsBase(bool value) const { textemoticonscore__emojiproxymodel_canfetchmore_isbase = value; }
    inline void setTextEmoticonsCore__EmojiProxyModel_Flags_IsBase(bool value) const { textemoticonscore__emojiproxymodel_flags_isbase = value; }
    inline void setTextEmoticonsCore__EmojiProxyModel_Buddy_IsBase(bool value) const { textemoticonscore__emojiproxymodel_buddy_isbase = value; }
    inline void setTextEmoticonsCore__EmojiProxyModel_Match_IsBase(bool value) const { textemoticonscore__emojiproxymodel_match_isbase = value; }
    inline void setTextEmoticonsCore__EmojiProxyModel_Span_IsBase(bool value) const { textemoticonscore__emojiproxymodel_span_isbase = value; }
    inline void setTextEmoticonsCore__EmojiProxyModel_Sort_IsBase(bool value) const { textemoticonscore__emojiproxymodel_sort_isbase = value; }
    inline void setTextEmoticonsCore__EmojiProxyModel_MimeTypes_IsBase(bool value) const { textemoticonscore__emojiproxymodel_mimetypes_isbase = value; }
    inline void setTextEmoticonsCore__EmojiProxyModel_SupportedDropActions_IsBase(bool value) const { textemoticonscore__emojiproxymodel_supporteddropactions_isbase = value; }
    inline void setTextEmoticonsCore__EmojiProxyModel_Submit_IsBase(bool value) const { textemoticonscore__emojiproxymodel_submit_isbase = value; }
    inline void setTextEmoticonsCore__EmojiProxyModel_Revert_IsBase(bool value) const { textemoticonscore__emojiproxymodel_revert_isbase = value; }
    inline void setTextEmoticonsCore__EmojiProxyModel_ItemData_IsBase(bool value) const { textemoticonscore__emojiproxymodel_itemdata_isbase = value; }
    inline void setTextEmoticonsCore__EmojiProxyModel_SetItemData_IsBase(bool value) const { textemoticonscore__emojiproxymodel_setitemdata_isbase = value; }
    inline void setTextEmoticonsCore__EmojiProxyModel_ClearItemData_IsBase(bool value) const { textemoticonscore__emojiproxymodel_clearitemdata_isbase = value; }
    inline void setTextEmoticonsCore__EmojiProxyModel_CanDropMimeData_IsBase(bool value) const { textemoticonscore__emojiproxymodel_candropmimedata_isbase = value; }
    inline void setTextEmoticonsCore__EmojiProxyModel_SupportedDragActions_IsBase(bool value) const { textemoticonscore__emojiproxymodel_supporteddragactions_isbase = value; }
    inline void setTextEmoticonsCore__EmojiProxyModel_RoleNames_IsBase(bool value) const { textemoticonscore__emojiproxymodel_rolenames_isbase = value; }
    inline void setTextEmoticonsCore__EmojiProxyModel_MoveRows_IsBase(bool value) const { textemoticonscore__emojiproxymodel_moverows_isbase = value; }
    inline void setTextEmoticonsCore__EmojiProxyModel_MoveColumns_IsBase(bool value) const { textemoticonscore__emojiproxymodel_movecolumns_isbase = value; }
    inline void setTextEmoticonsCore__EmojiProxyModel_MultiData_IsBase(bool value) const { textemoticonscore__emojiproxymodel_multidata_isbase = value; }
    inline void setTextEmoticonsCore__EmojiProxyModel_ResetInternalData_IsBase(bool value) const { textemoticonscore__emojiproxymodel_resetinternaldata_isbase = value; }
    inline void setTextEmoticonsCore__EmojiProxyModel_Event_IsBase(bool value) const { textemoticonscore__emojiproxymodel_event_isbase = value; }
    inline void setTextEmoticonsCore__EmojiProxyModel_EventFilter_IsBase(bool value) const { textemoticonscore__emojiproxymodel_eventfilter_isbase = value; }
    inline void setTextEmoticonsCore__EmojiProxyModel_TimerEvent_IsBase(bool value) const { textemoticonscore__emojiproxymodel_timerevent_isbase = value; }
    inline void setTextEmoticonsCore__EmojiProxyModel_ChildEvent_IsBase(bool value) const { textemoticonscore__emojiproxymodel_childevent_isbase = value; }
    inline void setTextEmoticonsCore__EmojiProxyModel_CustomEvent_IsBase(bool value) const { textemoticonscore__emojiproxymodel_customevent_isbase = value; }
    inline void setTextEmoticonsCore__EmojiProxyModel_ConnectNotify_IsBase(bool value) const { textemoticonscore__emojiproxymodel_connectnotify_isbase = value; }
    inline void setTextEmoticonsCore__EmojiProxyModel_DisconnectNotify_IsBase(bool value) const { textemoticonscore__emojiproxymodel_disconnectnotify_isbase = value; }
    inline void setTextEmoticonsCore__EmojiProxyModel_InvalidateFilter_IsBase(bool value) const { textemoticonscore__emojiproxymodel_invalidatefilter_isbase = value; }
    inline void setTextEmoticonsCore__EmojiProxyModel_InvalidateRowsFilter_IsBase(bool value) const { textemoticonscore__emojiproxymodel_invalidaterowsfilter_isbase = value; }
    inline void setTextEmoticonsCore__EmojiProxyModel_InvalidateColumnsFilter_IsBase(bool value) const { textemoticonscore__emojiproxymodel_invalidatecolumnsfilter_isbase = value; }
    inline void setTextEmoticonsCore__EmojiProxyModel_CreateSourceIndex_IsBase(bool value) const { textemoticonscore__emojiproxymodel_createsourceindex_isbase = value; }
    inline void setTextEmoticonsCore__EmojiProxyModel_CreateIndex_IsBase(bool value) const { textemoticonscore__emojiproxymodel_createindex_isbase = value; }
    inline void setTextEmoticonsCore__EmojiProxyModel_EncodeData_IsBase(bool value) const { textemoticonscore__emojiproxymodel_encodedata_isbase = value; }
    inline void setTextEmoticonsCore__EmojiProxyModel_DecodeData_IsBase(bool value) const { textemoticonscore__emojiproxymodel_decodedata_isbase = value; }
    inline void setTextEmoticonsCore__EmojiProxyModel_BeginInsertRows_IsBase(bool value) const { textemoticonscore__emojiproxymodel_begininsertrows_isbase = value; }
    inline void setTextEmoticonsCore__EmojiProxyModel_EndInsertRows_IsBase(bool value) const { textemoticonscore__emojiproxymodel_endinsertrows_isbase = value; }
    inline void setTextEmoticonsCore__EmojiProxyModel_BeginRemoveRows_IsBase(bool value) const { textemoticonscore__emojiproxymodel_beginremoverows_isbase = value; }
    inline void setTextEmoticonsCore__EmojiProxyModel_EndRemoveRows_IsBase(bool value) const { textemoticonscore__emojiproxymodel_endremoverows_isbase = value; }
    inline void setTextEmoticonsCore__EmojiProxyModel_BeginMoveRows_IsBase(bool value) const { textemoticonscore__emojiproxymodel_beginmoverows_isbase = value; }
    inline void setTextEmoticonsCore__EmojiProxyModel_EndMoveRows_IsBase(bool value) const { textemoticonscore__emojiproxymodel_endmoverows_isbase = value; }
    inline void setTextEmoticonsCore__EmojiProxyModel_BeginInsertColumns_IsBase(bool value) const { textemoticonscore__emojiproxymodel_begininsertcolumns_isbase = value; }
    inline void setTextEmoticonsCore__EmojiProxyModel_EndInsertColumns_IsBase(bool value) const { textemoticonscore__emojiproxymodel_endinsertcolumns_isbase = value; }
    inline void setTextEmoticonsCore__EmojiProxyModel_BeginRemoveColumns_IsBase(bool value) const { textemoticonscore__emojiproxymodel_beginremovecolumns_isbase = value; }
    inline void setTextEmoticonsCore__EmojiProxyModel_EndRemoveColumns_IsBase(bool value) const { textemoticonscore__emojiproxymodel_endremovecolumns_isbase = value; }
    inline void setTextEmoticonsCore__EmojiProxyModel_BeginMoveColumns_IsBase(bool value) const { textemoticonscore__emojiproxymodel_beginmovecolumns_isbase = value; }
    inline void setTextEmoticonsCore__EmojiProxyModel_EndMoveColumns_IsBase(bool value) const { textemoticonscore__emojiproxymodel_endmovecolumns_isbase = value; }
    inline void setTextEmoticonsCore__EmojiProxyModel_BeginResetModel_IsBase(bool value) const { textemoticonscore__emojiproxymodel_beginresetmodel_isbase = value; }
    inline void setTextEmoticonsCore__EmojiProxyModel_EndResetModel_IsBase(bool value) const { textemoticonscore__emojiproxymodel_endresetmodel_isbase = value; }
    inline void setTextEmoticonsCore__EmojiProxyModel_ChangePersistentIndex_IsBase(bool value) const { textemoticonscore__emojiproxymodel_changepersistentindex_isbase = value; }
    inline void setTextEmoticonsCore__EmojiProxyModel_ChangePersistentIndexList_IsBase(bool value) const { textemoticonscore__emojiproxymodel_changepersistentindexlist_isbase = value; }
    inline void setTextEmoticonsCore__EmojiProxyModel_PersistentIndexList_IsBase(bool value) const { textemoticonscore__emojiproxymodel_persistentindexlist_isbase = value; }
    inline void setTextEmoticonsCore__EmojiProxyModel_Sender_IsBase(bool value) const { textemoticonscore__emojiproxymodel_sender_isbase = value; }
    inline void setTextEmoticonsCore__EmojiProxyModel_SenderSignalIndex_IsBase(bool value) const { textemoticonscore__emojiproxymodel_sendersignalindex_isbase = value; }
    inline void setTextEmoticonsCore__EmojiProxyModel_Receivers_IsBase(bool value) const { textemoticonscore__emojiproxymodel_receivers_isbase = value; }
    inline void setTextEmoticonsCore__EmojiProxyModel_IsSignalConnected_IsBase(bool value) const { textemoticonscore__emojiproxymodel_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (textemoticonscore__emojiproxymodel_metaobject_isbase) {
            textemoticonscore__emojiproxymodel_metaobject_isbase = false;
            return TextEmoticonsCore__EmojiProxyModel::metaObject();
        }
        auto metaobject_cb = textemoticonscore__emojiproxymodel_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return TextEmoticonsCore__EmojiProxyModel::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (textemoticonscore__emojiproxymodel_metacast_isbase) {
            textemoticonscore__emojiproxymodel_metacast_isbase = false;
            return TextEmoticonsCore__EmojiProxyModel::qt_metacast(param1);
        }
        auto metacast_cb = textemoticonscore__emojiproxymodel_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return TextEmoticonsCore__EmojiProxyModel::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (textemoticonscore__emojiproxymodel_metacall_isbase) {
            textemoticonscore__emojiproxymodel_metacall_isbase = false;
            return TextEmoticonsCore__EmojiProxyModel::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = textemoticonscore__emojiproxymodel_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextEmoticonsCore__EmojiProxyModel::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool filterAcceptsRow(int source_row, const QModelIndex& source_parent) const override {
        if (textemoticonscore__emojiproxymodel_filteracceptsrow_isbase) {
            textemoticonscore__emojiproxymodel_filteracceptsrow_isbase = false;
            return TextEmoticonsCore__EmojiProxyModel::filterAcceptsRow(source_row, source_parent);
        }
        auto filteracceptsrow_cb = textemoticonscore__emojiproxymodel_filteracceptsrow_callback;
        if (filteracceptsrow_cb) {
            int cbval1 = source_row;
            const QModelIndex& source_parent_ret = source_parent;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&source_parent_ret);
            bool callback_ret = filteracceptsrow_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextEmoticonsCore__EmojiProxyModel::filterAcceptsRow(source_row, source_parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool lessThan(const QModelIndex& left, const QModelIndex& right) const override {
        if (textemoticonscore__emojiproxymodel_lessthan_isbase) {
            textemoticonscore__emojiproxymodel_lessthan_isbase = false;
            return TextEmoticonsCore__EmojiProxyModel::lessThan(left, right);
        }
        auto lessthan_cb = textemoticonscore__emojiproxymodel_lessthan_callback;
        if (lessthan_cb) {
            const QModelIndex& left_ret = left;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&left_ret);
            const QModelIndex& right_ret = right;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&right_ret);
            bool callback_ret = lessthan_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextEmoticonsCore__EmojiProxyModel::lessThan(left, right);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSourceModel(QAbstractItemModel* sourceModel) override {
        if (textemoticonscore__emojiproxymodel_setsourcemodel_isbase) {
            textemoticonscore__emojiproxymodel_setsourcemodel_isbase = false;
            TextEmoticonsCore__EmojiProxyModel::setSourceModel(sourceModel);
            return;
        }
        auto setsourcemodel_cb = textemoticonscore__emojiproxymodel_setsourcemodel_callback;
        if (setsourcemodel_cb) {
            QAbstractItemModel* cbval1 = sourceModel;
            setsourcemodel_cb(this, cbval1);
            return;
        }
        TextEmoticonsCore__EmojiProxyModel::setSourceModel(sourceModel);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex mapToSource(const QModelIndex& proxyIndex) const override {
        if (textemoticonscore__emojiproxymodel_maptosource_isbase) {
            textemoticonscore__emojiproxymodel_maptosource_isbase = false;
            return TextEmoticonsCore__EmojiProxyModel::mapToSource(proxyIndex);
        }
        auto maptosource_cb = textemoticonscore__emojiproxymodel_maptosource_callback;
        if (maptosource_cb) {
            const QModelIndex& proxyIndex_ret = proxyIndex;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&proxyIndex_ret);
            QModelIndex* callback_ret = maptosource_cb(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextEmoticonsCore__EmojiProxyModel::mapToSource(proxyIndex);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex mapFromSource(const QModelIndex& sourceIndex) const override {
        if (textemoticonscore__emojiproxymodel_mapfromsource_isbase) {
            textemoticonscore__emojiproxymodel_mapfromsource_isbase = false;
            return TextEmoticonsCore__EmojiProxyModel::mapFromSource(sourceIndex);
        }
        auto mapfromsource_cb = textemoticonscore__emojiproxymodel_mapfromsource_callback;
        if (mapfromsource_cb) {
            const QModelIndex& sourceIndex_ret = sourceIndex;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceIndex_ret);
            QModelIndex* callback_ret = mapfromsource_cb(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextEmoticonsCore__EmojiProxyModel::mapFromSource(sourceIndex);
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelection mapSelectionToSource(const QItemSelection& proxySelection) const override {
        if (textemoticonscore__emojiproxymodel_mapselectiontosource_isbase) {
            textemoticonscore__emojiproxymodel_mapselectiontosource_isbase = false;
            return TextEmoticonsCore__EmojiProxyModel::mapSelectionToSource(proxySelection);
        }
        auto mapselectiontosource_cb = textemoticonscore__emojiproxymodel_mapselectiontosource_callback;
        if (mapselectiontosource_cb) {
            const QItemSelection& proxySelection_ret = proxySelection;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&proxySelection_ret);
            QItemSelection* callback_ret = mapselectiontosource_cb(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextEmoticonsCore__EmojiProxyModel::mapSelectionToSource(proxySelection);
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelection mapSelectionFromSource(const QItemSelection& sourceSelection) const override {
        if (textemoticonscore__emojiproxymodel_mapselectionfromsource_isbase) {
            textemoticonscore__emojiproxymodel_mapselectionfromsource_isbase = false;
            return TextEmoticonsCore__EmojiProxyModel::mapSelectionFromSource(sourceSelection);
        }
        auto mapselectionfromsource_cb = textemoticonscore__emojiproxymodel_mapselectionfromsource_callback;
        if (mapselectionfromsource_cb) {
            const QItemSelection& sourceSelection_ret = sourceSelection;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&sourceSelection_ret);
            QItemSelection* callback_ret = mapselectionfromsource_cb(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextEmoticonsCore__EmojiProxyModel::mapSelectionFromSource(sourceSelection);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool filterAcceptsColumn(int source_column, const QModelIndex& source_parent) const override {
        if (textemoticonscore__emojiproxymodel_filteracceptscolumn_isbase) {
            textemoticonscore__emojiproxymodel_filteracceptscolumn_isbase = false;
            return TextEmoticonsCore__EmojiProxyModel::filterAcceptsColumn(source_column, source_parent);
        }
        auto filteracceptscolumn_cb = textemoticonscore__emojiproxymodel_filteracceptscolumn_callback;
        if (filteracceptscolumn_cb) {
            int cbval1 = source_column;
            const QModelIndex& source_parent_ret = source_parent;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&source_parent_ret);
            bool callback_ret = filteracceptscolumn_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextEmoticonsCore__EmojiProxyModel::filterAcceptsColumn(source_column, source_parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
        if (textemoticonscore__emojiproxymodel_index_isbase) {
            textemoticonscore__emojiproxymodel_index_isbase = false;
            return TextEmoticonsCore__EmojiProxyModel::index(row, column, parent);
        }
        auto index_cb = textemoticonscore__emojiproxymodel_index_callback;
        if (index_cb) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            QModelIndex* callback_ret = index_cb(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextEmoticonsCore__EmojiProxyModel::index(row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex parent(const QModelIndex& child) const override {
        if (textemoticonscore__emojiproxymodel_parent_isbase) {
            textemoticonscore__emojiproxymodel_parent_isbase = false;
            return TextEmoticonsCore__EmojiProxyModel::parent(child);
        }
        auto parent_cb = textemoticonscore__emojiproxymodel_parent_callback;
        if (parent_cb) {
            const QModelIndex& child_ret = child;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&child_ret);
            QModelIndex* callback_ret = parent_cb(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextEmoticonsCore__EmojiProxyModel::parent(child);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
        if (textemoticonscore__emojiproxymodel_sibling_isbase) {
            textemoticonscore__emojiproxymodel_sibling_isbase = false;
            return TextEmoticonsCore__EmojiProxyModel::sibling(row, column, idx);
        }
        auto sibling_cb = textemoticonscore__emojiproxymodel_sibling_callback;
        if (sibling_cb) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& idx_ret = idx;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&idx_ret);
            QModelIndex* callback_ret = sibling_cb(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextEmoticonsCore__EmojiProxyModel::sibling(row, column, idx);
    }

    // Virtual method for C ABI access and custom callback
    virtual int rowCount(const QModelIndex& parent) const override {
        if (textemoticonscore__emojiproxymodel_rowcount_isbase) {
            textemoticonscore__emojiproxymodel_rowcount_isbase = false;
            return TextEmoticonsCore__EmojiProxyModel::rowCount(parent);
        }
        auto rowcount_cb = textemoticonscore__emojiproxymodel_rowcount_callback;
        if (rowcount_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int callback_ret = rowcount_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextEmoticonsCore__EmojiProxyModel::rowCount(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual int columnCount(const QModelIndex& parent) const override {
        if (textemoticonscore__emojiproxymodel_columncount_isbase) {
            textemoticonscore__emojiproxymodel_columncount_isbase = false;
            return TextEmoticonsCore__EmojiProxyModel::columnCount(parent);
        }
        auto columncount_cb = textemoticonscore__emojiproxymodel_columncount_callback;
        if (columncount_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int callback_ret = columncount_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextEmoticonsCore__EmojiProxyModel::columnCount(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasChildren(const QModelIndex& parent) const override {
        if (textemoticonscore__emojiproxymodel_haschildren_isbase) {
            textemoticonscore__emojiproxymodel_haschildren_isbase = false;
            return TextEmoticonsCore__EmojiProxyModel::hasChildren(parent);
        }
        auto haschildren_cb = textemoticonscore__emojiproxymodel_haschildren_callback;
        if (haschildren_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = haschildren_cb(this, cbval1);
            return callback_ret;
        }
        return TextEmoticonsCore__EmojiProxyModel::hasChildren(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(const QModelIndex& index, int role) const override {
        if (textemoticonscore__emojiproxymodel_data_isbase) {
            textemoticonscore__emojiproxymodel_data_isbase = false;
            return TextEmoticonsCore__EmojiProxyModel::data(index, role);
        }
        auto data_cb = textemoticonscore__emojiproxymodel_data_callback;
        if (data_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = role;
            QVariant* callback_ret = data_cb(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextEmoticonsCore__EmojiProxyModel::data(index, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
        if (textemoticonscore__emojiproxymodel_setdata_isbase) {
            textemoticonscore__emojiproxymodel_setdata_isbase = false;
            return TextEmoticonsCore__EmojiProxyModel::setData(index, value, role);
        }
        auto setdata_cb = textemoticonscore__emojiproxymodel_setdata_callback;
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
        return TextEmoticonsCore__EmojiProxyModel::setData(index, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
        if (textemoticonscore__emojiproxymodel_headerdata_isbase) {
            textemoticonscore__emojiproxymodel_headerdata_isbase = false;
            return TextEmoticonsCore__EmojiProxyModel::headerData(section, orientation, role);
        }
        auto headerdata_cb = textemoticonscore__emojiproxymodel_headerdata_callback;
        if (headerdata_cb) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            int cbval3 = role;
            QVariant* callback_ret = headerdata_cb(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextEmoticonsCore__EmojiProxyModel::headerData(section, orientation, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
        if (textemoticonscore__emojiproxymodel_setheaderdata_isbase) {
            textemoticonscore__emojiproxymodel_setheaderdata_isbase = false;
            return TextEmoticonsCore__EmojiProxyModel::setHeaderData(section, orientation, value, role);
        }
        auto setheaderdata_cb = textemoticonscore__emojiproxymodel_setheaderdata_callback;
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
        return TextEmoticonsCore__EmojiProxyModel::setHeaderData(section, orientation, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* mimeData(const QList<QModelIndex>& indexes) const override {
        if (textemoticonscore__emojiproxymodel_mimedata_isbase) {
            textemoticonscore__emojiproxymodel_mimedata_isbase = false;
            return TextEmoticonsCore__EmojiProxyModel::mimeData(indexes);
        }
        auto mimedata_cb = textemoticonscore__emojiproxymodel_mimedata_callback;
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
        return TextEmoticonsCore__EmojiProxyModel::mimeData(indexes);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
        if (textemoticonscore__emojiproxymodel_dropmimedata_isbase) {
            textemoticonscore__emojiproxymodel_dropmimedata_isbase = false;
            return TextEmoticonsCore__EmojiProxyModel::dropMimeData(data, action, row, column, parent);
        }
        auto dropmimedata_cb = textemoticonscore__emojiproxymodel_dropmimedata_callback;
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
        return TextEmoticonsCore__EmojiProxyModel::dropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
        if (textemoticonscore__emojiproxymodel_insertrows_isbase) {
            textemoticonscore__emojiproxymodel_insertrows_isbase = false;
            return TextEmoticonsCore__EmojiProxyModel::insertRows(row, count, parent);
        }
        auto insertrows_cb = textemoticonscore__emojiproxymodel_insertrows_callback;
        if (insertrows_cb) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = insertrows_cb(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return TextEmoticonsCore__EmojiProxyModel::insertRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
        if (textemoticonscore__emojiproxymodel_insertcolumns_isbase) {
            textemoticonscore__emojiproxymodel_insertcolumns_isbase = false;
            return TextEmoticonsCore__EmojiProxyModel::insertColumns(column, count, parent);
        }
        auto insertcolumns_cb = textemoticonscore__emojiproxymodel_insertcolumns_callback;
        if (insertcolumns_cb) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = insertcolumns_cb(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return TextEmoticonsCore__EmojiProxyModel::insertColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
        if (textemoticonscore__emojiproxymodel_removerows_isbase) {
            textemoticonscore__emojiproxymodel_removerows_isbase = false;
            return TextEmoticonsCore__EmojiProxyModel::removeRows(row, count, parent);
        }
        auto removerows_cb = textemoticonscore__emojiproxymodel_removerows_callback;
        if (removerows_cb) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = removerows_cb(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return TextEmoticonsCore__EmojiProxyModel::removeRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
        if (textemoticonscore__emojiproxymodel_removecolumns_isbase) {
            textemoticonscore__emojiproxymodel_removecolumns_isbase = false;
            return TextEmoticonsCore__EmojiProxyModel::removeColumns(column, count, parent);
        }
        auto removecolumns_cb = textemoticonscore__emojiproxymodel_removecolumns_callback;
        if (removecolumns_cb) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = removecolumns_cb(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return TextEmoticonsCore__EmojiProxyModel::removeColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void fetchMore(const QModelIndex& parent) override {
        if (textemoticonscore__emojiproxymodel_fetchmore_isbase) {
            textemoticonscore__emojiproxymodel_fetchmore_isbase = false;
            TextEmoticonsCore__EmojiProxyModel::fetchMore(parent);
            return;
        }
        auto fetchmore_cb = textemoticonscore__emojiproxymodel_fetchmore_callback;
        if (fetchmore_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            fetchmore_cb(this, cbval1);
            return;
        }
        TextEmoticonsCore__EmojiProxyModel::fetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canFetchMore(const QModelIndex& parent) const override {
        if (textemoticonscore__emojiproxymodel_canfetchmore_isbase) {
            textemoticonscore__emojiproxymodel_canfetchmore_isbase = false;
            return TextEmoticonsCore__EmojiProxyModel::canFetchMore(parent);
        }
        auto canfetchmore_cb = textemoticonscore__emojiproxymodel_canfetchmore_callback;
        if (canfetchmore_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = canfetchmore_cb(this, cbval1);
            return callback_ret;
        }
        return TextEmoticonsCore__EmojiProxyModel::canFetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
        if (textemoticonscore__emojiproxymodel_flags_isbase) {
            textemoticonscore__emojiproxymodel_flags_isbase = false;
            return TextEmoticonsCore__EmojiProxyModel::flags(index);
        }
        auto flags_cb = textemoticonscore__emojiproxymodel_flags_callback;
        if (flags_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int callback_ret = flags_cb(this, cbval1);
            return static_cast<Qt::ItemFlags>(callback_ret);
        }
        return TextEmoticonsCore__EmojiProxyModel::flags(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex buddy(const QModelIndex& index) const override {
        if (textemoticonscore__emojiproxymodel_buddy_isbase) {
            textemoticonscore__emojiproxymodel_buddy_isbase = false;
            return TextEmoticonsCore__EmojiProxyModel::buddy(index);
        }
        auto buddy_cb = textemoticonscore__emojiproxymodel_buddy_callback;
        if (buddy_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelIndex* callback_ret = buddy_cb(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextEmoticonsCore__EmojiProxyModel::buddy(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
        if (textemoticonscore__emojiproxymodel_match_isbase) {
            textemoticonscore__emojiproxymodel_match_isbase = false;
            return TextEmoticonsCore__EmojiProxyModel::match(start, role, value, hits, flags);
        }
        auto match_cb = textemoticonscore__emojiproxymodel_match_callback;
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
        return TextEmoticonsCore__EmojiProxyModel::match(start, role, value, hits, flags);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize span(const QModelIndex& index) const override {
        if (textemoticonscore__emojiproxymodel_span_isbase) {
            textemoticonscore__emojiproxymodel_span_isbase = false;
            return TextEmoticonsCore__EmojiProxyModel::span(index);
        }
        auto span_cb = textemoticonscore__emojiproxymodel_span_callback;
        if (span_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QSize* callback_ret = span_cb(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextEmoticonsCore__EmojiProxyModel::span(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void sort(int column, Qt::SortOrder order) override {
        if (textemoticonscore__emojiproxymodel_sort_isbase) {
            textemoticonscore__emojiproxymodel_sort_isbase = false;
            TextEmoticonsCore__EmojiProxyModel::sort(column, order);
            return;
        }
        auto sort_cb = textemoticonscore__emojiproxymodel_sort_callback;
        if (sort_cb) {
            int cbval1 = column;
            int cbval2 = static_cast<int>(order);
            sort_cb(this, cbval1, cbval2);
            return;
        }
        TextEmoticonsCore__EmojiProxyModel::sort(column, order);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> mimeTypes() const override {
        if (textemoticonscore__emojiproxymodel_mimetypes_isbase) {
            textemoticonscore__emojiproxymodel_mimetypes_isbase = false;
            return TextEmoticonsCore__EmojiProxyModel::mimeTypes();
        }
        auto mimetypes_cb = textemoticonscore__emojiproxymodel_mimetypes_callback;
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
        return TextEmoticonsCore__EmojiProxyModel::mimeTypes();
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (textemoticonscore__emojiproxymodel_supporteddropactions_isbase) {
            textemoticonscore__emojiproxymodel_supporteddropactions_isbase = false;
            return TextEmoticonsCore__EmojiProxyModel::supportedDropActions();
        }
        auto supporteddropactions_cb = textemoticonscore__emojiproxymodel_supporteddropactions_callback;
        if (supporteddropactions_cb) {
            int callback_ret = supporteddropactions_cb();
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return TextEmoticonsCore__EmojiProxyModel::supportedDropActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool submit() override {
        if (textemoticonscore__emojiproxymodel_submit_isbase) {
            textemoticonscore__emojiproxymodel_submit_isbase = false;
            return TextEmoticonsCore__EmojiProxyModel::submit();
        }
        auto submit_cb = textemoticonscore__emojiproxymodel_submit_callback;
        if (submit_cb) {
            bool callback_ret = submit_cb();
            return callback_ret;
        }
        return TextEmoticonsCore__EmojiProxyModel::submit();
    }

    // Virtual method for C ABI access and custom callback
    virtual void revert() override {
        if (textemoticonscore__emojiproxymodel_revert_isbase) {
            textemoticonscore__emojiproxymodel_revert_isbase = false;
            TextEmoticonsCore__EmojiProxyModel::revert();
            return;
        }
        auto revert_cb = textemoticonscore__emojiproxymodel_revert_callback;
        if (revert_cb) {
            revert_cb();
            return;
        }
        TextEmoticonsCore__EmojiProxyModel::revert();
    }

    // Virtual method for C ABI access and custom callback
    virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
        if (textemoticonscore__emojiproxymodel_itemdata_isbase) {
            textemoticonscore__emojiproxymodel_itemdata_isbase = false;
            return TextEmoticonsCore__EmojiProxyModel::itemData(index);
        }
        auto itemdata_cb = textemoticonscore__emojiproxymodel_itemdata_callback;
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
        return TextEmoticonsCore__EmojiProxyModel::itemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
        if (textemoticonscore__emojiproxymodel_setitemdata_isbase) {
            textemoticonscore__emojiproxymodel_setitemdata_isbase = false;
            return TextEmoticonsCore__EmojiProxyModel::setItemData(index, roles);
        }
        auto setitemdata_cb = textemoticonscore__emojiproxymodel_setitemdata_callback;
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
        return TextEmoticonsCore__EmojiProxyModel::setItemData(index, roles);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool clearItemData(const QModelIndex& index) override {
        if (textemoticonscore__emojiproxymodel_clearitemdata_isbase) {
            textemoticonscore__emojiproxymodel_clearitemdata_isbase = false;
            return TextEmoticonsCore__EmojiProxyModel::clearItemData(index);
        }
        auto clearitemdata_cb = textemoticonscore__emojiproxymodel_clearitemdata_callback;
        if (clearitemdata_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            bool callback_ret = clearitemdata_cb(this, cbval1);
            return callback_ret;
        }
        return TextEmoticonsCore__EmojiProxyModel::clearItemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
        if (textemoticonscore__emojiproxymodel_candropmimedata_isbase) {
            textemoticonscore__emojiproxymodel_candropmimedata_isbase = false;
            return TextEmoticonsCore__EmojiProxyModel::canDropMimeData(data, action, row, column, parent);
        }
        auto candropmimedata_cb = textemoticonscore__emojiproxymodel_candropmimedata_callback;
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
        return TextEmoticonsCore__EmojiProxyModel::canDropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDragActions() const override {
        if (textemoticonscore__emojiproxymodel_supporteddragactions_isbase) {
            textemoticonscore__emojiproxymodel_supporteddragactions_isbase = false;
            return TextEmoticonsCore__EmojiProxyModel::supportedDragActions();
        }
        auto supporteddragactions_cb = textemoticonscore__emojiproxymodel_supporteddragactions_callback;
        if (supporteddragactions_cb) {
            int callback_ret = supporteddragactions_cb();
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return TextEmoticonsCore__EmojiProxyModel::supportedDragActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual QHash<int, QByteArray> roleNames() const override {
        if (textemoticonscore__emojiproxymodel_rolenames_isbase) {
            textemoticonscore__emojiproxymodel_rolenames_isbase = false;
            return TextEmoticonsCore__EmojiProxyModel::roleNames();
        }
        auto rolenames_cb = textemoticonscore__emojiproxymodel_rolenames_callback;
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
        return TextEmoticonsCore__EmojiProxyModel::roleNames();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (textemoticonscore__emojiproxymodel_moverows_isbase) {
            textemoticonscore__emojiproxymodel_moverows_isbase = false;
            return TextEmoticonsCore__EmojiProxyModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
        }
        auto moverows_cb = textemoticonscore__emojiproxymodel_moverows_callback;
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
        return TextEmoticonsCore__EmojiProxyModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (textemoticonscore__emojiproxymodel_movecolumns_isbase) {
            textemoticonscore__emojiproxymodel_movecolumns_isbase = false;
            return TextEmoticonsCore__EmojiProxyModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
        }
        auto movecolumns_cb = textemoticonscore__emojiproxymodel_movecolumns_callback;
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
        return TextEmoticonsCore__EmojiProxyModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
        if (textemoticonscore__emojiproxymodel_multidata_isbase) {
            textemoticonscore__emojiproxymodel_multidata_isbase = false;
            TextEmoticonsCore__EmojiProxyModel::multiData(index, roleDataSpan);
            return;
        }
        auto multidata_cb = textemoticonscore__emojiproxymodel_multidata_callback;
        if (multidata_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelRoleDataSpan* cbval2 = new QModelRoleDataSpan(roleDataSpan);
            multidata_cb(this, cbval1, cbval2);
            return;
        }
        TextEmoticonsCore__EmojiProxyModel::multiData(index, roleDataSpan);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetInternalData() override {
        if (textemoticonscore__emojiproxymodel_resetinternaldata_isbase) {
            textemoticonscore__emojiproxymodel_resetinternaldata_isbase = false;
            TextEmoticonsCore__EmojiProxyModel::resetInternalData();
            return;
        }
        auto resetinternaldata_cb = textemoticonscore__emojiproxymodel_resetinternaldata_callback;
        if (resetinternaldata_cb) {
            resetinternaldata_cb();
            return;
        }
        TextEmoticonsCore__EmojiProxyModel::resetInternalData();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (textemoticonscore__emojiproxymodel_event_isbase) {
            textemoticonscore__emojiproxymodel_event_isbase = false;
            return TextEmoticonsCore__EmojiProxyModel::event(event);
        }
        auto event_cb = textemoticonscore__emojiproxymodel_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;
            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return TextEmoticonsCore__EmojiProxyModel::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (textemoticonscore__emojiproxymodel_eventfilter_isbase) {
            textemoticonscore__emojiproxymodel_eventfilter_isbase = false;
            return TextEmoticonsCore__EmojiProxyModel::eventFilter(watched, event);
        }
        auto eventfilter_cb = textemoticonscore__emojiproxymodel_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextEmoticonsCore__EmojiProxyModel::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (textemoticonscore__emojiproxymodel_timerevent_isbase) {
            textemoticonscore__emojiproxymodel_timerevent_isbase = false;
            TextEmoticonsCore__EmojiProxyModel::timerEvent(event);
            return;
        }
        auto timerevent_cb = textemoticonscore__emojiproxymodel_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;
            timerevent_cb(this, cbval1);
            return;
        }
        TextEmoticonsCore__EmojiProxyModel::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (textemoticonscore__emojiproxymodel_childevent_isbase) {
            textemoticonscore__emojiproxymodel_childevent_isbase = false;
            TextEmoticonsCore__EmojiProxyModel::childEvent(event);
            return;
        }
        auto childevent_cb = textemoticonscore__emojiproxymodel_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;
            childevent_cb(this, cbval1);
            return;
        }
        TextEmoticonsCore__EmojiProxyModel::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (textemoticonscore__emojiproxymodel_customevent_isbase) {
            textemoticonscore__emojiproxymodel_customevent_isbase = false;
            TextEmoticonsCore__EmojiProxyModel::customEvent(event);
            return;
        }
        auto customevent_cb = textemoticonscore__emojiproxymodel_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;
            customevent_cb(this, cbval1);
            return;
        }
        TextEmoticonsCore__EmojiProxyModel::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (textemoticonscore__emojiproxymodel_connectnotify_isbase) {
            textemoticonscore__emojiproxymodel_connectnotify_isbase = false;
            TextEmoticonsCore__EmojiProxyModel::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = textemoticonscore__emojiproxymodel_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            connectnotify_cb(this, cbval1);
            return;
        }
        TextEmoticonsCore__EmojiProxyModel::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (textemoticonscore__emojiproxymodel_disconnectnotify_isbase) {
            textemoticonscore__emojiproxymodel_disconnectnotify_isbase = false;
            TextEmoticonsCore__EmojiProxyModel::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = textemoticonscore__emojiproxymodel_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            disconnectnotify_cb(this, cbval1);
            return;
        }
        TextEmoticonsCore__EmojiProxyModel::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void invalidateFilter() {
        if (textemoticonscore__emojiproxymodel_invalidatefilter_isbase) {
            textemoticonscore__emojiproxymodel_invalidatefilter_isbase = false;
            TextEmoticonsCore__EmojiProxyModel::invalidateFilter();
            return;
        }
        auto invalidatefilter_cb = textemoticonscore__emojiproxymodel_invalidatefilter_callback;
        if (invalidatefilter_cb) {
            invalidatefilter_cb();
            return;
        }
        TextEmoticonsCore__EmojiProxyModel::invalidateFilter();
    }

    // Virtual method for C ABI access and custom callback
    void invalidateRowsFilter() {
        if (textemoticonscore__emojiproxymodel_invalidaterowsfilter_isbase) {
            textemoticonscore__emojiproxymodel_invalidaterowsfilter_isbase = false;
            TextEmoticonsCore__EmojiProxyModel::invalidateRowsFilter();
            return;
        }
        auto invalidaterowsfilter_cb = textemoticonscore__emojiproxymodel_invalidaterowsfilter_callback;
        if (invalidaterowsfilter_cb) {
            invalidaterowsfilter_cb();
            return;
        }
        TextEmoticonsCore__EmojiProxyModel::invalidateRowsFilter();
    }

    // Virtual method for C ABI access and custom callback
    void invalidateColumnsFilter() {
        if (textemoticonscore__emojiproxymodel_invalidatecolumnsfilter_isbase) {
            textemoticonscore__emojiproxymodel_invalidatecolumnsfilter_isbase = false;
            TextEmoticonsCore__EmojiProxyModel::invalidateColumnsFilter();
            return;
        }
        auto invalidatecolumnsfilter_cb = textemoticonscore__emojiproxymodel_invalidatecolumnsfilter_callback;
        if (invalidatecolumnsfilter_cb) {
            invalidatecolumnsfilter_cb();
            return;
        }
        TextEmoticonsCore__EmojiProxyModel::invalidateColumnsFilter();
    }

    // Virtual method for C ABI access and custom callback
    QModelIndex createSourceIndex(int row, int col, void* internalPtr) const {
        if (textemoticonscore__emojiproxymodel_createsourceindex_isbase) {
            textemoticonscore__emojiproxymodel_createsourceindex_isbase = false;
            return TextEmoticonsCore__EmojiProxyModel::createSourceIndex(row, col, internalPtr);
        }
        auto createsourceindex_cb = textemoticonscore__emojiproxymodel_createsourceindex_callback;
        if (createsourceindex_cb) {
            int cbval1 = row;
            int cbval2 = col;
            void* cbval3 = internalPtr;
            QModelIndex* callback_ret = createsourceindex_cb(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextEmoticonsCore__EmojiProxyModel::createSourceIndex(row, col, internalPtr);
    }

    // Virtual method for C ABI access and custom callback
    QModelIndex createIndex(int row, int column) const {
        if (textemoticonscore__emojiproxymodel_createindex_isbase) {
            textemoticonscore__emojiproxymodel_createindex_isbase = false;
            return TextEmoticonsCore__EmojiProxyModel::createIndex(row, column);
        }
        auto createindex_cb = textemoticonscore__emojiproxymodel_createindex_callback;
        if (createindex_cb) {
            int cbval1 = row;
            int cbval2 = column;
            QModelIndex* callback_ret = createindex_cb(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextEmoticonsCore__EmojiProxyModel::createIndex(row, column);
    }

    // Virtual method for C ABI access and custom callback
    void encodeData(const QList<QModelIndex>& indexes, QDataStream& stream) const {
        if (textemoticonscore__emojiproxymodel_encodedata_isbase) {
            textemoticonscore__emojiproxymodel_encodedata_isbase = false;
            TextEmoticonsCore__EmojiProxyModel::encodeData(indexes, stream);
            return;
        }
        auto encodedata_cb = textemoticonscore__emojiproxymodel_encodedata_callback;
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
        TextEmoticonsCore__EmojiProxyModel::encodeData(indexes, stream);
    }

    // Virtual method for C ABI access and custom callback
    bool decodeData(int row, int column, const QModelIndex& parent, QDataStream& stream) {
        if (textemoticonscore__emojiproxymodel_decodedata_isbase) {
            textemoticonscore__emojiproxymodel_decodedata_isbase = false;
            return TextEmoticonsCore__EmojiProxyModel::decodeData(row, column, parent, stream);
        }
        auto decodedata_cb = textemoticonscore__emojiproxymodel_decodedata_callback;
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
        return TextEmoticonsCore__EmojiProxyModel::decodeData(row, column, parent, stream);
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertRows(const QModelIndex& parent, int first, int last) {
        if (textemoticonscore__emojiproxymodel_begininsertrows_isbase) {
            textemoticonscore__emojiproxymodel_begininsertrows_isbase = false;
            TextEmoticonsCore__EmojiProxyModel::beginInsertRows(parent, first, last);
            return;
        }
        auto begininsertrows_cb = textemoticonscore__emojiproxymodel_begininsertrows_callback;
        if (begininsertrows_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;
            begininsertrows_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        TextEmoticonsCore__EmojiProxyModel::beginInsertRows(parent, first, last);
    }

    // Virtual method for C ABI access and custom callback
    void endInsertRows() {
        if (textemoticonscore__emojiproxymodel_endinsertrows_isbase) {
            textemoticonscore__emojiproxymodel_endinsertrows_isbase = false;
            TextEmoticonsCore__EmojiProxyModel::endInsertRows();
            return;
        }
        auto endinsertrows_cb = textemoticonscore__emojiproxymodel_endinsertrows_callback;
        if (endinsertrows_cb) {
            endinsertrows_cb();
            return;
        }
        TextEmoticonsCore__EmojiProxyModel::endInsertRows();
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveRows(const QModelIndex& parent, int first, int last) {
        if (textemoticonscore__emojiproxymodel_beginremoverows_isbase) {
            textemoticonscore__emojiproxymodel_beginremoverows_isbase = false;
            TextEmoticonsCore__EmojiProxyModel::beginRemoveRows(parent, first, last);
            return;
        }
        auto beginremoverows_cb = textemoticonscore__emojiproxymodel_beginremoverows_callback;
        if (beginremoverows_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;
            beginremoverows_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        TextEmoticonsCore__EmojiProxyModel::beginRemoveRows(parent, first, last);
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveRows() {
        if (textemoticonscore__emojiproxymodel_endremoverows_isbase) {
            textemoticonscore__emojiproxymodel_endremoverows_isbase = false;
            TextEmoticonsCore__EmojiProxyModel::endRemoveRows();
            return;
        }
        auto endremoverows_cb = textemoticonscore__emojiproxymodel_endremoverows_callback;
        if (endremoverows_cb) {
            endremoverows_cb();
            return;
        }
        TextEmoticonsCore__EmojiProxyModel::endRemoveRows();
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveRows(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationRow) {
        if (textemoticonscore__emojiproxymodel_beginmoverows_isbase) {
            textemoticonscore__emojiproxymodel_beginmoverows_isbase = false;
            return TextEmoticonsCore__EmojiProxyModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
        }
        auto beginmoverows_cb = textemoticonscore__emojiproxymodel_beginmoverows_callback;
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
        return TextEmoticonsCore__EmojiProxyModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
    }

    // Virtual method for C ABI access and custom callback
    void endMoveRows() {
        if (textemoticonscore__emojiproxymodel_endmoverows_isbase) {
            textemoticonscore__emojiproxymodel_endmoverows_isbase = false;
            TextEmoticonsCore__EmojiProxyModel::endMoveRows();
            return;
        }
        auto endmoverows_cb = textemoticonscore__emojiproxymodel_endmoverows_callback;
        if (endmoverows_cb) {
            endmoverows_cb();
            return;
        }
        TextEmoticonsCore__EmojiProxyModel::endMoveRows();
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertColumns(const QModelIndex& parent, int first, int last) {
        if (textemoticonscore__emojiproxymodel_begininsertcolumns_isbase) {
            textemoticonscore__emojiproxymodel_begininsertcolumns_isbase = false;
            TextEmoticonsCore__EmojiProxyModel::beginInsertColumns(parent, first, last);
            return;
        }
        auto begininsertcolumns_cb = textemoticonscore__emojiproxymodel_begininsertcolumns_callback;
        if (begininsertcolumns_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;
            begininsertcolumns_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        TextEmoticonsCore__EmojiProxyModel::beginInsertColumns(parent, first, last);
    }

    // Virtual method for C ABI access and custom callback
    void endInsertColumns() {
        if (textemoticonscore__emojiproxymodel_endinsertcolumns_isbase) {
            textemoticonscore__emojiproxymodel_endinsertcolumns_isbase = false;
            TextEmoticonsCore__EmojiProxyModel::endInsertColumns();
            return;
        }
        auto endinsertcolumns_cb = textemoticonscore__emojiproxymodel_endinsertcolumns_callback;
        if (endinsertcolumns_cb) {
            endinsertcolumns_cb();
            return;
        }
        TextEmoticonsCore__EmojiProxyModel::endInsertColumns();
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveColumns(const QModelIndex& parent, int first, int last) {
        if (textemoticonscore__emojiproxymodel_beginremovecolumns_isbase) {
            textemoticonscore__emojiproxymodel_beginremovecolumns_isbase = false;
            TextEmoticonsCore__EmojiProxyModel::beginRemoveColumns(parent, first, last);
            return;
        }
        auto beginremovecolumns_cb = textemoticonscore__emojiproxymodel_beginremovecolumns_callback;
        if (beginremovecolumns_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;
            beginremovecolumns_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        TextEmoticonsCore__EmojiProxyModel::beginRemoveColumns(parent, first, last);
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveColumns() {
        if (textemoticonscore__emojiproxymodel_endremovecolumns_isbase) {
            textemoticonscore__emojiproxymodel_endremovecolumns_isbase = false;
            TextEmoticonsCore__EmojiProxyModel::endRemoveColumns();
            return;
        }
        auto endremovecolumns_cb = textemoticonscore__emojiproxymodel_endremovecolumns_callback;
        if (endremovecolumns_cb) {
            endremovecolumns_cb();
            return;
        }
        TextEmoticonsCore__EmojiProxyModel::endRemoveColumns();
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveColumns(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationColumn) {
        if (textemoticonscore__emojiproxymodel_beginmovecolumns_isbase) {
            textemoticonscore__emojiproxymodel_beginmovecolumns_isbase = false;
            return TextEmoticonsCore__EmojiProxyModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
        }
        auto beginmovecolumns_cb = textemoticonscore__emojiproxymodel_beginmovecolumns_callback;
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
        return TextEmoticonsCore__EmojiProxyModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
    }

    // Virtual method for C ABI access and custom callback
    void endMoveColumns() {
        if (textemoticonscore__emojiproxymodel_endmovecolumns_isbase) {
            textemoticonscore__emojiproxymodel_endmovecolumns_isbase = false;
            TextEmoticonsCore__EmojiProxyModel::endMoveColumns();
            return;
        }
        auto endmovecolumns_cb = textemoticonscore__emojiproxymodel_endmovecolumns_callback;
        if (endmovecolumns_cb) {
            endmovecolumns_cb();
            return;
        }
        TextEmoticonsCore__EmojiProxyModel::endMoveColumns();
    }

    // Virtual method for C ABI access and custom callback
    void beginResetModel() {
        if (textemoticonscore__emojiproxymodel_beginresetmodel_isbase) {
            textemoticonscore__emojiproxymodel_beginresetmodel_isbase = false;
            TextEmoticonsCore__EmojiProxyModel::beginResetModel();
            return;
        }
        auto beginresetmodel_cb = textemoticonscore__emojiproxymodel_beginresetmodel_callback;
        if (beginresetmodel_cb) {
            beginresetmodel_cb();
            return;
        }
        TextEmoticonsCore__EmojiProxyModel::beginResetModel();
    }

    // Virtual method for C ABI access and custom callback
    void endResetModel() {
        if (textemoticonscore__emojiproxymodel_endresetmodel_isbase) {
            textemoticonscore__emojiproxymodel_endresetmodel_isbase = false;
            TextEmoticonsCore__EmojiProxyModel::endResetModel();
            return;
        }
        auto endresetmodel_cb = textemoticonscore__emojiproxymodel_endresetmodel_callback;
        if (endresetmodel_cb) {
            endresetmodel_cb();
            return;
        }
        TextEmoticonsCore__EmojiProxyModel::endResetModel();
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndex(const QModelIndex& from, const QModelIndex& to) {
        if (textemoticonscore__emojiproxymodel_changepersistentindex_isbase) {
            textemoticonscore__emojiproxymodel_changepersistentindex_isbase = false;
            TextEmoticonsCore__EmojiProxyModel::changePersistentIndex(from, to);
            return;
        }
        auto changepersistentindex_cb = textemoticonscore__emojiproxymodel_changepersistentindex_callback;
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
        TextEmoticonsCore__EmojiProxyModel::changePersistentIndex(from, to);
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndexList(const QList<QModelIndex>& from, const QList<QModelIndex>& to) {
        if (textemoticonscore__emojiproxymodel_changepersistentindexlist_isbase) {
            textemoticonscore__emojiproxymodel_changepersistentindexlist_isbase = false;
            TextEmoticonsCore__EmojiProxyModel::changePersistentIndexList(from, to);
            return;
        }
        auto changepersistentindexlist_cb = textemoticonscore__emojiproxymodel_changepersistentindexlist_callback;
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
        TextEmoticonsCore__EmojiProxyModel::changePersistentIndexList(from, to);
    }

    // Virtual method for C ABI access and custom callback
    QList<QModelIndex> persistentIndexList() const {
        if (textemoticonscore__emojiproxymodel_persistentindexlist_isbase) {
            textemoticonscore__emojiproxymodel_persistentindexlist_isbase = false;
            return TextEmoticonsCore__EmojiProxyModel::persistentIndexList();
        }
        auto persistentindexlist_cb = textemoticonscore__emojiproxymodel_persistentindexlist_callback;
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
        return TextEmoticonsCore__EmojiProxyModel::persistentIndexList();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (textemoticonscore__emojiproxymodel_sender_isbase) {
            textemoticonscore__emojiproxymodel_sender_isbase = false;
            return TextEmoticonsCore__EmojiProxyModel::sender();
        }
        auto sender_cb = textemoticonscore__emojiproxymodel_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return TextEmoticonsCore__EmojiProxyModel::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (textemoticonscore__emojiproxymodel_sendersignalindex_isbase) {
            textemoticonscore__emojiproxymodel_sendersignalindex_isbase = false;
            return TextEmoticonsCore__EmojiProxyModel::senderSignalIndex();
        }
        auto sendersignalindex_cb = textemoticonscore__emojiproxymodel_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return TextEmoticonsCore__EmojiProxyModel::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (textemoticonscore__emojiproxymodel_receivers_isbase) {
            textemoticonscore__emojiproxymodel_receivers_isbase = false;
            return TextEmoticonsCore__EmojiProxyModel::receivers(signal);
        }
        auto receivers_cb = textemoticonscore__emojiproxymodel_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;
            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextEmoticonsCore__EmojiProxyModel::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (textemoticonscore__emojiproxymodel_issignalconnected_isbase) {
            textemoticonscore__emojiproxymodel_issignalconnected_isbase = false;
            return TextEmoticonsCore__EmojiProxyModel::isSignalConnected(signal);
        }
        auto issignalconnected_cb = textemoticonscore__emojiproxymodel_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return TextEmoticonsCore__EmojiProxyModel::isSignalConnected(signal);
    }

    // Friend functions
    friend bool TextEmoticonsCore__EmojiProxyModel_FilterAcceptsRow(const TextEmoticonsCore::EmojiProxyModel* self, int source_row, const QModelIndex* source_parent);
    friend bool TextEmoticonsCore__EmojiProxyModel_SuperFilterAcceptsRow(const TextEmoticonsCore::EmojiProxyModel* self, int source_row, const QModelIndex* source_parent);
    friend bool TextEmoticonsCore__EmojiProxyModel_LessThan(const TextEmoticonsCore::EmojiProxyModel* self, const QModelIndex* left, const QModelIndex* right);
    friend bool TextEmoticonsCore__EmojiProxyModel_SuperLessThan(const TextEmoticonsCore::EmojiProxyModel* self, const QModelIndex* left, const QModelIndex* right);
    friend bool TextEmoticonsCore__EmojiProxyModel_FilterAcceptsColumn(const TextEmoticonsCore::EmojiProxyModel* self, int source_column, const QModelIndex* source_parent);
    friend bool TextEmoticonsCore__EmojiProxyModel_SuperFilterAcceptsColumn(const TextEmoticonsCore::EmojiProxyModel* self, int source_column, const QModelIndex* source_parent);
    friend void TextEmoticonsCore__EmojiProxyModel_ResetInternalData(TextEmoticonsCore::EmojiProxyModel* self);
    friend void TextEmoticonsCore__EmojiProxyModel_SuperResetInternalData(TextEmoticonsCore::EmojiProxyModel* self);
    friend void TextEmoticonsCore__EmojiProxyModel_TimerEvent(TextEmoticonsCore::EmojiProxyModel* self, QTimerEvent* event);
    friend void TextEmoticonsCore__EmojiProxyModel_SuperTimerEvent(TextEmoticonsCore::EmojiProxyModel* self, QTimerEvent* event);
    friend void TextEmoticonsCore__EmojiProxyModel_ChildEvent(TextEmoticonsCore::EmojiProxyModel* self, QChildEvent* event);
    friend void TextEmoticonsCore__EmojiProxyModel_SuperChildEvent(TextEmoticonsCore::EmojiProxyModel* self, QChildEvent* event);
    friend void TextEmoticonsCore__EmojiProxyModel_CustomEvent(TextEmoticonsCore::EmojiProxyModel* self, QEvent* event);
    friend void TextEmoticonsCore__EmojiProxyModel_SuperCustomEvent(TextEmoticonsCore::EmojiProxyModel* self, QEvent* event);
    friend void TextEmoticonsCore__EmojiProxyModel_ConnectNotify(TextEmoticonsCore::EmojiProxyModel* self, const QMetaMethod* signal);
    friend void TextEmoticonsCore__EmojiProxyModel_SuperConnectNotify(TextEmoticonsCore::EmojiProxyModel* self, const QMetaMethod* signal);
    friend void TextEmoticonsCore__EmojiProxyModel_DisconnectNotify(TextEmoticonsCore::EmojiProxyModel* self, const QMetaMethod* signal);
    friend void TextEmoticonsCore__EmojiProxyModel_SuperDisconnectNotify(TextEmoticonsCore::EmojiProxyModel* self, const QMetaMethod* signal);
    friend void TextEmoticonsCore__EmojiProxyModel_InvalidateFilter(TextEmoticonsCore::EmojiProxyModel* self);
    friend void TextEmoticonsCore__EmojiProxyModel_SuperInvalidateFilter(TextEmoticonsCore::EmojiProxyModel* self);
    friend void TextEmoticonsCore__EmojiProxyModel_InvalidateRowsFilter(TextEmoticonsCore::EmojiProxyModel* self);
    friend void TextEmoticonsCore__EmojiProxyModel_SuperInvalidateRowsFilter(TextEmoticonsCore::EmojiProxyModel* self);
    friend void TextEmoticonsCore__EmojiProxyModel_InvalidateColumnsFilter(TextEmoticonsCore::EmojiProxyModel* self);
    friend void TextEmoticonsCore__EmojiProxyModel_SuperInvalidateColumnsFilter(TextEmoticonsCore::EmojiProxyModel* self);
    friend QModelIndex* TextEmoticonsCore__EmojiProxyModel_CreateSourceIndex(const TextEmoticonsCore::EmojiProxyModel* self, int row, int col, void* internalPtr);
    friend QModelIndex* TextEmoticonsCore__EmojiProxyModel_SuperCreateSourceIndex(const TextEmoticonsCore::EmojiProxyModel* self, int row, int col, void* internalPtr);
    friend QModelIndex* TextEmoticonsCore__EmojiProxyModel_CreateIndex(const TextEmoticonsCore::EmojiProxyModel* self, int row, int column);
    friend QModelIndex* TextEmoticonsCore__EmojiProxyModel_SuperCreateIndex(const TextEmoticonsCore::EmojiProxyModel* self, int row, int column);
    friend void TextEmoticonsCore__EmojiProxyModel_EncodeData(const TextEmoticonsCore::EmojiProxyModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
    friend void TextEmoticonsCore__EmojiProxyModel_SuperEncodeData(const TextEmoticonsCore::EmojiProxyModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
    friend bool TextEmoticonsCore__EmojiProxyModel_DecodeData(TextEmoticonsCore::EmojiProxyModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
    friend bool TextEmoticonsCore__EmojiProxyModel_SuperDecodeData(TextEmoticonsCore::EmojiProxyModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
    friend void TextEmoticonsCore__EmojiProxyModel_BeginInsertRows(TextEmoticonsCore::EmojiProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void TextEmoticonsCore__EmojiProxyModel_SuperBeginInsertRows(TextEmoticonsCore::EmojiProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void TextEmoticonsCore__EmojiProxyModel_EndInsertRows(TextEmoticonsCore::EmojiProxyModel* self);
    friend void TextEmoticonsCore__EmojiProxyModel_SuperEndInsertRows(TextEmoticonsCore::EmojiProxyModel* self);
    friend void TextEmoticonsCore__EmojiProxyModel_BeginRemoveRows(TextEmoticonsCore::EmojiProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void TextEmoticonsCore__EmojiProxyModel_SuperBeginRemoveRows(TextEmoticonsCore::EmojiProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void TextEmoticonsCore__EmojiProxyModel_EndRemoveRows(TextEmoticonsCore::EmojiProxyModel* self);
    friend void TextEmoticonsCore__EmojiProxyModel_SuperEndRemoveRows(TextEmoticonsCore::EmojiProxyModel* self);
    friend bool TextEmoticonsCore__EmojiProxyModel_BeginMoveRows(TextEmoticonsCore::EmojiProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
    friend bool TextEmoticonsCore__EmojiProxyModel_SuperBeginMoveRows(TextEmoticonsCore::EmojiProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
    friend void TextEmoticonsCore__EmojiProxyModel_EndMoveRows(TextEmoticonsCore::EmojiProxyModel* self);
    friend void TextEmoticonsCore__EmojiProxyModel_SuperEndMoveRows(TextEmoticonsCore::EmojiProxyModel* self);
    friend void TextEmoticonsCore__EmojiProxyModel_BeginInsertColumns(TextEmoticonsCore::EmojiProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void TextEmoticonsCore__EmojiProxyModel_SuperBeginInsertColumns(TextEmoticonsCore::EmojiProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void TextEmoticonsCore__EmojiProxyModel_EndInsertColumns(TextEmoticonsCore::EmojiProxyModel* self);
    friend void TextEmoticonsCore__EmojiProxyModel_SuperEndInsertColumns(TextEmoticonsCore::EmojiProxyModel* self);
    friend void TextEmoticonsCore__EmojiProxyModel_BeginRemoveColumns(TextEmoticonsCore::EmojiProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void TextEmoticonsCore__EmojiProxyModel_SuperBeginRemoveColumns(TextEmoticonsCore::EmojiProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void TextEmoticonsCore__EmojiProxyModel_EndRemoveColumns(TextEmoticonsCore::EmojiProxyModel* self);
    friend void TextEmoticonsCore__EmojiProxyModel_SuperEndRemoveColumns(TextEmoticonsCore::EmojiProxyModel* self);
    friend bool TextEmoticonsCore__EmojiProxyModel_BeginMoveColumns(TextEmoticonsCore::EmojiProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
    friend bool TextEmoticonsCore__EmojiProxyModel_SuperBeginMoveColumns(TextEmoticonsCore::EmojiProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
    friend void TextEmoticonsCore__EmojiProxyModel_EndMoveColumns(TextEmoticonsCore::EmojiProxyModel* self);
    friend void TextEmoticonsCore__EmojiProxyModel_SuperEndMoveColumns(TextEmoticonsCore::EmojiProxyModel* self);
    friend void TextEmoticonsCore__EmojiProxyModel_BeginResetModel(TextEmoticonsCore::EmojiProxyModel* self);
    friend void TextEmoticonsCore__EmojiProxyModel_SuperBeginResetModel(TextEmoticonsCore::EmojiProxyModel* self);
    friend void TextEmoticonsCore__EmojiProxyModel_EndResetModel(TextEmoticonsCore::EmojiProxyModel* self);
    friend void TextEmoticonsCore__EmojiProxyModel_SuperEndResetModel(TextEmoticonsCore::EmojiProxyModel* self);
    friend void TextEmoticonsCore__EmojiProxyModel_ChangePersistentIndex(TextEmoticonsCore::EmojiProxyModel* self, const QModelIndex* from, const QModelIndex* to);
    friend void TextEmoticonsCore__EmojiProxyModel_SuperChangePersistentIndex(TextEmoticonsCore::EmojiProxyModel* self, const QModelIndex* from, const QModelIndex* to);
    friend void TextEmoticonsCore__EmojiProxyModel_ChangePersistentIndexList(TextEmoticonsCore::EmojiProxyModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
    friend void TextEmoticonsCore__EmojiProxyModel_SuperChangePersistentIndexList(TextEmoticonsCore::EmojiProxyModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
    friend libqt_list /* of QModelIndex* */ TextEmoticonsCore__EmojiProxyModel_PersistentIndexList(const TextEmoticonsCore::EmojiProxyModel* self);
    friend libqt_list /* of QModelIndex* */ TextEmoticonsCore__EmojiProxyModel_SuperPersistentIndexList(const TextEmoticonsCore::EmojiProxyModel* self);
    friend QObject* TextEmoticonsCore__EmojiProxyModel_Sender(const TextEmoticonsCore::EmojiProxyModel* self);
    friend QObject* TextEmoticonsCore__EmojiProxyModel_SuperSender(const TextEmoticonsCore::EmojiProxyModel* self);
    friend int TextEmoticonsCore__EmojiProxyModel_SenderSignalIndex(const TextEmoticonsCore::EmojiProxyModel* self);
    friend int TextEmoticonsCore__EmojiProxyModel_SuperSenderSignalIndex(const TextEmoticonsCore::EmojiProxyModel* self);
    friend int TextEmoticonsCore__EmojiProxyModel_Receivers(const TextEmoticonsCore::EmojiProxyModel* self, const char* signal);
    friend int TextEmoticonsCore__EmojiProxyModel_SuperReceivers(const TextEmoticonsCore::EmojiProxyModel* self, const char* signal);
    friend bool TextEmoticonsCore__EmojiProxyModel_IsSignalConnected(const TextEmoticonsCore::EmojiProxyModel* self, const QMetaMethod* signal);
    friend bool TextEmoticonsCore__EmojiProxyModel_SuperIsSignalConnected(const TextEmoticonsCore::EmojiProxyModel* self, const QMetaMethod* signal);
};

#endif
