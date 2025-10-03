#pragma once
#ifndef SRC_EXTRAS_KTEXTEDITORC_LIBVIRTUALCODECOMPLETIONMODEL_H
#define SRC_EXTRAS_KTEXTEDITORC_LIBVIRTUALCODECOMPLETIONMODEL_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KTextEditor::CodeCompletionModel so that we can call protected methods
class VirtualKTextEditorCodeCompletionModel : public KTextEditor::CodeCompletionModel {

  public:
    // Virtual class boolean flag
    bool isVirtualKTextEditorCodeCompletionModel = true;

    // Virtual class public types (including callbacks)
    using KTextEditor__CodeCompletionModel_Metacall_Callback = int (*)(KTextEditor__CodeCompletionModel*, int, int, void**);
    using KTextEditor__CodeCompletionModel_CompletionInvoked_Callback = void (*)(KTextEditor__CodeCompletionModel*, KTextEditor__View*, KTextEditor__Range*, int);
    using KTextEditor__CodeCompletionModel_ExecuteCompletionItem_Callback = void (*)(const KTextEditor__CodeCompletionModel*, KTextEditor__View*, KTextEditor__Range*, QModelIndex*);
    using KTextEditor__CodeCompletionModel_ColumnCount_Callback = int (*)(const KTextEditor__CodeCompletionModel*, QModelIndex*);
    using KTextEditor__CodeCompletionModel_Index_Callback = QModelIndex* (*)(const KTextEditor__CodeCompletionModel*, int, int, QModelIndex*);
    using KTextEditor__CodeCompletionModel_ItemData_Callback = libqt_map /* of int to QVariant* */ (*)(const KTextEditor__CodeCompletionModel*, QModelIndex*);
    using KTextEditor__CodeCompletionModel_Parent_Callback = QModelIndex* (*)(const KTextEditor__CodeCompletionModel*, QModelIndex*);
    using KTextEditor__CodeCompletionModel_RowCount_Callback = int (*)(const KTextEditor__CodeCompletionModel*, QModelIndex*);
    using KTextEditor__CodeCompletionModel_Sibling_Callback = QModelIndex* (*)(const KTextEditor__CodeCompletionModel*, int, int, QModelIndex*);
    using KTextEditor__CodeCompletionModel_HasChildren_Callback = bool (*)(const KTextEditor__CodeCompletionModel*, QModelIndex*);
    using KTextEditor__CodeCompletionModel_Data_Callback = QVariant* (*)(const KTextEditor__CodeCompletionModel*, QModelIndex*, int);
    using KTextEditor__CodeCompletionModel_SetData_Callback = bool (*)(KTextEditor__CodeCompletionModel*, QModelIndex*, QVariant*, int);
    using KTextEditor__CodeCompletionModel_HeaderData_Callback = QVariant* (*)(const KTextEditor__CodeCompletionModel*, int, int, int);
    using KTextEditor__CodeCompletionModel_SetHeaderData_Callback = bool (*)(KTextEditor__CodeCompletionModel*, int, int, QVariant*, int);
    using KTextEditor__CodeCompletionModel_SetItemData_Callback = bool (*)(KTextEditor__CodeCompletionModel*, QModelIndex*, libqt_map /* of int to QVariant* */);
    using KTextEditor__CodeCompletionModel_ClearItemData_Callback = bool (*)(KTextEditor__CodeCompletionModel*, QModelIndex*);
    using KTextEditor__CodeCompletionModel_MimeTypes_Callback = const char** (*)();
    using KTextEditor__CodeCompletionModel_MimeData_Callback = QMimeData* (*)(const KTextEditor__CodeCompletionModel*, libqt_list /* of QModelIndex* */);
    using KTextEditor__CodeCompletionModel_CanDropMimeData_Callback = bool (*)(const KTextEditor__CodeCompletionModel*, QMimeData*, int, int, int, QModelIndex*);
    using KTextEditor__CodeCompletionModel_DropMimeData_Callback = bool (*)(KTextEditor__CodeCompletionModel*, QMimeData*, int, int, int, QModelIndex*);
    using KTextEditor__CodeCompletionModel_SupportedDropActions_Callback = int (*)();
    using KTextEditor__CodeCompletionModel_SupportedDragActions_Callback = int (*)();
    using KTextEditor__CodeCompletionModel_InsertRows_Callback = bool (*)(KTextEditor__CodeCompletionModel*, int, int, QModelIndex*);
    using KTextEditor__CodeCompletionModel_InsertColumns_Callback = bool (*)(KTextEditor__CodeCompletionModel*, int, int, QModelIndex*);
    using KTextEditor__CodeCompletionModel_RemoveRows_Callback = bool (*)(KTextEditor__CodeCompletionModel*, int, int, QModelIndex*);
    using KTextEditor__CodeCompletionModel_RemoveColumns_Callback = bool (*)(KTextEditor__CodeCompletionModel*, int, int, QModelIndex*);
    using KTextEditor__CodeCompletionModel_MoveRows_Callback = bool (*)(KTextEditor__CodeCompletionModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KTextEditor__CodeCompletionModel_MoveColumns_Callback = bool (*)(KTextEditor__CodeCompletionModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KTextEditor__CodeCompletionModel_FetchMore_Callback = void (*)(KTextEditor__CodeCompletionModel*, QModelIndex*);
    using KTextEditor__CodeCompletionModel_CanFetchMore_Callback = bool (*)(const KTextEditor__CodeCompletionModel*, QModelIndex*);
    using KTextEditor__CodeCompletionModel_Flags_Callback = int (*)(const KTextEditor__CodeCompletionModel*, QModelIndex*);
    using KTextEditor__CodeCompletionModel_Sort_Callback = void (*)(KTextEditor__CodeCompletionModel*, int, int);
    using KTextEditor__CodeCompletionModel_Buddy_Callback = QModelIndex* (*)(const KTextEditor__CodeCompletionModel*, QModelIndex*);
    using KTextEditor__CodeCompletionModel_Match_Callback = QModelIndex** (*)(const KTextEditor__CodeCompletionModel*, QModelIndex*, int, QVariant*, int, int);
    using KTextEditor__CodeCompletionModel_Span_Callback = QSize* (*)(const KTextEditor__CodeCompletionModel*, QModelIndex*);
    using KTextEditor__CodeCompletionModel_RoleNames_Callback = libqt_map /* of int to libqt_string */ (*)();
    using KTextEditor__CodeCompletionModel_MultiData_Callback = void (*)(const KTextEditor__CodeCompletionModel*, QModelIndex*, QModelRoleDataSpan*);
    using KTextEditor__CodeCompletionModel_Submit_Callback = bool (*)();
    using KTextEditor__CodeCompletionModel_Revert_Callback = void (*)();
    using KTextEditor__CodeCompletionModel_ResetInternalData_Callback = void (*)();
    using KTextEditor__CodeCompletionModel_Event_Callback = bool (*)(KTextEditor__CodeCompletionModel*, QEvent*);
    using KTextEditor__CodeCompletionModel_EventFilter_Callback = bool (*)(KTextEditor__CodeCompletionModel*, QObject*, QEvent*);
    using KTextEditor__CodeCompletionModel_TimerEvent_Callback = void (*)(KTextEditor__CodeCompletionModel*, QTimerEvent*);
    using KTextEditor__CodeCompletionModel_ChildEvent_Callback = void (*)(KTextEditor__CodeCompletionModel*, QChildEvent*);
    using KTextEditor__CodeCompletionModel_CustomEvent_Callback = void (*)(KTextEditor__CodeCompletionModel*, QEvent*);
    using KTextEditor__CodeCompletionModel_ConnectNotify_Callback = void (*)(KTextEditor__CodeCompletionModel*, QMetaMethod*);
    using KTextEditor__CodeCompletionModel_DisconnectNotify_Callback = void (*)(KTextEditor__CodeCompletionModel*, QMetaMethod*);
    using KTextEditor__CodeCompletionModel_SetHasGroups_Callback = void (*)(KTextEditor__CodeCompletionModel*, bool);
    using KTextEditor__CodeCompletionModel_CreateIndex_Callback = QModelIndex* (*)(const KTextEditor__CodeCompletionModel*, int, int);
    using KTextEditor__CodeCompletionModel_EncodeData_Callback = void (*)(const KTextEditor__CodeCompletionModel*, libqt_list /* of QModelIndex* */, QDataStream*);
    using KTextEditor__CodeCompletionModel_DecodeData_Callback = bool (*)(KTextEditor__CodeCompletionModel*, int, int, QModelIndex*, QDataStream*);
    using KTextEditor__CodeCompletionModel_BeginInsertRows_Callback = void (*)(KTextEditor__CodeCompletionModel*, QModelIndex*, int, int);
    using KTextEditor__CodeCompletionModel_EndInsertRows_Callback = void (*)();
    using KTextEditor__CodeCompletionModel_BeginRemoveRows_Callback = void (*)(KTextEditor__CodeCompletionModel*, QModelIndex*, int, int);
    using KTextEditor__CodeCompletionModel_EndRemoveRows_Callback = void (*)();
    using KTextEditor__CodeCompletionModel_BeginMoveRows_Callback = bool (*)(KTextEditor__CodeCompletionModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KTextEditor__CodeCompletionModel_EndMoveRows_Callback = void (*)();
    using KTextEditor__CodeCompletionModel_BeginInsertColumns_Callback = void (*)(KTextEditor__CodeCompletionModel*, QModelIndex*, int, int);
    using KTextEditor__CodeCompletionModel_EndInsertColumns_Callback = void (*)();
    using KTextEditor__CodeCompletionModel_BeginRemoveColumns_Callback = void (*)(KTextEditor__CodeCompletionModel*, QModelIndex*, int, int);
    using KTextEditor__CodeCompletionModel_EndRemoveColumns_Callback = void (*)();
    using KTextEditor__CodeCompletionModel_BeginMoveColumns_Callback = bool (*)(KTextEditor__CodeCompletionModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KTextEditor__CodeCompletionModel_EndMoveColumns_Callback = void (*)();
    using KTextEditor__CodeCompletionModel_BeginResetModel_Callback = void (*)();
    using KTextEditor__CodeCompletionModel_EndResetModel_Callback = void (*)();
    using KTextEditor__CodeCompletionModel_ChangePersistentIndex_Callback = void (*)(KTextEditor__CodeCompletionModel*, QModelIndex*, QModelIndex*);
    using KTextEditor__CodeCompletionModel_ChangePersistentIndexList_Callback = void (*)(KTextEditor__CodeCompletionModel*, libqt_list /* of QModelIndex* */, libqt_list /* of QModelIndex* */);
    using KTextEditor__CodeCompletionModel_PersistentIndexList_Callback = QModelIndex** (*)();
    using KTextEditor__CodeCompletionModel_Sender_Callback = QObject* (*)();
    using KTextEditor__CodeCompletionModel_SenderSignalIndex_Callback = int (*)();
    using KTextEditor__CodeCompletionModel_Receivers_Callback = int (*)(const KTextEditor__CodeCompletionModel*, const char*);
    using KTextEditor__CodeCompletionModel_IsSignalConnected_Callback = bool (*)(const KTextEditor__CodeCompletionModel*, QMetaMethod*);

  protected:
    // Instance callback storage
    KTextEditor__CodeCompletionModel_Metacall_Callback ktexteditor__codecompletionmodel_metacall_callback = nullptr;
    KTextEditor__CodeCompletionModel_CompletionInvoked_Callback ktexteditor__codecompletionmodel_completioninvoked_callback = nullptr;
    KTextEditor__CodeCompletionModel_ExecuteCompletionItem_Callback ktexteditor__codecompletionmodel_executecompletionitem_callback = nullptr;
    KTextEditor__CodeCompletionModel_ColumnCount_Callback ktexteditor__codecompletionmodel_columncount_callback = nullptr;
    KTextEditor__CodeCompletionModel_Index_Callback ktexteditor__codecompletionmodel_index_callback = nullptr;
    KTextEditor__CodeCompletionModel_ItemData_Callback ktexteditor__codecompletionmodel_itemdata_callback = nullptr;
    KTextEditor__CodeCompletionModel_Parent_Callback ktexteditor__codecompletionmodel_parent_callback = nullptr;
    KTextEditor__CodeCompletionModel_RowCount_Callback ktexteditor__codecompletionmodel_rowcount_callback = nullptr;
    KTextEditor__CodeCompletionModel_Sibling_Callback ktexteditor__codecompletionmodel_sibling_callback = nullptr;
    KTextEditor__CodeCompletionModel_HasChildren_Callback ktexteditor__codecompletionmodel_haschildren_callback = nullptr;
    KTextEditor__CodeCompletionModel_Data_Callback ktexteditor__codecompletionmodel_data_callback = nullptr;
    KTextEditor__CodeCompletionModel_SetData_Callback ktexteditor__codecompletionmodel_setdata_callback = nullptr;
    KTextEditor__CodeCompletionModel_HeaderData_Callback ktexteditor__codecompletionmodel_headerdata_callback = nullptr;
    KTextEditor__CodeCompletionModel_SetHeaderData_Callback ktexteditor__codecompletionmodel_setheaderdata_callback = nullptr;
    KTextEditor__CodeCompletionModel_SetItemData_Callback ktexteditor__codecompletionmodel_setitemdata_callback = nullptr;
    KTextEditor__CodeCompletionModel_ClearItemData_Callback ktexteditor__codecompletionmodel_clearitemdata_callback = nullptr;
    KTextEditor__CodeCompletionModel_MimeTypes_Callback ktexteditor__codecompletionmodel_mimetypes_callback = nullptr;
    KTextEditor__CodeCompletionModel_MimeData_Callback ktexteditor__codecompletionmodel_mimedata_callback = nullptr;
    KTextEditor__CodeCompletionModel_CanDropMimeData_Callback ktexteditor__codecompletionmodel_candropmimedata_callback = nullptr;
    KTextEditor__CodeCompletionModel_DropMimeData_Callback ktexteditor__codecompletionmodel_dropmimedata_callback = nullptr;
    KTextEditor__CodeCompletionModel_SupportedDropActions_Callback ktexteditor__codecompletionmodel_supporteddropactions_callback = nullptr;
    KTextEditor__CodeCompletionModel_SupportedDragActions_Callback ktexteditor__codecompletionmodel_supporteddragactions_callback = nullptr;
    KTextEditor__CodeCompletionModel_InsertRows_Callback ktexteditor__codecompletionmodel_insertrows_callback = nullptr;
    KTextEditor__CodeCompletionModel_InsertColumns_Callback ktexteditor__codecompletionmodel_insertcolumns_callback = nullptr;
    KTextEditor__CodeCompletionModel_RemoveRows_Callback ktexteditor__codecompletionmodel_removerows_callback = nullptr;
    KTextEditor__CodeCompletionModel_RemoveColumns_Callback ktexteditor__codecompletionmodel_removecolumns_callback = nullptr;
    KTextEditor__CodeCompletionModel_MoveRows_Callback ktexteditor__codecompletionmodel_moverows_callback = nullptr;
    KTextEditor__CodeCompletionModel_MoveColumns_Callback ktexteditor__codecompletionmodel_movecolumns_callback = nullptr;
    KTextEditor__CodeCompletionModel_FetchMore_Callback ktexteditor__codecompletionmodel_fetchmore_callback = nullptr;
    KTextEditor__CodeCompletionModel_CanFetchMore_Callback ktexteditor__codecompletionmodel_canfetchmore_callback = nullptr;
    KTextEditor__CodeCompletionModel_Flags_Callback ktexteditor__codecompletionmodel_flags_callback = nullptr;
    KTextEditor__CodeCompletionModel_Sort_Callback ktexteditor__codecompletionmodel_sort_callback = nullptr;
    KTextEditor__CodeCompletionModel_Buddy_Callback ktexteditor__codecompletionmodel_buddy_callback = nullptr;
    KTextEditor__CodeCompletionModel_Match_Callback ktexteditor__codecompletionmodel_match_callback = nullptr;
    KTextEditor__CodeCompletionModel_Span_Callback ktexteditor__codecompletionmodel_span_callback = nullptr;
    KTextEditor__CodeCompletionModel_RoleNames_Callback ktexteditor__codecompletionmodel_rolenames_callback = nullptr;
    KTextEditor__CodeCompletionModel_MultiData_Callback ktexteditor__codecompletionmodel_multidata_callback = nullptr;
    KTextEditor__CodeCompletionModel_Submit_Callback ktexteditor__codecompletionmodel_submit_callback = nullptr;
    KTextEditor__CodeCompletionModel_Revert_Callback ktexteditor__codecompletionmodel_revert_callback = nullptr;
    KTextEditor__CodeCompletionModel_ResetInternalData_Callback ktexteditor__codecompletionmodel_resetinternaldata_callback = nullptr;
    KTextEditor__CodeCompletionModel_Event_Callback ktexteditor__codecompletionmodel_event_callback = nullptr;
    KTextEditor__CodeCompletionModel_EventFilter_Callback ktexteditor__codecompletionmodel_eventfilter_callback = nullptr;
    KTextEditor__CodeCompletionModel_TimerEvent_Callback ktexteditor__codecompletionmodel_timerevent_callback = nullptr;
    KTextEditor__CodeCompletionModel_ChildEvent_Callback ktexteditor__codecompletionmodel_childevent_callback = nullptr;
    KTextEditor__CodeCompletionModel_CustomEvent_Callback ktexteditor__codecompletionmodel_customevent_callback = nullptr;
    KTextEditor__CodeCompletionModel_ConnectNotify_Callback ktexteditor__codecompletionmodel_connectnotify_callback = nullptr;
    KTextEditor__CodeCompletionModel_DisconnectNotify_Callback ktexteditor__codecompletionmodel_disconnectnotify_callback = nullptr;
    KTextEditor__CodeCompletionModel_SetHasGroups_Callback ktexteditor__codecompletionmodel_sethasgroups_callback = nullptr;
    KTextEditor__CodeCompletionModel_CreateIndex_Callback ktexteditor__codecompletionmodel_createindex_callback = nullptr;
    KTextEditor__CodeCompletionModel_EncodeData_Callback ktexteditor__codecompletionmodel_encodedata_callback = nullptr;
    KTextEditor__CodeCompletionModel_DecodeData_Callback ktexteditor__codecompletionmodel_decodedata_callback = nullptr;
    KTextEditor__CodeCompletionModel_BeginInsertRows_Callback ktexteditor__codecompletionmodel_begininsertrows_callback = nullptr;
    KTextEditor__CodeCompletionModel_EndInsertRows_Callback ktexteditor__codecompletionmodel_endinsertrows_callback = nullptr;
    KTextEditor__CodeCompletionModel_BeginRemoveRows_Callback ktexteditor__codecompletionmodel_beginremoverows_callback = nullptr;
    KTextEditor__CodeCompletionModel_EndRemoveRows_Callback ktexteditor__codecompletionmodel_endremoverows_callback = nullptr;
    KTextEditor__CodeCompletionModel_BeginMoveRows_Callback ktexteditor__codecompletionmodel_beginmoverows_callback = nullptr;
    KTextEditor__CodeCompletionModel_EndMoveRows_Callback ktexteditor__codecompletionmodel_endmoverows_callback = nullptr;
    KTextEditor__CodeCompletionModel_BeginInsertColumns_Callback ktexteditor__codecompletionmodel_begininsertcolumns_callback = nullptr;
    KTextEditor__CodeCompletionModel_EndInsertColumns_Callback ktexteditor__codecompletionmodel_endinsertcolumns_callback = nullptr;
    KTextEditor__CodeCompletionModel_BeginRemoveColumns_Callback ktexteditor__codecompletionmodel_beginremovecolumns_callback = nullptr;
    KTextEditor__CodeCompletionModel_EndRemoveColumns_Callback ktexteditor__codecompletionmodel_endremovecolumns_callback = nullptr;
    KTextEditor__CodeCompletionModel_BeginMoveColumns_Callback ktexteditor__codecompletionmodel_beginmovecolumns_callback = nullptr;
    KTextEditor__CodeCompletionModel_EndMoveColumns_Callback ktexteditor__codecompletionmodel_endmovecolumns_callback = nullptr;
    KTextEditor__CodeCompletionModel_BeginResetModel_Callback ktexteditor__codecompletionmodel_beginresetmodel_callback = nullptr;
    KTextEditor__CodeCompletionModel_EndResetModel_Callback ktexteditor__codecompletionmodel_endresetmodel_callback = nullptr;
    KTextEditor__CodeCompletionModel_ChangePersistentIndex_Callback ktexteditor__codecompletionmodel_changepersistentindex_callback = nullptr;
    KTextEditor__CodeCompletionModel_ChangePersistentIndexList_Callback ktexteditor__codecompletionmodel_changepersistentindexlist_callback = nullptr;
    KTextEditor__CodeCompletionModel_PersistentIndexList_Callback ktexteditor__codecompletionmodel_persistentindexlist_callback = nullptr;
    KTextEditor__CodeCompletionModel_Sender_Callback ktexteditor__codecompletionmodel_sender_callback = nullptr;
    KTextEditor__CodeCompletionModel_SenderSignalIndex_Callback ktexteditor__codecompletionmodel_sendersignalindex_callback = nullptr;
    KTextEditor__CodeCompletionModel_Receivers_Callback ktexteditor__codecompletionmodel_receivers_callback = nullptr;
    KTextEditor__CodeCompletionModel_IsSignalConnected_Callback ktexteditor__codecompletionmodel_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool ktexteditor__codecompletionmodel_metacall_isbase = false;
    mutable bool ktexteditor__codecompletionmodel_completioninvoked_isbase = false;
    mutable bool ktexteditor__codecompletionmodel_executecompletionitem_isbase = false;
    mutable bool ktexteditor__codecompletionmodel_columncount_isbase = false;
    mutable bool ktexteditor__codecompletionmodel_index_isbase = false;
    mutable bool ktexteditor__codecompletionmodel_itemdata_isbase = false;
    mutable bool ktexteditor__codecompletionmodel_parent_isbase = false;
    mutable bool ktexteditor__codecompletionmodel_rowcount_isbase = false;
    mutable bool ktexteditor__codecompletionmodel_sibling_isbase = false;
    mutable bool ktexteditor__codecompletionmodel_haschildren_isbase = false;
    mutable bool ktexteditor__codecompletionmodel_data_isbase = false;
    mutable bool ktexteditor__codecompletionmodel_setdata_isbase = false;
    mutable bool ktexteditor__codecompletionmodel_headerdata_isbase = false;
    mutable bool ktexteditor__codecompletionmodel_setheaderdata_isbase = false;
    mutable bool ktexteditor__codecompletionmodel_setitemdata_isbase = false;
    mutable bool ktexteditor__codecompletionmodel_clearitemdata_isbase = false;
    mutable bool ktexteditor__codecompletionmodel_mimetypes_isbase = false;
    mutable bool ktexteditor__codecompletionmodel_mimedata_isbase = false;
    mutable bool ktexteditor__codecompletionmodel_candropmimedata_isbase = false;
    mutable bool ktexteditor__codecompletionmodel_dropmimedata_isbase = false;
    mutable bool ktexteditor__codecompletionmodel_supporteddropactions_isbase = false;
    mutable bool ktexteditor__codecompletionmodel_supporteddragactions_isbase = false;
    mutable bool ktexteditor__codecompletionmodel_insertrows_isbase = false;
    mutable bool ktexteditor__codecompletionmodel_insertcolumns_isbase = false;
    mutable bool ktexteditor__codecompletionmodel_removerows_isbase = false;
    mutable bool ktexteditor__codecompletionmodel_removecolumns_isbase = false;
    mutable bool ktexteditor__codecompletionmodel_moverows_isbase = false;
    mutable bool ktexteditor__codecompletionmodel_movecolumns_isbase = false;
    mutable bool ktexteditor__codecompletionmodel_fetchmore_isbase = false;
    mutable bool ktexteditor__codecompletionmodel_canfetchmore_isbase = false;
    mutable bool ktexteditor__codecompletionmodel_flags_isbase = false;
    mutable bool ktexteditor__codecompletionmodel_sort_isbase = false;
    mutable bool ktexteditor__codecompletionmodel_buddy_isbase = false;
    mutable bool ktexteditor__codecompletionmodel_match_isbase = false;
    mutable bool ktexteditor__codecompletionmodel_span_isbase = false;
    mutable bool ktexteditor__codecompletionmodel_rolenames_isbase = false;
    mutable bool ktexteditor__codecompletionmodel_multidata_isbase = false;
    mutable bool ktexteditor__codecompletionmodel_submit_isbase = false;
    mutable bool ktexteditor__codecompletionmodel_revert_isbase = false;
    mutable bool ktexteditor__codecompletionmodel_resetinternaldata_isbase = false;
    mutable bool ktexteditor__codecompletionmodel_event_isbase = false;
    mutable bool ktexteditor__codecompletionmodel_eventfilter_isbase = false;
    mutable bool ktexteditor__codecompletionmodel_timerevent_isbase = false;
    mutable bool ktexteditor__codecompletionmodel_childevent_isbase = false;
    mutable bool ktexteditor__codecompletionmodel_customevent_isbase = false;
    mutable bool ktexteditor__codecompletionmodel_connectnotify_isbase = false;
    mutable bool ktexteditor__codecompletionmodel_disconnectnotify_isbase = false;
    mutable bool ktexteditor__codecompletionmodel_sethasgroups_isbase = false;
    mutable bool ktexteditor__codecompletionmodel_createindex_isbase = false;
    mutable bool ktexteditor__codecompletionmodel_encodedata_isbase = false;
    mutable bool ktexteditor__codecompletionmodel_decodedata_isbase = false;
    mutable bool ktexteditor__codecompletionmodel_begininsertrows_isbase = false;
    mutable bool ktexteditor__codecompletionmodel_endinsertrows_isbase = false;
    mutable bool ktexteditor__codecompletionmodel_beginremoverows_isbase = false;
    mutable bool ktexteditor__codecompletionmodel_endremoverows_isbase = false;
    mutable bool ktexteditor__codecompletionmodel_beginmoverows_isbase = false;
    mutable bool ktexteditor__codecompletionmodel_endmoverows_isbase = false;
    mutable bool ktexteditor__codecompletionmodel_begininsertcolumns_isbase = false;
    mutable bool ktexteditor__codecompletionmodel_endinsertcolumns_isbase = false;
    mutable bool ktexteditor__codecompletionmodel_beginremovecolumns_isbase = false;
    mutable bool ktexteditor__codecompletionmodel_endremovecolumns_isbase = false;
    mutable bool ktexteditor__codecompletionmodel_beginmovecolumns_isbase = false;
    mutable bool ktexteditor__codecompletionmodel_endmovecolumns_isbase = false;
    mutable bool ktexteditor__codecompletionmodel_beginresetmodel_isbase = false;
    mutable bool ktexteditor__codecompletionmodel_endresetmodel_isbase = false;
    mutable bool ktexteditor__codecompletionmodel_changepersistentindex_isbase = false;
    mutable bool ktexteditor__codecompletionmodel_changepersistentindexlist_isbase = false;
    mutable bool ktexteditor__codecompletionmodel_persistentindexlist_isbase = false;
    mutable bool ktexteditor__codecompletionmodel_sender_isbase = false;
    mutable bool ktexteditor__codecompletionmodel_sendersignalindex_isbase = false;
    mutable bool ktexteditor__codecompletionmodel_receivers_isbase = false;
    mutable bool ktexteditor__codecompletionmodel_issignalconnected_isbase = false;

  public:
    VirtualKTextEditorCodeCompletionModel(QObject* parent) : KTextEditor::CodeCompletionModel(parent) {};

    ~VirtualKTextEditorCodeCompletionModel() {
        ktexteditor__codecompletionmodel_metacall_callback = nullptr;
        ktexteditor__codecompletionmodel_completioninvoked_callback = nullptr;
        ktexteditor__codecompletionmodel_executecompletionitem_callback = nullptr;
        ktexteditor__codecompletionmodel_columncount_callback = nullptr;
        ktexteditor__codecompletionmodel_index_callback = nullptr;
        ktexteditor__codecompletionmodel_itemdata_callback = nullptr;
        ktexteditor__codecompletionmodel_parent_callback = nullptr;
        ktexteditor__codecompletionmodel_rowcount_callback = nullptr;
        ktexteditor__codecompletionmodel_sibling_callback = nullptr;
        ktexteditor__codecompletionmodel_haschildren_callback = nullptr;
        ktexteditor__codecompletionmodel_data_callback = nullptr;
        ktexteditor__codecompletionmodel_setdata_callback = nullptr;
        ktexteditor__codecompletionmodel_headerdata_callback = nullptr;
        ktexteditor__codecompletionmodel_setheaderdata_callback = nullptr;
        ktexteditor__codecompletionmodel_setitemdata_callback = nullptr;
        ktexteditor__codecompletionmodel_clearitemdata_callback = nullptr;
        ktexteditor__codecompletionmodel_mimetypes_callback = nullptr;
        ktexteditor__codecompletionmodel_mimedata_callback = nullptr;
        ktexteditor__codecompletionmodel_candropmimedata_callback = nullptr;
        ktexteditor__codecompletionmodel_dropmimedata_callback = nullptr;
        ktexteditor__codecompletionmodel_supporteddropactions_callback = nullptr;
        ktexteditor__codecompletionmodel_supporteddragactions_callback = nullptr;
        ktexteditor__codecompletionmodel_insertrows_callback = nullptr;
        ktexteditor__codecompletionmodel_insertcolumns_callback = nullptr;
        ktexteditor__codecompletionmodel_removerows_callback = nullptr;
        ktexteditor__codecompletionmodel_removecolumns_callback = nullptr;
        ktexteditor__codecompletionmodel_moverows_callback = nullptr;
        ktexteditor__codecompletionmodel_movecolumns_callback = nullptr;
        ktexteditor__codecompletionmodel_fetchmore_callback = nullptr;
        ktexteditor__codecompletionmodel_canfetchmore_callback = nullptr;
        ktexteditor__codecompletionmodel_flags_callback = nullptr;
        ktexteditor__codecompletionmodel_sort_callback = nullptr;
        ktexteditor__codecompletionmodel_buddy_callback = nullptr;
        ktexteditor__codecompletionmodel_match_callback = nullptr;
        ktexteditor__codecompletionmodel_span_callback = nullptr;
        ktexteditor__codecompletionmodel_rolenames_callback = nullptr;
        ktexteditor__codecompletionmodel_multidata_callback = nullptr;
        ktexteditor__codecompletionmodel_submit_callback = nullptr;
        ktexteditor__codecompletionmodel_revert_callback = nullptr;
        ktexteditor__codecompletionmodel_resetinternaldata_callback = nullptr;
        ktexteditor__codecompletionmodel_event_callback = nullptr;
        ktexteditor__codecompletionmodel_eventfilter_callback = nullptr;
        ktexteditor__codecompletionmodel_timerevent_callback = nullptr;
        ktexteditor__codecompletionmodel_childevent_callback = nullptr;
        ktexteditor__codecompletionmodel_customevent_callback = nullptr;
        ktexteditor__codecompletionmodel_connectnotify_callback = nullptr;
        ktexteditor__codecompletionmodel_disconnectnotify_callback = nullptr;
        ktexteditor__codecompletionmodel_sethasgroups_callback = nullptr;
        ktexteditor__codecompletionmodel_createindex_callback = nullptr;
        ktexteditor__codecompletionmodel_encodedata_callback = nullptr;
        ktexteditor__codecompletionmodel_decodedata_callback = nullptr;
        ktexteditor__codecompletionmodel_begininsertrows_callback = nullptr;
        ktexteditor__codecompletionmodel_endinsertrows_callback = nullptr;
        ktexteditor__codecompletionmodel_beginremoverows_callback = nullptr;
        ktexteditor__codecompletionmodel_endremoverows_callback = nullptr;
        ktexteditor__codecompletionmodel_beginmoverows_callback = nullptr;
        ktexteditor__codecompletionmodel_endmoverows_callback = nullptr;
        ktexteditor__codecompletionmodel_begininsertcolumns_callback = nullptr;
        ktexteditor__codecompletionmodel_endinsertcolumns_callback = nullptr;
        ktexteditor__codecompletionmodel_beginremovecolumns_callback = nullptr;
        ktexteditor__codecompletionmodel_endremovecolumns_callback = nullptr;
        ktexteditor__codecompletionmodel_beginmovecolumns_callback = nullptr;
        ktexteditor__codecompletionmodel_endmovecolumns_callback = nullptr;
        ktexteditor__codecompletionmodel_beginresetmodel_callback = nullptr;
        ktexteditor__codecompletionmodel_endresetmodel_callback = nullptr;
        ktexteditor__codecompletionmodel_changepersistentindex_callback = nullptr;
        ktexteditor__codecompletionmodel_changepersistentindexlist_callback = nullptr;
        ktexteditor__codecompletionmodel_persistentindexlist_callback = nullptr;
        ktexteditor__codecompletionmodel_sender_callback = nullptr;
        ktexteditor__codecompletionmodel_sendersignalindex_callback = nullptr;
        ktexteditor__codecompletionmodel_receivers_callback = nullptr;
        ktexteditor__codecompletionmodel_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKTextEditor__CodeCompletionModel_Metacall_Callback(KTextEditor__CodeCompletionModel_Metacall_Callback cb) { ktexteditor__codecompletionmodel_metacall_callback = cb; }
    inline void setKTextEditor__CodeCompletionModel_CompletionInvoked_Callback(KTextEditor__CodeCompletionModel_CompletionInvoked_Callback cb) { ktexteditor__codecompletionmodel_completioninvoked_callback = cb; }
    inline void setKTextEditor__CodeCompletionModel_ExecuteCompletionItem_Callback(KTextEditor__CodeCompletionModel_ExecuteCompletionItem_Callback cb) { ktexteditor__codecompletionmodel_executecompletionitem_callback = cb; }
    inline void setKTextEditor__CodeCompletionModel_ColumnCount_Callback(KTextEditor__CodeCompletionModel_ColumnCount_Callback cb) { ktexteditor__codecompletionmodel_columncount_callback = cb; }
    inline void setKTextEditor__CodeCompletionModel_Index_Callback(KTextEditor__CodeCompletionModel_Index_Callback cb) { ktexteditor__codecompletionmodel_index_callback = cb; }
    inline void setKTextEditor__CodeCompletionModel_ItemData_Callback(KTextEditor__CodeCompletionModel_ItemData_Callback cb) { ktexteditor__codecompletionmodel_itemdata_callback = cb; }
    inline void setKTextEditor__CodeCompletionModel_Parent_Callback(KTextEditor__CodeCompletionModel_Parent_Callback cb) { ktexteditor__codecompletionmodel_parent_callback = cb; }
    inline void setKTextEditor__CodeCompletionModel_RowCount_Callback(KTextEditor__CodeCompletionModel_RowCount_Callback cb) { ktexteditor__codecompletionmodel_rowcount_callback = cb; }
    inline void setKTextEditor__CodeCompletionModel_Sibling_Callback(KTextEditor__CodeCompletionModel_Sibling_Callback cb) { ktexteditor__codecompletionmodel_sibling_callback = cb; }
    inline void setKTextEditor__CodeCompletionModel_HasChildren_Callback(KTextEditor__CodeCompletionModel_HasChildren_Callback cb) { ktexteditor__codecompletionmodel_haschildren_callback = cb; }
    inline void setKTextEditor__CodeCompletionModel_Data_Callback(KTextEditor__CodeCompletionModel_Data_Callback cb) { ktexteditor__codecompletionmodel_data_callback = cb; }
    inline void setKTextEditor__CodeCompletionModel_SetData_Callback(KTextEditor__CodeCompletionModel_SetData_Callback cb) { ktexteditor__codecompletionmodel_setdata_callback = cb; }
    inline void setKTextEditor__CodeCompletionModel_HeaderData_Callback(KTextEditor__CodeCompletionModel_HeaderData_Callback cb) { ktexteditor__codecompletionmodel_headerdata_callback = cb; }
    inline void setKTextEditor__CodeCompletionModel_SetHeaderData_Callback(KTextEditor__CodeCompletionModel_SetHeaderData_Callback cb) { ktexteditor__codecompletionmodel_setheaderdata_callback = cb; }
    inline void setKTextEditor__CodeCompletionModel_SetItemData_Callback(KTextEditor__CodeCompletionModel_SetItemData_Callback cb) { ktexteditor__codecompletionmodel_setitemdata_callback = cb; }
    inline void setKTextEditor__CodeCompletionModel_ClearItemData_Callback(KTextEditor__CodeCompletionModel_ClearItemData_Callback cb) { ktexteditor__codecompletionmodel_clearitemdata_callback = cb; }
    inline void setKTextEditor__CodeCompletionModel_MimeTypes_Callback(KTextEditor__CodeCompletionModel_MimeTypes_Callback cb) { ktexteditor__codecompletionmodel_mimetypes_callback = cb; }
    inline void setKTextEditor__CodeCompletionModel_MimeData_Callback(KTextEditor__CodeCompletionModel_MimeData_Callback cb) { ktexteditor__codecompletionmodel_mimedata_callback = cb; }
    inline void setKTextEditor__CodeCompletionModel_CanDropMimeData_Callback(KTextEditor__CodeCompletionModel_CanDropMimeData_Callback cb) { ktexteditor__codecompletionmodel_candropmimedata_callback = cb; }
    inline void setKTextEditor__CodeCompletionModel_DropMimeData_Callback(KTextEditor__CodeCompletionModel_DropMimeData_Callback cb) { ktexteditor__codecompletionmodel_dropmimedata_callback = cb; }
    inline void setKTextEditor__CodeCompletionModel_SupportedDropActions_Callback(KTextEditor__CodeCompletionModel_SupportedDropActions_Callback cb) { ktexteditor__codecompletionmodel_supporteddropactions_callback = cb; }
    inline void setKTextEditor__CodeCompletionModel_SupportedDragActions_Callback(KTextEditor__CodeCompletionModel_SupportedDragActions_Callback cb) { ktexteditor__codecompletionmodel_supporteddragactions_callback = cb; }
    inline void setKTextEditor__CodeCompletionModel_InsertRows_Callback(KTextEditor__CodeCompletionModel_InsertRows_Callback cb) { ktexteditor__codecompletionmodel_insertrows_callback = cb; }
    inline void setKTextEditor__CodeCompletionModel_InsertColumns_Callback(KTextEditor__CodeCompletionModel_InsertColumns_Callback cb) { ktexteditor__codecompletionmodel_insertcolumns_callback = cb; }
    inline void setKTextEditor__CodeCompletionModel_RemoveRows_Callback(KTextEditor__CodeCompletionModel_RemoveRows_Callback cb) { ktexteditor__codecompletionmodel_removerows_callback = cb; }
    inline void setKTextEditor__CodeCompletionModel_RemoveColumns_Callback(KTextEditor__CodeCompletionModel_RemoveColumns_Callback cb) { ktexteditor__codecompletionmodel_removecolumns_callback = cb; }
    inline void setKTextEditor__CodeCompletionModel_MoveRows_Callback(KTextEditor__CodeCompletionModel_MoveRows_Callback cb) { ktexteditor__codecompletionmodel_moverows_callback = cb; }
    inline void setKTextEditor__CodeCompletionModel_MoveColumns_Callback(KTextEditor__CodeCompletionModel_MoveColumns_Callback cb) { ktexteditor__codecompletionmodel_movecolumns_callback = cb; }
    inline void setKTextEditor__CodeCompletionModel_FetchMore_Callback(KTextEditor__CodeCompletionModel_FetchMore_Callback cb) { ktexteditor__codecompletionmodel_fetchmore_callback = cb; }
    inline void setKTextEditor__CodeCompletionModel_CanFetchMore_Callback(KTextEditor__CodeCompletionModel_CanFetchMore_Callback cb) { ktexteditor__codecompletionmodel_canfetchmore_callback = cb; }
    inline void setKTextEditor__CodeCompletionModel_Flags_Callback(KTextEditor__CodeCompletionModel_Flags_Callback cb) { ktexteditor__codecompletionmodel_flags_callback = cb; }
    inline void setKTextEditor__CodeCompletionModel_Sort_Callback(KTextEditor__CodeCompletionModel_Sort_Callback cb) { ktexteditor__codecompletionmodel_sort_callback = cb; }
    inline void setKTextEditor__CodeCompletionModel_Buddy_Callback(KTextEditor__CodeCompletionModel_Buddy_Callback cb) { ktexteditor__codecompletionmodel_buddy_callback = cb; }
    inline void setKTextEditor__CodeCompletionModel_Match_Callback(KTextEditor__CodeCompletionModel_Match_Callback cb) { ktexteditor__codecompletionmodel_match_callback = cb; }
    inline void setKTextEditor__CodeCompletionModel_Span_Callback(KTextEditor__CodeCompletionModel_Span_Callback cb) { ktexteditor__codecompletionmodel_span_callback = cb; }
    inline void setKTextEditor__CodeCompletionModel_RoleNames_Callback(KTextEditor__CodeCompletionModel_RoleNames_Callback cb) { ktexteditor__codecompletionmodel_rolenames_callback = cb; }
    inline void setKTextEditor__CodeCompletionModel_MultiData_Callback(KTextEditor__CodeCompletionModel_MultiData_Callback cb) { ktexteditor__codecompletionmodel_multidata_callback = cb; }
    inline void setKTextEditor__CodeCompletionModel_Submit_Callback(KTextEditor__CodeCompletionModel_Submit_Callback cb) { ktexteditor__codecompletionmodel_submit_callback = cb; }
    inline void setKTextEditor__CodeCompletionModel_Revert_Callback(KTextEditor__CodeCompletionModel_Revert_Callback cb) { ktexteditor__codecompletionmodel_revert_callback = cb; }
    inline void setKTextEditor__CodeCompletionModel_ResetInternalData_Callback(KTextEditor__CodeCompletionModel_ResetInternalData_Callback cb) { ktexteditor__codecompletionmodel_resetinternaldata_callback = cb; }
    inline void setKTextEditor__CodeCompletionModel_Event_Callback(KTextEditor__CodeCompletionModel_Event_Callback cb) { ktexteditor__codecompletionmodel_event_callback = cb; }
    inline void setKTextEditor__CodeCompletionModel_EventFilter_Callback(KTextEditor__CodeCompletionModel_EventFilter_Callback cb) { ktexteditor__codecompletionmodel_eventfilter_callback = cb; }
    inline void setKTextEditor__CodeCompletionModel_TimerEvent_Callback(KTextEditor__CodeCompletionModel_TimerEvent_Callback cb) { ktexteditor__codecompletionmodel_timerevent_callback = cb; }
    inline void setKTextEditor__CodeCompletionModel_ChildEvent_Callback(KTextEditor__CodeCompletionModel_ChildEvent_Callback cb) { ktexteditor__codecompletionmodel_childevent_callback = cb; }
    inline void setKTextEditor__CodeCompletionModel_CustomEvent_Callback(KTextEditor__CodeCompletionModel_CustomEvent_Callback cb) { ktexteditor__codecompletionmodel_customevent_callback = cb; }
    inline void setKTextEditor__CodeCompletionModel_ConnectNotify_Callback(KTextEditor__CodeCompletionModel_ConnectNotify_Callback cb) { ktexteditor__codecompletionmodel_connectnotify_callback = cb; }
    inline void setKTextEditor__CodeCompletionModel_DisconnectNotify_Callback(KTextEditor__CodeCompletionModel_DisconnectNotify_Callback cb) { ktexteditor__codecompletionmodel_disconnectnotify_callback = cb; }
    inline void setKTextEditor__CodeCompletionModel_SetHasGroups_Callback(KTextEditor__CodeCompletionModel_SetHasGroups_Callback cb) { ktexteditor__codecompletionmodel_sethasgroups_callback = cb; }
    inline void setKTextEditor__CodeCompletionModel_CreateIndex_Callback(KTextEditor__CodeCompletionModel_CreateIndex_Callback cb) { ktexteditor__codecompletionmodel_createindex_callback = cb; }
    inline void setKTextEditor__CodeCompletionModel_EncodeData_Callback(KTextEditor__CodeCompletionModel_EncodeData_Callback cb) { ktexteditor__codecompletionmodel_encodedata_callback = cb; }
    inline void setKTextEditor__CodeCompletionModel_DecodeData_Callback(KTextEditor__CodeCompletionModel_DecodeData_Callback cb) { ktexteditor__codecompletionmodel_decodedata_callback = cb; }
    inline void setKTextEditor__CodeCompletionModel_BeginInsertRows_Callback(KTextEditor__CodeCompletionModel_BeginInsertRows_Callback cb) { ktexteditor__codecompletionmodel_begininsertrows_callback = cb; }
    inline void setKTextEditor__CodeCompletionModel_EndInsertRows_Callback(KTextEditor__CodeCompletionModel_EndInsertRows_Callback cb) { ktexteditor__codecompletionmodel_endinsertrows_callback = cb; }
    inline void setKTextEditor__CodeCompletionModel_BeginRemoveRows_Callback(KTextEditor__CodeCompletionModel_BeginRemoveRows_Callback cb) { ktexteditor__codecompletionmodel_beginremoverows_callback = cb; }
    inline void setKTextEditor__CodeCompletionModel_EndRemoveRows_Callback(KTextEditor__CodeCompletionModel_EndRemoveRows_Callback cb) { ktexteditor__codecompletionmodel_endremoverows_callback = cb; }
    inline void setKTextEditor__CodeCompletionModel_BeginMoveRows_Callback(KTextEditor__CodeCompletionModel_BeginMoveRows_Callback cb) { ktexteditor__codecompletionmodel_beginmoverows_callback = cb; }
    inline void setKTextEditor__CodeCompletionModel_EndMoveRows_Callback(KTextEditor__CodeCompletionModel_EndMoveRows_Callback cb) { ktexteditor__codecompletionmodel_endmoverows_callback = cb; }
    inline void setKTextEditor__CodeCompletionModel_BeginInsertColumns_Callback(KTextEditor__CodeCompletionModel_BeginInsertColumns_Callback cb) { ktexteditor__codecompletionmodel_begininsertcolumns_callback = cb; }
    inline void setKTextEditor__CodeCompletionModel_EndInsertColumns_Callback(KTextEditor__CodeCompletionModel_EndInsertColumns_Callback cb) { ktexteditor__codecompletionmodel_endinsertcolumns_callback = cb; }
    inline void setKTextEditor__CodeCompletionModel_BeginRemoveColumns_Callback(KTextEditor__CodeCompletionModel_BeginRemoveColumns_Callback cb) { ktexteditor__codecompletionmodel_beginremovecolumns_callback = cb; }
    inline void setKTextEditor__CodeCompletionModel_EndRemoveColumns_Callback(KTextEditor__CodeCompletionModel_EndRemoveColumns_Callback cb) { ktexteditor__codecompletionmodel_endremovecolumns_callback = cb; }
    inline void setKTextEditor__CodeCompletionModel_BeginMoveColumns_Callback(KTextEditor__CodeCompletionModel_BeginMoveColumns_Callback cb) { ktexteditor__codecompletionmodel_beginmovecolumns_callback = cb; }
    inline void setKTextEditor__CodeCompletionModel_EndMoveColumns_Callback(KTextEditor__CodeCompletionModel_EndMoveColumns_Callback cb) { ktexteditor__codecompletionmodel_endmovecolumns_callback = cb; }
    inline void setKTextEditor__CodeCompletionModel_BeginResetModel_Callback(KTextEditor__CodeCompletionModel_BeginResetModel_Callback cb) { ktexteditor__codecompletionmodel_beginresetmodel_callback = cb; }
    inline void setKTextEditor__CodeCompletionModel_EndResetModel_Callback(KTextEditor__CodeCompletionModel_EndResetModel_Callback cb) { ktexteditor__codecompletionmodel_endresetmodel_callback = cb; }
    inline void setKTextEditor__CodeCompletionModel_ChangePersistentIndex_Callback(KTextEditor__CodeCompletionModel_ChangePersistentIndex_Callback cb) { ktexteditor__codecompletionmodel_changepersistentindex_callback = cb; }
    inline void setKTextEditor__CodeCompletionModel_ChangePersistentIndexList_Callback(KTextEditor__CodeCompletionModel_ChangePersistentIndexList_Callback cb) { ktexteditor__codecompletionmodel_changepersistentindexlist_callback = cb; }
    inline void setKTextEditor__CodeCompletionModel_PersistentIndexList_Callback(KTextEditor__CodeCompletionModel_PersistentIndexList_Callback cb) { ktexteditor__codecompletionmodel_persistentindexlist_callback = cb; }
    inline void setKTextEditor__CodeCompletionModel_Sender_Callback(KTextEditor__CodeCompletionModel_Sender_Callback cb) { ktexteditor__codecompletionmodel_sender_callback = cb; }
    inline void setKTextEditor__CodeCompletionModel_SenderSignalIndex_Callback(KTextEditor__CodeCompletionModel_SenderSignalIndex_Callback cb) { ktexteditor__codecompletionmodel_sendersignalindex_callback = cb; }
    inline void setKTextEditor__CodeCompletionModel_Receivers_Callback(KTextEditor__CodeCompletionModel_Receivers_Callback cb) { ktexteditor__codecompletionmodel_receivers_callback = cb; }
    inline void setKTextEditor__CodeCompletionModel_IsSignalConnected_Callback(KTextEditor__CodeCompletionModel_IsSignalConnected_Callback cb) { ktexteditor__codecompletionmodel_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKTextEditor__CodeCompletionModel_Metacall_IsBase(bool value) const { ktexteditor__codecompletionmodel_metacall_isbase = value; }
    inline void setKTextEditor__CodeCompletionModel_CompletionInvoked_IsBase(bool value) const { ktexteditor__codecompletionmodel_completioninvoked_isbase = value; }
    inline void setKTextEditor__CodeCompletionModel_ExecuteCompletionItem_IsBase(bool value) const { ktexteditor__codecompletionmodel_executecompletionitem_isbase = value; }
    inline void setKTextEditor__CodeCompletionModel_ColumnCount_IsBase(bool value) const { ktexteditor__codecompletionmodel_columncount_isbase = value; }
    inline void setKTextEditor__CodeCompletionModel_Index_IsBase(bool value) const { ktexteditor__codecompletionmodel_index_isbase = value; }
    inline void setKTextEditor__CodeCompletionModel_ItemData_IsBase(bool value) const { ktexteditor__codecompletionmodel_itemdata_isbase = value; }
    inline void setKTextEditor__CodeCompletionModel_Parent_IsBase(bool value) const { ktexteditor__codecompletionmodel_parent_isbase = value; }
    inline void setKTextEditor__CodeCompletionModel_RowCount_IsBase(bool value) const { ktexteditor__codecompletionmodel_rowcount_isbase = value; }
    inline void setKTextEditor__CodeCompletionModel_Sibling_IsBase(bool value) const { ktexteditor__codecompletionmodel_sibling_isbase = value; }
    inline void setKTextEditor__CodeCompletionModel_HasChildren_IsBase(bool value) const { ktexteditor__codecompletionmodel_haschildren_isbase = value; }
    inline void setKTextEditor__CodeCompletionModel_Data_IsBase(bool value) const { ktexteditor__codecompletionmodel_data_isbase = value; }
    inline void setKTextEditor__CodeCompletionModel_SetData_IsBase(bool value) const { ktexteditor__codecompletionmodel_setdata_isbase = value; }
    inline void setKTextEditor__CodeCompletionModel_HeaderData_IsBase(bool value) const { ktexteditor__codecompletionmodel_headerdata_isbase = value; }
    inline void setKTextEditor__CodeCompletionModel_SetHeaderData_IsBase(bool value) const { ktexteditor__codecompletionmodel_setheaderdata_isbase = value; }
    inline void setKTextEditor__CodeCompletionModel_SetItemData_IsBase(bool value) const { ktexteditor__codecompletionmodel_setitemdata_isbase = value; }
    inline void setKTextEditor__CodeCompletionModel_ClearItemData_IsBase(bool value) const { ktexteditor__codecompletionmodel_clearitemdata_isbase = value; }
    inline void setKTextEditor__CodeCompletionModel_MimeTypes_IsBase(bool value) const { ktexteditor__codecompletionmodel_mimetypes_isbase = value; }
    inline void setKTextEditor__CodeCompletionModel_MimeData_IsBase(bool value) const { ktexteditor__codecompletionmodel_mimedata_isbase = value; }
    inline void setKTextEditor__CodeCompletionModel_CanDropMimeData_IsBase(bool value) const { ktexteditor__codecompletionmodel_candropmimedata_isbase = value; }
    inline void setKTextEditor__CodeCompletionModel_DropMimeData_IsBase(bool value) const { ktexteditor__codecompletionmodel_dropmimedata_isbase = value; }
    inline void setKTextEditor__CodeCompletionModel_SupportedDropActions_IsBase(bool value) const { ktexteditor__codecompletionmodel_supporteddropactions_isbase = value; }
    inline void setKTextEditor__CodeCompletionModel_SupportedDragActions_IsBase(bool value) const { ktexteditor__codecompletionmodel_supporteddragactions_isbase = value; }
    inline void setKTextEditor__CodeCompletionModel_InsertRows_IsBase(bool value) const { ktexteditor__codecompletionmodel_insertrows_isbase = value; }
    inline void setKTextEditor__CodeCompletionModel_InsertColumns_IsBase(bool value) const { ktexteditor__codecompletionmodel_insertcolumns_isbase = value; }
    inline void setKTextEditor__CodeCompletionModel_RemoveRows_IsBase(bool value) const { ktexteditor__codecompletionmodel_removerows_isbase = value; }
    inline void setKTextEditor__CodeCompletionModel_RemoveColumns_IsBase(bool value) const { ktexteditor__codecompletionmodel_removecolumns_isbase = value; }
    inline void setKTextEditor__CodeCompletionModel_MoveRows_IsBase(bool value) const { ktexteditor__codecompletionmodel_moverows_isbase = value; }
    inline void setKTextEditor__CodeCompletionModel_MoveColumns_IsBase(bool value) const { ktexteditor__codecompletionmodel_movecolumns_isbase = value; }
    inline void setKTextEditor__CodeCompletionModel_FetchMore_IsBase(bool value) const { ktexteditor__codecompletionmodel_fetchmore_isbase = value; }
    inline void setKTextEditor__CodeCompletionModel_CanFetchMore_IsBase(bool value) const { ktexteditor__codecompletionmodel_canfetchmore_isbase = value; }
    inline void setKTextEditor__CodeCompletionModel_Flags_IsBase(bool value) const { ktexteditor__codecompletionmodel_flags_isbase = value; }
    inline void setKTextEditor__CodeCompletionModel_Sort_IsBase(bool value) const { ktexteditor__codecompletionmodel_sort_isbase = value; }
    inline void setKTextEditor__CodeCompletionModel_Buddy_IsBase(bool value) const { ktexteditor__codecompletionmodel_buddy_isbase = value; }
    inline void setKTextEditor__CodeCompletionModel_Match_IsBase(bool value) const { ktexteditor__codecompletionmodel_match_isbase = value; }
    inline void setKTextEditor__CodeCompletionModel_Span_IsBase(bool value) const { ktexteditor__codecompletionmodel_span_isbase = value; }
    inline void setKTextEditor__CodeCompletionModel_RoleNames_IsBase(bool value) const { ktexteditor__codecompletionmodel_rolenames_isbase = value; }
    inline void setKTextEditor__CodeCompletionModel_MultiData_IsBase(bool value) const { ktexteditor__codecompletionmodel_multidata_isbase = value; }
    inline void setKTextEditor__CodeCompletionModel_Submit_IsBase(bool value) const { ktexteditor__codecompletionmodel_submit_isbase = value; }
    inline void setKTextEditor__CodeCompletionModel_Revert_IsBase(bool value) const { ktexteditor__codecompletionmodel_revert_isbase = value; }
    inline void setKTextEditor__CodeCompletionModel_ResetInternalData_IsBase(bool value) const { ktexteditor__codecompletionmodel_resetinternaldata_isbase = value; }
    inline void setKTextEditor__CodeCompletionModel_Event_IsBase(bool value) const { ktexteditor__codecompletionmodel_event_isbase = value; }
    inline void setKTextEditor__CodeCompletionModel_EventFilter_IsBase(bool value) const { ktexteditor__codecompletionmodel_eventfilter_isbase = value; }
    inline void setKTextEditor__CodeCompletionModel_TimerEvent_IsBase(bool value) const { ktexteditor__codecompletionmodel_timerevent_isbase = value; }
    inline void setKTextEditor__CodeCompletionModel_ChildEvent_IsBase(bool value) const { ktexteditor__codecompletionmodel_childevent_isbase = value; }
    inline void setKTextEditor__CodeCompletionModel_CustomEvent_IsBase(bool value) const { ktexteditor__codecompletionmodel_customevent_isbase = value; }
    inline void setKTextEditor__CodeCompletionModel_ConnectNotify_IsBase(bool value) const { ktexteditor__codecompletionmodel_connectnotify_isbase = value; }
    inline void setKTextEditor__CodeCompletionModel_DisconnectNotify_IsBase(bool value) const { ktexteditor__codecompletionmodel_disconnectnotify_isbase = value; }
    inline void setKTextEditor__CodeCompletionModel_SetHasGroups_IsBase(bool value) const { ktexteditor__codecompletionmodel_sethasgroups_isbase = value; }
    inline void setKTextEditor__CodeCompletionModel_CreateIndex_IsBase(bool value) const { ktexteditor__codecompletionmodel_createindex_isbase = value; }
    inline void setKTextEditor__CodeCompletionModel_EncodeData_IsBase(bool value) const { ktexteditor__codecompletionmodel_encodedata_isbase = value; }
    inline void setKTextEditor__CodeCompletionModel_DecodeData_IsBase(bool value) const { ktexteditor__codecompletionmodel_decodedata_isbase = value; }
    inline void setKTextEditor__CodeCompletionModel_BeginInsertRows_IsBase(bool value) const { ktexteditor__codecompletionmodel_begininsertrows_isbase = value; }
    inline void setKTextEditor__CodeCompletionModel_EndInsertRows_IsBase(bool value) const { ktexteditor__codecompletionmodel_endinsertrows_isbase = value; }
    inline void setKTextEditor__CodeCompletionModel_BeginRemoveRows_IsBase(bool value) const { ktexteditor__codecompletionmodel_beginremoverows_isbase = value; }
    inline void setKTextEditor__CodeCompletionModel_EndRemoveRows_IsBase(bool value) const { ktexteditor__codecompletionmodel_endremoverows_isbase = value; }
    inline void setKTextEditor__CodeCompletionModel_BeginMoveRows_IsBase(bool value) const { ktexteditor__codecompletionmodel_beginmoverows_isbase = value; }
    inline void setKTextEditor__CodeCompletionModel_EndMoveRows_IsBase(bool value) const { ktexteditor__codecompletionmodel_endmoverows_isbase = value; }
    inline void setKTextEditor__CodeCompletionModel_BeginInsertColumns_IsBase(bool value) const { ktexteditor__codecompletionmodel_begininsertcolumns_isbase = value; }
    inline void setKTextEditor__CodeCompletionModel_EndInsertColumns_IsBase(bool value) const { ktexteditor__codecompletionmodel_endinsertcolumns_isbase = value; }
    inline void setKTextEditor__CodeCompletionModel_BeginRemoveColumns_IsBase(bool value) const { ktexteditor__codecompletionmodel_beginremovecolumns_isbase = value; }
    inline void setKTextEditor__CodeCompletionModel_EndRemoveColumns_IsBase(bool value) const { ktexteditor__codecompletionmodel_endremovecolumns_isbase = value; }
    inline void setKTextEditor__CodeCompletionModel_BeginMoveColumns_IsBase(bool value) const { ktexteditor__codecompletionmodel_beginmovecolumns_isbase = value; }
    inline void setKTextEditor__CodeCompletionModel_EndMoveColumns_IsBase(bool value) const { ktexteditor__codecompletionmodel_endmovecolumns_isbase = value; }
    inline void setKTextEditor__CodeCompletionModel_BeginResetModel_IsBase(bool value) const { ktexteditor__codecompletionmodel_beginresetmodel_isbase = value; }
    inline void setKTextEditor__CodeCompletionModel_EndResetModel_IsBase(bool value) const { ktexteditor__codecompletionmodel_endresetmodel_isbase = value; }
    inline void setKTextEditor__CodeCompletionModel_ChangePersistentIndex_IsBase(bool value) const { ktexteditor__codecompletionmodel_changepersistentindex_isbase = value; }
    inline void setKTextEditor__CodeCompletionModel_ChangePersistentIndexList_IsBase(bool value) const { ktexteditor__codecompletionmodel_changepersistentindexlist_isbase = value; }
    inline void setKTextEditor__CodeCompletionModel_PersistentIndexList_IsBase(bool value) const { ktexteditor__codecompletionmodel_persistentindexlist_isbase = value; }
    inline void setKTextEditor__CodeCompletionModel_Sender_IsBase(bool value) const { ktexteditor__codecompletionmodel_sender_isbase = value; }
    inline void setKTextEditor__CodeCompletionModel_SenderSignalIndex_IsBase(bool value) const { ktexteditor__codecompletionmodel_sendersignalindex_isbase = value; }
    inline void setKTextEditor__CodeCompletionModel_Receivers_IsBase(bool value) const { ktexteditor__codecompletionmodel_receivers_isbase = value; }
    inline void setKTextEditor__CodeCompletionModel_IsSignalConnected_IsBase(bool value) const { ktexteditor__codecompletionmodel_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (ktexteditor__codecompletionmodel_metacall_isbase) {
            ktexteditor__codecompletionmodel_metacall_isbase = false;
            return KTextEditor__CodeCompletionModel::qt_metacall(param1, param2, param3);
        } else if (ktexteditor__codecompletionmodel_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = ktexteditor__codecompletionmodel_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KTextEditor__CodeCompletionModel::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void completionInvoked(KTextEditor::View* view, const KTextEditor::Range& range, KTextEditor::CodeCompletionModel::InvocationType invocationType) override {
        if (ktexteditor__codecompletionmodel_completioninvoked_isbase) {
            ktexteditor__codecompletionmodel_completioninvoked_isbase = false;
            KTextEditor__CodeCompletionModel::completionInvoked(view, range, invocationType);
        } else if (ktexteditor__codecompletionmodel_completioninvoked_callback != nullptr) {
            KTextEditor__View* cbval1 = view;
            const KTextEditor::Range& range_ret = range;
            // Cast returned reference into pointer
            KTextEditor__Range* cbval2 = const_cast<KTextEditor::Range*>(&range_ret);
            int cbval3 = static_cast<int>(invocationType);

            ktexteditor__codecompletionmodel_completioninvoked_callback(this, cbval1, cbval2, cbval3);
        } else {
            KTextEditor__CodeCompletionModel::completionInvoked(view, range, invocationType);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void executeCompletionItem(KTextEditor::View* view, const KTextEditor::Range& word, const QModelIndex& index) const override {
        if (ktexteditor__codecompletionmodel_executecompletionitem_isbase) {
            ktexteditor__codecompletionmodel_executecompletionitem_isbase = false;
            KTextEditor__CodeCompletionModel::executeCompletionItem(view, word, index);
        } else if (ktexteditor__codecompletionmodel_executecompletionitem_callback != nullptr) {
            KTextEditor__View* cbval1 = view;
            const KTextEditor::Range& word_ret = word;
            // Cast returned reference into pointer
            KTextEditor__Range* cbval2 = const_cast<KTextEditor::Range*>(&word_ret);
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&index_ret);

            ktexteditor__codecompletionmodel_executecompletionitem_callback(this, cbval1, cbval2, cbval3);
        } else {
            KTextEditor__CodeCompletionModel::executeCompletionItem(view, word, index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int columnCount(const QModelIndex& parent) const override {
        if (ktexteditor__codecompletionmodel_columncount_isbase) {
            ktexteditor__codecompletionmodel_columncount_isbase = false;
            return KTextEditor__CodeCompletionModel::columnCount(parent);
        } else if (ktexteditor__codecompletionmodel_columncount_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            int callback_ret = ktexteditor__codecompletionmodel_columncount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KTextEditor__CodeCompletionModel::columnCount(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
        if (ktexteditor__codecompletionmodel_index_isbase) {
            ktexteditor__codecompletionmodel_index_isbase = false;
            return KTextEditor__CodeCompletionModel::index(row, column, parent);
        } else if (ktexteditor__codecompletionmodel_index_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            QModelIndex* callback_ret = ktexteditor__codecompletionmodel_index_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return KTextEditor__CodeCompletionModel::index(row, column, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
        if (ktexteditor__codecompletionmodel_itemdata_isbase) {
            ktexteditor__codecompletionmodel_itemdata_isbase = false;
            return KTextEditor__CodeCompletionModel::itemData(index);
        } else if (ktexteditor__codecompletionmodel_itemdata_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            libqt_map /* of int to QVariant* */ callback_ret = ktexteditor__codecompletionmodel_itemdata_callback(this, cbval1);
            QMap<int, QVariant> callback_ret_QMap;
            int* callback_ret_karr = static_cast<int*>(callback_ret.keys);
            QVariant** callback_ret_varr = static_cast<QVariant**>(callback_ret.values);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QMap[static_cast<int>(callback_ret_karr[i])] = *(callback_ret_varr[i]);
            }
            return callback_ret_QMap;
        } else {
            return KTextEditor__CodeCompletionModel::itemData(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex parent(const QModelIndex& index) const override {
        if (ktexteditor__codecompletionmodel_parent_isbase) {
            ktexteditor__codecompletionmodel_parent_isbase = false;
            return KTextEditor__CodeCompletionModel::parent(index);
        } else if (ktexteditor__codecompletionmodel_parent_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QModelIndex* callback_ret = ktexteditor__codecompletionmodel_parent_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KTextEditor__CodeCompletionModel::parent(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int rowCount(const QModelIndex& parent) const override {
        if (ktexteditor__codecompletionmodel_rowcount_isbase) {
            ktexteditor__codecompletionmodel_rowcount_isbase = false;
            return KTextEditor__CodeCompletionModel::rowCount(parent);
        } else if (ktexteditor__codecompletionmodel_rowcount_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            int callback_ret = ktexteditor__codecompletionmodel_rowcount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KTextEditor__CodeCompletionModel::rowCount(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
        if (ktexteditor__codecompletionmodel_sibling_isbase) {
            ktexteditor__codecompletionmodel_sibling_isbase = false;
            return KTextEditor__CodeCompletionModel::sibling(row, column, idx);
        } else if (ktexteditor__codecompletionmodel_sibling_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& idx_ret = idx;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&idx_ret);

            QModelIndex* callback_ret = ktexteditor__codecompletionmodel_sibling_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return KTextEditor__CodeCompletionModel::sibling(row, column, idx);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasChildren(const QModelIndex& parent) const override {
        if (ktexteditor__codecompletionmodel_haschildren_isbase) {
            ktexteditor__codecompletionmodel_haschildren_isbase = false;
            return KTextEditor__CodeCompletionModel::hasChildren(parent);
        } else if (ktexteditor__codecompletionmodel_haschildren_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = ktexteditor__codecompletionmodel_haschildren_callback(this, cbval1);
            return callback_ret;
        } else {
            return KTextEditor__CodeCompletionModel::hasChildren(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(const QModelIndex& index, int role) const override {
        if (ktexteditor__codecompletionmodel_data_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = role;

            QVariant* callback_ret = ktexteditor__codecompletionmodel_data_callback(this, cbval1, cbval2);
            return *callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
        if (ktexteditor__codecompletionmodel_setdata_isbase) {
            ktexteditor__codecompletionmodel_setdata_isbase = false;
            return KTextEditor__CodeCompletionModel::setData(index, value, role);
        } else if (ktexteditor__codecompletionmodel_setdata_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            int cbval3 = role;

            bool callback_ret = ktexteditor__codecompletionmodel_setdata_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KTextEditor__CodeCompletionModel::setData(index, value, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
        if (ktexteditor__codecompletionmodel_headerdata_isbase) {
            ktexteditor__codecompletionmodel_headerdata_isbase = false;
            return KTextEditor__CodeCompletionModel::headerData(section, orientation, role);
        } else if (ktexteditor__codecompletionmodel_headerdata_callback != nullptr) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            int cbval3 = role;

            QVariant* callback_ret = ktexteditor__codecompletionmodel_headerdata_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return KTextEditor__CodeCompletionModel::headerData(section, orientation, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
        if (ktexteditor__codecompletionmodel_setheaderdata_isbase) {
            ktexteditor__codecompletionmodel_setheaderdata_isbase = false;
            return KTextEditor__CodeCompletionModel::setHeaderData(section, orientation, value, role);
        } else if (ktexteditor__codecompletionmodel_setheaderdata_callback != nullptr) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = role;

            bool callback_ret = ktexteditor__codecompletionmodel_setheaderdata_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        } else {
            return KTextEditor__CodeCompletionModel::setHeaderData(section, orientation, value, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
        if (ktexteditor__codecompletionmodel_setitemdata_isbase) {
            ktexteditor__codecompletionmodel_setitemdata_isbase = false;
            return KTextEditor__CodeCompletionModel::setItemData(index, roles);
        } else if (ktexteditor__codecompletionmodel_setitemdata_callback != nullptr) {
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

            bool callback_ret = ktexteditor__codecompletionmodel_setitemdata_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KTextEditor__CodeCompletionModel::setItemData(index, roles);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool clearItemData(const QModelIndex& index) override {
        if (ktexteditor__codecompletionmodel_clearitemdata_isbase) {
            ktexteditor__codecompletionmodel_clearitemdata_isbase = false;
            return KTextEditor__CodeCompletionModel::clearItemData(index);
        } else if (ktexteditor__codecompletionmodel_clearitemdata_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            bool callback_ret = ktexteditor__codecompletionmodel_clearitemdata_callback(this, cbval1);
            return callback_ret;
        } else {
            return KTextEditor__CodeCompletionModel::clearItemData(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> mimeTypes() const override {
        if (ktexteditor__codecompletionmodel_mimetypes_isbase) {
            ktexteditor__codecompletionmodel_mimetypes_isbase = false;
            return KTextEditor__CodeCompletionModel::mimeTypes();
        } else if (ktexteditor__codecompletionmodel_mimetypes_callback != nullptr) {
            const char** callback_ret = ktexteditor__codecompletionmodel_mimetypes_callback();
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
            return KTextEditor__CodeCompletionModel::mimeTypes();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* mimeData(const QList<QModelIndex>& indexes) const override {
        if (ktexteditor__codecompletionmodel_mimedata_isbase) {
            ktexteditor__codecompletionmodel_mimedata_isbase = false;
            return KTextEditor__CodeCompletionModel::mimeData(indexes);
        } else if (ktexteditor__codecompletionmodel_mimedata_callback != nullptr) {
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

            QMimeData* callback_ret = ktexteditor__codecompletionmodel_mimedata_callback(this, cbval1);
            return callback_ret;
        } else {
            return KTextEditor__CodeCompletionModel::mimeData(indexes);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
        if (ktexteditor__codecompletionmodel_candropmimedata_isbase) {
            ktexteditor__codecompletionmodel_candropmimedata_isbase = false;
            return KTextEditor__CodeCompletionModel::canDropMimeData(data, action, row, column, parent);
        } else if (ktexteditor__codecompletionmodel_candropmimedata_callback != nullptr) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = ktexteditor__codecompletionmodel_candropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return KTextEditor__CodeCompletionModel::canDropMimeData(data, action, row, column, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
        if (ktexteditor__codecompletionmodel_dropmimedata_isbase) {
            ktexteditor__codecompletionmodel_dropmimedata_isbase = false;
            return KTextEditor__CodeCompletionModel::dropMimeData(data, action, row, column, parent);
        } else if (ktexteditor__codecompletionmodel_dropmimedata_callback != nullptr) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = ktexteditor__codecompletionmodel_dropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return KTextEditor__CodeCompletionModel::dropMimeData(data, action, row, column, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (ktexteditor__codecompletionmodel_supporteddropactions_isbase) {
            ktexteditor__codecompletionmodel_supporteddropactions_isbase = false;
            return KTextEditor__CodeCompletionModel::supportedDropActions();
        } else if (ktexteditor__codecompletionmodel_supporteddropactions_callback != nullptr) {
            int callback_ret = ktexteditor__codecompletionmodel_supporteddropactions_callback();
            return static_cast<Qt::DropActions>(callback_ret);
        } else {
            return KTextEditor__CodeCompletionModel::supportedDropActions();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDragActions() const override {
        if (ktexteditor__codecompletionmodel_supporteddragactions_isbase) {
            ktexteditor__codecompletionmodel_supporteddragactions_isbase = false;
            return KTextEditor__CodeCompletionModel::supportedDragActions();
        } else if (ktexteditor__codecompletionmodel_supporteddragactions_callback != nullptr) {
            int callback_ret = ktexteditor__codecompletionmodel_supporteddragactions_callback();
            return static_cast<Qt::DropActions>(callback_ret);
        } else {
            return KTextEditor__CodeCompletionModel::supportedDragActions();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
        if (ktexteditor__codecompletionmodel_insertrows_isbase) {
            ktexteditor__codecompletionmodel_insertrows_isbase = false;
            return KTextEditor__CodeCompletionModel::insertRows(row, count, parent);
        } else if (ktexteditor__codecompletionmodel_insertrows_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = ktexteditor__codecompletionmodel_insertrows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KTextEditor__CodeCompletionModel::insertRows(row, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
        if (ktexteditor__codecompletionmodel_insertcolumns_isbase) {
            ktexteditor__codecompletionmodel_insertcolumns_isbase = false;
            return KTextEditor__CodeCompletionModel::insertColumns(column, count, parent);
        } else if (ktexteditor__codecompletionmodel_insertcolumns_callback != nullptr) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = ktexteditor__codecompletionmodel_insertcolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KTextEditor__CodeCompletionModel::insertColumns(column, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
        if (ktexteditor__codecompletionmodel_removerows_isbase) {
            ktexteditor__codecompletionmodel_removerows_isbase = false;
            return KTextEditor__CodeCompletionModel::removeRows(row, count, parent);
        } else if (ktexteditor__codecompletionmodel_removerows_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = ktexteditor__codecompletionmodel_removerows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KTextEditor__CodeCompletionModel::removeRows(row, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
        if (ktexteditor__codecompletionmodel_removecolumns_isbase) {
            ktexteditor__codecompletionmodel_removecolumns_isbase = false;
            return KTextEditor__CodeCompletionModel::removeColumns(column, count, parent);
        } else if (ktexteditor__codecompletionmodel_removecolumns_callback != nullptr) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = ktexteditor__codecompletionmodel_removecolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KTextEditor__CodeCompletionModel::removeColumns(column, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (ktexteditor__codecompletionmodel_moverows_isbase) {
            ktexteditor__codecompletionmodel_moverows_isbase = false;
            return KTextEditor__CodeCompletionModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
        } else if (ktexteditor__codecompletionmodel_moverows_callback != nullptr) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceRow;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;

            bool callback_ret = ktexteditor__codecompletionmodel_moverows_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return KTextEditor__CodeCompletionModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (ktexteditor__codecompletionmodel_movecolumns_isbase) {
            ktexteditor__codecompletionmodel_movecolumns_isbase = false;
            return KTextEditor__CodeCompletionModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
        } else if (ktexteditor__codecompletionmodel_movecolumns_callback != nullptr) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceColumn;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;

            bool callback_ret = ktexteditor__codecompletionmodel_movecolumns_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return KTextEditor__CodeCompletionModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void fetchMore(const QModelIndex& parent) override {
        if (ktexteditor__codecompletionmodel_fetchmore_isbase) {
            ktexteditor__codecompletionmodel_fetchmore_isbase = false;
            KTextEditor__CodeCompletionModel::fetchMore(parent);
        } else if (ktexteditor__codecompletionmodel_fetchmore_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            ktexteditor__codecompletionmodel_fetchmore_callback(this, cbval1);
        } else {
            KTextEditor__CodeCompletionModel::fetchMore(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canFetchMore(const QModelIndex& parent) const override {
        if (ktexteditor__codecompletionmodel_canfetchmore_isbase) {
            ktexteditor__codecompletionmodel_canfetchmore_isbase = false;
            return KTextEditor__CodeCompletionModel::canFetchMore(parent);
        } else if (ktexteditor__codecompletionmodel_canfetchmore_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = ktexteditor__codecompletionmodel_canfetchmore_callback(this, cbval1);
            return callback_ret;
        } else {
            return KTextEditor__CodeCompletionModel::canFetchMore(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
        if (ktexteditor__codecompletionmodel_flags_isbase) {
            ktexteditor__codecompletionmodel_flags_isbase = false;
            return KTextEditor__CodeCompletionModel::flags(index);
        } else if (ktexteditor__codecompletionmodel_flags_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            int callback_ret = ktexteditor__codecompletionmodel_flags_callback(this, cbval1);
            return static_cast<Qt::ItemFlags>(callback_ret);
        } else {
            return KTextEditor__CodeCompletionModel::flags(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void sort(int column, Qt::SortOrder order) override {
        if (ktexteditor__codecompletionmodel_sort_isbase) {
            ktexteditor__codecompletionmodel_sort_isbase = false;
            KTextEditor__CodeCompletionModel::sort(column, order);
        } else if (ktexteditor__codecompletionmodel_sort_callback != nullptr) {
            int cbval1 = column;
            int cbval2 = static_cast<int>(order);

            ktexteditor__codecompletionmodel_sort_callback(this, cbval1, cbval2);
        } else {
            KTextEditor__CodeCompletionModel::sort(column, order);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex buddy(const QModelIndex& index) const override {
        if (ktexteditor__codecompletionmodel_buddy_isbase) {
            ktexteditor__codecompletionmodel_buddy_isbase = false;
            return KTextEditor__CodeCompletionModel::buddy(index);
        } else if (ktexteditor__codecompletionmodel_buddy_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QModelIndex* callback_ret = ktexteditor__codecompletionmodel_buddy_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KTextEditor__CodeCompletionModel::buddy(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
        if (ktexteditor__codecompletionmodel_match_isbase) {
            ktexteditor__codecompletionmodel_match_isbase = false;
            return KTextEditor__CodeCompletionModel::match(start, role, value, hits, flags);
        } else if (ktexteditor__codecompletionmodel_match_callback != nullptr) {
            const QModelIndex& start_ret = start;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&start_ret);
            int cbval2 = role;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = hits;
            int cbval5 = static_cast<int>(flags);

            QModelIndex** callback_ret = ktexteditor__codecompletionmodel_match_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            QList<QModelIndex> callback_ret_QList;
            // Iterate until null pointer sentinel
            for (QModelIndex** ptridx = callback_ret; *ptridx != nullptr; ptridx++) {
                callback_ret_QList.push_back(**ptridx);
            }
            free(callback_ret);
            return callback_ret_QList;
        } else {
            return KTextEditor__CodeCompletionModel::match(start, role, value, hits, flags);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize span(const QModelIndex& index) const override {
        if (ktexteditor__codecompletionmodel_span_isbase) {
            ktexteditor__codecompletionmodel_span_isbase = false;
            return KTextEditor__CodeCompletionModel::span(index);
        } else if (ktexteditor__codecompletionmodel_span_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QSize* callback_ret = ktexteditor__codecompletionmodel_span_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KTextEditor__CodeCompletionModel::span(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QHash<int, QByteArray> roleNames() const override {
        if (ktexteditor__codecompletionmodel_rolenames_isbase) {
            ktexteditor__codecompletionmodel_rolenames_isbase = false;
            return KTextEditor__CodeCompletionModel::roleNames();
        } else if (ktexteditor__codecompletionmodel_rolenames_callback != nullptr) {
            libqt_map /* of int to libqt_string */ callback_ret = ktexteditor__codecompletionmodel_rolenames_callback();
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
            return KTextEditor__CodeCompletionModel::roleNames();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
        if (ktexteditor__codecompletionmodel_multidata_isbase) {
            ktexteditor__codecompletionmodel_multidata_isbase = false;
            KTextEditor__CodeCompletionModel::multiData(index, roleDataSpan);
        } else if (ktexteditor__codecompletionmodel_multidata_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelRoleDataSpan* cbval2 = new QModelRoleDataSpan(roleDataSpan);

            ktexteditor__codecompletionmodel_multidata_callback(this, cbval1, cbval2);
        } else {
            KTextEditor__CodeCompletionModel::multiData(index, roleDataSpan);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool submit() override {
        if (ktexteditor__codecompletionmodel_submit_isbase) {
            ktexteditor__codecompletionmodel_submit_isbase = false;
            return KTextEditor__CodeCompletionModel::submit();
        } else if (ktexteditor__codecompletionmodel_submit_callback != nullptr) {
            bool callback_ret = ktexteditor__codecompletionmodel_submit_callback();
            return callback_ret;
        } else {
            return KTextEditor__CodeCompletionModel::submit();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void revert() override {
        if (ktexteditor__codecompletionmodel_revert_isbase) {
            ktexteditor__codecompletionmodel_revert_isbase = false;
            KTextEditor__CodeCompletionModel::revert();
        } else if (ktexteditor__codecompletionmodel_revert_callback != nullptr) {
            ktexteditor__codecompletionmodel_revert_callback();
        } else {
            KTextEditor__CodeCompletionModel::revert();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetInternalData() override {
        if (ktexteditor__codecompletionmodel_resetinternaldata_isbase) {
            ktexteditor__codecompletionmodel_resetinternaldata_isbase = false;
            KTextEditor__CodeCompletionModel::resetInternalData();
        } else if (ktexteditor__codecompletionmodel_resetinternaldata_callback != nullptr) {
            ktexteditor__codecompletionmodel_resetinternaldata_callback();
        } else {
            KTextEditor__CodeCompletionModel::resetInternalData();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (ktexteditor__codecompletionmodel_event_isbase) {
            ktexteditor__codecompletionmodel_event_isbase = false;
            return KTextEditor__CodeCompletionModel::event(event);
        } else if (ktexteditor__codecompletionmodel_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = ktexteditor__codecompletionmodel_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KTextEditor__CodeCompletionModel::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (ktexteditor__codecompletionmodel_eventfilter_isbase) {
            ktexteditor__codecompletionmodel_eventfilter_isbase = false;
            return KTextEditor__CodeCompletionModel::eventFilter(watched, event);
        } else if (ktexteditor__codecompletionmodel_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = ktexteditor__codecompletionmodel_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KTextEditor__CodeCompletionModel::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (ktexteditor__codecompletionmodel_timerevent_isbase) {
            ktexteditor__codecompletionmodel_timerevent_isbase = false;
            KTextEditor__CodeCompletionModel::timerEvent(event);
        } else if (ktexteditor__codecompletionmodel_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            ktexteditor__codecompletionmodel_timerevent_callback(this, cbval1);
        } else {
            KTextEditor__CodeCompletionModel::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (ktexteditor__codecompletionmodel_childevent_isbase) {
            ktexteditor__codecompletionmodel_childevent_isbase = false;
            KTextEditor__CodeCompletionModel::childEvent(event);
        } else if (ktexteditor__codecompletionmodel_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            ktexteditor__codecompletionmodel_childevent_callback(this, cbval1);
        } else {
            KTextEditor__CodeCompletionModel::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (ktexteditor__codecompletionmodel_customevent_isbase) {
            ktexteditor__codecompletionmodel_customevent_isbase = false;
            KTextEditor__CodeCompletionModel::customEvent(event);
        } else if (ktexteditor__codecompletionmodel_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            ktexteditor__codecompletionmodel_customevent_callback(this, cbval1);
        } else {
            KTextEditor__CodeCompletionModel::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (ktexteditor__codecompletionmodel_connectnotify_isbase) {
            ktexteditor__codecompletionmodel_connectnotify_isbase = false;
            KTextEditor__CodeCompletionModel::connectNotify(signal);
        } else if (ktexteditor__codecompletionmodel_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            ktexteditor__codecompletionmodel_connectnotify_callback(this, cbval1);
        } else {
            KTextEditor__CodeCompletionModel::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (ktexteditor__codecompletionmodel_disconnectnotify_isbase) {
            ktexteditor__codecompletionmodel_disconnectnotify_isbase = false;
            KTextEditor__CodeCompletionModel::disconnectNotify(signal);
        } else if (ktexteditor__codecompletionmodel_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            ktexteditor__codecompletionmodel_disconnectnotify_callback(this, cbval1);
        } else {
            KTextEditor__CodeCompletionModel::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setHasGroups(bool hasGroups) {
        if (ktexteditor__codecompletionmodel_sethasgroups_isbase) {
            ktexteditor__codecompletionmodel_sethasgroups_isbase = false;
            KTextEditor__CodeCompletionModel::setHasGroups(hasGroups);
        } else if (ktexteditor__codecompletionmodel_sethasgroups_callback != nullptr) {
            bool cbval1 = hasGroups;

            ktexteditor__codecompletionmodel_sethasgroups_callback(this, cbval1);
        } else {
            KTextEditor__CodeCompletionModel::setHasGroups(hasGroups);
        }
    }

    // Virtual method for C ABI access and custom callback
    QModelIndex createIndex(int row, int column) const {
        if (ktexteditor__codecompletionmodel_createindex_isbase) {
            ktexteditor__codecompletionmodel_createindex_isbase = false;
            return KTextEditor__CodeCompletionModel::createIndex(row, column);
        } else if (ktexteditor__codecompletionmodel_createindex_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;

            QModelIndex* callback_ret = ktexteditor__codecompletionmodel_createindex_callback(this, cbval1, cbval2);
            return *callback_ret;
        } else {
            return KTextEditor__CodeCompletionModel::createIndex(row, column);
        }
    }

    // Virtual method for C ABI access and custom callback
    void encodeData(const QList<QModelIndex>& indexes, QDataStream& stream) const {
        if (ktexteditor__codecompletionmodel_encodedata_isbase) {
            ktexteditor__codecompletionmodel_encodedata_isbase = false;
            KTextEditor__CodeCompletionModel::encodeData(indexes, stream);
        } else if (ktexteditor__codecompletionmodel_encodedata_callback != nullptr) {
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

            ktexteditor__codecompletionmodel_encodedata_callback(this, cbval1, cbval2);
        } else {
            KTextEditor__CodeCompletionModel::encodeData(indexes, stream);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool decodeData(int row, int column, const QModelIndex& parent, QDataStream& stream) {
        if (ktexteditor__codecompletionmodel_decodedata_isbase) {
            ktexteditor__codecompletionmodel_decodedata_isbase = false;
            return KTextEditor__CodeCompletionModel::decodeData(row, column, parent, stream);
        } else if (ktexteditor__codecompletionmodel_decodedata_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            QDataStream& stream_ret = stream;
            // Cast returned reference into pointer
            QDataStream* cbval4 = &stream_ret;

            bool callback_ret = ktexteditor__codecompletionmodel_decodedata_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        } else {
            return KTextEditor__CodeCompletionModel::decodeData(row, column, parent, stream);
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertRows(const QModelIndex& parent, int first, int last) {
        if (ktexteditor__codecompletionmodel_begininsertrows_isbase) {
            ktexteditor__codecompletionmodel_begininsertrows_isbase = false;
            KTextEditor__CodeCompletionModel::beginInsertRows(parent, first, last);
        } else if (ktexteditor__codecompletionmodel_begininsertrows_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            ktexteditor__codecompletionmodel_begininsertrows_callback(this, cbval1, cbval2, cbval3);
        } else {
            KTextEditor__CodeCompletionModel::beginInsertRows(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endInsertRows() {
        if (ktexteditor__codecompletionmodel_endinsertrows_isbase) {
            ktexteditor__codecompletionmodel_endinsertrows_isbase = false;
            KTextEditor__CodeCompletionModel::endInsertRows();
        } else if (ktexteditor__codecompletionmodel_endinsertrows_callback != nullptr) {
            ktexteditor__codecompletionmodel_endinsertrows_callback();
        } else {
            KTextEditor__CodeCompletionModel::endInsertRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveRows(const QModelIndex& parent, int first, int last) {
        if (ktexteditor__codecompletionmodel_beginremoverows_isbase) {
            ktexteditor__codecompletionmodel_beginremoverows_isbase = false;
            KTextEditor__CodeCompletionModel::beginRemoveRows(parent, first, last);
        } else if (ktexteditor__codecompletionmodel_beginremoverows_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            ktexteditor__codecompletionmodel_beginremoverows_callback(this, cbval1, cbval2, cbval3);
        } else {
            KTextEditor__CodeCompletionModel::beginRemoveRows(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveRows() {
        if (ktexteditor__codecompletionmodel_endremoverows_isbase) {
            ktexteditor__codecompletionmodel_endremoverows_isbase = false;
            KTextEditor__CodeCompletionModel::endRemoveRows();
        } else if (ktexteditor__codecompletionmodel_endremoverows_callback != nullptr) {
            ktexteditor__codecompletionmodel_endremoverows_callback();
        } else {
            KTextEditor__CodeCompletionModel::endRemoveRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveRows(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationRow) {
        if (ktexteditor__codecompletionmodel_beginmoverows_isbase) {
            ktexteditor__codecompletionmodel_beginmoverows_isbase = false;
            return KTextEditor__CodeCompletionModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
        } else if (ktexteditor__codecompletionmodel_beginmoverows_callback != nullptr) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceFirst;
            int cbval3 = sourceLast;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationRow;

            bool callback_ret = ktexteditor__codecompletionmodel_beginmoverows_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return KTextEditor__CodeCompletionModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endMoveRows() {
        if (ktexteditor__codecompletionmodel_endmoverows_isbase) {
            ktexteditor__codecompletionmodel_endmoverows_isbase = false;
            KTextEditor__CodeCompletionModel::endMoveRows();
        } else if (ktexteditor__codecompletionmodel_endmoverows_callback != nullptr) {
            ktexteditor__codecompletionmodel_endmoverows_callback();
        } else {
            KTextEditor__CodeCompletionModel::endMoveRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertColumns(const QModelIndex& parent, int first, int last) {
        if (ktexteditor__codecompletionmodel_begininsertcolumns_isbase) {
            ktexteditor__codecompletionmodel_begininsertcolumns_isbase = false;
            KTextEditor__CodeCompletionModel::beginInsertColumns(parent, first, last);
        } else if (ktexteditor__codecompletionmodel_begininsertcolumns_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            ktexteditor__codecompletionmodel_begininsertcolumns_callback(this, cbval1, cbval2, cbval3);
        } else {
            KTextEditor__CodeCompletionModel::beginInsertColumns(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endInsertColumns() {
        if (ktexteditor__codecompletionmodel_endinsertcolumns_isbase) {
            ktexteditor__codecompletionmodel_endinsertcolumns_isbase = false;
            KTextEditor__CodeCompletionModel::endInsertColumns();
        } else if (ktexteditor__codecompletionmodel_endinsertcolumns_callback != nullptr) {
            ktexteditor__codecompletionmodel_endinsertcolumns_callback();
        } else {
            KTextEditor__CodeCompletionModel::endInsertColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveColumns(const QModelIndex& parent, int first, int last) {
        if (ktexteditor__codecompletionmodel_beginremovecolumns_isbase) {
            ktexteditor__codecompletionmodel_beginremovecolumns_isbase = false;
            KTextEditor__CodeCompletionModel::beginRemoveColumns(parent, first, last);
        } else if (ktexteditor__codecompletionmodel_beginremovecolumns_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            ktexteditor__codecompletionmodel_beginremovecolumns_callback(this, cbval1, cbval2, cbval3);
        } else {
            KTextEditor__CodeCompletionModel::beginRemoveColumns(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveColumns() {
        if (ktexteditor__codecompletionmodel_endremovecolumns_isbase) {
            ktexteditor__codecompletionmodel_endremovecolumns_isbase = false;
            KTextEditor__CodeCompletionModel::endRemoveColumns();
        } else if (ktexteditor__codecompletionmodel_endremovecolumns_callback != nullptr) {
            ktexteditor__codecompletionmodel_endremovecolumns_callback();
        } else {
            KTextEditor__CodeCompletionModel::endRemoveColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveColumns(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationColumn) {
        if (ktexteditor__codecompletionmodel_beginmovecolumns_isbase) {
            ktexteditor__codecompletionmodel_beginmovecolumns_isbase = false;
            return KTextEditor__CodeCompletionModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
        } else if (ktexteditor__codecompletionmodel_beginmovecolumns_callback != nullptr) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceFirst;
            int cbval3 = sourceLast;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationColumn;

            bool callback_ret = ktexteditor__codecompletionmodel_beginmovecolumns_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return KTextEditor__CodeCompletionModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endMoveColumns() {
        if (ktexteditor__codecompletionmodel_endmovecolumns_isbase) {
            ktexteditor__codecompletionmodel_endmovecolumns_isbase = false;
            KTextEditor__CodeCompletionModel::endMoveColumns();
        } else if (ktexteditor__codecompletionmodel_endmovecolumns_callback != nullptr) {
            ktexteditor__codecompletionmodel_endmovecolumns_callback();
        } else {
            KTextEditor__CodeCompletionModel::endMoveColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginResetModel() {
        if (ktexteditor__codecompletionmodel_beginresetmodel_isbase) {
            ktexteditor__codecompletionmodel_beginresetmodel_isbase = false;
            KTextEditor__CodeCompletionModel::beginResetModel();
        } else if (ktexteditor__codecompletionmodel_beginresetmodel_callback != nullptr) {
            ktexteditor__codecompletionmodel_beginresetmodel_callback();
        } else {
            KTextEditor__CodeCompletionModel::beginResetModel();
        }
    }

    // Virtual method for C ABI access and custom callback
    void endResetModel() {
        if (ktexteditor__codecompletionmodel_endresetmodel_isbase) {
            ktexteditor__codecompletionmodel_endresetmodel_isbase = false;
            KTextEditor__CodeCompletionModel::endResetModel();
        } else if (ktexteditor__codecompletionmodel_endresetmodel_callback != nullptr) {
            ktexteditor__codecompletionmodel_endresetmodel_callback();
        } else {
            KTextEditor__CodeCompletionModel::endResetModel();
        }
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndex(const QModelIndex& from, const QModelIndex& to) {
        if (ktexteditor__codecompletionmodel_changepersistentindex_isbase) {
            ktexteditor__codecompletionmodel_changepersistentindex_isbase = false;
            KTextEditor__CodeCompletionModel::changePersistentIndex(from, to);
        } else if (ktexteditor__codecompletionmodel_changepersistentindex_callback != nullptr) {
            const QModelIndex& from_ret = from;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&from_ret);
            const QModelIndex& to_ret = to;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&to_ret);

            ktexteditor__codecompletionmodel_changepersistentindex_callback(this, cbval1, cbval2);
        } else {
            KTextEditor__CodeCompletionModel::changePersistentIndex(from, to);
        }
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndexList(const QList<QModelIndex>& from, const QList<QModelIndex>& to) {
        if (ktexteditor__codecompletionmodel_changepersistentindexlist_isbase) {
            ktexteditor__codecompletionmodel_changepersistentindexlist_isbase = false;
            KTextEditor__CodeCompletionModel::changePersistentIndexList(from, to);
        } else if (ktexteditor__codecompletionmodel_changepersistentindexlist_callback != nullptr) {
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

            ktexteditor__codecompletionmodel_changepersistentindexlist_callback(this, cbval1, cbval2);
        } else {
            KTextEditor__CodeCompletionModel::changePersistentIndexList(from, to);
        }
    }

    // Virtual method for C ABI access and custom callback
    QList<QModelIndex> persistentIndexList() const {
        if (ktexteditor__codecompletionmodel_persistentindexlist_isbase) {
            ktexteditor__codecompletionmodel_persistentindexlist_isbase = false;
            return KTextEditor__CodeCompletionModel::persistentIndexList();
        } else if (ktexteditor__codecompletionmodel_persistentindexlist_callback != nullptr) {
            QModelIndex** callback_ret = ktexteditor__codecompletionmodel_persistentindexlist_callback();
            QList<QModelIndex> callback_ret_QList;
            // Iterate until null pointer sentinel
            for (QModelIndex** ptridx = callback_ret; *ptridx != nullptr; ptridx++) {
                callback_ret_QList.push_back(**ptridx);
            }
            free(callback_ret);
            return callback_ret_QList;
        } else {
            return KTextEditor__CodeCompletionModel::persistentIndexList();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (ktexteditor__codecompletionmodel_sender_isbase) {
            ktexteditor__codecompletionmodel_sender_isbase = false;
            return KTextEditor__CodeCompletionModel::sender();
        } else if (ktexteditor__codecompletionmodel_sender_callback != nullptr) {
            QObject* callback_ret = ktexteditor__codecompletionmodel_sender_callback();
            return callback_ret;
        } else {
            return KTextEditor__CodeCompletionModel::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (ktexteditor__codecompletionmodel_sendersignalindex_isbase) {
            ktexteditor__codecompletionmodel_sendersignalindex_isbase = false;
            return KTextEditor__CodeCompletionModel::senderSignalIndex();
        } else if (ktexteditor__codecompletionmodel_sendersignalindex_callback != nullptr) {
            int callback_ret = ktexteditor__codecompletionmodel_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KTextEditor__CodeCompletionModel::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (ktexteditor__codecompletionmodel_receivers_isbase) {
            ktexteditor__codecompletionmodel_receivers_isbase = false;
            return KTextEditor__CodeCompletionModel::receivers(signal);
        } else if (ktexteditor__codecompletionmodel_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = ktexteditor__codecompletionmodel_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KTextEditor__CodeCompletionModel::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (ktexteditor__codecompletionmodel_issignalconnected_isbase) {
            ktexteditor__codecompletionmodel_issignalconnected_isbase = false;
            return KTextEditor__CodeCompletionModel::isSignalConnected(signal);
        } else if (ktexteditor__codecompletionmodel_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = ktexteditor__codecompletionmodel_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KTextEditor__CodeCompletionModel::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void KTextEditor__CodeCompletionModel_ResetInternalData(KTextEditor::CodeCompletionModel* self);
    friend void KTextEditor__CodeCompletionModel_QBaseResetInternalData(KTextEditor::CodeCompletionModel* self);
    friend void KTextEditor__CodeCompletionModel_TimerEvent(KTextEditor::CodeCompletionModel* self, QTimerEvent* event);
    friend void KTextEditor__CodeCompletionModel_QBaseTimerEvent(KTextEditor::CodeCompletionModel* self, QTimerEvent* event);
    friend void KTextEditor__CodeCompletionModel_ChildEvent(KTextEditor::CodeCompletionModel* self, QChildEvent* event);
    friend void KTextEditor__CodeCompletionModel_QBaseChildEvent(KTextEditor::CodeCompletionModel* self, QChildEvent* event);
    friend void KTextEditor__CodeCompletionModel_CustomEvent(KTextEditor::CodeCompletionModel* self, QEvent* event);
    friend void KTextEditor__CodeCompletionModel_QBaseCustomEvent(KTextEditor::CodeCompletionModel* self, QEvent* event);
    friend void KTextEditor__CodeCompletionModel_ConnectNotify(KTextEditor::CodeCompletionModel* self, const QMetaMethod* signal);
    friend void KTextEditor__CodeCompletionModel_QBaseConnectNotify(KTextEditor::CodeCompletionModel* self, const QMetaMethod* signal);
    friend void KTextEditor__CodeCompletionModel_DisconnectNotify(KTextEditor::CodeCompletionModel* self, const QMetaMethod* signal);
    friend void KTextEditor__CodeCompletionModel_QBaseDisconnectNotify(KTextEditor::CodeCompletionModel* self, const QMetaMethod* signal);
    friend void KTextEditor__CodeCompletionModel_SetHasGroups(KTextEditor::CodeCompletionModel* self, bool hasGroups);
    friend void KTextEditor__CodeCompletionModel_QBaseSetHasGroups(KTextEditor::CodeCompletionModel* self, bool hasGroups);
    friend QModelIndex* KTextEditor__CodeCompletionModel_CreateIndex(const KTextEditor::CodeCompletionModel* self, int row, int column);
    friend QModelIndex* KTextEditor__CodeCompletionModel_QBaseCreateIndex(const KTextEditor::CodeCompletionModel* self, int row, int column);
    friend void KTextEditor__CodeCompletionModel_EncodeData(const KTextEditor::CodeCompletionModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
    friend void KTextEditor__CodeCompletionModel_QBaseEncodeData(const KTextEditor::CodeCompletionModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
    friend bool KTextEditor__CodeCompletionModel_DecodeData(KTextEditor::CodeCompletionModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
    friend bool KTextEditor__CodeCompletionModel_QBaseDecodeData(KTextEditor::CodeCompletionModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
    friend void KTextEditor__CodeCompletionModel_BeginInsertRows(KTextEditor::CodeCompletionModel* self, const QModelIndex* parent, int first, int last);
    friend void KTextEditor__CodeCompletionModel_QBaseBeginInsertRows(KTextEditor::CodeCompletionModel* self, const QModelIndex* parent, int first, int last);
    friend void KTextEditor__CodeCompletionModel_EndInsertRows(KTextEditor::CodeCompletionModel* self);
    friend void KTextEditor__CodeCompletionModel_QBaseEndInsertRows(KTextEditor::CodeCompletionModel* self);
    friend void KTextEditor__CodeCompletionModel_BeginRemoveRows(KTextEditor::CodeCompletionModel* self, const QModelIndex* parent, int first, int last);
    friend void KTextEditor__CodeCompletionModel_QBaseBeginRemoveRows(KTextEditor::CodeCompletionModel* self, const QModelIndex* parent, int first, int last);
    friend void KTextEditor__CodeCompletionModel_EndRemoveRows(KTextEditor::CodeCompletionModel* self);
    friend void KTextEditor__CodeCompletionModel_QBaseEndRemoveRows(KTextEditor::CodeCompletionModel* self);
    friend bool KTextEditor__CodeCompletionModel_BeginMoveRows(KTextEditor::CodeCompletionModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
    friend bool KTextEditor__CodeCompletionModel_QBaseBeginMoveRows(KTextEditor::CodeCompletionModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
    friend void KTextEditor__CodeCompletionModel_EndMoveRows(KTextEditor::CodeCompletionModel* self);
    friend void KTextEditor__CodeCompletionModel_QBaseEndMoveRows(KTextEditor::CodeCompletionModel* self);
    friend void KTextEditor__CodeCompletionModel_BeginInsertColumns(KTextEditor::CodeCompletionModel* self, const QModelIndex* parent, int first, int last);
    friend void KTextEditor__CodeCompletionModel_QBaseBeginInsertColumns(KTextEditor::CodeCompletionModel* self, const QModelIndex* parent, int first, int last);
    friend void KTextEditor__CodeCompletionModel_EndInsertColumns(KTextEditor::CodeCompletionModel* self);
    friend void KTextEditor__CodeCompletionModel_QBaseEndInsertColumns(KTextEditor::CodeCompletionModel* self);
    friend void KTextEditor__CodeCompletionModel_BeginRemoveColumns(KTextEditor::CodeCompletionModel* self, const QModelIndex* parent, int first, int last);
    friend void KTextEditor__CodeCompletionModel_QBaseBeginRemoveColumns(KTextEditor::CodeCompletionModel* self, const QModelIndex* parent, int first, int last);
    friend void KTextEditor__CodeCompletionModel_EndRemoveColumns(KTextEditor::CodeCompletionModel* self);
    friend void KTextEditor__CodeCompletionModel_QBaseEndRemoveColumns(KTextEditor::CodeCompletionModel* self);
    friend bool KTextEditor__CodeCompletionModel_BeginMoveColumns(KTextEditor::CodeCompletionModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
    friend bool KTextEditor__CodeCompletionModel_QBaseBeginMoveColumns(KTextEditor::CodeCompletionModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
    friend void KTextEditor__CodeCompletionModel_EndMoveColumns(KTextEditor::CodeCompletionModel* self);
    friend void KTextEditor__CodeCompletionModel_QBaseEndMoveColumns(KTextEditor::CodeCompletionModel* self);
    friend void KTextEditor__CodeCompletionModel_BeginResetModel(KTextEditor::CodeCompletionModel* self);
    friend void KTextEditor__CodeCompletionModel_QBaseBeginResetModel(KTextEditor::CodeCompletionModel* self);
    friend void KTextEditor__CodeCompletionModel_EndResetModel(KTextEditor::CodeCompletionModel* self);
    friend void KTextEditor__CodeCompletionModel_QBaseEndResetModel(KTextEditor::CodeCompletionModel* self);
    friend void KTextEditor__CodeCompletionModel_ChangePersistentIndex(KTextEditor::CodeCompletionModel* self, const QModelIndex* from, const QModelIndex* to);
    friend void KTextEditor__CodeCompletionModel_QBaseChangePersistentIndex(KTextEditor::CodeCompletionModel* self, const QModelIndex* from, const QModelIndex* to);
    friend void KTextEditor__CodeCompletionModel_ChangePersistentIndexList(KTextEditor::CodeCompletionModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
    friend void KTextEditor__CodeCompletionModel_QBaseChangePersistentIndexList(KTextEditor::CodeCompletionModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
    friend libqt_list /* of QModelIndex* */ KTextEditor__CodeCompletionModel_PersistentIndexList(const KTextEditor::CodeCompletionModel* self);
    friend libqt_list /* of QModelIndex* */ KTextEditor__CodeCompletionModel_QBasePersistentIndexList(const KTextEditor::CodeCompletionModel* self);
    friend QObject* KTextEditor__CodeCompletionModel_Sender(const KTextEditor::CodeCompletionModel* self);
    friend QObject* KTextEditor__CodeCompletionModel_QBaseSender(const KTextEditor::CodeCompletionModel* self);
    friend int KTextEditor__CodeCompletionModel_SenderSignalIndex(const KTextEditor::CodeCompletionModel* self);
    friend int KTextEditor__CodeCompletionModel_QBaseSenderSignalIndex(const KTextEditor::CodeCompletionModel* self);
    friend int KTextEditor__CodeCompletionModel_Receivers(const KTextEditor::CodeCompletionModel* self, const char* signal);
    friend int KTextEditor__CodeCompletionModel_QBaseReceivers(const KTextEditor::CodeCompletionModel* self, const char* signal);
    friend bool KTextEditor__CodeCompletionModel_IsSignalConnected(const KTextEditor::CodeCompletionModel* self, const QMetaMethod* signal);
    friend bool KTextEditor__CodeCompletionModel_QBaseIsSignalConnected(const KTextEditor::CodeCompletionModel* self, const QMetaMethod* signal);
};

#endif
