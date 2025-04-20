#pragma once
#ifndef SRC_PDFC_LIBVIRTUALQPDFSEARCHMODEL_H
#define SRC_PDFC_LIBVIRTUALQPDFSEARCHMODEL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QPdfSearchModel so that we can call protected methods
class VirtualQPdfSearchModel : public QPdfSearchModel {

  public:
    // Virtual class public types (including callbacks)
    using QPdfSearchModel_Metacall_Callback = int (*)(QPdfSearchModel*, QMetaObject::Call, int, void**);
    using QPdfSearchModel_RoleNames_Callback = QHash<int, QByteArray> (*)();
    using QPdfSearchModel_RowCount_Callback = int (*)(const QPdfSearchModel*, const QModelIndex&);
    using QPdfSearchModel_Data_Callback = QVariant (*)(const QPdfSearchModel*, const QModelIndex&, int);
    using QPdfSearchModel_TimerEvent_Callback = void (*)(QPdfSearchModel*, QTimerEvent*);
    using QPdfSearchModel_Index_Callback = QModelIndex (*)(const QPdfSearchModel*, int, int, const QModelIndex&);
    using QPdfSearchModel_Sibling_Callback = QModelIndex (*)(const QPdfSearchModel*, int, int, const QModelIndex&);
    using QPdfSearchModel_DropMimeData_Callback = bool (*)(QPdfSearchModel*, const QMimeData*, Qt::DropAction, int, int, const QModelIndex&);
    using QPdfSearchModel_Flags_Callback = Qt::ItemFlags (*)(const QPdfSearchModel*, const QModelIndex&);
    using QPdfSearchModel_SetData_Callback = bool (*)(QPdfSearchModel*, const QModelIndex&, const QVariant&, int);
    using QPdfSearchModel_HeaderData_Callback = QVariant (*)(const QPdfSearchModel*, int, Qt::Orientation, int);
    using QPdfSearchModel_SetHeaderData_Callback = bool (*)(QPdfSearchModel*, int, Qt::Orientation, const QVariant&, int);
    using QPdfSearchModel_ItemData_Callback = QMap<int, QVariant> (*)(const QPdfSearchModel*, const QModelIndex&);
    using QPdfSearchModel_SetItemData_Callback = bool (*)(QPdfSearchModel*, const QModelIndex&, const QMap<int, QVariant>&);
    using QPdfSearchModel_ClearItemData_Callback = bool (*)(QPdfSearchModel*, const QModelIndex&);
    using QPdfSearchModel_MimeTypes_Callback = QStringList (*)();
    using QPdfSearchModel_MimeData_Callback = QMimeData* (*)(const QPdfSearchModel*, const QModelIndexList&);
    using QPdfSearchModel_CanDropMimeData_Callback = bool (*)(const QPdfSearchModel*, const QMimeData*, Qt::DropAction, int, int, const QModelIndex&);
    using QPdfSearchModel_SupportedDropActions_Callback = Qt::DropActions (*)();
    using QPdfSearchModel_SupportedDragActions_Callback = Qt::DropActions (*)();
    using QPdfSearchModel_InsertRows_Callback = bool (*)(QPdfSearchModel*, int, int, const QModelIndex&);
    using QPdfSearchModel_InsertColumns_Callback = bool (*)(QPdfSearchModel*, int, int, const QModelIndex&);
    using QPdfSearchModel_RemoveRows_Callback = bool (*)(QPdfSearchModel*, int, int, const QModelIndex&);
    using QPdfSearchModel_RemoveColumns_Callback = bool (*)(QPdfSearchModel*, int, int, const QModelIndex&);
    using QPdfSearchModel_MoveRows_Callback = bool (*)(QPdfSearchModel*, const QModelIndex&, int, int, const QModelIndex&, int);
    using QPdfSearchModel_MoveColumns_Callback = bool (*)(QPdfSearchModel*, const QModelIndex&, int, int, const QModelIndex&, int);
    using QPdfSearchModel_FetchMore_Callback = void (*)(QPdfSearchModel*, const QModelIndex&);
    using QPdfSearchModel_CanFetchMore_Callback = bool (*)(const QPdfSearchModel*, const QModelIndex&);
    using QPdfSearchModel_Sort_Callback = void (*)(QPdfSearchModel*, int, Qt::SortOrder);
    using QPdfSearchModel_Buddy_Callback = QModelIndex (*)(const QPdfSearchModel*, const QModelIndex&);
    using QPdfSearchModel_Match_Callback = QModelIndexList (*)(const QPdfSearchModel*, const QModelIndex&, int, const QVariant&, int, Qt::MatchFlags);
    using QPdfSearchModel_Span_Callback = QSize (*)(const QPdfSearchModel*, const QModelIndex&);
    using QPdfSearchModel_MultiData_Callback = void (*)(const QPdfSearchModel*, const QModelIndex&, QModelRoleDataSpan);
    using QPdfSearchModel_Submit_Callback = bool (*)();
    using QPdfSearchModel_Revert_Callback = void (*)();
    using QPdfSearchModel_ResetInternalData_Callback = void (*)();
    using QPdfSearchModel_Event_Callback = bool (*)(QPdfSearchModel*, QEvent*);
    using QPdfSearchModel_EventFilter_Callback = bool (*)(QPdfSearchModel*, QObject*, QEvent*);
    using QPdfSearchModel_ChildEvent_Callback = void (*)(QPdfSearchModel*, QChildEvent*);
    using QPdfSearchModel_CustomEvent_Callback = void (*)(QPdfSearchModel*, QEvent*);
    using QPdfSearchModel_ConnectNotify_Callback = void (*)(QPdfSearchModel*, const QMetaMethod&);
    using QPdfSearchModel_DisconnectNotify_Callback = void (*)(QPdfSearchModel*, const QMetaMethod&);
    using QPdfSearchModel_UpdatePage_Callback = void (*)(QPdfSearchModel*, int);
    using QPdfSearchModel_CreateIndex_Callback = QModelIndex (*)(const QPdfSearchModel*, int, int);
    using QPdfSearchModel_EncodeData_Callback = void (*)(const QPdfSearchModel*, const QModelIndexList&, QDataStream&);
    using QPdfSearchModel_DecodeData_Callback = bool (*)(QPdfSearchModel*, int, int, const QModelIndex&, QDataStream&);
    using QPdfSearchModel_BeginInsertRows_Callback = void (*)(QPdfSearchModel*, const QModelIndex&, int, int);
    using QPdfSearchModel_EndInsertRows_Callback = void (*)();
    using QPdfSearchModel_BeginRemoveRows_Callback = void (*)(QPdfSearchModel*, const QModelIndex&, int, int);
    using QPdfSearchModel_EndRemoveRows_Callback = void (*)();
    using QPdfSearchModel_BeginMoveRows_Callback = bool (*)(QPdfSearchModel*, const QModelIndex&, int, int, const QModelIndex&, int);
    using QPdfSearchModel_EndMoveRows_Callback = void (*)();
    using QPdfSearchModel_BeginInsertColumns_Callback = void (*)(QPdfSearchModel*, const QModelIndex&, int, int);
    using QPdfSearchModel_EndInsertColumns_Callback = void (*)();
    using QPdfSearchModel_BeginRemoveColumns_Callback = void (*)(QPdfSearchModel*, const QModelIndex&, int, int);
    using QPdfSearchModel_EndRemoveColumns_Callback = void (*)();
    using QPdfSearchModel_BeginMoveColumns_Callback = bool (*)(QPdfSearchModel*, const QModelIndex&, int, int, const QModelIndex&, int);
    using QPdfSearchModel_EndMoveColumns_Callback = void (*)();
    using QPdfSearchModel_BeginResetModel_Callback = void (*)();
    using QPdfSearchModel_EndResetModel_Callback = void (*)();
    using QPdfSearchModel_ChangePersistentIndex_Callback = void (*)(QPdfSearchModel*, const QModelIndex&, const QModelIndex&);
    using QPdfSearchModel_ChangePersistentIndexList_Callback = void (*)(QPdfSearchModel*, const QModelIndexList&, const QModelIndexList&);
    using QPdfSearchModel_PersistentIndexList_Callback = QModelIndexList (*)();
    using QPdfSearchModel_Sender_Callback = QObject* (*)();
    using QPdfSearchModel_SenderSignalIndex_Callback = int (*)();
    using QPdfSearchModel_Receivers_Callback = int (*)(const QPdfSearchModel*, const char*);
    using QPdfSearchModel_IsSignalConnected_Callback = bool (*)(const QPdfSearchModel*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QPdfSearchModel_Metacall_Callback qpdfsearchmodel_metacall_callback = nullptr;
    QPdfSearchModel_RoleNames_Callback qpdfsearchmodel_rolenames_callback = nullptr;
    QPdfSearchModel_RowCount_Callback qpdfsearchmodel_rowcount_callback = nullptr;
    QPdfSearchModel_Data_Callback qpdfsearchmodel_data_callback = nullptr;
    QPdfSearchModel_TimerEvent_Callback qpdfsearchmodel_timerevent_callback = nullptr;
    QPdfSearchModel_Index_Callback qpdfsearchmodel_index_callback = nullptr;
    QPdfSearchModel_Sibling_Callback qpdfsearchmodel_sibling_callback = nullptr;
    QPdfSearchModel_DropMimeData_Callback qpdfsearchmodel_dropmimedata_callback = nullptr;
    QPdfSearchModel_Flags_Callback qpdfsearchmodel_flags_callback = nullptr;
    QPdfSearchModel_SetData_Callback qpdfsearchmodel_setdata_callback = nullptr;
    QPdfSearchModel_HeaderData_Callback qpdfsearchmodel_headerdata_callback = nullptr;
    QPdfSearchModel_SetHeaderData_Callback qpdfsearchmodel_setheaderdata_callback = nullptr;
    QPdfSearchModel_ItemData_Callback qpdfsearchmodel_itemdata_callback = nullptr;
    QPdfSearchModel_SetItemData_Callback qpdfsearchmodel_setitemdata_callback = nullptr;
    QPdfSearchModel_ClearItemData_Callback qpdfsearchmodel_clearitemdata_callback = nullptr;
    QPdfSearchModel_MimeTypes_Callback qpdfsearchmodel_mimetypes_callback = nullptr;
    QPdfSearchModel_MimeData_Callback qpdfsearchmodel_mimedata_callback = nullptr;
    QPdfSearchModel_CanDropMimeData_Callback qpdfsearchmodel_candropmimedata_callback = nullptr;
    QPdfSearchModel_SupportedDropActions_Callback qpdfsearchmodel_supporteddropactions_callback = nullptr;
    QPdfSearchModel_SupportedDragActions_Callback qpdfsearchmodel_supporteddragactions_callback = nullptr;
    QPdfSearchModel_InsertRows_Callback qpdfsearchmodel_insertrows_callback = nullptr;
    QPdfSearchModel_InsertColumns_Callback qpdfsearchmodel_insertcolumns_callback = nullptr;
    QPdfSearchModel_RemoveRows_Callback qpdfsearchmodel_removerows_callback = nullptr;
    QPdfSearchModel_RemoveColumns_Callback qpdfsearchmodel_removecolumns_callback = nullptr;
    QPdfSearchModel_MoveRows_Callback qpdfsearchmodel_moverows_callback = nullptr;
    QPdfSearchModel_MoveColumns_Callback qpdfsearchmodel_movecolumns_callback = nullptr;
    QPdfSearchModel_FetchMore_Callback qpdfsearchmodel_fetchmore_callback = nullptr;
    QPdfSearchModel_CanFetchMore_Callback qpdfsearchmodel_canfetchmore_callback = nullptr;
    QPdfSearchModel_Sort_Callback qpdfsearchmodel_sort_callback = nullptr;
    QPdfSearchModel_Buddy_Callback qpdfsearchmodel_buddy_callback = nullptr;
    QPdfSearchModel_Match_Callback qpdfsearchmodel_match_callback = nullptr;
    QPdfSearchModel_Span_Callback qpdfsearchmodel_span_callback = nullptr;
    QPdfSearchModel_MultiData_Callback qpdfsearchmodel_multidata_callback = nullptr;
    QPdfSearchModel_Submit_Callback qpdfsearchmodel_submit_callback = nullptr;
    QPdfSearchModel_Revert_Callback qpdfsearchmodel_revert_callback = nullptr;
    QPdfSearchModel_ResetInternalData_Callback qpdfsearchmodel_resetinternaldata_callback = nullptr;
    QPdfSearchModel_Event_Callback qpdfsearchmodel_event_callback = nullptr;
    QPdfSearchModel_EventFilter_Callback qpdfsearchmodel_eventfilter_callback = nullptr;
    QPdfSearchModel_ChildEvent_Callback qpdfsearchmodel_childevent_callback = nullptr;
    QPdfSearchModel_CustomEvent_Callback qpdfsearchmodel_customevent_callback = nullptr;
    QPdfSearchModel_ConnectNotify_Callback qpdfsearchmodel_connectnotify_callback = nullptr;
    QPdfSearchModel_DisconnectNotify_Callback qpdfsearchmodel_disconnectnotify_callback = nullptr;
    QPdfSearchModel_UpdatePage_Callback qpdfsearchmodel_updatepage_callback = nullptr;
    QPdfSearchModel_CreateIndex_Callback qpdfsearchmodel_createindex_callback = nullptr;
    QPdfSearchModel_EncodeData_Callback qpdfsearchmodel_encodedata_callback = nullptr;
    QPdfSearchModel_DecodeData_Callback qpdfsearchmodel_decodedata_callback = nullptr;
    QPdfSearchModel_BeginInsertRows_Callback qpdfsearchmodel_begininsertrows_callback = nullptr;
    QPdfSearchModel_EndInsertRows_Callback qpdfsearchmodel_endinsertrows_callback = nullptr;
    QPdfSearchModel_BeginRemoveRows_Callback qpdfsearchmodel_beginremoverows_callback = nullptr;
    QPdfSearchModel_EndRemoveRows_Callback qpdfsearchmodel_endremoverows_callback = nullptr;
    QPdfSearchModel_BeginMoveRows_Callback qpdfsearchmodel_beginmoverows_callback = nullptr;
    QPdfSearchModel_EndMoveRows_Callback qpdfsearchmodel_endmoverows_callback = nullptr;
    QPdfSearchModel_BeginInsertColumns_Callback qpdfsearchmodel_begininsertcolumns_callback = nullptr;
    QPdfSearchModel_EndInsertColumns_Callback qpdfsearchmodel_endinsertcolumns_callback = nullptr;
    QPdfSearchModel_BeginRemoveColumns_Callback qpdfsearchmodel_beginremovecolumns_callback = nullptr;
    QPdfSearchModel_EndRemoveColumns_Callback qpdfsearchmodel_endremovecolumns_callback = nullptr;
    QPdfSearchModel_BeginMoveColumns_Callback qpdfsearchmodel_beginmovecolumns_callback = nullptr;
    QPdfSearchModel_EndMoveColumns_Callback qpdfsearchmodel_endmovecolumns_callback = nullptr;
    QPdfSearchModel_BeginResetModel_Callback qpdfsearchmodel_beginresetmodel_callback = nullptr;
    QPdfSearchModel_EndResetModel_Callback qpdfsearchmodel_endresetmodel_callback = nullptr;
    QPdfSearchModel_ChangePersistentIndex_Callback qpdfsearchmodel_changepersistentindex_callback = nullptr;
    QPdfSearchModel_ChangePersistentIndexList_Callback qpdfsearchmodel_changepersistentindexlist_callback = nullptr;
    QPdfSearchModel_PersistentIndexList_Callback qpdfsearchmodel_persistentindexlist_callback = nullptr;
    QPdfSearchModel_Sender_Callback qpdfsearchmodel_sender_callback = nullptr;
    QPdfSearchModel_SenderSignalIndex_Callback qpdfsearchmodel_sendersignalindex_callback = nullptr;
    QPdfSearchModel_Receivers_Callback qpdfsearchmodel_receivers_callback = nullptr;
    QPdfSearchModel_IsSignalConnected_Callback qpdfsearchmodel_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qpdfsearchmodel_metacall_isbase = false;
    mutable bool qpdfsearchmodel_rolenames_isbase = false;
    mutable bool qpdfsearchmodel_rowcount_isbase = false;
    mutable bool qpdfsearchmodel_data_isbase = false;
    mutable bool qpdfsearchmodel_timerevent_isbase = false;
    mutable bool qpdfsearchmodel_index_isbase = false;
    mutable bool qpdfsearchmodel_sibling_isbase = false;
    mutable bool qpdfsearchmodel_dropmimedata_isbase = false;
    mutable bool qpdfsearchmodel_flags_isbase = false;
    mutable bool qpdfsearchmodel_setdata_isbase = false;
    mutable bool qpdfsearchmodel_headerdata_isbase = false;
    mutable bool qpdfsearchmodel_setheaderdata_isbase = false;
    mutable bool qpdfsearchmodel_itemdata_isbase = false;
    mutable bool qpdfsearchmodel_setitemdata_isbase = false;
    mutable bool qpdfsearchmodel_clearitemdata_isbase = false;
    mutable bool qpdfsearchmodel_mimetypes_isbase = false;
    mutable bool qpdfsearchmodel_mimedata_isbase = false;
    mutable bool qpdfsearchmodel_candropmimedata_isbase = false;
    mutable bool qpdfsearchmodel_supporteddropactions_isbase = false;
    mutable bool qpdfsearchmodel_supporteddragactions_isbase = false;
    mutable bool qpdfsearchmodel_insertrows_isbase = false;
    mutable bool qpdfsearchmodel_insertcolumns_isbase = false;
    mutable bool qpdfsearchmodel_removerows_isbase = false;
    mutable bool qpdfsearchmodel_removecolumns_isbase = false;
    mutable bool qpdfsearchmodel_moverows_isbase = false;
    mutable bool qpdfsearchmodel_movecolumns_isbase = false;
    mutable bool qpdfsearchmodel_fetchmore_isbase = false;
    mutable bool qpdfsearchmodel_canfetchmore_isbase = false;
    mutable bool qpdfsearchmodel_sort_isbase = false;
    mutable bool qpdfsearchmodel_buddy_isbase = false;
    mutable bool qpdfsearchmodel_match_isbase = false;
    mutable bool qpdfsearchmodel_span_isbase = false;
    mutable bool qpdfsearchmodel_multidata_isbase = false;
    mutable bool qpdfsearchmodel_submit_isbase = false;
    mutable bool qpdfsearchmodel_revert_isbase = false;
    mutable bool qpdfsearchmodel_resetinternaldata_isbase = false;
    mutable bool qpdfsearchmodel_event_isbase = false;
    mutable bool qpdfsearchmodel_eventfilter_isbase = false;
    mutable bool qpdfsearchmodel_childevent_isbase = false;
    mutable bool qpdfsearchmodel_customevent_isbase = false;
    mutable bool qpdfsearchmodel_connectnotify_isbase = false;
    mutable bool qpdfsearchmodel_disconnectnotify_isbase = false;
    mutable bool qpdfsearchmodel_updatepage_isbase = false;
    mutable bool qpdfsearchmodel_createindex_isbase = false;
    mutable bool qpdfsearchmodel_encodedata_isbase = false;
    mutable bool qpdfsearchmodel_decodedata_isbase = false;
    mutable bool qpdfsearchmodel_begininsertrows_isbase = false;
    mutable bool qpdfsearchmodel_endinsertrows_isbase = false;
    mutable bool qpdfsearchmodel_beginremoverows_isbase = false;
    mutable bool qpdfsearchmodel_endremoverows_isbase = false;
    mutable bool qpdfsearchmodel_beginmoverows_isbase = false;
    mutable bool qpdfsearchmodel_endmoverows_isbase = false;
    mutable bool qpdfsearchmodel_begininsertcolumns_isbase = false;
    mutable bool qpdfsearchmodel_endinsertcolumns_isbase = false;
    mutable bool qpdfsearchmodel_beginremovecolumns_isbase = false;
    mutable bool qpdfsearchmodel_endremovecolumns_isbase = false;
    mutable bool qpdfsearchmodel_beginmovecolumns_isbase = false;
    mutable bool qpdfsearchmodel_endmovecolumns_isbase = false;
    mutable bool qpdfsearchmodel_beginresetmodel_isbase = false;
    mutable bool qpdfsearchmodel_endresetmodel_isbase = false;
    mutable bool qpdfsearchmodel_changepersistentindex_isbase = false;
    mutable bool qpdfsearchmodel_changepersistentindexlist_isbase = false;
    mutable bool qpdfsearchmodel_persistentindexlist_isbase = false;
    mutable bool qpdfsearchmodel_sender_isbase = false;
    mutable bool qpdfsearchmodel_sendersignalindex_isbase = false;
    mutable bool qpdfsearchmodel_receivers_isbase = false;
    mutable bool qpdfsearchmodel_issignalconnected_isbase = false;

  public:
    VirtualQPdfSearchModel() : QPdfSearchModel(){};
    VirtualQPdfSearchModel(QObject* parent) : QPdfSearchModel(parent){};

    ~VirtualQPdfSearchModel() {
        qpdfsearchmodel_metacall_callback = nullptr;
        qpdfsearchmodel_rolenames_callback = nullptr;
        qpdfsearchmodel_rowcount_callback = nullptr;
        qpdfsearchmodel_data_callback = nullptr;
        qpdfsearchmodel_timerevent_callback = nullptr;
        qpdfsearchmodel_index_callback = nullptr;
        qpdfsearchmodel_sibling_callback = nullptr;
        qpdfsearchmodel_dropmimedata_callback = nullptr;
        qpdfsearchmodel_flags_callback = nullptr;
        qpdfsearchmodel_setdata_callback = nullptr;
        qpdfsearchmodel_headerdata_callback = nullptr;
        qpdfsearchmodel_setheaderdata_callback = nullptr;
        qpdfsearchmodel_itemdata_callback = nullptr;
        qpdfsearchmodel_setitemdata_callback = nullptr;
        qpdfsearchmodel_clearitemdata_callback = nullptr;
        qpdfsearchmodel_mimetypes_callback = nullptr;
        qpdfsearchmodel_mimedata_callback = nullptr;
        qpdfsearchmodel_candropmimedata_callback = nullptr;
        qpdfsearchmodel_supporteddropactions_callback = nullptr;
        qpdfsearchmodel_supporteddragactions_callback = nullptr;
        qpdfsearchmodel_insertrows_callback = nullptr;
        qpdfsearchmodel_insertcolumns_callback = nullptr;
        qpdfsearchmodel_removerows_callback = nullptr;
        qpdfsearchmodel_removecolumns_callback = nullptr;
        qpdfsearchmodel_moverows_callback = nullptr;
        qpdfsearchmodel_movecolumns_callback = nullptr;
        qpdfsearchmodel_fetchmore_callback = nullptr;
        qpdfsearchmodel_canfetchmore_callback = nullptr;
        qpdfsearchmodel_sort_callback = nullptr;
        qpdfsearchmodel_buddy_callback = nullptr;
        qpdfsearchmodel_match_callback = nullptr;
        qpdfsearchmodel_span_callback = nullptr;
        qpdfsearchmodel_multidata_callback = nullptr;
        qpdfsearchmodel_submit_callback = nullptr;
        qpdfsearchmodel_revert_callback = nullptr;
        qpdfsearchmodel_resetinternaldata_callback = nullptr;
        qpdfsearchmodel_event_callback = nullptr;
        qpdfsearchmodel_eventfilter_callback = nullptr;
        qpdfsearchmodel_childevent_callback = nullptr;
        qpdfsearchmodel_customevent_callback = nullptr;
        qpdfsearchmodel_connectnotify_callback = nullptr;
        qpdfsearchmodel_disconnectnotify_callback = nullptr;
        qpdfsearchmodel_updatepage_callback = nullptr;
        qpdfsearchmodel_createindex_callback = nullptr;
        qpdfsearchmodel_encodedata_callback = nullptr;
        qpdfsearchmodel_decodedata_callback = nullptr;
        qpdfsearchmodel_begininsertrows_callback = nullptr;
        qpdfsearchmodel_endinsertrows_callback = nullptr;
        qpdfsearchmodel_beginremoverows_callback = nullptr;
        qpdfsearchmodel_endremoverows_callback = nullptr;
        qpdfsearchmodel_beginmoverows_callback = nullptr;
        qpdfsearchmodel_endmoverows_callback = nullptr;
        qpdfsearchmodel_begininsertcolumns_callback = nullptr;
        qpdfsearchmodel_endinsertcolumns_callback = nullptr;
        qpdfsearchmodel_beginremovecolumns_callback = nullptr;
        qpdfsearchmodel_endremovecolumns_callback = nullptr;
        qpdfsearchmodel_beginmovecolumns_callback = nullptr;
        qpdfsearchmodel_endmovecolumns_callback = nullptr;
        qpdfsearchmodel_beginresetmodel_callback = nullptr;
        qpdfsearchmodel_endresetmodel_callback = nullptr;
        qpdfsearchmodel_changepersistentindex_callback = nullptr;
        qpdfsearchmodel_changepersistentindexlist_callback = nullptr;
        qpdfsearchmodel_persistentindexlist_callback = nullptr;
        qpdfsearchmodel_sender_callback = nullptr;
        qpdfsearchmodel_sendersignalindex_callback = nullptr;
        qpdfsearchmodel_receivers_callback = nullptr;
        qpdfsearchmodel_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQPdfSearchModel_Metacall_Callback(QPdfSearchModel_Metacall_Callback cb) { qpdfsearchmodel_metacall_callback = cb; }
    void setQPdfSearchModel_RoleNames_Callback(QPdfSearchModel_RoleNames_Callback cb) { qpdfsearchmodel_rolenames_callback = cb; }
    void setQPdfSearchModel_RowCount_Callback(QPdfSearchModel_RowCount_Callback cb) { qpdfsearchmodel_rowcount_callback = cb; }
    void setQPdfSearchModel_Data_Callback(QPdfSearchModel_Data_Callback cb) { qpdfsearchmodel_data_callback = cb; }
    void setQPdfSearchModel_TimerEvent_Callback(QPdfSearchModel_TimerEvent_Callback cb) { qpdfsearchmodel_timerevent_callback = cb; }
    void setQPdfSearchModel_Index_Callback(QPdfSearchModel_Index_Callback cb) { qpdfsearchmodel_index_callback = cb; }
    void setQPdfSearchModel_Sibling_Callback(QPdfSearchModel_Sibling_Callback cb) { qpdfsearchmodel_sibling_callback = cb; }
    void setQPdfSearchModel_DropMimeData_Callback(QPdfSearchModel_DropMimeData_Callback cb) { qpdfsearchmodel_dropmimedata_callback = cb; }
    void setQPdfSearchModel_Flags_Callback(QPdfSearchModel_Flags_Callback cb) { qpdfsearchmodel_flags_callback = cb; }
    void setQPdfSearchModel_SetData_Callback(QPdfSearchModel_SetData_Callback cb) { qpdfsearchmodel_setdata_callback = cb; }
    void setQPdfSearchModel_HeaderData_Callback(QPdfSearchModel_HeaderData_Callback cb) { qpdfsearchmodel_headerdata_callback = cb; }
    void setQPdfSearchModel_SetHeaderData_Callback(QPdfSearchModel_SetHeaderData_Callback cb) { qpdfsearchmodel_setheaderdata_callback = cb; }
    void setQPdfSearchModel_ItemData_Callback(QPdfSearchModel_ItemData_Callback cb) { qpdfsearchmodel_itemdata_callback = cb; }
    void setQPdfSearchModel_SetItemData_Callback(QPdfSearchModel_SetItemData_Callback cb) { qpdfsearchmodel_setitemdata_callback = cb; }
    void setQPdfSearchModel_ClearItemData_Callback(QPdfSearchModel_ClearItemData_Callback cb) { qpdfsearchmodel_clearitemdata_callback = cb; }
    void setQPdfSearchModel_MimeTypes_Callback(QPdfSearchModel_MimeTypes_Callback cb) { qpdfsearchmodel_mimetypes_callback = cb; }
    void setQPdfSearchModel_MimeData_Callback(QPdfSearchModel_MimeData_Callback cb) { qpdfsearchmodel_mimedata_callback = cb; }
    void setQPdfSearchModel_CanDropMimeData_Callback(QPdfSearchModel_CanDropMimeData_Callback cb) { qpdfsearchmodel_candropmimedata_callback = cb; }
    void setQPdfSearchModel_SupportedDropActions_Callback(QPdfSearchModel_SupportedDropActions_Callback cb) { qpdfsearchmodel_supporteddropactions_callback = cb; }
    void setQPdfSearchModel_SupportedDragActions_Callback(QPdfSearchModel_SupportedDragActions_Callback cb) { qpdfsearchmodel_supporteddragactions_callback = cb; }
    void setQPdfSearchModel_InsertRows_Callback(QPdfSearchModel_InsertRows_Callback cb) { qpdfsearchmodel_insertrows_callback = cb; }
    void setQPdfSearchModel_InsertColumns_Callback(QPdfSearchModel_InsertColumns_Callback cb) { qpdfsearchmodel_insertcolumns_callback = cb; }
    void setQPdfSearchModel_RemoveRows_Callback(QPdfSearchModel_RemoveRows_Callback cb) { qpdfsearchmodel_removerows_callback = cb; }
    void setQPdfSearchModel_RemoveColumns_Callback(QPdfSearchModel_RemoveColumns_Callback cb) { qpdfsearchmodel_removecolumns_callback = cb; }
    void setQPdfSearchModel_MoveRows_Callback(QPdfSearchModel_MoveRows_Callback cb) { qpdfsearchmodel_moverows_callback = cb; }
    void setQPdfSearchModel_MoveColumns_Callback(QPdfSearchModel_MoveColumns_Callback cb) { qpdfsearchmodel_movecolumns_callback = cb; }
    void setQPdfSearchModel_FetchMore_Callback(QPdfSearchModel_FetchMore_Callback cb) { qpdfsearchmodel_fetchmore_callback = cb; }
    void setQPdfSearchModel_CanFetchMore_Callback(QPdfSearchModel_CanFetchMore_Callback cb) { qpdfsearchmodel_canfetchmore_callback = cb; }
    void setQPdfSearchModel_Sort_Callback(QPdfSearchModel_Sort_Callback cb) { qpdfsearchmodel_sort_callback = cb; }
    void setQPdfSearchModel_Buddy_Callback(QPdfSearchModel_Buddy_Callback cb) { qpdfsearchmodel_buddy_callback = cb; }
    void setQPdfSearchModel_Match_Callback(QPdfSearchModel_Match_Callback cb) { qpdfsearchmodel_match_callback = cb; }
    void setQPdfSearchModel_Span_Callback(QPdfSearchModel_Span_Callback cb) { qpdfsearchmodel_span_callback = cb; }
    void setQPdfSearchModel_MultiData_Callback(QPdfSearchModel_MultiData_Callback cb) { qpdfsearchmodel_multidata_callback = cb; }
    void setQPdfSearchModel_Submit_Callback(QPdfSearchModel_Submit_Callback cb) { qpdfsearchmodel_submit_callback = cb; }
    void setQPdfSearchModel_Revert_Callback(QPdfSearchModel_Revert_Callback cb) { qpdfsearchmodel_revert_callback = cb; }
    void setQPdfSearchModel_ResetInternalData_Callback(QPdfSearchModel_ResetInternalData_Callback cb) { qpdfsearchmodel_resetinternaldata_callback = cb; }
    void setQPdfSearchModel_Event_Callback(QPdfSearchModel_Event_Callback cb) { qpdfsearchmodel_event_callback = cb; }
    void setQPdfSearchModel_EventFilter_Callback(QPdfSearchModel_EventFilter_Callback cb) { qpdfsearchmodel_eventfilter_callback = cb; }
    void setQPdfSearchModel_ChildEvent_Callback(QPdfSearchModel_ChildEvent_Callback cb) { qpdfsearchmodel_childevent_callback = cb; }
    void setQPdfSearchModel_CustomEvent_Callback(QPdfSearchModel_CustomEvent_Callback cb) { qpdfsearchmodel_customevent_callback = cb; }
    void setQPdfSearchModel_ConnectNotify_Callback(QPdfSearchModel_ConnectNotify_Callback cb) { qpdfsearchmodel_connectnotify_callback = cb; }
    void setQPdfSearchModel_DisconnectNotify_Callback(QPdfSearchModel_DisconnectNotify_Callback cb) { qpdfsearchmodel_disconnectnotify_callback = cb; }
    void setQPdfSearchModel_UpdatePage_Callback(QPdfSearchModel_UpdatePage_Callback cb) { qpdfsearchmodel_updatepage_callback = cb; }
    void setQPdfSearchModel_CreateIndex_Callback(QPdfSearchModel_CreateIndex_Callback cb) { qpdfsearchmodel_createindex_callback = cb; }
    void setQPdfSearchModel_EncodeData_Callback(QPdfSearchModel_EncodeData_Callback cb) { qpdfsearchmodel_encodedata_callback = cb; }
    void setQPdfSearchModel_DecodeData_Callback(QPdfSearchModel_DecodeData_Callback cb) { qpdfsearchmodel_decodedata_callback = cb; }
    void setQPdfSearchModel_BeginInsertRows_Callback(QPdfSearchModel_BeginInsertRows_Callback cb) { qpdfsearchmodel_begininsertrows_callback = cb; }
    void setQPdfSearchModel_EndInsertRows_Callback(QPdfSearchModel_EndInsertRows_Callback cb) { qpdfsearchmodel_endinsertrows_callback = cb; }
    void setQPdfSearchModel_BeginRemoveRows_Callback(QPdfSearchModel_BeginRemoveRows_Callback cb) { qpdfsearchmodel_beginremoverows_callback = cb; }
    void setQPdfSearchModel_EndRemoveRows_Callback(QPdfSearchModel_EndRemoveRows_Callback cb) { qpdfsearchmodel_endremoverows_callback = cb; }
    void setQPdfSearchModel_BeginMoveRows_Callback(QPdfSearchModel_BeginMoveRows_Callback cb) { qpdfsearchmodel_beginmoverows_callback = cb; }
    void setQPdfSearchModel_EndMoveRows_Callback(QPdfSearchModel_EndMoveRows_Callback cb) { qpdfsearchmodel_endmoverows_callback = cb; }
    void setQPdfSearchModel_BeginInsertColumns_Callback(QPdfSearchModel_BeginInsertColumns_Callback cb) { qpdfsearchmodel_begininsertcolumns_callback = cb; }
    void setQPdfSearchModel_EndInsertColumns_Callback(QPdfSearchModel_EndInsertColumns_Callback cb) { qpdfsearchmodel_endinsertcolumns_callback = cb; }
    void setQPdfSearchModel_BeginRemoveColumns_Callback(QPdfSearchModel_BeginRemoveColumns_Callback cb) { qpdfsearchmodel_beginremovecolumns_callback = cb; }
    void setQPdfSearchModel_EndRemoveColumns_Callback(QPdfSearchModel_EndRemoveColumns_Callback cb) { qpdfsearchmodel_endremovecolumns_callback = cb; }
    void setQPdfSearchModel_BeginMoveColumns_Callback(QPdfSearchModel_BeginMoveColumns_Callback cb) { qpdfsearchmodel_beginmovecolumns_callback = cb; }
    void setQPdfSearchModel_EndMoveColumns_Callback(QPdfSearchModel_EndMoveColumns_Callback cb) { qpdfsearchmodel_endmovecolumns_callback = cb; }
    void setQPdfSearchModel_BeginResetModel_Callback(QPdfSearchModel_BeginResetModel_Callback cb) { qpdfsearchmodel_beginresetmodel_callback = cb; }
    void setQPdfSearchModel_EndResetModel_Callback(QPdfSearchModel_EndResetModel_Callback cb) { qpdfsearchmodel_endresetmodel_callback = cb; }
    void setQPdfSearchModel_ChangePersistentIndex_Callback(QPdfSearchModel_ChangePersistentIndex_Callback cb) { qpdfsearchmodel_changepersistentindex_callback = cb; }
    void setQPdfSearchModel_ChangePersistentIndexList_Callback(QPdfSearchModel_ChangePersistentIndexList_Callback cb) { qpdfsearchmodel_changepersistentindexlist_callback = cb; }
    void setQPdfSearchModel_PersistentIndexList_Callback(QPdfSearchModel_PersistentIndexList_Callback cb) { qpdfsearchmodel_persistentindexlist_callback = cb; }
    void setQPdfSearchModel_Sender_Callback(QPdfSearchModel_Sender_Callback cb) { qpdfsearchmodel_sender_callback = cb; }
    void setQPdfSearchModel_SenderSignalIndex_Callback(QPdfSearchModel_SenderSignalIndex_Callback cb) { qpdfsearchmodel_sendersignalindex_callback = cb; }
    void setQPdfSearchModel_Receivers_Callback(QPdfSearchModel_Receivers_Callback cb) { qpdfsearchmodel_receivers_callback = cb; }
    void setQPdfSearchModel_IsSignalConnected_Callback(QPdfSearchModel_IsSignalConnected_Callback cb) { qpdfsearchmodel_issignalconnected_callback = cb; }

    // Base flag setters
    void setQPdfSearchModel_Metacall_IsBase(bool value) const { qpdfsearchmodel_metacall_isbase = value; }
    void setQPdfSearchModel_RoleNames_IsBase(bool value) const { qpdfsearchmodel_rolenames_isbase = value; }
    void setQPdfSearchModel_RowCount_IsBase(bool value) const { qpdfsearchmodel_rowcount_isbase = value; }
    void setQPdfSearchModel_Data_IsBase(bool value) const { qpdfsearchmodel_data_isbase = value; }
    void setQPdfSearchModel_TimerEvent_IsBase(bool value) const { qpdfsearchmodel_timerevent_isbase = value; }
    void setQPdfSearchModel_Index_IsBase(bool value) const { qpdfsearchmodel_index_isbase = value; }
    void setQPdfSearchModel_Sibling_IsBase(bool value) const { qpdfsearchmodel_sibling_isbase = value; }
    void setQPdfSearchModel_DropMimeData_IsBase(bool value) const { qpdfsearchmodel_dropmimedata_isbase = value; }
    void setQPdfSearchModel_Flags_IsBase(bool value) const { qpdfsearchmodel_flags_isbase = value; }
    void setQPdfSearchModel_SetData_IsBase(bool value) const { qpdfsearchmodel_setdata_isbase = value; }
    void setQPdfSearchModel_HeaderData_IsBase(bool value) const { qpdfsearchmodel_headerdata_isbase = value; }
    void setQPdfSearchModel_SetHeaderData_IsBase(bool value) const { qpdfsearchmodel_setheaderdata_isbase = value; }
    void setQPdfSearchModel_ItemData_IsBase(bool value) const { qpdfsearchmodel_itemdata_isbase = value; }
    void setQPdfSearchModel_SetItemData_IsBase(bool value) const { qpdfsearchmodel_setitemdata_isbase = value; }
    void setQPdfSearchModel_ClearItemData_IsBase(bool value) const { qpdfsearchmodel_clearitemdata_isbase = value; }
    void setQPdfSearchModel_MimeTypes_IsBase(bool value) const { qpdfsearchmodel_mimetypes_isbase = value; }
    void setQPdfSearchModel_MimeData_IsBase(bool value) const { qpdfsearchmodel_mimedata_isbase = value; }
    void setQPdfSearchModel_CanDropMimeData_IsBase(bool value) const { qpdfsearchmodel_candropmimedata_isbase = value; }
    void setQPdfSearchModel_SupportedDropActions_IsBase(bool value) const { qpdfsearchmodel_supporteddropactions_isbase = value; }
    void setQPdfSearchModel_SupportedDragActions_IsBase(bool value) const { qpdfsearchmodel_supporteddragactions_isbase = value; }
    void setQPdfSearchModel_InsertRows_IsBase(bool value) const { qpdfsearchmodel_insertrows_isbase = value; }
    void setQPdfSearchModel_InsertColumns_IsBase(bool value) const { qpdfsearchmodel_insertcolumns_isbase = value; }
    void setQPdfSearchModel_RemoveRows_IsBase(bool value) const { qpdfsearchmodel_removerows_isbase = value; }
    void setQPdfSearchModel_RemoveColumns_IsBase(bool value) const { qpdfsearchmodel_removecolumns_isbase = value; }
    void setQPdfSearchModel_MoveRows_IsBase(bool value) const { qpdfsearchmodel_moverows_isbase = value; }
    void setQPdfSearchModel_MoveColumns_IsBase(bool value) const { qpdfsearchmodel_movecolumns_isbase = value; }
    void setQPdfSearchModel_FetchMore_IsBase(bool value) const { qpdfsearchmodel_fetchmore_isbase = value; }
    void setQPdfSearchModel_CanFetchMore_IsBase(bool value) const { qpdfsearchmodel_canfetchmore_isbase = value; }
    void setQPdfSearchModel_Sort_IsBase(bool value) const { qpdfsearchmodel_sort_isbase = value; }
    void setQPdfSearchModel_Buddy_IsBase(bool value) const { qpdfsearchmodel_buddy_isbase = value; }
    void setQPdfSearchModel_Match_IsBase(bool value) const { qpdfsearchmodel_match_isbase = value; }
    void setQPdfSearchModel_Span_IsBase(bool value) const { qpdfsearchmodel_span_isbase = value; }
    void setQPdfSearchModel_MultiData_IsBase(bool value) const { qpdfsearchmodel_multidata_isbase = value; }
    void setQPdfSearchModel_Submit_IsBase(bool value) const { qpdfsearchmodel_submit_isbase = value; }
    void setQPdfSearchModel_Revert_IsBase(bool value) const { qpdfsearchmodel_revert_isbase = value; }
    void setQPdfSearchModel_ResetInternalData_IsBase(bool value) const { qpdfsearchmodel_resetinternaldata_isbase = value; }
    void setQPdfSearchModel_Event_IsBase(bool value) const { qpdfsearchmodel_event_isbase = value; }
    void setQPdfSearchModel_EventFilter_IsBase(bool value) const { qpdfsearchmodel_eventfilter_isbase = value; }
    void setQPdfSearchModel_ChildEvent_IsBase(bool value) const { qpdfsearchmodel_childevent_isbase = value; }
    void setQPdfSearchModel_CustomEvent_IsBase(bool value) const { qpdfsearchmodel_customevent_isbase = value; }
    void setQPdfSearchModel_ConnectNotify_IsBase(bool value) const { qpdfsearchmodel_connectnotify_isbase = value; }
    void setQPdfSearchModel_DisconnectNotify_IsBase(bool value) const { qpdfsearchmodel_disconnectnotify_isbase = value; }
    void setQPdfSearchModel_UpdatePage_IsBase(bool value) const { qpdfsearchmodel_updatepage_isbase = value; }
    void setQPdfSearchModel_CreateIndex_IsBase(bool value) const { qpdfsearchmodel_createindex_isbase = value; }
    void setQPdfSearchModel_EncodeData_IsBase(bool value) const { qpdfsearchmodel_encodedata_isbase = value; }
    void setQPdfSearchModel_DecodeData_IsBase(bool value) const { qpdfsearchmodel_decodedata_isbase = value; }
    void setQPdfSearchModel_BeginInsertRows_IsBase(bool value) const { qpdfsearchmodel_begininsertrows_isbase = value; }
    void setQPdfSearchModel_EndInsertRows_IsBase(bool value) const { qpdfsearchmodel_endinsertrows_isbase = value; }
    void setQPdfSearchModel_BeginRemoveRows_IsBase(bool value) const { qpdfsearchmodel_beginremoverows_isbase = value; }
    void setQPdfSearchModel_EndRemoveRows_IsBase(bool value) const { qpdfsearchmodel_endremoverows_isbase = value; }
    void setQPdfSearchModel_BeginMoveRows_IsBase(bool value) const { qpdfsearchmodel_beginmoverows_isbase = value; }
    void setQPdfSearchModel_EndMoveRows_IsBase(bool value) const { qpdfsearchmodel_endmoverows_isbase = value; }
    void setQPdfSearchModel_BeginInsertColumns_IsBase(bool value) const { qpdfsearchmodel_begininsertcolumns_isbase = value; }
    void setQPdfSearchModel_EndInsertColumns_IsBase(bool value) const { qpdfsearchmodel_endinsertcolumns_isbase = value; }
    void setQPdfSearchModel_BeginRemoveColumns_IsBase(bool value) const { qpdfsearchmodel_beginremovecolumns_isbase = value; }
    void setQPdfSearchModel_EndRemoveColumns_IsBase(bool value) const { qpdfsearchmodel_endremovecolumns_isbase = value; }
    void setQPdfSearchModel_BeginMoveColumns_IsBase(bool value) const { qpdfsearchmodel_beginmovecolumns_isbase = value; }
    void setQPdfSearchModel_EndMoveColumns_IsBase(bool value) const { qpdfsearchmodel_endmovecolumns_isbase = value; }
    void setQPdfSearchModel_BeginResetModel_IsBase(bool value) const { qpdfsearchmodel_beginresetmodel_isbase = value; }
    void setQPdfSearchModel_EndResetModel_IsBase(bool value) const { qpdfsearchmodel_endresetmodel_isbase = value; }
    void setQPdfSearchModel_ChangePersistentIndex_IsBase(bool value) const { qpdfsearchmodel_changepersistentindex_isbase = value; }
    void setQPdfSearchModel_ChangePersistentIndexList_IsBase(bool value) const { qpdfsearchmodel_changepersistentindexlist_isbase = value; }
    void setQPdfSearchModel_PersistentIndexList_IsBase(bool value) const { qpdfsearchmodel_persistentindexlist_isbase = value; }
    void setQPdfSearchModel_Sender_IsBase(bool value) const { qpdfsearchmodel_sender_isbase = value; }
    void setQPdfSearchModel_SenderSignalIndex_IsBase(bool value) const { qpdfsearchmodel_sendersignalindex_isbase = value; }
    void setQPdfSearchModel_Receivers_IsBase(bool value) const { qpdfsearchmodel_receivers_isbase = value; }
    void setQPdfSearchModel_IsSignalConnected_IsBase(bool value) const { qpdfsearchmodel_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qpdfsearchmodel_metacall_isbase) {
            qpdfsearchmodel_metacall_isbase = false;
            return QPdfSearchModel::qt_metacall(param1, param2, param3);
        } else if (qpdfsearchmodel_metacall_callback != nullptr) {
            return qpdfsearchmodel_metacall_callback(this, param1, param2, param3);
        } else {
            return QPdfSearchModel::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QHash<int, QByteArray> roleNames() const override {
        if (qpdfsearchmodel_rolenames_isbase) {
            qpdfsearchmodel_rolenames_isbase = false;
            return QPdfSearchModel::roleNames();
        } else if (qpdfsearchmodel_rolenames_callback != nullptr) {
            return qpdfsearchmodel_rolenames_callback();
        } else {
            return QPdfSearchModel::roleNames();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int rowCount(const QModelIndex& parent) const override {
        if (qpdfsearchmodel_rowcount_isbase) {
            qpdfsearchmodel_rowcount_isbase = false;
            return QPdfSearchModel::rowCount(parent);
        } else if (qpdfsearchmodel_rowcount_callback != nullptr) {
            return qpdfsearchmodel_rowcount_callback(this, parent);
        } else {
            return QPdfSearchModel::rowCount(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(const QModelIndex& index, int role) const override {
        if (qpdfsearchmodel_data_isbase) {
            qpdfsearchmodel_data_isbase = false;
            return QPdfSearchModel::data(index, role);
        } else if (qpdfsearchmodel_data_callback != nullptr) {
            return qpdfsearchmodel_data_callback(this, index, role);
        } else {
            return QPdfSearchModel::data(index, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qpdfsearchmodel_timerevent_isbase) {
            qpdfsearchmodel_timerevent_isbase = false;
            QPdfSearchModel::timerEvent(event);
        } else if (qpdfsearchmodel_timerevent_callback != nullptr) {
            qpdfsearchmodel_timerevent_callback(this, event);
        } else {
            QPdfSearchModel::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
        if (qpdfsearchmodel_index_isbase) {
            qpdfsearchmodel_index_isbase = false;
            return QPdfSearchModel::index(row, column, parent);
        } else if (qpdfsearchmodel_index_callback != nullptr) {
            return qpdfsearchmodel_index_callback(this, row, column, parent);
        } else {
            return QPdfSearchModel::index(row, column, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
        if (qpdfsearchmodel_sibling_isbase) {
            qpdfsearchmodel_sibling_isbase = false;
            return QPdfSearchModel::sibling(row, column, idx);
        } else if (qpdfsearchmodel_sibling_callback != nullptr) {
            return qpdfsearchmodel_sibling_callback(this, row, column, idx);
        } else {
            return QPdfSearchModel::sibling(row, column, idx);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
        if (qpdfsearchmodel_dropmimedata_isbase) {
            qpdfsearchmodel_dropmimedata_isbase = false;
            return QPdfSearchModel::dropMimeData(data, action, row, column, parent);
        } else if (qpdfsearchmodel_dropmimedata_callback != nullptr) {
            return qpdfsearchmodel_dropmimedata_callback(this, data, action, row, column, parent);
        } else {
            return QPdfSearchModel::dropMimeData(data, action, row, column, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
        if (qpdfsearchmodel_flags_isbase) {
            qpdfsearchmodel_flags_isbase = false;
            return QPdfSearchModel::flags(index);
        } else if (qpdfsearchmodel_flags_callback != nullptr) {
            return qpdfsearchmodel_flags_callback(this, index);
        } else {
            return QPdfSearchModel::flags(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
        if (qpdfsearchmodel_setdata_isbase) {
            qpdfsearchmodel_setdata_isbase = false;
            return QPdfSearchModel::setData(index, value, role);
        } else if (qpdfsearchmodel_setdata_callback != nullptr) {
            return qpdfsearchmodel_setdata_callback(this, index, value, role);
        } else {
            return QPdfSearchModel::setData(index, value, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
        if (qpdfsearchmodel_headerdata_isbase) {
            qpdfsearchmodel_headerdata_isbase = false;
            return QPdfSearchModel::headerData(section, orientation, role);
        } else if (qpdfsearchmodel_headerdata_callback != nullptr) {
            return qpdfsearchmodel_headerdata_callback(this, section, orientation, role);
        } else {
            return QPdfSearchModel::headerData(section, orientation, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
        if (qpdfsearchmodel_setheaderdata_isbase) {
            qpdfsearchmodel_setheaderdata_isbase = false;
            return QPdfSearchModel::setHeaderData(section, orientation, value, role);
        } else if (qpdfsearchmodel_setheaderdata_callback != nullptr) {
            return qpdfsearchmodel_setheaderdata_callback(this, section, orientation, value, role);
        } else {
            return QPdfSearchModel::setHeaderData(section, orientation, value, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
        if (qpdfsearchmodel_itemdata_isbase) {
            qpdfsearchmodel_itemdata_isbase = false;
            return QPdfSearchModel::itemData(index);
        } else if (qpdfsearchmodel_itemdata_callback != nullptr) {
            return qpdfsearchmodel_itemdata_callback(this, index);
        } else {
            return QPdfSearchModel::itemData(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
        if (qpdfsearchmodel_setitemdata_isbase) {
            qpdfsearchmodel_setitemdata_isbase = false;
            return QPdfSearchModel::setItemData(index, roles);
        } else if (qpdfsearchmodel_setitemdata_callback != nullptr) {
            return qpdfsearchmodel_setitemdata_callback(this, index, roles);
        } else {
            return QPdfSearchModel::setItemData(index, roles);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool clearItemData(const QModelIndex& index) override {
        if (qpdfsearchmodel_clearitemdata_isbase) {
            qpdfsearchmodel_clearitemdata_isbase = false;
            return QPdfSearchModel::clearItemData(index);
        } else if (qpdfsearchmodel_clearitemdata_callback != nullptr) {
            return qpdfsearchmodel_clearitemdata_callback(this, index);
        } else {
            return QPdfSearchModel::clearItemData(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QStringList mimeTypes() const override {
        if (qpdfsearchmodel_mimetypes_isbase) {
            qpdfsearchmodel_mimetypes_isbase = false;
            return QPdfSearchModel::mimeTypes();
        } else if (qpdfsearchmodel_mimetypes_callback != nullptr) {
            return qpdfsearchmodel_mimetypes_callback();
        } else {
            return QPdfSearchModel::mimeTypes();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* mimeData(const QModelIndexList& indexes) const override {
        if (qpdfsearchmodel_mimedata_isbase) {
            qpdfsearchmodel_mimedata_isbase = false;
            return QPdfSearchModel::mimeData(indexes);
        } else if (qpdfsearchmodel_mimedata_callback != nullptr) {
            return qpdfsearchmodel_mimedata_callback(this, indexes);
        } else {
            return QPdfSearchModel::mimeData(indexes);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
        if (qpdfsearchmodel_candropmimedata_isbase) {
            qpdfsearchmodel_candropmimedata_isbase = false;
            return QPdfSearchModel::canDropMimeData(data, action, row, column, parent);
        } else if (qpdfsearchmodel_candropmimedata_callback != nullptr) {
            return qpdfsearchmodel_candropmimedata_callback(this, data, action, row, column, parent);
        } else {
            return QPdfSearchModel::canDropMimeData(data, action, row, column, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (qpdfsearchmodel_supporteddropactions_isbase) {
            qpdfsearchmodel_supporteddropactions_isbase = false;
            return QPdfSearchModel::supportedDropActions();
        } else if (qpdfsearchmodel_supporteddropactions_callback != nullptr) {
            return qpdfsearchmodel_supporteddropactions_callback();
        } else {
            return QPdfSearchModel::supportedDropActions();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDragActions() const override {
        if (qpdfsearchmodel_supporteddragactions_isbase) {
            qpdfsearchmodel_supporteddragactions_isbase = false;
            return QPdfSearchModel::supportedDragActions();
        } else if (qpdfsearchmodel_supporteddragactions_callback != nullptr) {
            return qpdfsearchmodel_supporteddragactions_callback();
        } else {
            return QPdfSearchModel::supportedDragActions();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
        if (qpdfsearchmodel_insertrows_isbase) {
            qpdfsearchmodel_insertrows_isbase = false;
            return QPdfSearchModel::insertRows(row, count, parent);
        } else if (qpdfsearchmodel_insertrows_callback != nullptr) {
            return qpdfsearchmodel_insertrows_callback(this, row, count, parent);
        } else {
            return QPdfSearchModel::insertRows(row, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
        if (qpdfsearchmodel_insertcolumns_isbase) {
            qpdfsearchmodel_insertcolumns_isbase = false;
            return QPdfSearchModel::insertColumns(column, count, parent);
        } else if (qpdfsearchmodel_insertcolumns_callback != nullptr) {
            return qpdfsearchmodel_insertcolumns_callback(this, column, count, parent);
        } else {
            return QPdfSearchModel::insertColumns(column, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
        if (qpdfsearchmodel_removerows_isbase) {
            qpdfsearchmodel_removerows_isbase = false;
            return QPdfSearchModel::removeRows(row, count, parent);
        } else if (qpdfsearchmodel_removerows_callback != nullptr) {
            return qpdfsearchmodel_removerows_callback(this, row, count, parent);
        } else {
            return QPdfSearchModel::removeRows(row, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
        if (qpdfsearchmodel_removecolumns_isbase) {
            qpdfsearchmodel_removecolumns_isbase = false;
            return QPdfSearchModel::removeColumns(column, count, parent);
        } else if (qpdfsearchmodel_removecolumns_callback != nullptr) {
            return qpdfsearchmodel_removecolumns_callback(this, column, count, parent);
        } else {
            return QPdfSearchModel::removeColumns(column, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (qpdfsearchmodel_moverows_isbase) {
            qpdfsearchmodel_moverows_isbase = false;
            return QPdfSearchModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
        } else if (qpdfsearchmodel_moverows_callback != nullptr) {
            return qpdfsearchmodel_moverows_callback(this, sourceParent, sourceRow, count, destinationParent, destinationChild);
        } else {
            return QPdfSearchModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (qpdfsearchmodel_movecolumns_isbase) {
            qpdfsearchmodel_movecolumns_isbase = false;
            return QPdfSearchModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
        } else if (qpdfsearchmodel_movecolumns_callback != nullptr) {
            return qpdfsearchmodel_movecolumns_callback(this, sourceParent, sourceColumn, count, destinationParent, destinationChild);
        } else {
            return QPdfSearchModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void fetchMore(const QModelIndex& parent) override {
        if (qpdfsearchmodel_fetchmore_isbase) {
            qpdfsearchmodel_fetchmore_isbase = false;
            QPdfSearchModel::fetchMore(parent);
        } else if (qpdfsearchmodel_fetchmore_callback != nullptr) {
            qpdfsearchmodel_fetchmore_callback(this, parent);
        } else {
            QPdfSearchModel::fetchMore(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canFetchMore(const QModelIndex& parent) const override {
        if (qpdfsearchmodel_canfetchmore_isbase) {
            qpdfsearchmodel_canfetchmore_isbase = false;
            return QPdfSearchModel::canFetchMore(parent);
        } else if (qpdfsearchmodel_canfetchmore_callback != nullptr) {
            return qpdfsearchmodel_canfetchmore_callback(this, parent);
        } else {
            return QPdfSearchModel::canFetchMore(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void sort(int column, Qt::SortOrder order) override {
        if (qpdfsearchmodel_sort_isbase) {
            qpdfsearchmodel_sort_isbase = false;
            QPdfSearchModel::sort(column, order);
        } else if (qpdfsearchmodel_sort_callback != nullptr) {
            qpdfsearchmodel_sort_callback(this, column, order);
        } else {
            QPdfSearchModel::sort(column, order);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex buddy(const QModelIndex& index) const override {
        if (qpdfsearchmodel_buddy_isbase) {
            qpdfsearchmodel_buddy_isbase = false;
            return QPdfSearchModel::buddy(index);
        } else if (qpdfsearchmodel_buddy_callback != nullptr) {
            return qpdfsearchmodel_buddy_callback(this, index);
        } else {
            return QPdfSearchModel::buddy(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndexList match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
        if (qpdfsearchmodel_match_isbase) {
            qpdfsearchmodel_match_isbase = false;
            return QPdfSearchModel::match(start, role, value, hits, flags);
        } else if (qpdfsearchmodel_match_callback != nullptr) {
            return qpdfsearchmodel_match_callback(this, start, role, value, hits, flags);
        } else {
            return QPdfSearchModel::match(start, role, value, hits, flags);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize span(const QModelIndex& index) const override {
        if (qpdfsearchmodel_span_isbase) {
            qpdfsearchmodel_span_isbase = false;
            return QPdfSearchModel::span(index);
        } else if (qpdfsearchmodel_span_callback != nullptr) {
            return qpdfsearchmodel_span_callback(this, index);
        } else {
            return QPdfSearchModel::span(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
        if (qpdfsearchmodel_multidata_isbase) {
            qpdfsearchmodel_multidata_isbase = false;
            QPdfSearchModel::multiData(index, roleDataSpan);
        } else if (qpdfsearchmodel_multidata_callback != nullptr) {
            qpdfsearchmodel_multidata_callback(this, index, roleDataSpan);
        } else {
            QPdfSearchModel::multiData(index, roleDataSpan);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool submit() override {
        if (qpdfsearchmodel_submit_isbase) {
            qpdfsearchmodel_submit_isbase = false;
            return QPdfSearchModel::submit();
        } else if (qpdfsearchmodel_submit_callback != nullptr) {
            return qpdfsearchmodel_submit_callback();
        } else {
            return QPdfSearchModel::submit();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void revert() override {
        if (qpdfsearchmodel_revert_isbase) {
            qpdfsearchmodel_revert_isbase = false;
            QPdfSearchModel::revert();
        } else if (qpdfsearchmodel_revert_callback != nullptr) {
            qpdfsearchmodel_revert_callback();
        } else {
            QPdfSearchModel::revert();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetInternalData() override {
        if (qpdfsearchmodel_resetinternaldata_isbase) {
            qpdfsearchmodel_resetinternaldata_isbase = false;
            QPdfSearchModel::resetInternalData();
        } else if (qpdfsearchmodel_resetinternaldata_callback != nullptr) {
            qpdfsearchmodel_resetinternaldata_callback();
        } else {
            QPdfSearchModel::resetInternalData();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qpdfsearchmodel_event_isbase) {
            qpdfsearchmodel_event_isbase = false;
            return QPdfSearchModel::event(event);
        } else if (qpdfsearchmodel_event_callback != nullptr) {
            return qpdfsearchmodel_event_callback(this, event);
        } else {
            return QPdfSearchModel::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qpdfsearchmodel_eventfilter_isbase) {
            qpdfsearchmodel_eventfilter_isbase = false;
            return QPdfSearchModel::eventFilter(watched, event);
        } else if (qpdfsearchmodel_eventfilter_callback != nullptr) {
            return qpdfsearchmodel_eventfilter_callback(this, watched, event);
        } else {
            return QPdfSearchModel::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qpdfsearchmodel_childevent_isbase) {
            qpdfsearchmodel_childevent_isbase = false;
            QPdfSearchModel::childEvent(event);
        } else if (qpdfsearchmodel_childevent_callback != nullptr) {
            qpdfsearchmodel_childevent_callback(this, event);
        } else {
            QPdfSearchModel::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qpdfsearchmodel_customevent_isbase) {
            qpdfsearchmodel_customevent_isbase = false;
            QPdfSearchModel::customEvent(event);
        } else if (qpdfsearchmodel_customevent_callback != nullptr) {
            qpdfsearchmodel_customevent_callback(this, event);
        } else {
            QPdfSearchModel::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qpdfsearchmodel_connectnotify_isbase) {
            qpdfsearchmodel_connectnotify_isbase = false;
            QPdfSearchModel::connectNotify(signal);
        } else if (qpdfsearchmodel_connectnotify_callback != nullptr) {
            qpdfsearchmodel_connectnotify_callback(this, signal);
        } else {
            QPdfSearchModel::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qpdfsearchmodel_disconnectnotify_isbase) {
            qpdfsearchmodel_disconnectnotify_isbase = false;
            QPdfSearchModel::disconnectNotify(signal);
        } else if (qpdfsearchmodel_disconnectnotify_callback != nullptr) {
            qpdfsearchmodel_disconnectnotify_callback(this, signal);
        } else {
            QPdfSearchModel::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updatePage(int page) {
        if (qpdfsearchmodel_updatepage_isbase) {
            qpdfsearchmodel_updatepage_isbase = false;
            QPdfSearchModel::updatePage(page);
        } else if (qpdfsearchmodel_updatepage_callback != nullptr) {
            qpdfsearchmodel_updatepage_callback(this, page);
        } else {
            QPdfSearchModel::updatePage(page);
        }
    }

    // Virtual method for C ABI access and custom callback
    QModelIndex createIndex(int row, int column) const {
        if (qpdfsearchmodel_createindex_isbase) {
            qpdfsearchmodel_createindex_isbase = false;
            return QPdfSearchModel::createIndex(row, column);
        } else if (qpdfsearchmodel_createindex_callback != nullptr) {
            return qpdfsearchmodel_createindex_callback(this, row, column);
        } else {
            return QPdfSearchModel::createIndex(row, column);
        }
    }

    // Virtual method for C ABI access and custom callback
    void encodeData(const QModelIndexList& indexes, QDataStream& stream) const {
        if (qpdfsearchmodel_encodedata_isbase) {
            qpdfsearchmodel_encodedata_isbase = false;
            QPdfSearchModel::encodeData(indexes, stream);
        } else if (qpdfsearchmodel_encodedata_callback != nullptr) {
            qpdfsearchmodel_encodedata_callback(this, indexes, stream);
        } else {
            QPdfSearchModel::encodeData(indexes, stream);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool decodeData(int row, int column, const QModelIndex& parent, QDataStream& stream) {
        if (qpdfsearchmodel_decodedata_isbase) {
            qpdfsearchmodel_decodedata_isbase = false;
            return QPdfSearchModel::decodeData(row, column, parent, stream);
        } else if (qpdfsearchmodel_decodedata_callback != nullptr) {
            return qpdfsearchmodel_decodedata_callback(this, row, column, parent, stream);
        } else {
            return QPdfSearchModel::decodeData(row, column, parent, stream);
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertRows(const QModelIndex& parent, int first, int last) {
        if (qpdfsearchmodel_begininsertrows_isbase) {
            qpdfsearchmodel_begininsertrows_isbase = false;
            QPdfSearchModel::beginInsertRows(parent, first, last);
        } else if (qpdfsearchmodel_begininsertrows_callback != nullptr) {
            qpdfsearchmodel_begininsertrows_callback(this, parent, first, last);
        } else {
            QPdfSearchModel::beginInsertRows(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endInsertRows() {
        if (qpdfsearchmodel_endinsertrows_isbase) {
            qpdfsearchmodel_endinsertrows_isbase = false;
            QPdfSearchModel::endInsertRows();
        } else if (qpdfsearchmodel_endinsertrows_callback != nullptr) {
            qpdfsearchmodel_endinsertrows_callback();
        } else {
            QPdfSearchModel::endInsertRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveRows(const QModelIndex& parent, int first, int last) {
        if (qpdfsearchmodel_beginremoverows_isbase) {
            qpdfsearchmodel_beginremoverows_isbase = false;
            QPdfSearchModel::beginRemoveRows(parent, first, last);
        } else if (qpdfsearchmodel_beginremoverows_callback != nullptr) {
            qpdfsearchmodel_beginremoverows_callback(this, parent, first, last);
        } else {
            QPdfSearchModel::beginRemoveRows(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveRows() {
        if (qpdfsearchmodel_endremoverows_isbase) {
            qpdfsearchmodel_endremoverows_isbase = false;
            QPdfSearchModel::endRemoveRows();
        } else if (qpdfsearchmodel_endremoverows_callback != nullptr) {
            qpdfsearchmodel_endremoverows_callback();
        } else {
            QPdfSearchModel::endRemoveRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveRows(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationRow) {
        if (qpdfsearchmodel_beginmoverows_isbase) {
            qpdfsearchmodel_beginmoverows_isbase = false;
            return QPdfSearchModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
        } else if (qpdfsearchmodel_beginmoverows_callback != nullptr) {
            return qpdfsearchmodel_beginmoverows_callback(this, sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
        } else {
            return QPdfSearchModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endMoveRows() {
        if (qpdfsearchmodel_endmoverows_isbase) {
            qpdfsearchmodel_endmoverows_isbase = false;
            QPdfSearchModel::endMoveRows();
        } else if (qpdfsearchmodel_endmoverows_callback != nullptr) {
            qpdfsearchmodel_endmoverows_callback();
        } else {
            QPdfSearchModel::endMoveRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertColumns(const QModelIndex& parent, int first, int last) {
        if (qpdfsearchmodel_begininsertcolumns_isbase) {
            qpdfsearchmodel_begininsertcolumns_isbase = false;
            QPdfSearchModel::beginInsertColumns(parent, first, last);
        } else if (qpdfsearchmodel_begininsertcolumns_callback != nullptr) {
            qpdfsearchmodel_begininsertcolumns_callback(this, parent, first, last);
        } else {
            QPdfSearchModel::beginInsertColumns(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endInsertColumns() {
        if (qpdfsearchmodel_endinsertcolumns_isbase) {
            qpdfsearchmodel_endinsertcolumns_isbase = false;
            QPdfSearchModel::endInsertColumns();
        } else if (qpdfsearchmodel_endinsertcolumns_callback != nullptr) {
            qpdfsearchmodel_endinsertcolumns_callback();
        } else {
            QPdfSearchModel::endInsertColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveColumns(const QModelIndex& parent, int first, int last) {
        if (qpdfsearchmodel_beginremovecolumns_isbase) {
            qpdfsearchmodel_beginremovecolumns_isbase = false;
            QPdfSearchModel::beginRemoveColumns(parent, first, last);
        } else if (qpdfsearchmodel_beginremovecolumns_callback != nullptr) {
            qpdfsearchmodel_beginremovecolumns_callback(this, parent, first, last);
        } else {
            QPdfSearchModel::beginRemoveColumns(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveColumns() {
        if (qpdfsearchmodel_endremovecolumns_isbase) {
            qpdfsearchmodel_endremovecolumns_isbase = false;
            QPdfSearchModel::endRemoveColumns();
        } else if (qpdfsearchmodel_endremovecolumns_callback != nullptr) {
            qpdfsearchmodel_endremovecolumns_callback();
        } else {
            QPdfSearchModel::endRemoveColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveColumns(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationColumn) {
        if (qpdfsearchmodel_beginmovecolumns_isbase) {
            qpdfsearchmodel_beginmovecolumns_isbase = false;
            return QPdfSearchModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
        } else if (qpdfsearchmodel_beginmovecolumns_callback != nullptr) {
            return qpdfsearchmodel_beginmovecolumns_callback(this, sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
        } else {
            return QPdfSearchModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endMoveColumns() {
        if (qpdfsearchmodel_endmovecolumns_isbase) {
            qpdfsearchmodel_endmovecolumns_isbase = false;
            QPdfSearchModel::endMoveColumns();
        } else if (qpdfsearchmodel_endmovecolumns_callback != nullptr) {
            qpdfsearchmodel_endmovecolumns_callback();
        } else {
            QPdfSearchModel::endMoveColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginResetModel() {
        if (qpdfsearchmodel_beginresetmodel_isbase) {
            qpdfsearchmodel_beginresetmodel_isbase = false;
            QPdfSearchModel::beginResetModel();
        } else if (qpdfsearchmodel_beginresetmodel_callback != nullptr) {
            qpdfsearchmodel_beginresetmodel_callback();
        } else {
            QPdfSearchModel::beginResetModel();
        }
    }

    // Virtual method for C ABI access and custom callback
    void endResetModel() {
        if (qpdfsearchmodel_endresetmodel_isbase) {
            qpdfsearchmodel_endresetmodel_isbase = false;
            QPdfSearchModel::endResetModel();
        } else if (qpdfsearchmodel_endresetmodel_callback != nullptr) {
            qpdfsearchmodel_endresetmodel_callback();
        } else {
            QPdfSearchModel::endResetModel();
        }
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndex(const QModelIndex& from, const QModelIndex& to) {
        if (qpdfsearchmodel_changepersistentindex_isbase) {
            qpdfsearchmodel_changepersistentindex_isbase = false;
            QPdfSearchModel::changePersistentIndex(from, to);
        } else if (qpdfsearchmodel_changepersistentindex_callback != nullptr) {
            qpdfsearchmodel_changepersistentindex_callback(this, from, to);
        } else {
            QPdfSearchModel::changePersistentIndex(from, to);
        }
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndexList(const QModelIndexList& from, const QModelIndexList& to) {
        if (qpdfsearchmodel_changepersistentindexlist_isbase) {
            qpdfsearchmodel_changepersistentindexlist_isbase = false;
            QPdfSearchModel::changePersistentIndexList(from, to);
        } else if (qpdfsearchmodel_changepersistentindexlist_callback != nullptr) {
            qpdfsearchmodel_changepersistentindexlist_callback(this, from, to);
        } else {
            QPdfSearchModel::changePersistentIndexList(from, to);
        }
    }

    // Virtual method for C ABI access and custom callback
    QModelIndexList persistentIndexList() const {
        if (qpdfsearchmodel_persistentindexlist_isbase) {
            qpdfsearchmodel_persistentindexlist_isbase = false;
            return QPdfSearchModel::persistentIndexList();
        } else if (qpdfsearchmodel_persistentindexlist_callback != nullptr) {
            return qpdfsearchmodel_persistentindexlist_callback();
        } else {
            return QPdfSearchModel::persistentIndexList();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qpdfsearchmodel_sender_isbase) {
            qpdfsearchmodel_sender_isbase = false;
            return QPdfSearchModel::sender();
        } else if (qpdfsearchmodel_sender_callback != nullptr) {
            return qpdfsearchmodel_sender_callback();
        } else {
            return QPdfSearchModel::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qpdfsearchmodel_sendersignalindex_isbase) {
            qpdfsearchmodel_sendersignalindex_isbase = false;
            return QPdfSearchModel::senderSignalIndex();
        } else if (qpdfsearchmodel_sendersignalindex_callback != nullptr) {
            return qpdfsearchmodel_sendersignalindex_callback();
        } else {
            return QPdfSearchModel::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qpdfsearchmodel_receivers_isbase) {
            qpdfsearchmodel_receivers_isbase = false;
            return QPdfSearchModel::receivers(signal);
        } else if (qpdfsearchmodel_receivers_callback != nullptr) {
            return qpdfsearchmodel_receivers_callback(this, signal);
        } else {
            return QPdfSearchModel::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qpdfsearchmodel_issignalconnected_isbase) {
            qpdfsearchmodel_issignalconnected_isbase = false;
            return QPdfSearchModel::isSignalConnected(signal);
        } else if (qpdfsearchmodel_issignalconnected_callback != nullptr) {
            return qpdfsearchmodel_issignalconnected_callback(this, signal);
        } else {
            return QPdfSearchModel::isSignalConnected(signal);
        }
    }
};

#endif
