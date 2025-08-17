#pragma once
#ifndef SRCC_LIBVIRTUALQCONCATENATETABLESPROXYMODEL_H
#define SRCC_LIBVIRTUALQCONCATENATETABLESPROXYMODEL_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QConcatenateTablesProxyModel so that we can call protected methods
class VirtualQConcatenateTablesProxyModel final : public QConcatenateTablesProxyModel {

  public:
    // Virtual class boolean flag
    bool isVirtualQConcatenateTablesProxyModel = true;

    // Virtual class public types (including callbacks)
    using QConcatenateTablesProxyModel_Metacall_Callback = int (*)(QConcatenateTablesProxyModel*, int, int, void**);
    using QConcatenateTablesProxyModel_Data_Callback = QVariant* (*)(const QConcatenateTablesProxyModel*, QModelIndex*, int);
    using QConcatenateTablesProxyModel_SetData_Callback = bool (*)(QConcatenateTablesProxyModel*, QModelIndex*, QVariant*, int);
    using QConcatenateTablesProxyModel_ItemData_Callback = libqt_map /* of int to QVariant* */ (*)(const QConcatenateTablesProxyModel*, QModelIndex*);
    using QConcatenateTablesProxyModel_SetItemData_Callback = bool (*)(QConcatenateTablesProxyModel*, QModelIndex*, libqt_map /* of int to QVariant* */);
    using QConcatenateTablesProxyModel_Flags_Callback = int (*)(const QConcatenateTablesProxyModel*, QModelIndex*);
    using QConcatenateTablesProxyModel_Index_Callback = QModelIndex* (*)(const QConcatenateTablesProxyModel*, int, int, QModelIndex*);
    using QConcatenateTablesProxyModel_Parent_Callback = QModelIndex* (*)(const QConcatenateTablesProxyModel*, QModelIndex*);
    using QConcatenateTablesProxyModel_RowCount_Callback = int (*)(const QConcatenateTablesProxyModel*, QModelIndex*);
    using QConcatenateTablesProxyModel_HeaderData_Callback = QVariant* (*)(const QConcatenateTablesProxyModel*, int, int, int);
    using QConcatenateTablesProxyModel_ColumnCount_Callback = int (*)(const QConcatenateTablesProxyModel*, QModelIndex*);
    using QConcatenateTablesProxyModel_MimeTypes_Callback = libqt_list /* of libqt_string */ (*)();
    using QConcatenateTablesProxyModel_MimeData_Callback = QMimeData* (*)(const QConcatenateTablesProxyModel*, libqt_list /* of QModelIndex* */);
    using QConcatenateTablesProxyModel_CanDropMimeData_Callback = bool (*)(const QConcatenateTablesProxyModel*, QMimeData*, int, int, int, QModelIndex*);
    using QConcatenateTablesProxyModel_DropMimeData_Callback = bool (*)(QConcatenateTablesProxyModel*, QMimeData*, int, int, int, QModelIndex*);
    using QConcatenateTablesProxyModel_Span_Callback = QSize* (*)(const QConcatenateTablesProxyModel*, QModelIndex*);
    using QConcatenateTablesProxyModel_Sibling_Callback = QModelIndex* (*)(const QConcatenateTablesProxyModel*, int, int, QModelIndex*);
    using QConcatenateTablesProxyModel_HasChildren_Callback = bool (*)(const QConcatenateTablesProxyModel*, QModelIndex*);
    using QConcatenateTablesProxyModel_SetHeaderData_Callback = bool (*)(QConcatenateTablesProxyModel*, int, int, QVariant*, int);
    using QConcatenateTablesProxyModel_ClearItemData_Callback = bool (*)(QConcatenateTablesProxyModel*, QModelIndex*);
    using QConcatenateTablesProxyModel_SupportedDropActions_Callback = int (*)();
    using QConcatenateTablesProxyModel_SupportedDragActions_Callback = int (*)();
    using QConcatenateTablesProxyModel_InsertRows_Callback = bool (*)(QConcatenateTablesProxyModel*, int, int, QModelIndex*);
    using QConcatenateTablesProxyModel_InsertColumns_Callback = bool (*)(QConcatenateTablesProxyModel*, int, int, QModelIndex*);
    using QConcatenateTablesProxyModel_RemoveRows_Callback = bool (*)(QConcatenateTablesProxyModel*, int, int, QModelIndex*);
    using QConcatenateTablesProxyModel_RemoveColumns_Callback = bool (*)(QConcatenateTablesProxyModel*, int, int, QModelIndex*);
    using QConcatenateTablesProxyModel_MoveRows_Callback = bool (*)(QConcatenateTablesProxyModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QConcatenateTablesProxyModel_MoveColumns_Callback = bool (*)(QConcatenateTablesProxyModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QConcatenateTablesProxyModel_FetchMore_Callback = void (*)(QConcatenateTablesProxyModel*, QModelIndex*);
    using QConcatenateTablesProxyModel_CanFetchMore_Callback = bool (*)(const QConcatenateTablesProxyModel*, QModelIndex*);
    using QConcatenateTablesProxyModel_Sort_Callback = void (*)(QConcatenateTablesProxyModel*, int, int);
    using QConcatenateTablesProxyModel_Buddy_Callback = QModelIndex* (*)(const QConcatenateTablesProxyModel*, QModelIndex*);
    using QConcatenateTablesProxyModel_Match_Callback = libqt_list /* of QModelIndex* */ (*)(const QConcatenateTablesProxyModel*, QModelIndex*, int, QVariant*, int, int);
    using QConcatenateTablesProxyModel_RoleNames_Callback = libqt_map /* of int to libqt_string */ (*)();
    using QConcatenateTablesProxyModel_MultiData_Callback = void (*)(const QConcatenateTablesProxyModel*, QModelIndex*, QModelRoleDataSpan*);
    using QConcatenateTablesProxyModel_Submit_Callback = bool (*)();
    using QConcatenateTablesProxyModel_Revert_Callback = void (*)();
    using QConcatenateTablesProxyModel_ResetInternalData_Callback = void (*)();
    using QConcatenateTablesProxyModel_Event_Callback = bool (*)(QConcatenateTablesProxyModel*, QEvent*);
    using QConcatenateTablesProxyModel_EventFilter_Callback = bool (*)(QConcatenateTablesProxyModel*, QObject*, QEvent*);
    using QConcatenateTablesProxyModel_TimerEvent_Callback = void (*)(QConcatenateTablesProxyModel*, QTimerEvent*);
    using QConcatenateTablesProxyModel_ChildEvent_Callback = void (*)(QConcatenateTablesProxyModel*, QChildEvent*);
    using QConcatenateTablesProxyModel_CustomEvent_Callback = void (*)(QConcatenateTablesProxyModel*, QEvent*);
    using QConcatenateTablesProxyModel_ConnectNotify_Callback = void (*)(QConcatenateTablesProxyModel*, QMetaMethod*);
    using QConcatenateTablesProxyModel_DisconnectNotify_Callback = void (*)(QConcatenateTablesProxyModel*, QMetaMethod*);
    using QConcatenateTablesProxyModel_CreateIndex_Callback = QModelIndex* (*)(const QConcatenateTablesProxyModel*, int, int);
    using QConcatenateTablesProxyModel_EncodeData_Callback = void (*)(const QConcatenateTablesProxyModel*, libqt_list /* of QModelIndex* */, QDataStream*);
    using QConcatenateTablesProxyModel_DecodeData_Callback = bool (*)(QConcatenateTablesProxyModel*, int, int, QModelIndex*, QDataStream*);
    using QConcatenateTablesProxyModel_BeginInsertRows_Callback = void (*)(QConcatenateTablesProxyModel*, QModelIndex*, int, int);
    using QConcatenateTablesProxyModel_EndInsertRows_Callback = void (*)();
    using QConcatenateTablesProxyModel_BeginRemoveRows_Callback = void (*)(QConcatenateTablesProxyModel*, QModelIndex*, int, int);
    using QConcatenateTablesProxyModel_EndRemoveRows_Callback = void (*)();
    using QConcatenateTablesProxyModel_BeginMoveRows_Callback = bool (*)(QConcatenateTablesProxyModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QConcatenateTablesProxyModel_EndMoveRows_Callback = void (*)();
    using QConcatenateTablesProxyModel_BeginInsertColumns_Callback = void (*)(QConcatenateTablesProxyModel*, QModelIndex*, int, int);
    using QConcatenateTablesProxyModel_EndInsertColumns_Callback = void (*)();
    using QConcatenateTablesProxyModel_BeginRemoveColumns_Callback = void (*)(QConcatenateTablesProxyModel*, QModelIndex*, int, int);
    using QConcatenateTablesProxyModel_EndRemoveColumns_Callback = void (*)();
    using QConcatenateTablesProxyModel_BeginMoveColumns_Callback = bool (*)(QConcatenateTablesProxyModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QConcatenateTablesProxyModel_EndMoveColumns_Callback = void (*)();
    using QConcatenateTablesProxyModel_BeginResetModel_Callback = void (*)();
    using QConcatenateTablesProxyModel_EndResetModel_Callback = void (*)();
    using QConcatenateTablesProxyModel_ChangePersistentIndex_Callback = void (*)(QConcatenateTablesProxyModel*, QModelIndex*, QModelIndex*);
    using QConcatenateTablesProxyModel_ChangePersistentIndexList_Callback = void (*)(QConcatenateTablesProxyModel*, libqt_list /* of QModelIndex* */, libqt_list /* of QModelIndex* */);
    using QConcatenateTablesProxyModel_PersistentIndexList_Callback = libqt_list /* of QModelIndex* */ (*)();
    using QConcatenateTablesProxyModel_Sender_Callback = QObject* (*)();
    using QConcatenateTablesProxyModel_SenderSignalIndex_Callback = int (*)();
    using QConcatenateTablesProxyModel_Receivers_Callback = int (*)(const QConcatenateTablesProxyModel*, const char*);
    using QConcatenateTablesProxyModel_IsSignalConnected_Callback = bool (*)(const QConcatenateTablesProxyModel*, QMetaMethod*);

  protected:
    // Instance callback storage
    QConcatenateTablesProxyModel_Metacall_Callback qconcatenatetablesproxymodel_metacall_callback = nullptr;
    QConcatenateTablesProxyModel_Data_Callback qconcatenatetablesproxymodel_data_callback = nullptr;
    QConcatenateTablesProxyModel_SetData_Callback qconcatenatetablesproxymodel_setdata_callback = nullptr;
    QConcatenateTablesProxyModel_ItemData_Callback qconcatenatetablesproxymodel_itemdata_callback = nullptr;
    QConcatenateTablesProxyModel_SetItemData_Callback qconcatenatetablesproxymodel_setitemdata_callback = nullptr;
    QConcatenateTablesProxyModel_Flags_Callback qconcatenatetablesproxymodel_flags_callback = nullptr;
    QConcatenateTablesProxyModel_Index_Callback qconcatenatetablesproxymodel_index_callback = nullptr;
    QConcatenateTablesProxyModel_Parent_Callback qconcatenatetablesproxymodel_parent_callback = nullptr;
    QConcatenateTablesProxyModel_RowCount_Callback qconcatenatetablesproxymodel_rowcount_callback = nullptr;
    QConcatenateTablesProxyModel_HeaderData_Callback qconcatenatetablesproxymodel_headerdata_callback = nullptr;
    QConcatenateTablesProxyModel_ColumnCount_Callback qconcatenatetablesproxymodel_columncount_callback = nullptr;
    QConcatenateTablesProxyModel_MimeTypes_Callback qconcatenatetablesproxymodel_mimetypes_callback = nullptr;
    QConcatenateTablesProxyModel_MimeData_Callback qconcatenatetablesproxymodel_mimedata_callback = nullptr;
    QConcatenateTablesProxyModel_CanDropMimeData_Callback qconcatenatetablesproxymodel_candropmimedata_callback = nullptr;
    QConcatenateTablesProxyModel_DropMimeData_Callback qconcatenatetablesproxymodel_dropmimedata_callback = nullptr;
    QConcatenateTablesProxyModel_Span_Callback qconcatenatetablesproxymodel_span_callback = nullptr;
    QConcatenateTablesProxyModel_Sibling_Callback qconcatenatetablesproxymodel_sibling_callback = nullptr;
    QConcatenateTablesProxyModel_HasChildren_Callback qconcatenatetablesproxymodel_haschildren_callback = nullptr;
    QConcatenateTablesProxyModel_SetHeaderData_Callback qconcatenatetablesproxymodel_setheaderdata_callback = nullptr;
    QConcatenateTablesProxyModel_ClearItemData_Callback qconcatenatetablesproxymodel_clearitemdata_callback = nullptr;
    QConcatenateTablesProxyModel_SupportedDropActions_Callback qconcatenatetablesproxymodel_supporteddropactions_callback = nullptr;
    QConcatenateTablesProxyModel_SupportedDragActions_Callback qconcatenatetablesproxymodel_supporteddragactions_callback = nullptr;
    QConcatenateTablesProxyModel_InsertRows_Callback qconcatenatetablesproxymodel_insertrows_callback = nullptr;
    QConcatenateTablesProxyModel_InsertColumns_Callback qconcatenatetablesproxymodel_insertcolumns_callback = nullptr;
    QConcatenateTablesProxyModel_RemoveRows_Callback qconcatenatetablesproxymodel_removerows_callback = nullptr;
    QConcatenateTablesProxyModel_RemoveColumns_Callback qconcatenatetablesproxymodel_removecolumns_callback = nullptr;
    QConcatenateTablesProxyModel_MoveRows_Callback qconcatenatetablesproxymodel_moverows_callback = nullptr;
    QConcatenateTablesProxyModel_MoveColumns_Callback qconcatenatetablesproxymodel_movecolumns_callback = nullptr;
    QConcatenateTablesProxyModel_FetchMore_Callback qconcatenatetablesproxymodel_fetchmore_callback = nullptr;
    QConcatenateTablesProxyModel_CanFetchMore_Callback qconcatenatetablesproxymodel_canfetchmore_callback = nullptr;
    QConcatenateTablesProxyModel_Sort_Callback qconcatenatetablesproxymodel_sort_callback = nullptr;
    QConcatenateTablesProxyModel_Buddy_Callback qconcatenatetablesproxymodel_buddy_callback = nullptr;
    QConcatenateTablesProxyModel_Match_Callback qconcatenatetablesproxymodel_match_callback = nullptr;
    QConcatenateTablesProxyModel_RoleNames_Callback qconcatenatetablesproxymodel_rolenames_callback = nullptr;
    QConcatenateTablesProxyModel_MultiData_Callback qconcatenatetablesproxymodel_multidata_callback = nullptr;
    QConcatenateTablesProxyModel_Submit_Callback qconcatenatetablesproxymodel_submit_callback = nullptr;
    QConcatenateTablesProxyModel_Revert_Callback qconcatenatetablesproxymodel_revert_callback = nullptr;
    QConcatenateTablesProxyModel_ResetInternalData_Callback qconcatenatetablesproxymodel_resetinternaldata_callback = nullptr;
    QConcatenateTablesProxyModel_Event_Callback qconcatenatetablesproxymodel_event_callback = nullptr;
    QConcatenateTablesProxyModel_EventFilter_Callback qconcatenatetablesproxymodel_eventfilter_callback = nullptr;
    QConcatenateTablesProxyModel_TimerEvent_Callback qconcatenatetablesproxymodel_timerevent_callback = nullptr;
    QConcatenateTablesProxyModel_ChildEvent_Callback qconcatenatetablesproxymodel_childevent_callback = nullptr;
    QConcatenateTablesProxyModel_CustomEvent_Callback qconcatenatetablesproxymodel_customevent_callback = nullptr;
    QConcatenateTablesProxyModel_ConnectNotify_Callback qconcatenatetablesproxymodel_connectnotify_callback = nullptr;
    QConcatenateTablesProxyModel_DisconnectNotify_Callback qconcatenatetablesproxymodel_disconnectnotify_callback = nullptr;
    QConcatenateTablesProxyModel_CreateIndex_Callback qconcatenatetablesproxymodel_createindex_callback = nullptr;
    QConcatenateTablesProxyModel_EncodeData_Callback qconcatenatetablesproxymodel_encodedata_callback = nullptr;
    QConcatenateTablesProxyModel_DecodeData_Callback qconcatenatetablesproxymodel_decodedata_callback = nullptr;
    QConcatenateTablesProxyModel_BeginInsertRows_Callback qconcatenatetablesproxymodel_begininsertrows_callback = nullptr;
    QConcatenateTablesProxyModel_EndInsertRows_Callback qconcatenatetablesproxymodel_endinsertrows_callback = nullptr;
    QConcatenateTablesProxyModel_BeginRemoveRows_Callback qconcatenatetablesproxymodel_beginremoverows_callback = nullptr;
    QConcatenateTablesProxyModel_EndRemoveRows_Callback qconcatenatetablesproxymodel_endremoverows_callback = nullptr;
    QConcatenateTablesProxyModel_BeginMoveRows_Callback qconcatenatetablesproxymodel_beginmoverows_callback = nullptr;
    QConcatenateTablesProxyModel_EndMoveRows_Callback qconcatenatetablesproxymodel_endmoverows_callback = nullptr;
    QConcatenateTablesProxyModel_BeginInsertColumns_Callback qconcatenatetablesproxymodel_begininsertcolumns_callback = nullptr;
    QConcatenateTablesProxyModel_EndInsertColumns_Callback qconcatenatetablesproxymodel_endinsertcolumns_callback = nullptr;
    QConcatenateTablesProxyModel_BeginRemoveColumns_Callback qconcatenatetablesproxymodel_beginremovecolumns_callback = nullptr;
    QConcatenateTablesProxyModel_EndRemoveColumns_Callback qconcatenatetablesproxymodel_endremovecolumns_callback = nullptr;
    QConcatenateTablesProxyModel_BeginMoveColumns_Callback qconcatenatetablesproxymodel_beginmovecolumns_callback = nullptr;
    QConcatenateTablesProxyModel_EndMoveColumns_Callback qconcatenatetablesproxymodel_endmovecolumns_callback = nullptr;
    QConcatenateTablesProxyModel_BeginResetModel_Callback qconcatenatetablesproxymodel_beginresetmodel_callback = nullptr;
    QConcatenateTablesProxyModel_EndResetModel_Callback qconcatenatetablesproxymodel_endresetmodel_callback = nullptr;
    QConcatenateTablesProxyModel_ChangePersistentIndex_Callback qconcatenatetablesproxymodel_changepersistentindex_callback = nullptr;
    QConcatenateTablesProxyModel_ChangePersistentIndexList_Callback qconcatenatetablesproxymodel_changepersistentindexlist_callback = nullptr;
    QConcatenateTablesProxyModel_PersistentIndexList_Callback qconcatenatetablesproxymodel_persistentindexlist_callback = nullptr;
    QConcatenateTablesProxyModel_Sender_Callback qconcatenatetablesproxymodel_sender_callback = nullptr;
    QConcatenateTablesProxyModel_SenderSignalIndex_Callback qconcatenatetablesproxymodel_sendersignalindex_callback = nullptr;
    QConcatenateTablesProxyModel_Receivers_Callback qconcatenatetablesproxymodel_receivers_callback = nullptr;
    QConcatenateTablesProxyModel_IsSignalConnected_Callback qconcatenatetablesproxymodel_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qconcatenatetablesproxymodel_metacall_isbase = false;
    mutable bool qconcatenatetablesproxymodel_data_isbase = false;
    mutable bool qconcatenatetablesproxymodel_setdata_isbase = false;
    mutable bool qconcatenatetablesproxymodel_itemdata_isbase = false;
    mutable bool qconcatenatetablesproxymodel_setitemdata_isbase = false;
    mutable bool qconcatenatetablesproxymodel_flags_isbase = false;
    mutable bool qconcatenatetablesproxymodel_index_isbase = false;
    mutable bool qconcatenatetablesproxymodel_parent_isbase = false;
    mutable bool qconcatenatetablesproxymodel_rowcount_isbase = false;
    mutable bool qconcatenatetablesproxymodel_headerdata_isbase = false;
    mutable bool qconcatenatetablesproxymodel_columncount_isbase = false;
    mutable bool qconcatenatetablesproxymodel_mimetypes_isbase = false;
    mutable bool qconcatenatetablesproxymodel_mimedata_isbase = false;
    mutable bool qconcatenatetablesproxymodel_candropmimedata_isbase = false;
    mutable bool qconcatenatetablesproxymodel_dropmimedata_isbase = false;
    mutable bool qconcatenatetablesproxymodel_span_isbase = false;
    mutable bool qconcatenatetablesproxymodel_sibling_isbase = false;
    mutable bool qconcatenatetablesproxymodel_haschildren_isbase = false;
    mutable bool qconcatenatetablesproxymodel_setheaderdata_isbase = false;
    mutable bool qconcatenatetablesproxymodel_clearitemdata_isbase = false;
    mutable bool qconcatenatetablesproxymodel_supporteddropactions_isbase = false;
    mutable bool qconcatenatetablesproxymodel_supporteddragactions_isbase = false;
    mutable bool qconcatenatetablesproxymodel_insertrows_isbase = false;
    mutable bool qconcatenatetablesproxymodel_insertcolumns_isbase = false;
    mutable bool qconcatenatetablesproxymodel_removerows_isbase = false;
    mutable bool qconcatenatetablesproxymodel_removecolumns_isbase = false;
    mutable bool qconcatenatetablesproxymodel_moverows_isbase = false;
    mutable bool qconcatenatetablesproxymodel_movecolumns_isbase = false;
    mutable bool qconcatenatetablesproxymodel_fetchmore_isbase = false;
    mutable bool qconcatenatetablesproxymodel_canfetchmore_isbase = false;
    mutable bool qconcatenatetablesproxymodel_sort_isbase = false;
    mutable bool qconcatenatetablesproxymodel_buddy_isbase = false;
    mutable bool qconcatenatetablesproxymodel_match_isbase = false;
    mutable bool qconcatenatetablesproxymodel_rolenames_isbase = false;
    mutable bool qconcatenatetablesproxymodel_multidata_isbase = false;
    mutable bool qconcatenatetablesproxymodel_submit_isbase = false;
    mutable bool qconcatenatetablesproxymodel_revert_isbase = false;
    mutable bool qconcatenatetablesproxymodel_resetinternaldata_isbase = false;
    mutable bool qconcatenatetablesproxymodel_event_isbase = false;
    mutable bool qconcatenatetablesproxymodel_eventfilter_isbase = false;
    mutable bool qconcatenatetablesproxymodel_timerevent_isbase = false;
    mutable bool qconcatenatetablesproxymodel_childevent_isbase = false;
    mutable bool qconcatenatetablesproxymodel_customevent_isbase = false;
    mutable bool qconcatenatetablesproxymodel_connectnotify_isbase = false;
    mutable bool qconcatenatetablesproxymodel_disconnectnotify_isbase = false;
    mutable bool qconcatenatetablesproxymodel_createindex_isbase = false;
    mutable bool qconcatenatetablesproxymodel_encodedata_isbase = false;
    mutable bool qconcatenatetablesproxymodel_decodedata_isbase = false;
    mutable bool qconcatenatetablesproxymodel_begininsertrows_isbase = false;
    mutable bool qconcatenatetablesproxymodel_endinsertrows_isbase = false;
    mutable bool qconcatenatetablesproxymodel_beginremoverows_isbase = false;
    mutable bool qconcatenatetablesproxymodel_endremoverows_isbase = false;
    mutable bool qconcatenatetablesproxymodel_beginmoverows_isbase = false;
    mutable bool qconcatenatetablesproxymodel_endmoverows_isbase = false;
    mutable bool qconcatenatetablesproxymodel_begininsertcolumns_isbase = false;
    mutable bool qconcatenatetablesproxymodel_endinsertcolumns_isbase = false;
    mutable bool qconcatenatetablesproxymodel_beginremovecolumns_isbase = false;
    mutable bool qconcatenatetablesproxymodel_endremovecolumns_isbase = false;
    mutable bool qconcatenatetablesproxymodel_beginmovecolumns_isbase = false;
    mutable bool qconcatenatetablesproxymodel_endmovecolumns_isbase = false;
    mutable bool qconcatenatetablesproxymodel_beginresetmodel_isbase = false;
    mutable bool qconcatenatetablesproxymodel_endresetmodel_isbase = false;
    mutable bool qconcatenatetablesproxymodel_changepersistentindex_isbase = false;
    mutable bool qconcatenatetablesproxymodel_changepersistentindexlist_isbase = false;
    mutable bool qconcatenatetablesproxymodel_persistentindexlist_isbase = false;
    mutable bool qconcatenatetablesproxymodel_sender_isbase = false;
    mutable bool qconcatenatetablesproxymodel_sendersignalindex_isbase = false;
    mutable bool qconcatenatetablesproxymodel_receivers_isbase = false;
    mutable bool qconcatenatetablesproxymodel_issignalconnected_isbase = false;

  public:
    VirtualQConcatenateTablesProxyModel() : QConcatenateTablesProxyModel() {};
    VirtualQConcatenateTablesProxyModel(QObject* parent) : QConcatenateTablesProxyModel(parent) {};

    ~VirtualQConcatenateTablesProxyModel() {
        qconcatenatetablesproxymodel_metacall_callback = nullptr;
        qconcatenatetablesproxymodel_data_callback = nullptr;
        qconcatenatetablesproxymodel_setdata_callback = nullptr;
        qconcatenatetablesproxymodel_itemdata_callback = nullptr;
        qconcatenatetablesproxymodel_setitemdata_callback = nullptr;
        qconcatenatetablesproxymodel_flags_callback = nullptr;
        qconcatenatetablesproxymodel_index_callback = nullptr;
        qconcatenatetablesproxymodel_parent_callback = nullptr;
        qconcatenatetablesproxymodel_rowcount_callback = nullptr;
        qconcatenatetablesproxymodel_headerdata_callback = nullptr;
        qconcatenatetablesproxymodel_columncount_callback = nullptr;
        qconcatenatetablesproxymodel_mimetypes_callback = nullptr;
        qconcatenatetablesproxymodel_mimedata_callback = nullptr;
        qconcatenatetablesproxymodel_candropmimedata_callback = nullptr;
        qconcatenatetablesproxymodel_dropmimedata_callback = nullptr;
        qconcatenatetablesproxymodel_span_callback = nullptr;
        qconcatenatetablesproxymodel_sibling_callback = nullptr;
        qconcatenatetablesproxymodel_haschildren_callback = nullptr;
        qconcatenatetablesproxymodel_setheaderdata_callback = nullptr;
        qconcatenatetablesproxymodel_clearitemdata_callback = nullptr;
        qconcatenatetablesproxymodel_supporteddropactions_callback = nullptr;
        qconcatenatetablesproxymodel_supporteddragactions_callback = nullptr;
        qconcatenatetablesproxymodel_insertrows_callback = nullptr;
        qconcatenatetablesproxymodel_insertcolumns_callback = nullptr;
        qconcatenatetablesproxymodel_removerows_callback = nullptr;
        qconcatenatetablesproxymodel_removecolumns_callback = nullptr;
        qconcatenatetablesproxymodel_moverows_callback = nullptr;
        qconcatenatetablesproxymodel_movecolumns_callback = nullptr;
        qconcatenatetablesproxymodel_fetchmore_callback = nullptr;
        qconcatenatetablesproxymodel_canfetchmore_callback = nullptr;
        qconcatenatetablesproxymodel_sort_callback = nullptr;
        qconcatenatetablesproxymodel_buddy_callback = nullptr;
        qconcatenatetablesproxymodel_match_callback = nullptr;
        qconcatenatetablesproxymodel_rolenames_callback = nullptr;
        qconcatenatetablesproxymodel_multidata_callback = nullptr;
        qconcatenatetablesproxymodel_submit_callback = nullptr;
        qconcatenatetablesproxymodel_revert_callback = nullptr;
        qconcatenatetablesproxymodel_resetinternaldata_callback = nullptr;
        qconcatenatetablesproxymodel_event_callback = nullptr;
        qconcatenatetablesproxymodel_eventfilter_callback = nullptr;
        qconcatenatetablesproxymodel_timerevent_callback = nullptr;
        qconcatenatetablesproxymodel_childevent_callback = nullptr;
        qconcatenatetablesproxymodel_customevent_callback = nullptr;
        qconcatenatetablesproxymodel_connectnotify_callback = nullptr;
        qconcatenatetablesproxymodel_disconnectnotify_callback = nullptr;
        qconcatenatetablesproxymodel_createindex_callback = nullptr;
        qconcatenatetablesproxymodel_encodedata_callback = nullptr;
        qconcatenatetablesproxymodel_decodedata_callback = nullptr;
        qconcatenatetablesproxymodel_begininsertrows_callback = nullptr;
        qconcatenatetablesproxymodel_endinsertrows_callback = nullptr;
        qconcatenatetablesproxymodel_beginremoverows_callback = nullptr;
        qconcatenatetablesproxymodel_endremoverows_callback = nullptr;
        qconcatenatetablesproxymodel_beginmoverows_callback = nullptr;
        qconcatenatetablesproxymodel_endmoverows_callback = nullptr;
        qconcatenatetablesproxymodel_begininsertcolumns_callback = nullptr;
        qconcatenatetablesproxymodel_endinsertcolumns_callback = nullptr;
        qconcatenatetablesproxymodel_beginremovecolumns_callback = nullptr;
        qconcatenatetablesproxymodel_endremovecolumns_callback = nullptr;
        qconcatenatetablesproxymodel_beginmovecolumns_callback = nullptr;
        qconcatenatetablesproxymodel_endmovecolumns_callback = nullptr;
        qconcatenatetablesproxymodel_beginresetmodel_callback = nullptr;
        qconcatenatetablesproxymodel_endresetmodel_callback = nullptr;
        qconcatenatetablesproxymodel_changepersistentindex_callback = nullptr;
        qconcatenatetablesproxymodel_changepersistentindexlist_callback = nullptr;
        qconcatenatetablesproxymodel_persistentindexlist_callback = nullptr;
        qconcatenatetablesproxymodel_sender_callback = nullptr;
        qconcatenatetablesproxymodel_sendersignalindex_callback = nullptr;
        qconcatenatetablesproxymodel_receivers_callback = nullptr;
        qconcatenatetablesproxymodel_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQConcatenateTablesProxyModel_Metacall_Callback(QConcatenateTablesProxyModel_Metacall_Callback cb) { qconcatenatetablesproxymodel_metacall_callback = cb; }
    inline void setQConcatenateTablesProxyModel_Data_Callback(QConcatenateTablesProxyModel_Data_Callback cb) { qconcatenatetablesproxymodel_data_callback = cb; }
    inline void setQConcatenateTablesProxyModel_SetData_Callback(QConcatenateTablesProxyModel_SetData_Callback cb) { qconcatenatetablesproxymodel_setdata_callback = cb; }
    inline void setQConcatenateTablesProxyModel_ItemData_Callback(QConcatenateTablesProxyModel_ItemData_Callback cb) { qconcatenatetablesproxymodel_itemdata_callback = cb; }
    inline void setQConcatenateTablesProxyModel_SetItemData_Callback(QConcatenateTablesProxyModel_SetItemData_Callback cb) { qconcatenatetablesproxymodel_setitemdata_callback = cb; }
    inline void setQConcatenateTablesProxyModel_Flags_Callback(QConcatenateTablesProxyModel_Flags_Callback cb) { qconcatenatetablesproxymodel_flags_callback = cb; }
    inline void setQConcatenateTablesProxyModel_Index_Callback(QConcatenateTablesProxyModel_Index_Callback cb) { qconcatenatetablesproxymodel_index_callback = cb; }
    inline void setQConcatenateTablesProxyModel_Parent_Callback(QConcatenateTablesProxyModel_Parent_Callback cb) { qconcatenatetablesproxymodel_parent_callback = cb; }
    inline void setQConcatenateTablesProxyModel_RowCount_Callback(QConcatenateTablesProxyModel_RowCount_Callback cb) { qconcatenatetablesproxymodel_rowcount_callback = cb; }
    inline void setQConcatenateTablesProxyModel_HeaderData_Callback(QConcatenateTablesProxyModel_HeaderData_Callback cb) { qconcatenatetablesproxymodel_headerdata_callback = cb; }
    inline void setQConcatenateTablesProxyModel_ColumnCount_Callback(QConcatenateTablesProxyModel_ColumnCount_Callback cb) { qconcatenatetablesproxymodel_columncount_callback = cb; }
    inline void setQConcatenateTablesProxyModel_MimeTypes_Callback(QConcatenateTablesProxyModel_MimeTypes_Callback cb) { qconcatenatetablesproxymodel_mimetypes_callback = cb; }
    inline void setQConcatenateTablesProxyModel_MimeData_Callback(QConcatenateTablesProxyModel_MimeData_Callback cb) { qconcatenatetablesproxymodel_mimedata_callback = cb; }
    inline void setQConcatenateTablesProxyModel_CanDropMimeData_Callback(QConcatenateTablesProxyModel_CanDropMimeData_Callback cb) { qconcatenatetablesproxymodel_candropmimedata_callback = cb; }
    inline void setQConcatenateTablesProxyModel_DropMimeData_Callback(QConcatenateTablesProxyModel_DropMimeData_Callback cb) { qconcatenatetablesproxymodel_dropmimedata_callback = cb; }
    inline void setQConcatenateTablesProxyModel_Span_Callback(QConcatenateTablesProxyModel_Span_Callback cb) { qconcatenatetablesproxymodel_span_callback = cb; }
    inline void setQConcatenateTablesProxyModel_Sibling_Callback(QConcatenateTablesProxyModel_Sibling_Callback cb) { qconcatenatetablesproxymodel_sibling_callback = cb; }
    inline void setQConcatenateTablesProxyModel_HasChildren_Callback(QConcatenateTablesProxyModel_HasChildren_Callback cb) { qconcatenatetablesproxymodel_haschildren_callback = cb; }
    inline void setQConcatenateTablesProxyModel_SetHeaderData_Callback(QConcatenateTablesProxyModel_SetHeaderData_Callback cb) { qconcatenatetablesproxymodel_setheaderdata_callback = cb; }
    inline void setQConcatenateTablesProxyModel_ClearItemData_Callback(QConcatenateTablesProxyModel_ClearItemData_Callback cb) { qconcatenatetablesproxymodel_clearitemdata_callback = cb; }
    inline void setQConcatenateTablesProxyModel_SupportedDropActions_Callback(QConcatenateTablesProxyModel_SupportedDropActions_Callback cb) { qconcatenatetablesproxymodel_supporteddropactions_callback = cb; }
    inline void setQConcatenateTablesProxyModel_SupportedDragActions_Callback(QConcatenateTablesProxyModel_SupportedDragActions_Callback cb) { qconcatenatetablesproxymodel_supporteddragactions_callback = cb; }
    inline void setQConcatenateTablesProxyModel_InsertRows_Callback(QConcatenateTablesProxyModel_InsertRows_Callback cb) { qconcatenatetablesproxymodel_insertrows_callback = cb; }
    inline void setQConcatenateTablesProxyModel_InsertColumns_Callback(QConcatenateTablesProxyModel_InsertColumns_Callback cb) { qconcatenatetablesproxymodel_insertcolumns_callback = cb; }
    inline void setQConcatenateTablesProxyModel_RemoveRows_Callback(QConcatenateTablesProxyModel_RemoveRows_Callback cb) { qconcatenatetablesproxymodel_removerows_callback = cb; }
    inline void setQConcatenateTablesProxyModel_RemoveColumns_Callback(QConcatenateTablesProxyModel_RemoveColumns_Callback cb) { qconcatenatetablesproxymodel_removecolumns_callback = cb; }
    inline void setQConcatenateTablesProxyModel_MoveRows_Callback(QConcatenateTablesProxyModel_MoveRows_Callback cb) { qconcatenatetablesproxymodel_moverows_callback = cb; }
    inline void setQConcatenateTablesProxyModel_MoveColumns_Callback(QConcatenateTablesProxyModel_MoveColumns_Callback cb) { qconcatenatetablesproxymodel_movecolumns_callback = cb; }
    inline void setQConcatenateTablesProxyModel_FetchMore_Callback(QConcatenateTablesProxyModel_FetchMore_Callback cb) { qconcatenatetablesproxymodel_fetchmore_callback = cb; }
    inline void setQConcatenateTablesProxyModel_CanFetchMore_Callback(QConcatenateTablesProxyModel_CanFetchMore_Callback cb) { qconcatenatetablesproxymodel_canfetchmore_callback = cb; }
    inline void setQConcatenateTablesProxyModel_Sort_Callback(QConcatenateTablesProxyModel_Sort_Callback cb) { qconcatenatetablesproxymodel_sort_callback = cb; }
    inline void setQConcatenateTablesProxyModel_Buddy_Callback(QConcatenateTablesProxyModel_Buddy_Callback cb) { qconcatenatetablesproxymodel_buddy_callback = cb; }
    inline void setQConcatenateTablesProxyModel_Match_Callback(QConcatenateTablesProxyModel_Match_Callback cb) { qconcatenatetablesproxymodel_match_callback = cb; }
    inline void setQConcatenateTablesProxyModel_RoleNames_Callback(QConcatenateTablesProxyModel_RoleNames_Callback cb) { qconcatenatetablesproxymodel_rolenames_callback = cb; }
    inline void setQConcatenateTablesProxyModel_MultiData_Callback(QConcatenateTablesProxyModel_MultiData_Callback cb) { qconcatenatetablesproxymodel_multidata_callback = cb; }
    inline void setQConcatenateTablesProxyModel_Submit_Callback(QConcatenateTablesProxyModel_Submit_Callback cb) { qconcatenatetablesproxymodel_submit_callback = cb; }
    inline void setQConcatenateTablesProxyModel_Revert_Callback(QConcatenateTablesProxyModel_Revert_Callback cb) { qconcatenatetablesproxymodel_revert_callback = cb; }
    inline void setQConcatenateTablesProxyModel_ResetInternalData_Callback(QConcatenateTablesProxyModel_ResetInternalData_Callback cb) { qconcatenatetablesproxymodel_resetinternaldata_callback = cb; }
    inline void setQConcatenateTablesProxyModel_Event_Callback(QConcatenateTablesProxyModel_Event_Callback cb) { qconcatenatetablesproxymodel_event_callback = cb; }
    inline void setQConcatenateTablesProxyModel_EventFilter_Callback(QConcatenateTablesProxyModel_EventFilter_Callback cb) { qconcatenatetablesproxymodel_eventfilter_callback = cb; }
    inline void setQConcatenateTablesProxyModel_TimerEvent_Callback(QConcatenateTablesProxyModel_TimerEvent_Callback cb) { qconcatenatetablesproxymodel_timerevent_callback = cb; }
    inline void setQConcatenateTablesProxyModel_ChildEvent_Callback(QConcatenateTablesProxyModel_ChildEvent_Callback cb) { qconcatenatetablesproxymodel_childevent_callback = cb; }
    inline void setQConcatenateTablesProxyModel_CustomEvent_Callback(QConcatenateTablesProxyModel_CustomEvent_Callback cb) { qconcatenatetablesproxymodel_customevent_callback = cb; }
    inline void setQConcatenateTablesProxyModel_ConnectNotify_Callback(QConcatenateTablesProxyModel_ConnectNotify_Callback cb) { qconcatenatetablesproxymodel_connectnotify_callback = cb; }
    inline void setQConcatenateTablesProxyModel_DisconnectNotify_Callback(QConcatenateTablesProxyModel_DisconnectNotify_Callback cb) { qconcatenatetablesproxymodel_disconnectnotify_callback = cb; }
    inline void setQConcatenateTablesProxyModel_CreateIndex_Callback(QConcatenateTablesProxyModel_CreateIndex_Callback cb) { qconcatenatetablesproxymodel_createindex_callback = cb; }
    inline void setQConcatenateTablesProxyModel_EncodeData_Callback(QConcatenateTablesProxyModel_EncodeData_Callback cb) { qconcatenatetablesproxymodel_encodedata_callback = cb; }
    inline void setQConcatenateTablesProxyModel_DecodeData_Callback(QConcatenateTablesProxyModel_DecodeData_Callback cb) { qconcatenatetablesproxymodel_decodedata_callback = cb; }
    inline void setQConcatenateTablesProxyModel_BeginInsertRows_Callback(QConcatenateTablesProxyModel_BeginInsertRows_Callback cb) { qconcatenatetablesproxymodel_begininsertrows_callback = cb; }
    inline void setQConcatenateTablesProxyModel_EndInsertRows_Callback(QConcatenateTablesProxyModel_EndInsertRows_Callback cb) { qconcatenatetablesproxymodel_endinsertrows_callback = cb; }
    inline void setQConcatenateTablesProxyModel_BeginRemoveRows_Callback(QConcatenateTablesProxyModel_BeginRemoveRows_Callback cb) { qconcatenatetablesproxymodel_beginremoverows_callback = cb; }
    inline void setQConcatenateTablesProxyModel_EndRemoveRows_Callback(QConcatenateTablesProxyModel_EndRemoveRows_Callback cb) { qconcatenatetablesproxymodel_endremoverows_callback = cb; }
    inline void setQConcatenateTablesProxyModel_BeginMoveRows_Callback(QConcatenateTablesProxyModel_BeginMoveRows_Callback cb) { qconcatenatetablesproxymodel_beginmoverows_callback = cb; }
    inline void setQConcatenateTablesProxyModel_EndMoveRows_Callback(QConcatenateTablesProxyModel_EndMoveRows_Callback cb) { qconcatenatetablesproxymodel_endmoverows_callback = cb; }
    inline void setQConcatenateTablesProxyModel_BeginInsertColumns_Callback(QConcatenateTablesProxyModel_BeginInsertColumns_Callback cb) { qconcatenatetablesproxymodel_begininsertcolumns_callback = cb; }
    inline void setQConcatenateTablesProxyModel_EndInsertColumns_Callback(QConcatenateTablesProxyModel_EndInsertColumns_Callback cb) { qconcatenatetablesproxymodel_endinsertcolumns_callback = cb; }
    inline void setQConcatenateTablesProxyModel_BeginRemoveColumns_Callback(QConcatenateTablesProxyModel_BeginRemoveColumns_Callback cb) { qconcatenatetablesproxymodel_beginremovecolumns_callback = cb; }
    inline void setQConcatenateTablesProxyModel_EndRemoveColumns_Callback(QConcatenateTablesProxyModel_EndRemoveColumns_Callback cb) { qconcatenatetablesproxymodel_endremovecolumns_callback = cb; }
    inline void setQConcatenateTablesProxyModel_BeginMoveColumns_Callback(QConcatenateTablesProxyModel_BeginMoveColumns_Callback cb) { qconcatenatetablesproxymodel_beginmovecolumns_callback = cb; }
    inline void setQConcatenateTablesProxyModel_EndMoveColumns_Callback(QConcatenateTablesProxyModel_EndMoveColumns_Callback cb) { qconcatenatetablesproxymodel_endmovecolumns_callback = cb; }
    inline void setQConcatenateTablesProxyModel_BeginResetModel_Callback(QConcatenateTablesProxyModel_BeginResetModel_Callback cb) { qconcatenatetablesproxymodel_beginresetmodel_callback = cb; }
    inline void setQConcatenateTablesProxyModel_EndResetModel_Callback(QConcatenateTablesProxyModel_EndResetModel_Callback cb) { qconcatenatetablesproxymodel_endresetmodel_callback = cb; }
    inline void setQConcatenateTablesProxyModel_ChangePersistentIndex_Callback(QConcatenateTablesProxyModel_ChangePersistentIndex_Callback cb) { qconcatenatetablesproxymodel_changepersistentindex_callback = cb; }
    inline void setQConcatenateTablesProxyModel_ChangePersistentIndexList_Callback(QConcatenateTablesProxyModel_ChangePersistentIndexList_Callback cb) { qconcatenatetablesproxymodel_changepersistentindexlist_callback = cb; }
    inline void setQConcatenateTablesProxyModel_PersistentIndexList_Callback(QConcatenateTablesProxyModel_PersistentIndexList_Callback cb) { qconcatenatetablesproxymodel_persistentindexlist_callback = cb; }
    inline void setQConcatenateTablesProxyModel_Sender_Callback(QConcatenateTablesProxyModel_Sender_Callback cb) { qconcatenatetablesproxymodel_sender_callback = cb; }
    inline void setQConcatenateTablesProxyModel_SenderSignalIndex_Callback(QConcatenateTablesProxyModel_SenderSignalIndex_Callback cb) { qconcatenatetablesproxymodel_sendersignalindex_callback = cb; }
    inline void setQConcatenateTablesProxyModel_Receivers_Callback(QConcatenateTablesProxyModel_Receivers_Callback cb) { qconcatenatetablesproxymodel_receivers_callback = cb; }
    inline void setQConcatenateTablesProxyModel_IsSignalConnected_Callback(QConcatenateTablesProxyModel_IsSignalConnected_Callback cb) { qconcatenatetablesproxymodel_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQConcatenateTablesProxyModel_Metacall_IsBase(bool value) const { qconcatenatetablesproxymodel_metacall_isbase = value; }
    inline void setQConcatenateTablesProxyModel_Data_IsBase(bool value) const { qconcatenatetablesproxymodel_data_isbase = value; }
    inline void setQConcatenateTablesProxyModel_SetData_IsBase(bool value) const { qconcatenatetablesproxymodel_setdata_isbase = value; }
    inline void setQConcatenateTablesProxyModel_ItemData_IsBase(bool value) const { qconcatenatetablesproxymodel_itemdata_isbase = value; }
    inline void setQConcatenateTablesProxyModel_SetItemData_IsBase(bool value) const { qconcatenatetablesproxymodel_setitemdata_isbase = value; }
    inline void setQConcatenateTablesProxyModel_Flags_IsBase(bool value) const { qconcatenatetablesproxymodel_flags_isbase = value; }
    inline void setQConcatenateTablesProxyModel_Index_IsBase(bool value) const { qconcatenatetablesproxymodel_index_isbase = value; }
    inline void setQConcatenateTablesProxyModel_Parent_IsBase(bool value) const { qconcatenatetablesproxymodel_parent_isbase = value; }
    inline void setQConcatenateTablesProxyModel_RowCount_IsBase(bool value) const { qconcatenatetablesproxymodel_rowcount_isbase = value; }
    inline void setQConcatenateTablesProxyModel_HeaderData_IsBase(bool value) const { qconcatenatetablesproxymodel_headerdata_isbase = value; }
    inline void setQConcatenateTablesProxyModel_ColumnCount_IsBase(bool value) const { qconcatenatetablesproxymodel_columncount_isbase = value; }
    inline void setQConcatenateTablesProxyModel_MimeTypes_IsBase(bool value) const { qconcatenatetablesproxymodel_mimetypes_isbase = value; }
    inline void setQConcatenateTablesProxyModel_MimeData_IsBase(bool value) const { qconcatenatetablesproxymodel_mimedata_isbase = value; }
    inline void setQConcatenateTablesProxyModel_CanDropMimeData_IsBase(bool value) const { qconcatenatetablesproxymodel_candropmimedata_isbase = value; }
    inline void setQConcatenateTablesProxyModel_DropMimeData_IsBase(bool value) const { qconcatenatetablesproxymodel_dropmimedata_isbase = value; }
    inline void setQConcatenateTablesProxyModel_Span_IsBase(bool value) const { qconcatenatetablesproxymodel_span_isbase = value; }
    inline void setQConcatenateTablesProxyModel_Sibling_IsBase(bool value) const { qconcatenatetablesproxymodel_sibling_isbase = value; }
    inline void setQConcatenateTablesProxyModel_HasChildren_IsBase(bool value) const { qconcatenatetablesproxymodel_haschildren_isbase = value; }
    inline void setQConcatenateTablesProxyModel_SetHeaderData_IsBase(bool value) const { qconcatenatetablesproxymodel_setheaderdata_isbase = value; }
    inline void setQConcatenateTablesProxyModel_ClearItemData_IsBase(bool value) const { qconcatenatetablesproxymodel_clearitemdata_isbase = value; }
    inline void setQConcatenateTablesProxyModel_SupportedDropActions_IsBase(bool value) const { qconcatenatetablesproxymodel_supporteddropactions_isbase = value; }
    inline void setQConcatenateTablesProxyModel_SupportedDragActions_IsBase(bool value) const { qconcatenatetablesproxymodel_supporteddragactions_isbase = value; }
    inline void setQConcatenateTablesProxyModel_InsertRows_IsBase(bool value) const { qconcatenatetablesproxymodel_insertrows_isbase = value; }
    inline void setQConcatenateTablesProxyModel_InsertColumns_IsBase(bool value) const { qconcatenatetablesproxymodel_insertcolumns_isbase = value; }
    inline void setQConcatenateTablesProxyModel_RemoveRows_IsBase(bool value) const { qconcatenatetablesproxymodel_removerows_isbase = value; }
    inline void setQConcatenateTablesProxyModel_RemoveColumns_IsBase(bool value) const { qconcatenatetablesproxymodel_removecolumns_isbase = value; }
    inline void setQConcatenateTablesProxyModel_MoveRows_IsBase(bool value) const { qconcatenatetablesproxymodel_moverows_isbase = value; }
    inline void setQConcatenateTablesProxyModel_MoveColumns_IsBase(bool value) const { qconcatenatetablesproxymodel_movecolumns_isbase = value; }
    inline void setQConcatenateTablesProxyModel_FetchMore_IsBase(bool value) const { qconcatenatetablesproxymodel_fetchmore_isbase = value; }
    inline void setQConcatenateTablesProxyModel_CanFetchMore_IsBase(bool value) const { qconcatenatetablesproxymodel_canfetchmore_isbase = value; }
    inline void setQConcatenateTablesProxyModel_Sort_IsBase(bool value) const { qconcatenatetablesproxymodel_sort_isbase = value; }
    inline void setQConcatenateTablesProxyModel_Buddy_IsBase(bool value) const { qconcatenatetablesproxymodel_buddy_isbase = value; }
    inline void setQConcatenateTablesProxyModel_Match_IsBase(bool value) const { qconcatenatetablesproxymodel_match_isbase = value; }
    inline void setQConcatenateTablesProxyModel_RoleNames_IsBase(bool value) const { qconcatenatetablesproxymodel_rolenames_isbase = value; }
    inline void setQConcatenateTablesProxyModel_MultiData_IsBase(bool value) const { qconcatenatetablesproxymodel_multidata_isbase = value; }
    inline void setQConcatenateTablesProxyModel_Submit_IsBase(bool value) const { qconcatenatetablesproxymodel_submit_isbase = value; }
    inline void setQConcatenateTablesProxyModel_Revert_IsBase(bool value) const { qconcatenatetablesproxymodel_revert_isbase = value; }
    inline void setQConcatenateTablesProxyModel_ResetInternalData_IsBase(bool value) const { qconcatenatetablesproxymodel_resetinternaldata_isbase = value; }
    inline void setQConcatenateTablesProxyModel_Event_IsBase(bool value) const { qconcatenatetablesproxymodel_event_isbase = value; }
    inline void setQConcatenateTablesProxyModel_EventFilter_IsBase(bool value) const { qconcatenatetablesproxymodel_eventfilter_isbase = value; }
    inline void setQConcatenateTablesProxyModel_TimerEvent_IsBase(bool value) const { qconcatenatetablesproxymodel_timerevent_isbase = value; }
    inline void setQConcatenateTablesProxyModel_ChildEvent_IsBase(bool value) const { qconcatenatetablesproxymodel_childevent_isbase = value; }
    inline void setQConcatenateTablesProxyModel_CustomEvent_IsBase(bool value) const { qconcatenatetablesproxymodel_customevent_isbase = value; }
    inline void setQConcatenateTablesProxyModel_ConnectNotify_IsBase(bool value) const { qconcatenatetablesproxymodel_connectnotify_isbase = value; }
    inline void setQConcatenateTablesProxyModel_DisconnectNotify_IsBase(bool value) const { qconcatenatetablesproxymodel_disconnectnotify_isbase = value; }
    inline void setQConcatenateTablesProxyModel_CreateIndex_IsBase(bool value) const { qconcatenatetablesproxymodel_createindex_isbase = value; }
    inline void setQConcatenateTablesProxyModel_EncodeData_IsBase(bool value) const { qconcatenatetablesproxymodel_encodedata_isbase = value; }
    inline void setQConcatenateTablesProxyModel_DecodeData_IsBase(bool value) const { qconcatenatetablesproxymodel_decodedata_isbase = value; }
    inline void setQConcatenateTablesProxyModel_BeginInsertRows_IsBase(bool value) const { qconcatenatetablesproxymodel_begininsertrows_isbase = value; }
    inline void setQConcatenateTablesProxyModel_EndInsertRows_IsBase(bool value) const { qconcatenatetablesproxymodel_endinsertrows_isbase = value; }
    inline void setQConcatenateTablesProxyModel_BeginRemoveRows_IsBase(bool value) const { qconcatenatetablesproxymodel_beginremoverows_isbase = value; }
    inline void setQConcatenateTablesProxyModel_EndRemoveRows_IsBase(bool value) const { qconcatenatetablesproxymodel_endremoverows_isbase = value; }
    inline void setQConcatenateTablesProxyModel_BeginMoveRows_IsBase(bool value) const { qconcatenatetablesproxymodel_beginmoverows_isbase = value; }
    inline void setQConcatenateTablesProxyModel_EndMoveRows_IsBase(bool value) const { qconcatenatetablesproxymodel_endmoverows_isbase = value; }
    inline void setQConcatenateTablesProxyModel_BeginInsertColumns_IsBase(bool value) const { qconcatenatetablesproxymodel_begininsertcolumns_isbase = value; }
    inline void setQConcatenateTablesProxyModel_EndInsertColumns_IsBase(bool value) const { qconcatenatetablesproxymodel_endinsertcolumns_isbase = value; }
    inline void setQConcatenateTablesProxyModel_BeginRemoveColumns_IsBase(bool value) const { qconcatenatetablesproxymodel_beginremovecolumns_isbase = value; }
    inline void setQConcatenateTablesProxyModel_EndRemoveColumns_IsBase(bool value) const { qconcatenatetablesproxymodel_endremovecolumns_isbase = value; }
    inline void setQConcatenateTablesProxyModel_BeginMoveColumns_IsBase(bool value) const { qconcatenatetablesproxymodel_beginmovecolumns_isbase = value; }
    inline void setQConcatenateTablesProxyModel_EndMoveColumns_IsBase(bool value) const { qconcatenatetablesproxymodel_endmovecolumns_isbase = value; }
    inline void setQConcatenateTablesProxyModel_BeginResetModel_IsBase(bool value) const { qconcatenatetablesproxymodel_beginresetmodel_isbase = value; }
    inline void setQConcatenateTablesProxyModel_EndResetModel_IsBase(bool value) const { qconcatenatetablesproxymodel_endresetmodel_isbase = value; }
    inline void setQConcatenateTablesProxyModel_ChangePersistentIndex_IsBase(bool value) const { qconcatenatetablesproxymodel_changepersistentindex_isbase = value; }
    inline void setQConcatenateTablesProxyModel_ChangePersistentIndexList_IsBase(bool value) const { qconcatenatetablesproxymodel_changepersistentindexlist_isbase = value; }
    inline void setQConcatenateTablesProxyModel_PersistentIndexList_IsBase(bool value) const { qconcatenatetablesproxymodel_persistentindexlist_isbase = value; }
    inline void setQConcatenateTablesProxyModel_Sender_IsBase(bool value) const { qconcatenatetablesproxymodel_sender_isbase = value; }
    inline void setQConcatenateTablesProxyModel_SenderSignalIndex_IsBase(bool value) const { qconcatenatetablesproxymodel_sendersignalindex_isbase = value; }
    inline void setQConcatenateTablesProxyModel_Receivers_IsBase(bool value) const { qconcatenatetablesproxymodel_receivers_isbase = value; }
    inline void setQConcatenateTablesProxyModel_IsSignalConnected_IsBase(bool value) const { qconcatenatetablesproxymodel_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qconcatenatetablesproxymodel_metacall_isbase) {
            qconcatenatetablesproxymodel_metacall_isbase = false;
            return QConcatenateTablesProxyModel::qt_metacall(param1, param2, param3);
        } else if (qconcatenatetablesproxymodel_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qconcatenatetablesproxymodel_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QConcatenateTablesProxyModel::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(const QModelIndex& index, int role) const override {
        if (qconcatenatetablesproxymodel_data_isbase) {
            qconcatenatetablesproxymodel_data_isbase = false;
            return QConcatenateTablesProxyModel::data(index, role);
        } else if (qconcatenatetablesproxymodel_data_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = role;

            QVariant* callback_ret = qconcatenatetablesproxymodel_data_callback(this, cbval1, cbval2);
            return *callback_ret;
        } else {
            return QConcatenateTablesProxyModel::data(index, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
        if (qconcatenatetablesproxymodel_setdata_isbase) {
            qconcatenatetablesproxymodel_setdata_isbase = false;
            return QConcatenateTablesProxyModel::setData(index, value, role);
        } else if (qconcatenatetablesproxymodel_setdata_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            int cbval3 = role;

            bool callback_ret = qconcatenatetablesproxymodel_setdata_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QConcatenateTablesProxyModel::setData(index, value, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QMap<int, QVariant> itemData(const QModelIndex& proxyIndex) const override {
        if (qconcatenatetablesproxymodel_itemdata_isbase) {
            qconcatenatetablesproxymodel_itemdata_isbase = false;
            return QConcatenateTablesProxyModel::itemData(proxyIndex);
        } else if (qconcatenatetablesproxymodel_itemdata_callback != nullptr) {
            const QModelIndex& proxyIndex_ret = proxyIndex;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&proxyIndex_ret);

            libqt_map /* of int to QVariant* */ callback_ret = qconcatenatetablesproxymodel_itemdata_callback(this, cbval1);
            QMap<int, QVariant> callback_ret_QMap;
            int* callback_ret_karr = static_cast<int*>(callback_ret.keys);
            QVariant** callback_ret_varr = static_cast<QVariant**>(callback_ret.values);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QMap[static_cast<int>(callback_ret_karr[i])] = *(callback_ret_varr[i]);
            }
            return callback_ret_QMap;
        } else {
            return QConcatenateTablesProxyModel::itemData(proxyIndex);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
        if (qconcatenatetablesproxymodel_setitemdata_isbase) {
            qconcatenatetablesproxymodel_setitemdata_isbase = false;
            return QConcatenateTablesProxyModel::setItemData(index, roles);
        } else if (qconcatenatetablesproxymodel_setitemdata_callback != nullptr) {
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

            bool callback_ret = qconcatenatetablesproxymodel_setitemdata_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QConcatenateTablesProxyModel::setItemData(index, roles);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
        if (qconcatenatetablesproxymodel_flags_isbase) {
            qconcatenatetablesproxymodel_flags_isbase = false;
            return QConcatenateTablesProxyModel::flags(index);
        } else if (qconcatenatetablesproxymodel_flags_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            int callback_ret = qconcatenatetablesproxymodel_flags_callback(this, cbval1);
            return static_cast<Qt::ItemFlags>(callback_ret);
        } else {
            return QConcatenateTablesProxyModel::flags(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
        if (qconcatenatetablesproxymodel_index_isbase) {
            qconcatenatetablesproxymodel_index_isbase = false;
            return QConcatenateTablesProxyModel::index(row, column, parent);
        } else if (qconcatenatetablesproxymodel_index_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            QModelIndex* callback_ret = qconcatenatetablesproxymodel_index_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return QConcatenateTablesProxyModel::index(row, column, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex parent(const QModelIndex& index) const override {
        if (qconcatenatetablesproxymodel_parent_isbase) {
            qconcatenatetablesproxymodel_parent_isbase = false;
            return QConcatenateTablesProxyModel::parent(index);
        } else if (qconcatenatetablesproxymodel_parent_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QModelIndex* callback_ret = qconcatenatetablesproxymodel_parent_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QConcatenateTablesProxyModel::parent(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int rowCount(const QModelIndex& parent) const override {
        if (qconcatenatetablesproxymodel_rowcount_isbase) {
            qconcatenatetablesproxymodel_rowcount_isbase = false;
            return QConcatenateTablesProxyModel::rowCount(parent);
        } else if (qconcatenatetablesproxymodel_rowcount_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            int callback_ret = qconcatenatetablesproxymodel_rowcount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QConcatenateTablesProxyModel::rowCount(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
        if (qconcatenatetablesproxymodel_headerdata_isbase) {
            qconcatenatetablesproxymodel_headerdata_isbase = false;
            return QConcatenateTablesProxyModel::headerData(section, orientation, role);
        } else if (qconcatenatetablesproxymodel_headerdata_callback != nullptr) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            int cbval3 = role;

            QVariant* callback_ret = qconcatenatetablesproxymodel_headerdata_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return QConcatenateTablesProxyModel::headerData(section, orientation, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int columnCount(const QModelIndex& parent) const override {
        if (qconcatenatetablesproxymodel_columncount_isbase) {
            qconcatenatetablesproxymodel_columncount_isbase = false;
            return QConcatenateTablesProxyModel::columnCount(parent);
        } else if (qconcatenatetablesproxymodel_columncount_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            int callback_ret = qconcatenatetablesproxymodel_columncount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QConcatenateTablesProxyModel::columnCount(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> mimeTypes() const override {
        if (qconcatenatetablesproxymodel_mimetypes_isbase) {
            qconcatenatetablesproxymodel_mimetypes_isbase = false;
            return QConcatenateTablesProxyModel::mimeTypes();
        } else if (qconcatenatetablesproxymodel_mimetypes_callback != nullptr) {
            libqt_list /* of libqt_string */ callback_ret = qconcatenatetablesproxymodel_mimetypes_callback();
            QList<QString> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            libqt_string* callback_ret_arr = static_cast<libqt_string*>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                QString callback_ret_arr_i_QString = QString::fromUtf8(callback_ret_arr[i].data, callback_ret_arr[i].len);
                callback_ret_QList.push_back(callback_ret_arr_i_QString);
            }
            return callback_ret_QList;
        } else {
            return QConcatenateTablesProxyModel::mimeTypes();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* mimeData(const QList<QModelIndex>& indexes) const override {
        if (qconcatenatetablesproxymodel_mimedata_isbase) {
            qconcatenatetablesproxymodel_mimedata_isbase = false;
            return QConcatenateTablesProxyModel::mimeData(indexes);
        } else if (qconcatenatetablesproxymodel_mimedata_callback != nullptr) {
            const QList<QModelIndex>& indexes_ret = indexes;
            // Convert QList<> from C++ memory to manually-managed C memory
            QModelIndex** indexes_arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * indexes_ret.size()));
            for (qsizetype i = 0; i < indexes_ret.size(); ++i) {
                indexes_arr[i] = new QModelIndex(indexes_ret[i]);
            }
            libqt_list indexes_out;
            indexes_out.len = indexes_ret.size();
            indexes_out.data = static_cast<void*>(indexes_arr);
            libqt_list /* of QModelIndex* */ cbval1 = indexes_out;

            QMimeData* callback_ret = qconcatenatetablesproxymodel_mimedata_callback(this, cbval1);
            return callback_ret;
        } else {
            return QConcatenateTablesProxyModel::mimeData(indexes);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
        if (qconcatenatetablesproxymodel_candropmimedata_isbase) {
            qconcatenatetablesproxymodel_candropmimedata_isbase = false;
            return QConcatenateTablesProxyModel::canDropMimeData(data, action, row, column, parent);
        } else if (qconcatenatetablesproxymodel_candropmimedata_callback != nullptr) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = qconcatenatetablesproxymodel_candropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return QConcatenateTablesProxyModel::canDropMimeData(data, action, row, column, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
        if (qconcatenatetablesproxymodel_dropmimedata_isbase) {
            qconcatenatetablesproxymodel_dropmimedata_isbase = false;
            return QConcatenateTablesProxyModel::dropMimeData(data, action, row, column, parent);
        } else if (qconcatenatetablesproxymodel_dropmimedata_callback != nullptr) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = qconcatenatetablesproxymodel_dropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return QConcatenateTablesProxyModel::dropMimeData(data, action, row, column, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize span(const QModelIndex& index) const override {
        if (qconcatenatetablesproxymodel_span_isbase) {
            qconcatenatetablesproxymodel_span_isbase = false;
            return QConcatenateTablesProxyModel::span(index);
        } else if (qconcatenatetablesproxymodel_span_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QSize* callback_ret = qconcatenatetablesproxymodel_span_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QConcatenateTablesProxyModel::span(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
        if (qconcatenatetablesproxymodel_sibling_isbase) {
            qconcatenatetablesproxymodel_sibling_isbase = false;
            return QConcatenateTablesProxyModel::sibling(row, column, idx);
        } else if (qconcatenatetablesproxymodel_sibling_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& idx_ret = idx;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&idx_ret);

            QModelIndex* callback_ret = qconcatenatetablesproxymodel_sibling_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return QConcatenateTablesProxyModel::sibling(row, column, idx);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasChildren(const QModelIndex& parent) const override {
        if (qconcatenatetablesproxymodel_haschildren_isbase) {
            qconcatenatetablesproxymodel_haschildren_isbase = false;
            return QConcatenateTablesProxyModel::hasChildren(parent);
        } else if (qconcatenatetablesproxymodel_haschildren_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = qconcatenatetablesproxymodel_haschildren_callback(this, cbval1);
            return callback_ret;
        } else {
            return QConcatenateTablesProxyModel::hasChildren(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
        if (qconcatenatetablesproxymodel_setheaderdata_isbase) {
            qconcatenatetablesproxymodel_setheaderdata_isbase = false;
            return QConcatenateTablesProxyModel::setHeaderData(section, orientation, value, role);
        } else if (qconcatenatetablesproxymodel_setheaderdata_callback != nullptr) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = role;

            bool callback_ret = qconcatenatetablesproxymodel_setheaderdata_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        } else {
            return QConcatenateTablesProxyModel::setHeaderData(section, orientation, value, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool clearItemData(const QModelIndex& index) override {
        if (qconcatenatetablesproxymodel_clearitemdata_isbase) {
            qconcatenatetablesproxymodel_clearitemdata_isbase = false;
            return QConcatenateTablesProxyModel::clearItemData(index);
        } else if (qconcatenatetablesproxymodel_clearitemdata_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            bool callback_ret = qconcatenatetablesproxymodel_clearitemdata_callback(this, cbval1);
            return callback_ret;
        } else {
            return QConcatenateTablesProxyModel::clearItemData(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (qconcatenatetablesproxymodel_supporteddropactions_isbase) {
            qconcatenatetablesproxymodel_supporteddropactions_isbase = false;
            return QConcatenateTablesProxyModel::supportedDropActions();
        } else if (qconcatenatetablesproxymodel_supporteddropactions_callback != nullptr) {
            int callback_ret = qconcatenatetablesproxymodel_supporteddropactions_callback();
            return static_cast<Qt::DropActions>(callback_ret);
        } else {
            return QConcatenateTablesProxyModel::supportedDropActions();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDragActions() const override {
        if (qconcatenatetablesproxymodel_supporteddragactions_isbase) {
            qconcatenatetablesproxymodel_supporteddragactions_isbase = false;
            return QConcatenateTablesProxyModel::supportedDragActions();
        } else if (qconcatenatetablesproxymodel_supporteddragactions_callback != nullptr) {
            int callback_ret = qconcatenatetablesproxymodel_supporteddragactions_callback();
            return static_cast<Qt::DropActions>(callback_ret);
        } else {
            return QConcatenateTablesProxyModel::supportedDragActions();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
        if (qconcatenatetablesproxymodel_insertrows_isbase) {
            qconcatenatetablesproxymodel_insertrows_isbase = false;
            return QConcatenateTablesProxyModel::insertRows(row, count, parent);
        } else if (qconcatenatetablesproxymodel_insertrows_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = qconcatenatetablesproxymodel_insertrows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QConcatenateTablesProxyModel::insertRows(row, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
        if (qconcatenatetablesproxymodel_insertcolumns_isbase) {
            qconcatenatetablesproxymodel_insertcolumns_isbase = false;
            return QConcatenateTablesProxyModel::insertColumns(column, count, parent);
        } else if (qconcatenatetablesproxymodel_insertcolumns_callback != nullptr) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = qconcatenatetablesproxymodel_insertcolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QConcatenateTablesProxyModel::insertColumns(column, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
        if (qconcatenatetablesproxymodel_removerows_isbase) {
            qconcatenatetablesproxymodel_removerows_isbase = false;
            return QConcatenateTablesProxyModel::removeRows(row, count, parent);
        } else if (qconcatenatetablesproxymodel_removerows_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = qconcatenatetablesproxymodel_removerows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QConcatenateTablesProxyModel::removeRows(row, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
        if (qconcatenatetablesproxymodel_removecolumns_isbase) {
            qconcatenatetablesproxymodel_removecolumns_isbase = false;
            return QConcatenateTablesProxyModel::removeColumns(column, count, parent);
        } else if (qconcatenatetablesproxymodel_removecolumns_callback != nullptr) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = qconcatenatetablesproxymodel_removecolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QConcatenateTablesProxyModel::removeColumns(column, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (qconcatenatetablesproxymodel_moverows_isbase) {
            qconcatenatetablesproxymodel_moverows_isbase = false;
            return QConcatenateTablesProxyModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
        } else if (qconcatenatetablesproxymodel_moverows_callback != nullptr) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceRow;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;

            bool callback_ret = qconcatenatetablesproxymodel_moverows_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return QConcatenateTablesProxyModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (qconcatenatetablesproxymodel_movecolumns_isbase) {
            qconcatenatetablesproxymodel_movecolumns_isbase = false;
            return QConcatenateTablesProxyModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
        } else if (qconcatenatetablesproxymodel_movecolumns_callback != nullptr) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceColumn;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;

            bool callback_ret = qconcatenatetablesproxymodel_movecolumns_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return QConcatenateTablesProxyModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void fetchMore(const QModelIndex& parent) override {
        if (qconcatenatetablesproxymodel_fetchmore_isbase) {
            qconcatenatetablesproxymodel_fetchmore_isbase = false;
            QConcatenateTablesProxyModel::fetchMore(parent);
        } else if (qconcatenatetablesproxymodel_fetchmore_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            qconcatenatetablesproxymodel_fetchmore_callback(this, cbval1);
        } else {
            QConcatenateTablesProxyModel::fetchMore(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canFetchMore(const QModelIndex& parent) const override {
        if (qconcatenatetablesproxymodel_canfetchmore_isbase) {
            qconcatenatetablesproxymodel_canfetchmore_isbase = false;
            return QConcatenateTablesProxyModel::canFetchMore(parent);
        } else if (qconcatenatetablesproxymodel_canfetchmore_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = qconcatenatetablesproxymodel_canfetchmore_callback(this, cbval1);
            return callback_ret;
        } else {
            return QConcatenateTablesProxyModel::canFetchMore(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void sort(int column, Qt::SortOrder order) override {
        if (qconcatenatetablesproxymodel_sort_isbase) {
            qconcatenatetablesproxymodel_sort_isbase = false;
            QConcatenateTablesProxyModel::sort(column, order);
        } else if (qconcatenatetablesproxymodel_sort_callback != nullptr) {
            int cbval1 = column;
            int cbval2 = static_cast<int>(order);

            qconcatenatetablesproxymodel_sort_callback(this, cbval1, cbval2);
        } else {
            QConcatenateTablesProxyModel::sort(column, order);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex buddy(const QModelIndex& index) const override {
        if (qconcatenatetablesproxymodel_buddy_isbase) {
            qconcatenatetablesproxymodel_buddy_isbase = false;
            return QConcatenateTablesProxyModel::buddy(index);
        } else if (qconcatenatetablesproxymodel_buddy_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QModelIndex* callback_ret = qconcatenatetablesproxymodel_buddy_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QConcatenateTablesProxyModel::buddy(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
        if (qconcatenatetablesproxymodel_match_isbase) {
            qconcatenatetablesproxymodel_match_isbase = false;
            return QConcatenateTablesProxyModel::match(start, role, value, hits, flags);
        } else if (qconcatenatetablesproxymodel_match_callback != nullptr) {
            const QModelIndex& start_ret = start;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&start_ret);
            int cbval2 = role;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = hits;
            int cbval5 = static_cast<int>(flags);

            libqt_list /* of QModelIndex* */ callback_ret = qconcatenatetablesproxymodel_match_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            QList<QModelIndex> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QModelIndex** callback_ret_arr = static_cast<QModelIndex**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            return callback_ret_QList;
        } else {
            return QConcatenateTablesProxyModel::match(start, role, value, hits, flags);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QHash<int, QByteArray> roleNames() const override {
        if (qconcatenatetablesproxymodel_rolenames_isbase) {
            qconcatenatetablesproxymodel_rolenames_isbase = false;
            return QConcatenateTablesProxyModel::roleNames();
        } else if (qconcatenatetablesproxymodel_rolenames_callback != nullptr) {
            libqt_map /* of int to libqt_string */ callback_ret = qconcatenatetablesproxymodel_rolenames_callback();
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
            return QConcatenateTablesProxyModel::roleNames();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
        if (qconcatenatetablesproxymodel_multidata_isbase) {
            qconcatenatetablesproxymodel_multidata_isbase = false;
            QConcatenateTablesProxyModel::multiData(index, roleDataSpan);
        } else if (qconcatenatetablesproxymodel_multidata_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelRoleDataSpan* cbval2 = new QModelRoleDataSpan(roleDataSpan);

            qconcatenatetablesproxymodel_multidata_callback(this, cbval1, cbval2);
        } else {
            QConcatenateTablesProxyModel::multiData(index, roleDataSpan);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool submit() override {
        if (qconcatenatetablesproxymodel_submit_isbase) {
            qconcatenatetablesproxymodel_submit_isbase = false;
            return QConcatenateTablesProxyModel::submit();
        } else if (qconcatenatetablesproxymodel_submit_callback != nullptr) {
            bool callback_ret = qconcatenatetablesproxymodel_submit_callback();
            return callback_ret;
        } else {
            return QConcatenateTablesProxyModel::submit();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void revert() override {
        if (qconcatenatetablesproxymodel_revert_isbase) {
            qconcatenatetablesproxymodel_revert_isbase = false;
            QConcatenateTablesProxyModel::revert();
        } else if (qconcatenatetablesproxymodel_revert_callback != nullptr) {
            qconcatenatetablesproxymodel_revert_callback();
        } else {
            QConcatenateTablesProxyModel::revert();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetInternalData() override {
        if (qconcatenatetablesproxymodel_resetinternaldata_isbase) {
            qconcatenatetablesproxymodel_resetinternaldata_isbase = false;
            QConcatenateTablesProxyModel::resetInternalData();
        } else if (qconcatenatetablesproxymodel_resetinternaldata_callback != nullptr) {
            qconcatenatetablesproxymodel_resetinternaldata_callback();
        } else {
            QConcatenateTablesProxyModel::resetInternalData();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qconcatenatetablesproxymodel_event_isbase) {
            qconcatenatetablesproxymodel_event_isbase = false;
            return QConcatenateTablesProxyModel::event(event);
        } else if (qconcatenatetablesproxymodel_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qconcatenatetablesproxymodel_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QConcatenateTablesProxyModel::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qconcatenatetablesproxymodel_eventfilter_isbase) {
            qconcatenatetablesproxymodel_eventfilter_isbase = false;
            return QConcatenateTablesProxyModel::eventFilter(watched, event);
        } else if (qconcatenatetablesproxymodel_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qconcatenatetablesproxymodel_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QConcatenateTablesProxyModel::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qconcatenatetablesproxymodel_timerevent_isbase) {
            qconcatenatetablesproxymodel_timerevent_isbase = false;
            QConcatenateTablesProxyModel::timerEvent(event);
        } else if (qconcatenatetablesproxymodel_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qconcatenatetablesproxymodel_timerevent_callback(this, cbval1);
        } else {
            QConcatenateTablesProxyModel::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qconcatenatetablesproxymodel_childevent_isbase) {
            qconcatenatetablesproxymodel_childevent_isbase = false;
            QConcatenateTablesProxyModel::childEvent(event);
        } else if (qconcatenatetablesproxymodel_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qconcatenatetablesproxymodel_childevent_callback(this, cbval1);
        } else {
            QConcatenateTablesProxyModel::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qconcatenatetablesproxymodel_customevent_isbase) {
            qconcatenatetablesproxymodel_customevent_isbase = false;
            QConcatenateTablesProxyModel::customEvent(event);
        } else if (qconcatenatetablesproxymodel_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qconcatenatetablesproxymodel_customevent_callback(this, cbval1);
        } else {
            QConcatenateTablesProxyModel::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qconcatenatetablesproxymodel_connectnotify_isbase) {
            qconcatenatetablesproxymodel_connectnotify_isbase = false;
            QConcatenateTablesProxyModel::connectNotify(signal);
        } else if (qconcatenatetablesproxymodel_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qconcatenatetablesproxymodel_connectnotify_callback(this, cbval1);
        } else {
            QConcatenateTablesProxyModel::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qconcatenatetablesproxymodel_disconnectnotify_isbase) {
            qconcatenatetablesproxymodel_disconnectnotify_isbase = false;
            QConcatenateTablesProxyModel::disconnectNotify(signal);
        } else if (qconcatenatetablesproxymodel_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qconcatenatetablesproxymodel_disconnectnotify_callback(this, cbval1);
        } else {
            QConcatenateTablesProxyModel::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QModelIndex createIndex(int row, int column) const {
        if (qconcatenatetablesproxymodel_createindex_isbase) {
            qconcatenatetablesproxymodel_createindex_isbase = false;
            return QConcatenateTablesProxyModel::createIndex(row, column);
        } else if (qconcatenatetablesproxymodel_createindex_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;

            QModelIndex* callback_ret = qconcatenatetablesproxymodel_createindex_callback(this, cbval1, cbval2);
            return *callback_ret;
        } else {
            return QConcatenateTablesProxyModel::createIndex(row, column);
        }
    }

    // Virtual method for C ABI access and custom callback
    void encodeData(const QList<QModelIndex>& indexes, QDataStream& stream) const {
        if (qconcatenatetablesproxymodel_encodedata_isbase) {
            qconcatenatetablesproxymodel_encodedata_isbase = false;
            QConcatenateTablesProxyModel::encodeData(indexes, stream);
        } else if (qconcatenatetablesproxymodel_encodedata_callback != nullptr) {
            const QList<QModelIndex>& indexes_ret = indexes;
            // Convert QList<> from C++ memory to manually-managed C memory
            QModelIndex** indexes_arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * indexes_ret.size()));
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

            qconcatenatetablesproxymodel_encodedata_callback(this, cbval1, cbval2);
        } else {
            QConcatenateTablesProxyModel::encodeData(indexes, stream);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool decodeData(int row, int column, const QModelIndex& parent, QDataStream& stream) {
        if (qconcatenatetablesproxymodel_decodedata_isbase) {
            qconcatenatetablesproxymodel_decodedata_isbase = false;
            return QConcatenateTablesProxyModel::decodeData(row, column, parent, stream);
        } else if (qconcatenatetablesproxymodel_decodedata_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            QDataStream& stream_ret = stream;
            // Cast returned reference into pointer
            QDataStream* cbval4 = &stream_ret;

            bool callback_ret = qconcatenatetablesproxymodel_decodedata_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        } else {
            return QConcatenateTablesProxyModel::decodeData(row, column, parent, stream);
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertRows(const QModelIndex& parent, int first, int last) {
        if (qconcatenatetablesproxymodel_begininsertrows_isbase) {
            qconcatenatetablesproxymodel_begininsertrows_isbase = false;
            QConcatenateTablesProxyModel::beginInsertRows(parent, first, last);
        } else if (qconcatenatetablesproxymodel_begininsertrows_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            qconcatenatetablesproxymodel_begininsertrows_callback(this, cbval1, cbval2, cbval3);
        } else {
            QConcatenateTablesProxyModel::beginInsertRows(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endInsertRows() {
        if (qconcatenatetablesproxymodel_endinsertrows_isbase) {
            qconcatenatetablesproxymodel_endinsertrows_isbase = false;
            QConcatenateTablesProxyModel::endInsertRows();
        } else if (qconcatenatetablesproxymodel_endinsertrows_callback != nullptr) {
            qconcatenatetablesproxymodel_endinsertrows_callback();
        } else {
            QConcatenateTablesProxyModel::endInsertRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveRows(const QModelIndex& parent, int first, int last) {
        if (qconcatenatetablesproxymodel_beginremoverows_isbase) {
            qconcatenatetablesproxymodel_beginremoverows_isbase = false;
            QConcatenateTablesProxyModel::beginRemoveRows(parent, first, last);
        } else if (qconcatenatetablesproxymodel_beginremoverows_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            qconcatenatetablesproxymodel_beginremoverows_callback(this, cbval1, cbval2, cbval3);
        } else {
            QConcatenateTablesProxyModel::beginRemoveRows(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveRows() {
        if (qconcatenatetablesproxymodel_endremoverows_isbase) {
            qconcatenatetablesproxymodel_endremoverows_isbase = false;
            QConcatenateTablesProxyModel::endRemoveRows();
        } else if (qconcatenatetablesproxymodel_endremoverows_callback != nullptr) {
            qconcatenatetablesproxymodel_endremoverows_callback();
        } else {
            QConcatenateTablesProxyModel::endRemoveRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveRows(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationRow) {
        if (qconcatenatetablesproxymodel_beginmoverows_isbase) {
            qconcatenatetablesproxymodel_beginmoverows_isbase = false;
            return QConcatenateTablesProxyModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
        } else if (qconcatenatetablesproxymodel_beginmoverows_callback != nullptr) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceFirst;
            int cbval3 = sourceLast;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationRow;

            bool callback_ret = qconcatenatetablesproxymodel_beginmoverows_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return QConcatenateTablesProxyModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endMoveRows() {
        if (qconcatenatetablesproxymodel_endmoverows_isbase) {
            qconcatenatetablesproxymodel_endmoverows_isbase = false;
            QConcatenateTablesProxyModel::endMoveRows();
        } else if (qconcatenatetablesproxymodel_endmoverows_callback != nullptr) {
            qconcatenatetablesproxymodel_endmoverows_callback();
        } else {
            QConcatenateTablesProxyModel::endMoveRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertColumns(const QModelIndex& parent, int first, int last) {
        if (qconcatenatetablesproxymodel_begininsertcolumns_isbase) {
            qconcatenatetablesproxymodel_begininsertcolumns_isbase = false;
            QConcatenateTablesProxyModel::beginInsertColumns(parent, first, last);
        } else if (qconcatenatetablesproxymodel_begininsertcolumns_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            qconcatenatetablesproxymodel_begininsertcolumns_callback(this, cbval1, cbval2, cbval3);
        } else {
            QConcatenateTablesProxyModel::beginInsertColumns(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endInsertColumns() {
        if (qconcatenatetablesproxymodel_endinsertcolumns_isbase) {
            qconcatenatetablesproxymodel_endinsertcolumns_isbase = false;
            QConcatenateTablesProxyModel::endInsertColumns();
        } else if (qconcatenatetablesproxymodel_endinsertcolumns_callback != nullptr) {
            qconcatenatetablesproxymodel_endinsertcolumns_callback();
        } else {
            QConcatenateTablesProxyModel::endInsertColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveColumns(const QModelIndex& parent, int first, int last) {
        if (qconcatenatetablesproxymodel_beginremovecolumns_isbase) {
            qconcatenatetablesproxymodel_beginremovecolumns_isbase = false;
            QConcatenateTablesProxyModel::beginRemoveColumns(parent, first, last);
        } else if (qconcatenatetablesproxymodel_beginremovecolumns_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            qconcatenatetablesproxymodel_beginremovecolumns_callback(this, cbval1, cbval2, cbval3);
        } else {
            QConcatenateTablesProxyModel::beginRemoveColumns(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveColumns() {
        if (qconcatenatetablesproxymodel_endremovecolumns_isbase) {
            qconcatenatetablesproxymodel_endremovecolumns_isbase = false;
            QConcatenateTablesProxyModel::endRemoveColumns();
        } else if (qconcatenatetablesproxymodel_endremovecolumns_callback != nullptr) {
            qconcatenatetablesproxymodel_endremovecolumns_callback();
        } else {
            QConcatenateTablesProxyModel::endRemoveColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveColumns(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationColumn) {
        if (qconcatenatetablesproxymodel_beginmovecolumns_isbase) {
            qconcatenatetablesproxymodel_beginmovecolumns_isbase = false;
            return QConcatenateTablesProxyModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
        } else if (qconcatenatetablesproxymodel_beginmovecolumns_callback != nullptr) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceFirst;
            int cbval3 = sourceLast;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationColumn;

            bool callback_ret = qconcatenatetablesproxymodel_beginmovecolumns_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return QConcatenateTablesProxyModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endMoveColumns() {
        if (qconcatenatetablesproxymodel_endmovecolumns_isbase) {
            qconcatenatetablesproxymodel_endmovecolumns_isbase = false;
            QConcatenateTablesProxyModel::endMoveColumns();
        } else if (qconcatenatetablesproxymodel_endmovecolumns_callback != nullptr) {
            qconcatenatetablesproxymodel_endmovecolumns_callback();
        } else {
            QConcatenateTablesProxyModel::endMoveColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginResetModel() {
        if (qconcatenatetablesproxymodel_beginresetmodel_isbase) {
            qconcatenatetablesproxymodel_beginresetmodel_isbase = false;
            QConcatenateTablesProxyModel::beginResetModel();
        } else if (qconcatenatetablesproxymodel_beginresetmodel_callback != nullptr) {
            qconcatenatetablesproxymodel_beginresetmodel_callback();
        } else {
            QConcatenateTablesProxyModel::beginResetModel();
        }
    }

    // Virtual method for C ABI access and custom callback
    void endResetModel() {
        if (qconcatenatetablesproxymodel_endresetmodel_isbase) {
            qconcatenatetablesproxymodel_endresetmodel_isbase = false;
            QConcatenateTablesProxyModel::endResetModel();
        } else if (qconcatenatetablesproxymodel_endresetmodel_callback != nullptr) {
            qconcatenatetablesproxymodel_endresetmodel_callback();
        } else {
            QConcatenateTablesProxyModel::endResetModel();
        }
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndex(const QModelIndex& from, const QModelIndex& to) {
        if (qconcatenatetablesproxymodel_changepersistentindex_isbase) {
            qconcatenatetablesproxymodel_changepersistentindex_isbase = false;
            QConcatenateTablesProxyModel::changePersistentIndex(from, to);
        } else if (qconcatenatetablesproxymodel_changepersistentindex_callback != nullptr) {
            const QModelIndex& from_ret = from;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&from_ret);
            const QModelIndex& to_ret = to;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&to_ret);

            qconcatenatetablesproxymodel_changepersistentindex_callback(this, cbval1, cbval2);
        } else {
            QConcatenateTablesProxyModel::changePersistentIndex(from, to);
        }
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndexList(const QList<QModelIndex>& from, const QList<QModelIndex>& to) {
        if (qconcatenatetablesproxymodel_changepersistentindexlist_isbase) {
            qconcatenatetablesproxymodel_changepersistentindexlist_isbase = false;
            QConcatenateTablesProxyModel::changePersistentIndexList(from, to);
        } else if (qconcatenatetablesproxymodel_changepersistentindexlist_callback != nullptr) {
            const QList<QModelIndex>& from_ret = from;
            // Convert QList<> from C++ memory to manually-managed C memory
            QModelIndex** from_arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * from_ret.size()));
            for (qsizetype i = 0; i < from_ret.size(); ++i) {
                from_arr[i] = new QModelIndex(from_ret[i]);
            }
            libqt_list from_out;
            from_out.len = from_ret.size();
            from_out.data = static_cast<void*>(from_arr);
            libqt_list /* of QModelIndex* */ cbval1 = from_out;
            const QList<QModelIndex>& to_ret = to;
            // Convert QList<> from C++ memory to manually-managed C memory
            QModelIndex** to_arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * to_ret.size()));
            for (qsizetype i = 0; i < to_ret.size(); ++i) {
                to_arr[i] = new QModelIndex(to_ret[i]);
            }
            libqt_list to_out;
            to_out.len = to_ret.size();
            to_out.data = static_cast<void*>(to_arr);
            libqt_list /* of QModelIndex* */ cbval2 = to_out;

            qconcatenatetablesproxymodel_changepersistentindexlist_callback(this, cbval1, cbval2);
        } else {
            QConcatenateTablesProxyModel::changePersistentIndexList(from, to);
        }
    }

    // Virtual method for C ABI access and custom callback
    QList<QModelIndex> persistentIndexList() const {
        if (qconcatenatetablesproxymodel_persistentindexlist_isbase) {
            qconcatenatetablesproxymodel_persistentindexlist_isbase = false;
            return QConcatenateTablesProxyModel::persistentIndexList();
        } else if (qconcatenatetablesproxymodel_persistentindexlist_callback != nullptr) {
            libqt_list /* of QModelIndex* */ callback_ret = qconcatenatetablesproxymodel_persistentindexlist_callback();
            QList<QModelIndex> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QModelIndex** callback_ret_arr = static_cast<QModelIndex**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            return callback_ret_QList;
        } else {
            return QConcatenateTablesProxyModel::persistentIndexList();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qconcatenatetablesproxymodel_sender_isbase) {
            qconcatenatetablesproxymodel_sender_isbase = false;
            return QConcatenateTablesProxyModel::sender();
        } else if (qconcatenatetablesproxymodel_sender_callback != nullptr) {
            QObject* callback_ret = qconcatenatetablesproxymodel_sender_callback();
            return callback_ret;
        } else {
            return QConcatenateTablesProxyModel::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qconcatenatetablesproxymodel_sendersignalindex_isbase) {
            qconcatenatetablesproxymodel_sendersignalindex_isbase = false;
            return QConcatenateTablesProxyModel::senderSignalIndex();
        } else if (qconcatenatetablesproxymodel_sendersignalindex_callback != nullptr) {
            int callback_ret = qconcatenatetablesproxymodel_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QConcatenateTablesProxyModel::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qconcatenatetablesproxymodel_receivers_isbase) {
            qconcatenatetablesproxymodel_receivers_isbase = false;
            return QConcatenateTablesProxyModel::receivers(signal);
        } else if (qconcatenatetablesproxymodel_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qconcatenatetablesproxymodel_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QConcatenateTablesProxyModel::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qconcatenatetablesproxymodel_issignalconnected_isbase) {
            qconcatenatetablesproxymodel_issignalconnected_isbase = false;
            return QConcatenateTablesProxyModel::isSignalConnected(signal);
        } else if (qconcatenatetablesproxymodel_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qconcatenatetablesproxymodel_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QConcatenateTablesProxyModel::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QConcatenateTablesProxyModel_ResetInternalData(QConcatenateTablesProxyModel* self);
    friend void QConcatenateTablesProxyModel_QBaseResetInternalData(QConcatenateTablesProxyModel* self);
    friend void QConcatenateTablesProxyModel_TimerEvent(QConcatenateTablesProxyModel* self, QTimerEvent* event);
    friend void QConcatenateTablesProxyModel_QBaseTimerEvent(QConcatenateTablesProxyModel* self, QTimerEvent* event);
    friend void QConcatenateTablesProxyModel_ChildEvent(QConcatenateTablesProxyModel* self, QChildEvent* event);
    friend void QConcatenateTablesProxyModel_QBaseChildEvent(QConcatenateTablesProxyModel* self, QChildEvent* event);
    friend void QConcatenateTablesProxyModel_CustomEvent(QConcatenateTablesProxyModel* self, QEvent* event);
    friend void QConcatenateTablesProxyModel_QBaseCustomEvent(QConcatenateTablesProxyModel* self, QEvent* event);
    friend void QConcatenateTablesProxyModel_ConnectNotify(QConcatenateTablesProxyModel* self, const QMetaMethod* signal);
    friend void QConcatenateTablesProxyModel_QBaseConnectNotify(QConcatenateTablesProxyModel* self, const QMetaMethod* signal);
    friend void QConcatenateTablesProxyModel_DisconnectNotify(QConcatenateTablesProxyModel* self, const QMetaMethod* signal);
    friend void QConcatenateTablesProxyModel_QBaseDisconnectNotify(QConcatenateTablesProxyModel* self, const QMetaMethod* signal);
    friend QModelIndex* QConcatenateTablesProxyModel_CreateIndex(const QConcatenateTablesProxyModel* self, int row, int column);
    friend QModelIndex* QConcatenateTablesProxyModel_QBaseCreateIndex(const QConcatenateTablesProxyModel* self, int row, int column);
    friend void QConcatenateTablesProxyModel_EncodeData(const QConcatenateTablesProxyModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
    friend void QConcatenateTablesProxyModel_QBaseEncodeData(const QConcatenateTablesProxyModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
    friend bool QConcatenateTablesProxyModel_DecodeData(QConcatenateTablesProxyModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
    friend bool QConcatenateTablesProxyModel_QBaseDecodeData(QConcatenateTablesProxyModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
    friend void QConcatenateTablesProxyModel_BeginInsertRows(QConcatenateTablesProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void QConcatenateTablesProxyModel_QBaseBeginInsertRows(QConcatenateTablesProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void QConcatenateTablesProxyModel_EndInsertRows(QConcatenateTablesProxyModel* self);
    friend void QConcatenateTablesProxyModel_QBaseEndInsertRows(QConcatenateTablesProxyModel* self);
    friend void QConcatenateTablesProxyModel_BeginRemoveRows(QConcatenateTablesProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void QConcatenateTablesProxyModel_QBaseBeginRemoveRows(QConcatenateTablesProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void QConcatenateTablesProxyModel_EndRemoveRows(QConcatenateTablesProxyModel* self);
    friend void QConcatenateTablesProxyModel_QBaseEndRemoveRows(QConcatenateTablesProxyModel* self);
    friend bool QConcatenateTablesProxyModel_BeginMoveRows(QConcatenateTablesProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
    friend bool QConcatenateTablesProxyModel_QBaseBeginMoveRows(QConcatenateTablesProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
    friend void QConcatenateTablesProxyModel_EndMoveRows(QConcatenateTablesProxyModel* self);
    friend void QConcatenateTablesProxyModel_QBaseEndMoveRows(QConcatenateTablesProxyModel* self);
    friend void QConcatenateTablesProxyModel_BeginInsertColumns(QConcatenateTablesProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void QConcatenateTablesProxyModel_QBaseBeginInsertColumns(QConcatenateTablesProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void QConcatenateTablesProxyModel_EndInsertColumns(QConcatenateTablesProxyModel* self);
    friend void QConcatenateTablesProxyModel_QBaseEndInsertColumns(QConcatenateTablesProxyModel* self);
    friend void QConcatenateTablesProxyModel_BeginRemoveColumns(QConcatenateTablesProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void QConcatenateTablesProxyModel_QBaseBeginRemoveColumns(QConcatenateTablesProxyModel* self, const QModelIndex* parent, int first, int last);
    friend void QConcatenateTablesProxyModel_EndRemoveColumns(QConcatenateTablesProxyModel* self);
    friend void QConcatenateTablesProxyModel_QBaseEndRemoveColumns(QConcatenateTablesProxyModel* self);
    friend bool QConcatenateTablesProxyModel_BeginMoveColumns(QConcatenateTablesProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
    friend bool QConcatenateTablesProxyModel_QBaseBeginMoveColumns(QConcatenateTablesProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
    friend void QConcatenateTablesProxyModel_EndMoveColumns(QConcatenateTablesProxyModel* self);
    friend void QConcatenateTablesProxyModel_QBaseEndMoveColumns(QConcatenateTablesProxyModel* self);
    friend void QConcatenateTablesProxyModel_BeginResetModel(QConcatenateTablesProxyModel* self);
    friend void QConcatenateTablesProxyModel_QBaseBeginResetModel(QConcatenateTablesProxyModel* self);
    friend void QConcatenateTablesProxyModel_EndResetModel(QConcatenateTablesProxyModel* self);
    friend void QConcatenateTablesProxyModel_QBaseEndResetModel(QConcatenateTablesProxyModel* self);
    friend void QConcatenateTablesProxyModel_ChangePersistentIndex(QConcatenateTablesProxyModel* self, const QModelIndex* from, const QModelIndex* to);
    friend void QConcatenateTablesProxyModel_QBaseChangePersistentIndex(QConcatenateTablesProxyModel* self, const QModelIndex* from, const QModelIndex* to);
    friend void QConcatenateTablesProxyModel_ChangePersistentIndexList(QConcatenateTablesProxyModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
    friend void QConcatenateTablesProxyModel_QBaseChangePersistentIndexList(QConcatenateTablesProxyModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
    friend libqt_list /* of QModelIndex* */ QConcatenateTablesProxyModel_PersistentIndexList(const QConcatenateTablesProxyModel* self);
    friend libqt_list /* of QModelIndex* */ QConcatenateTablesProxyModel_QBasePersistentIndexList(const QConcatenateTablesProxyModel* self);
    friend QObject* QConcatenateTablesProxyModel_Sender(const QConcatenateTablesProxyModel* self);
    friend QObject* QConcatenateTablesProxyModel_QBaseSender(const QConcatenateTablesProxyModel* self);
    friend int QConcatenateTablesProxyModel_SenderSignalIndex(const QConcatenateTablesProxyModel* self);
    friend int QConcatenateTablesProxyModel_QBaseSenderSignalIndex(const QConcatenateTablesProxyModel* self);
    friend int QConcatenateTablesProxyModel_Receivers(const QConcatenateTablesProxyModel* self, const char* signal);
    friend int QConcatenateTablesProxyModel_QBaseReceivers(const QConcatenateTablesProxyModel* self, const char* signal);
    friend bool QConcatenateTablesProxyModel_IsSignalConnected(const QConcatenateTablesProxyModel* self, const QMetaMethod* signal);
    friend bool QConcatenateTablesProxyModel_QBaseIsSignalConnected(const QConcatenateTablesProxyModel* self, const QMetaMethod* signal);
};

#endif
