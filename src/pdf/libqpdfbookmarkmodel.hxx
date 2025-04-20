#pragma once
#ifndef SRC_PDFC_LIBVIRTUALQPDFBOOKMARKMODEL_H
#define SRC_PDFC_LIBVIRTUALQPDFBOOKMARKMODEL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QPdfBookmarkModel so that we can call protected methods
class VirtualQPdfBookmarkModel : public QPdfBookmarkModel {

  public:
    // Virtual class public types (including callbacks)
    using QPdfBookmarkModel_Metacall_Callback = int (*)(QPdfBookmarkModel*, QMetaObject::Call, int, void**);
    using QPdfBookmarkModel_Data_Callback = QVariant (*)(const QPdfBookmarkModel*, const QModelIndex&, int);
    using QPdfBookmarkModel_Index_Callback = QModelIndex (*)(const QPdfBookmarkModel*, int, int, const QModelIndex&);
    using QPdfBookmarkModel_Parent_Callback = QModelIndex (*)(const QPdfBookmarkModel*, const QModelIndex&);
    using QPdfBookmarkModel_RowCount_Callback = int (*)(const QPdfBookmarkModel*, const QModelIndex&);
    using QPdfBookmarkModel_ColumnCount_Callback = int (*)(const QPdfBookmarkModel*, const QModelIndex&);
    using QPdfBookmarkModel_RoleNames_Callback = QHash<int, QByteArray> (*)();
    using QPdfBookmarkModel_Sibling_Callback = QModelIndex (*)(const QPdfBookmarkModel*, int, int, const QModelIndex&);
    using QPdfBookmarkModel_HasChildren_Callback = bool (*)(const QPdfBookmarkModel*, const QModelIndex&);
    using QPdfBookmarkModel_SetData_Callback = bool (*)(QPdfBookmarkModel*, const QModelIndex&, const QVariant&, int);
    using QPdfBookmarkModel_HeaderData_Callback = QVariant (*)(const QPdfBookmarkModel*, int, Qt::Orientation, int);
    using QPdfBookmarkModel_SetHeaderData_Callback = bool (*)(QPdfBookmarkModel*, int, Qt::Orientation, const QVariant&, int);
    using QPdfBookmarkModel_ItemData_Callback = QMap<int, QVariant> (*)(const QPdfBookmarkModel*, const QModelIndex&);
    using QPdfBookmarkModel_SetItemData_Callback = bool (*)(QPdfBookmarkModel*, const QModelIndex&, const QMap<int, QVariant>&);
    using QPdfBookmarkModel_ClearItemData_Callback = bool (*)(QPdfBookmarkModel*, const QModelIndex&);
    using QPdfBookmarkModel_MimeTypes_Callback = QStringList (*)();
    using QPdfBookmarkModel_MimeData_Callback = QMimeData* (*)(const QPdfBookmarkModel*, const QModelIndexList&);
    using QPdfBookmarkModel_CanDropMimeData_Callback = bool (*)(const QPdfBookmarkModel*, const QMimeData*, Qt::DropAction, int, int, const QModelIndex&);
    using QPdfBookmarkModel_DropMimeData_Callback = bool (*)(QPdfBookmarkModel*, const QMimeData*, Qt::DropAction, int, int, const QModelIndex&);
    using QPdfBookmarkModel_SupportedDropActions_Callback = Qt::DropActions (*)();
    using QPdfBookmarkModel_SupportedDragActions_Callback = Qt::DropActions (*)();
    using QPdfBookmarkModel_InsertRows_Callback = bool (*)(QPdfBookmarkModel*, int, int, const QModelIndex&);
    using QPdfBookmarkModel_InsertColumns_Callback = bool (*)(QPdfBookmarkModel*, int, int, const QModelIndex&);
    using QPdfBookmarkModel_RemoveRows_Callback = bool (*)(QPdfBookmarkModel*, int, int, const QModelIndex&);
    using QPdfBookmarkModel_RemoveColumns_Callback = bool (*)(QPdfBookmarkModel*, int, int, const QModelIndex&);
    using QPdfBookmarkModel_MoveRows_Callback = bool (*)(QPdfBookmarkModel*, const QModelIndex&, int, int, const QModelIndex&, int);
    using QPdfBookmarkModel_MoveColumns_Callback = bool (*)(QPdfBookmarkModel*, const QModelIndex&, int, int, const QModelIndex&, int);
    using QPdfBookmarkModel_FetchMore_Callback = void (*)(QPdfBookmarkModel*, const QModelIndex&);
    using QPdfBookmarkModel_CanFetchMore_Callback = bool (*)(const QPdfBookmarkModel*, const QModelIndex&);
    using QPdfBookmarkModel_Flags_Callback = Qt::ItemFlags (*)(const QPdfBookmarkModel*, const QModelIndex&);
    using QPdfBookmarkModel_Sort_Callback = void (*)(QPdfBookmarkModel*, int, Qt::SortOrder);
    using QPdfBookmarkModel_Buddy_Callback = QModelIndex (*)(const QPdfBookmarkModel*, const QModelIndex&);
    using QPdfBookmarkModel_Match_Callback = QModelIndexList (*)(const QPdfBookmarkModel*, const QModelIndex&, int, const QVariant&, int, Qt::MatchFlags);
    using QPdfBookmarkModel_Span_Callback = QSize (*)(const QPdfBookmarkModel*, const QModelIndex&);
    using QPdfBookmarkModel_MultiData_Callback = void (*)(const QPdfBookmarkModel*, const QModelIndex&, QModelRoleDataSpan);
    using QPdfBookmarkModel_Submit_Callback = bool (*)();
    using QPdfBookmarkModel_Revert_Callback = void (*)();
    using QPdfBookmarkModel_ResetInternalData_Callback = void (*)();
    using QPdfBookmarkModel_Event_Callback = bool (*)(QPdfBookmarkModel*, QEvent*);
    using QPdfBookmarkModel_EventFilter_Callback = bool (*)(QPdfBookmarkModel*, QObject*, QEvent*);
    using QPdfBookmarkModel_TimerEvent_Callback = void (*)(QPdfBookmarkModel*, QTimerEvent*);
    using QPdfBookmarkModel_ChildEvent_Callback = void (*)(QPdfBookmarkModel*, QChildEvent*);
    using QPdfBookmarkModel_CustomEvent_Callback = void (*)(QPdfBookmarkModel*, QEvent*);
    using QPdfBookmarkModel_ConnectNotify_Callback = void (*)(QPdfBookmarkModel*, const QMetaMethod&);
    using QPdfBookmarkModel_DisconnectNotify_Callback = void (*)(QPdfBookmarkModel*, const QMetaMethod&);
    using QPdfBookmarkModel_CreateIndex_Callback = QModelIndex (*)(const QPdfBookmarkModel*, int, int);
    using QPdfBookmarkModel_EncodeData_Callback = void (*)(const QPdfBookmarkModel*, const QModelIndexList&, QDataStream&);
    using QPdfBookmarkModel_DecodeData_Callback = bool (*)(QPdfBookmarkModel*, int, int, const QModelIndex&, QDataStream&);
    using QPdfBookmarkModel_BeginInsertRows_Callback = void (*)(QPdfBookmarkModel*, const QModelIndex&, int, int);
    using QPdfBookmarkModel_EndInsertRows_Callback = void (*)();
    using QPdfBookmarkModel_BeginRemoveRows_Callback = void (*)(QPdfBookmarkModel*, const QModelIndex&, int, int);
    using QPdfBookmarkModel_EndRemoveRows_Callback = void (*)();
    using QPdfBookmarkModel_BeginMoveRows_Callback = bool (*)(QPdfBookmarkModel*, const QModelIndex&, int, int, const QModelIndex&, int);
    using QPdfBookmarkModel_EndMoveRows_Callback = void (*)();
    using QPdfBookmarkModel_BeginInsertColumns_Callback = void (*)(QPdfBookmarkModel*, const QModelIndex&, int, int);
    using QPdfBookmarkModel_EndInsertColumns_Callback = void (*)();
    using QPdfBookmarkModel_BeginRemoveColumns_Callback = void (*)(QPdfBookmarkModel*, const QModelIndex&, int, int);
    using QPdfBookmarkModel_EndRemoveColumns_Callback = void (*)();
    using QPdfBookmarkModel_BeginMoveColumns_Callback = bool (*)(QPdfBookmarkModel*, const QModelIndex&, int, int, const QModelIndex&, int);
    using QPdfBookmarkModel_EndMoveColumns_Callback = void (*)();
    using QPdfBookmarkModel_BeginResetModel_Callback = void (*)();
    using QPdfBookmarkModel_EndResetModel_Callback = void (*)();
    using QPdfBookmarkModel_ChangePersistentIndex_Callback = void (*)(QPdfBookmarkModel*, const QModelIndex&, const QModelIndex&);
    using QPdfBookmarkModel_ChangePersistentIndexList_Callback = void (*)(QPdfBookmarkModel*, const QModelIndexList&, const QModelIndexList&);
    using QPdfBookmarkModel_PersistentIndexList_Callback = QModelIndexList (*)();
    using QPdfBookmarkModel_Sender_Callback = QObject* (*)();
    using QPdfBookmarkModel_SenderSignalIndex_Callback = int (*)();
    using QPdfBookmarkModel_Receivers_Callback = int (*)(const QPdfBookmarkModel*, const char*);
    using QPdfBookmarkModel_IsSignalConnected_Callback = bool (*)(const QPdfBookmarkModel*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QPdfBookmarkModel_Metacall_Callback qpdfbookmarkmodel_metacall_callback = nullptr;
    QPdfBookmarkModel_Data_Callback qpdfbookmarkmodel_data_callback = nullptr;
    QPdfBookmarkModel_Index_Callback qpdfbookmarkmodel_index_callback = nullptr;
    QPdfBookmarkModel_Parent_Callback qpdfbookmarkmodel_parent_callback = nullptr;
    QPdfBookmarkModel_RowCount_Callback qpdfbookmarkmodel_rowcount_callback = nullptr;
    QPdfBookmarkModel_ColumnCount_Callback qpdfbookmarkmodel_columncount_callback = nullptr;
    QPdfBookmarkModel_RoleNames_Callback qpdfbookmarkmodel_rolenames_callback = nullptr;
    QPdfBookmarkModel_Sibling_Callback qpdfbookmarkmodel_sibling_callback = nullptr;
    QPdfBookmarkModel_HasChildren_Callback qpdfbookmarkmodel_haschildren_callback = nullptr;
    QPdfBookmarkModel_SetData_Callback qpdfbookmarkmodel_setdata_callback = nullptr;
    QPdfBookmarkModel_HeaderData_Callback qpdfbookmarkmodel_headerdata_callback = nullptr;
    QPdfBookmarkModel_SetHeaderData_Callback qpdfbookmarkmodel_setheaderdata_callback = nullptr;
    QPdfBookmarkModel_ItemData_Callback qpdfbookmarkmodel_itemdata_callback = nullptr;
    QPdfBookmarkModel_SetItemData_Callback qpdfbookmarkmodel_setitemdata_callback = nullptr;
    QPdfBookmarkModel_ClearItemData_Callback qpdfbookmarkmodel_clearitemdata_callback = nullptr;
    QPdfBookmarkModel_MimeTypes_Callback qpdfbookmarkmodel_mimetypes_callback = nullptr;
    QPdfBookmarkModel_MimeData_Callback qpdfbookmarkmodel_mimedata_callback = nullptr;
    QPdfBookmarkModel_CanDropMimeData_Callback qpdfbookmarkmodel_candropmimedata_callback = nullptr;
    QPdfBookmarkModel_DropMimeData_Callback qpdfbookmarkmodel_dropmimedata_callback = nullptr;
    QPdfBookmarkModel_SupportedDropActions_Callback qpdfbookmarkmodel_supporteddropactions_callback = nullptr;
    QPdfBookmarkModel_SupportedDragActions_Callback qpdfbookmarkmodel_supporteddragactions_callback = nullptr;
    QPdfBookmarkModel_InsertRows_Callback qpdfbookmarkmodel_insertrows_callback = nullptr;
    QPdfBookmarkModel_InsertColumns_Callback qpdfbookmarkmodel_insertcolumns_callback = nullptr;
    QPdfBookmarkModel_RemoveRows_Callback qpdfbookmarkmodel_removerows_callback = nullptr;
    QPdfBookmarkModel_RemoveColumns_Callback qpdfbookmarkmodel_removecolumns_callback = nullptr;
    QPdfBookmarkModel_MoveRows_Callback qpdfbookmarkmodel_moverows_callback = nullptr;
    QPdfBookmarkModel_MoveColumns_Callback qpdfbookmarkmodel_movecolumns_callback = nullptr;
    QPdfBookmarkModel_FetchMore_Callback qpdfbookmarkmodel_fetchmore_callback = nullptr;
    QPdfBookmarkModel_CanFetchMore_Callback qpdfbookmarkmodel_canfetchmore_callback = nullptr;
    QPdfBookmarkModel_Flags_Callback qpdfbookmarkmodel_flags_callback = nullptr;
    QPdfBookmarkModel_Sort_Callback qpdfbookmarkmodel_sort_callback = nullptr;
    QPdfBookmarkModel_Buddy_Callback qpdfbookmarkmodel_buddy_callback = nullptr;
    QPdfBookmarkModel_Match_Callback qpdfbookmarkmodel_match_callback = nullptr;
    QPdfBookmarkModel_Span_Callback qpdfbookmarkmodel_span_callback = nullptr;
    QPdfBookmarkModel_MultiData_Callback qpdfbookmarkmodel_multidata_callback = nullptr;
    QPdfBookmarkModel_Submit_Callback qpdfbookmarkmodel_submit_callback = nullptr;
    QPdfBookmarkModel_Revert_Callback qpdfbookmarkmodel_revert_callback = nullptr;
    QPdfBookmarkModel_ResetInternalData_Callback qpdfbookmarkmodel_resetinternaldata_callback = nullptr;
    QPdfBookmarkModel_Event_Callback qpdfbookmarkmodel_event_callback = nullptr;
    QPdfBookmarkModel_EventFilter_Callback qpdfbookmarkmodel_eventfilter_callback = nullptr;
    QPdfBookmarkModel_TimerEvent_Callback qpdfbookmarkmodel_timerevent_callback = nullptr;
    QPdfBookmarkModel_ChildEvent_Callback qpdfbookmarkmodel_childevent_callback = nullptr;
    QPdfBookmarkModel_CustomEvent_Callback qpdfbookmarkmodel_customevent_callback = nullptr;
    QPdfBookmarkModel_ConnectNotify_Callback qpdfbookmarkmodel_connectnotify_callback = nullptr;
    QPdfBookmarkModel_DisconnectNotify_Callback qpdfbookmarkmodel_disconnectnotify_callback = nullptr;
    QPdfBookmarkModel_CreateIndex_Callback qpdfbookmarkmodel_createindex_callback = nullptr;
    QPdfBookmarkModel_EncodeData_Callback qpdfbookmarkmodel_encodedata_callback = nullptr;
    QPdfBookmarkModel_DecodeData_Callback qpdfbookmarkmodel_decodedata_callback = nullptr;
    QPdfBookmarkModel_BeginInsertRows_Callback qpdfbookmarkmodel_begininsertrows_callback = nullptr;
    QPdfBookmarkModel_EndInsertRows_Callback qpdfbookmarkmodel_endinsertrows_callback = nullptr;
    QPdfBookmarkModel_BeginRemoveRows_Callback qpdfbookmarkmodel_beginremoverows_callback = nullptr;
    QPdfBookmarkModel_EndRemoveRows_Callback qpdfbookmarkmodel_endremoverows_callback = nullptr;
    QPdfBookmarkModel_BeginMoveRows_Callback qpdfbookmarkmodel_beginmoverows_callback = nullptr;
    QPdfBookmarkModel_EndMoveRows_Callback qpdfbookmarkmodel_endmoverows_callback = nullptr;
    QPdfBookmarkModel_BeginInsertColumns_Callback qpdfbookmarkmodel_begininsertcolumns_callback = nullptr;
    QPdfBookmarkModel_EndInsertColumns_Callback qpdfbookmarkmodel_endinsertcolumns_callback = nullptr;
    QPdfBookmarkModel_BeginRemoveColumns_Callback qpdfbookmarkmodel_beginremovecolumns_callback = nullptr;
    QPdfBookmarkModel_EndRemoveColumns_Callback qpdfbookmarkmodel_endremovecolumns_callback = nullptr;
    QPdfBookmarkModel_BeginMoveColumns_Callback qpdfbookmarkmodel_beginmovecolumns_callback = nullptr;
    QPdfBookmarkModel_EndMoveColumns_Callback qpdfbookmarkmodel_endmovecolumns_callback = nullptr;
    QPdfBookmarkModel_BeginResetModel_Callback qpdfbookmarkmodel_beginresetmodel_callback = nullptr;
    QPdfBookmarkModel_EndResetModel_Callback qpdfbookmarkmodel_endresetmodel_callback = nullptr;
    QPdfBookmarkModel_ChangePersistentIndex_Callback qpdfbookmarkmodel_changepersistentindex_callback = nullptr;
    QPdfBookmarkModel_ChangePersistentIndexList_Callback qpdfbookmarkmodel_changepersistentindexlist_callback = nullptr;
    QPdfBookmarkModel_PersistentIndexList_Callback qpdfbookmarkmodel_persistentindexlist_callback = nullptr;
    QPdfBookmarkModel_Sender_Callback qpdfbookmarkmodel_sender_callback = nullptr;
    QPdfBookmarkModel_SenderSignalIndex_Callback qpdfbookmarkmodel_sendersignalindex_callback = nullptr;
    QPdfBookmarkModel_Receivers_Callback qpdfbookmarkmodel_receivers_callback = nullptr;
    QPdfBookmarkModel_IsSignalConnected_Callback qpdfbookmarkmodel_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qpdfbookmarkmodel_metacall_isbase = false;
    mutable bool qpdfbookmarkmodel_data_isbase = false;
    mutable bool qpdfbookmarkmodel_index_isbase = false;
    mutable bool qpdfbookmarkmodel_parent_isbase = false;
    mutable bool qpdfbookmarkmodel_rowcount_isbase = false;
    mutable bool qpdfbookmarkmodel_columncount_isbase = false;
    mutable bool qpdfbookmarkmodel_rolenames_isbase = false;
    mutable bool qpdfbookmarkmodel_sibling_isbase = false;
    mutable bool qpdfbookmarkmodel_haschildren_isbase = false;
    mutable bool qpdfbookmarkmodel_setdata_isbase = false;
    mutable bool qpdfbookmarkmodel_headerdata_isbase = false;
    mutable bool qpdfbookmarkmodel_setheaderdata_isbase = false;
    mutable bool qpdfbookmarkmodel_itemdata_isbase = false;
    mutable bool qpdfbookmarkmodel_setitemdata_isbase = false;
    mutable bool qpdfbookmarkmodel_clearitemdata_isbase = false;
    mutable bool qpdfbookmarkmodel_mimetypes_isbase = false;
    mutable bool qpdfbookmarkmodel_mimedata_isbase = false;
    mutable bool qpdfbookmarkmodel_candropmimedata_isbase = false;
    mutable bool qpdfbookmarkmodel_dropmimedata_isbase = false;
    mutable bool qpdfbookmarkmodel_supporteddropactions_isbase = false;
    mutable bool qpdfbookmarkmodel_supporteddragactions_isbase = false;
    mutable bool qpdfbookmarkmodel_insertrows_isbase = false;
    mutable bool qpdfbookmarkmodel_insertcolumns_isbase = false;
    mutable bool qpdfbookmarkmodel_removerows_isbase = false;
    mutable bool qpdfbookmarkmodel_removecolumns_isbase = false;
    mutable bool qpdfbookmarkmodel_moverows_isbase = false;
    mutable bool qpdfbookmarkmodel_movecolumns_isbase = false;
    mutable bool qpdfbookmarkmodel_fetchmore_isbase = false;
    mutable bool qpdfbookmarkmodel_canfetchmore_isbase = false;
    mutable bool qpdfbookmarkmodel_flags_isbase = false;
    mutable bool qpdfbookmarkmodel_sort_isbase = false;
    mutable bool qpdfbookmarkmodel_buddy_isbase = false;
    mutable bool qpdfbookmarkmodel_match_isbase = false;
    mutable bool qpdfbookmarkmodel_span_isbase = false;
    mutable bool qpdfbookmarkmodel_multidata_isbase = false;
    mutable bool qpdfbookmarkmodel_submit_isbase = false;
    mutable bool qpdfbookmarkmodel_revert_isbase = false;
    mutable bool qpdfbookmarkmodel_resetinternaldata_isbase = false;
    mutable bool qpdfbookmarkmodel_event_isbase = false;
    mutable bool qpdfbookmarkmodel_eventfilter_isbase = false;
    mutable bool qpdfbookmarkmodel_timerevent_isbase = false;
    mutable bool qpdfbookmarkmodel_childevent_isbase = false;
    mutable bool qpdfbookmarkmodel_customevent_isbase = false;
    mutable bool qpdfbookmarkmodel_connectnotify_isbase = false;
    mutable bool qpdfbookmarkmodel_disconnectnotify_isbase = false;
    mutable bool qpdfbookmarkmodel_createindex_isbase = false;
    mutable bool qpdfbookmarkmodel_encodedata_isbase = false;
    mutable bool qpdfbookmarkmodel_decodedata_isbase = false;
    mutable bool qpdfbookmarkmodel_begininsertrows_isbase = false;
    mutable bool qpdfbookmarkmodel_endinsertrows_isbase = false;
    mutable bool qpdfbookmarkmodel_beginremoverows_isbase = false;
    mutable bool qpdfbookmarkmodel_endremoverows_isbase = false;
    mutable bool qpdfbookmarkmodel_beginmoverows_isbase = false;
    mutable bool qpdfbookmarkmodel_endmoverows_isbase = false;
    mutable bool qpdfbookmarkmodel_begininsertcolumns_isbase = false;
    mutable bool qpdfbookmarkmodel_endinsertcolumns_isbase = false;
    mutable bool qpdfbookmarkmodel_beginremovecolumns_isbase = false;
    mutable bool qpdfbookmarkmodel_endremovecolumns_isbase = false;
    mutable bool qpdfbookmarkmodel_beginmovecolumns_isbase = false;
    mutable bool qpdfbookmarkmodel_endmovecolumns_isbase = false;
    mutable bool qpdfbookmarkmodel_beginresetmodel_isbase = false;
    mutable bool qpdfbookmarkmodel_endresetmodel_isbase = false;
    mutable bool qpdfbookmarkmodel_changepersistentindex_isbase = false;
    mutable bool qpdfbookmarkmodel_changepersistentindexlist_isbase = false;
    mutable bool qpdfbookmarkmodel_persistentindexlist_isbase = false;
    mutable bool qpdfbookmarkmodel_sender_isbase = false;
    mutable bool qpdfbookmarkmodel_sendersignalindex_isbase = false;
    mutable bool qpdfbookmarkmodel_receivers_isbase = false;
    mutable bool qpdfbookmarkmodel_issignalconnected_isbase = false;

  public:
    VirtualQPdfBookmarkModel() : QPdfBookmarkModel(){};
    VirtualQPdfBookmarkModel(QObject* parent) : QPdfBookmarkModel(parent){};

    ~VirtualQPdfBookmarkModel() {
        qpdfbookmarkmodel_metacall_callback = nullptr;
        qpdfbookmarkmodel_data_callback = nullptr;
        qpdfbookmarkmodel_index_callback = nullptr;
        qpdfbookmarkmodel_parent_callback = nullptr;
        qpdfbookmarkmodel_rowcount_callback = nullptr;
        qpdfbookmarkmodel_columncount_callback = nullptr;
        qpdfbookmarkmodel_rolenames_callback = nullptr;
        qpdfbookmarkmodel_sibling_callback = nullptr;
        qpdfbookmarkmodel_haschildren_callback = nullptr;
        qpdfbookmarkmodel_setdata_callback = nullptr;
        qpdfbookmarkmodel_headerdata_callback = nullptr;
        qpdfbookmarkmodel_setheaderdata_callback = nullptr;
        qpdfbookmarkmodel_itemdata_callback = nullptr;
        qpdfbookmarkmodel_setitemdata_callback = nullptr;
        qpdfbookmarkmodel_clearitemdata_callback = nullptr;
        qpdfbookmarkmodel_mimetypes_callback = nullptr;
        qpdfbookmarkmodel_mimedata_callback = nullptr;
        qpdfbookmarkmodel_candropmimedata_callback = nullptr;
        qpdfbookmarkmodel_dropmimedata_callback = nullptr;
        qpdfbookmarkmodel_supporteddropactions_callback = nullptr;
        qpdfbookmarkmodel_supporteddragactions_callback = nullptr;
        qpdfbookmarkmodel_insertrows_callback = nullptr;
        qpdfbookmarkmodel_insertcolumns_callback = nullptr;
        qpdfbookmarkmodel_removerows_callback = nullptr;
        qpdfbookmarkmodel_removecolumns_callback = nullptr;
        qpdfbookmarkmodel_moverows_callback = nullptr;
        qpdfbookmarkmodel_movecolumns_callback = nullptr;
        qpdfbookmarkmodel_fetchmore_callback = nullptr;
        qpdfbookmarkmodel_canfetchmore_callback = nullptr;
        qpdfbookmarkmodel_flags_callback = nullptr;
        qpdfbookmarkmodel_sort_callback = nullptr;
        qpdfbookmarkmodel_buddy_callback = nullptr;
        qpdfbookmarkmodel_match_callback = nullptr;
        qpdfbookmarkmodel_span_callback = nullptr;
        qpdfbookmarkmodel_multidata_callback = nullptr;
        qpdfbookmarkmodel_submit_callback = nullptr;
        qpdfbookmarkmodel_revert_callback = nullptr;
        qpdfbookmarkmodel_resetinternaldata_callback = nullptr;
        qpdfbookmarkmodel_event_callback = nullptr;
        qpdfbookmarkmodel_eventfilter_callback = nullptr;
        qpdfbookmarkmodel_timerevent_callback = nullptr;
        qpdfbookmarkmodel_childevent_callback = nullptr;
        qpdfbookmarkmodel_customevent_callback = nullptr;
        qpdfbookmarkmodel_connectnotify_callback = nullptr;
        qpdfbookmarkmodel_disconnectnotify_callback = nullptr;
        qpdfbookmarkmodel_createindex_callback = nullptr;
        qpdfbookmarkmodel_encodedata_callback = nullptr;
        qpdfbookmarkmodel_decodedata_callback = nullptr;
        qpdfbookmarkmodel_begininsertrows_callback = nullptr;
        qpdfbookmarkmodel_endinsertrows_callback = nullptr;
        qpdfbookmarkmodel_beginremoverows_callback = nullptr;
        qpdfbookmarkmodel_endremoverows_callback = nullptr;
        qpdfbookmarkmodel_beginmoverows_callback = nullptr;
        qpdfbookmarkmodel_endmoverows_callback = nullptr;
        qpdfbookmarkmodel_begininsertcolumns_callback = nullptr;
        qpdfbookmarkmodel_endinsertcolumns_callback = nullptr;
        qpdfbookmarkmodel_beginremovecolumns_callback = nullptr;
        qpdfbookmarkmodel_endremovecolumns_callback = nullptr;
        qpdfbookmarkmodel_beginmovecolumns_callback = nullptr;
        qpdfbookmarkmodel_endmovecolumns_callback = nullptr;
        qpdfbookmarkmodel_beginresetmodel_callback = nullptr;
        qpdfbookmarkmodel_endresetmodel_callback = nullptr;
        qpdfbookmarkmodel_changepersistentindex_callback = nullptr;
        qpdfbookmarkmodel_changepersistentindexlist_callback = nullptr;
        qpdfbookmarkmodel_persistentindexlist_callback = nullptr;
        qpdfbookmarkmodel_sender_callback = nullptr;
        qpdfbookmarkmodel_sendersignalindex_callback = nullptr;
        qpdfbookmarkmodel_receivers_callback = nullptr;
        qpdfbookmarkmodel_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQPdfBookmarkModel_Metacall_Callback(QPdfBookmarkModel_Metacall_Callback cb) { qpdfbookmarkmodel_metacall_callback = cb; }
    void setQPdfBookmarkModel_Data_Callback(QPdfBookmarkModel_Data_Callback cb) { qpdfbookmarkmodel_data_callback = cb; }
    void setQPdfBookmarkModel_Index_Callback(QPdfBookmarkModel_Index_Callback cb) { qpdfbookmarkmodel_index_callback = cb; }
    void setQPdfBookmarkModel_Parent_Callback(QPdfBookmarkModel_Parent_Callback cb) { qpdfbookmarkmodel_parent_callback = cb; }
    void setQPdfBookmarkModel_RowCount_Callback(QPdfBookmarkModel_RowCount_Callback cb) { qpdfbookmarkmodel_rowcount_callback = cb; }
    void setQPdfBookmarkModel_ColumnCount_Callback(QPdfBookmarkModel_ColumnCount_Callback cb) { qpdfbookmarkmodel_columncount_callback = cb; }
    void setQPdfBookmarkModel_RoleNames_Callback(QPdfBookmarkModel_RoleNames_Callback cb) { qpdfbookmarkmodel_rolenames_callback = cb; }
    void setQPdfBookmarkModel_Sibling_Callback(QPdfBookmarkModel_Sibling_Callback cb) { qpdfbookmarkmodel_sibling_callback = cb; }
    void setQPdfBookmarkModel_HasChildren_Callback(QPdfBookmarkModel_HasChildren_Callback cb) { qpdfbookmarkmodel_haschildren_callback = cb; }
    void setQPdfBookmarkModel_SetData_Callback(QPdfBookmarkModel_SetData_Callback cb) { qpdfbookmarkmodel_setdata_callback = cb; }
    void setQPdfBookmarkModel_HeaderData_Callback(QPdfBookmarkModel_HeaderData_Callback cb) { qpdfbookmarkmodel_headerdata_callback = cb; }
    void setQPdfBookmarkModel_SetHeaderData_Callback(QPdfBookmarkModel_SetHeaderData_Callback cb) { qpdfbookmarkmodel_setheaderdata_callback = cb; }
    void setQPdfBookmarkModel_ItemData_Callback(QPdfBookmarkModel_ItemData_Callback cb) { qpdfbookmarkmodel_itemdata_callback = cb; }
    void setQPdfBookmarkModel_SetItemData_Callback(QPdfBookmarkModel_SetItemData_Callback cb) { qpdfbookmarkmodel_setitemdata_callback = cb; }
    void setQPdfBookmarkModel_ClearItemData_Callback(QPdfBookmarkModel_ClearItemData_Callback cb) { qpdfbookmarkmodel_clearitemdata_callback = cb; }
    void setQPdfBookmarkModel_MimeTypes_Callback(QPdfBookmarkModel_MimeTypes_Callback cb) { qpdfbookmarkmodel_mimetypes_callback = cb; }
    void setQPdfBookmarkModel_MimeData_Callback(QPdfBookmarkModel_MimeData_Callback cb) { qpdfbookmarkmodel_mimedata_callback = cb; }
    void setQPdfBookmarkModel_CanDropMimeData_Callback(QPdfBookmarkModel_CanDropMimeData_Callback cb) { qpdfbookmarkmodel_candropmimedata_callback = cb; }
    void setQPdfBookmarkModel_DropMimeData_Callback(QPdfBookmarkModel_DropMimeData_Callback cb) { qpdfbookmarkmodel_dropmimedata_callback = cb; }
    void setQPdfBookmarkModel_SupportedDropActions_Callback(QPdfBookmarkModel_SupportedDropActions_Callback cb) { qpdfbookmarkmodel_supporteddropactions_callback = cb; }
    void setQPdfBookmarkModel_SupportedDragActions_Callback(QPdfBookmarkModel_SupportedDragActions_Callback cb) { qpdfbookmarkmodel_supporteddragactions_callback = cb; }
    void setQPdfBookmarkModel_InsertRows_Callback(QPdfBookmarkModel_InsertRows_Callback cb) { qpdfbookmarkmodel_insertrows_callback = cb; }
    void setQPdfBookmarkModel_InsertColumns_Callback(QPdfBookmarkModel_InsertColumns_Callback cb) { qpdfbookmarkmodel_insertcolumns_callback = cb; }
    void setQPdfBookmarkModel_RemoveRows_Callback(QPdfBookmarkModel_RemoveRows_Callback cb) { qpdfbookmarkmodel_removerows_callback = cb; }
    void setQPdfBookmarkModel_RemoveColumns_Callback(QPdfBookmarkModel_RemoveColumns_Callback cb) { qpdfbookmarkmodel_removecolumns_callback = cb; }
    void setQPdfBookmarkModel_MoveRows_Callback(QPdfBookmarkModel_MoveRows_Callback cb) { qpdfbookmarkmodel_moverows_callback = cb; }
    void setQPdfBookmarkModel_MoveColumns_Callback(QPdfBookmarkModel_MoveColumns_Callback cb) { qpdfbookmarkmodel_movecolumns_callback = cb; }
    void setQPdfBookmarkModel_FetchMore_Callback(QPdfBookmarkModel_FetchMore_Callback cb) { qpdfbookmarkmodel_fetchmore_callback = cb; }
    void setQPdfBookmarkModel_CanFetchMore_Callback(QPdfBookmarkModel_CanFetchMore_Callback cb) { qpdfbookmarkmodel_canfetchmore_callback = cb; }
    void setQPdfBookmarkModel_Flags_Callback(QPdfBookmarkModel_Flags_Callback cb) { qpdfbookmarkmodel_flags_callback = cb; }
    void setQPdfBookmarkModel_Sort_Callback(QPdfBookmarkModel_Sort_Callback cb) { qpdfbookmarkmodel_sort_callback = cb; }
    void setQPdfBookmarkModel_Buddy_Callback(QPdfBookmarkModel_Buddy_Callback cb) { qpdfbookmarkmodel_buddy_callback = cb; }
    void setQPdfBookmarkModel_Match_Callback(QPdfBookmarkModel_Match_Callback cb) { qpdfbookmarkmodel_match_callback = cb; }
    void setQPdfBookmarkModel_Span_Callback(QPdfBookmarkModel_Span_Callback cb) { qpdfbookmarkmodel_span_callback = cb; }
    void setQPdfBookmarkModel_MultiData_Callback(QPdfBookmarkModel_MultiData_Callback cb) { qpdfbookmarkmodel_multidata_callback = cb; }
    void setQPdfBookmarkModel_Submit_Callback(QPdfBookmarkModel_Submit_Callback cb) { qpdfbookmarkmodel_submit_callback = cb; }
    void setQPdfBookmarkModel_Revert_Callback(QPdfBookmarkModel_Revert_Callback cb) { qpdfbookmarkmodel_revert_callback = cb; }
    void setQPdfBookmarkModel_ResetInternalData_Callback(QPdfBookmarkModel_ResetInternalData_Callback cb) { qpdfbookmarkmodel_resetinternaldata_callback = cb; }
    void setQPdfBookmarkModel_Event_Callback(QPdfBookmarkModel_Event_Callback cb) { qpdfbookmarkmodel_event_callback = cb; }
    void setQPdfBookmarkModel_EventFilter_Callback(QPdfBookmarkModel_EventFilter_Callback cb) { qpdfbookmarkmodel_eventfilter_callback = cb; }
    void setQPdfBookmarkModel_TimerEvent_Callback(QPdfBookmarkModel_TimerEvent_Callback cb) { qpdfbookmarkmodel_timerevent_callback = cb; }
    void setQPdfBookmarkModel_ChildEvent_Callback(QPdfBookmarkModel_ChildEvent_Callback cb) { qpdfbookmarkmodel_childevent_callback = cb; }
    void setQPdfBookmarkModel_CustomEvent_Callback(QPdfBookmarkModel_CustomEvent_Callback cb) { qpdfbookmarkmodel_customevent_callback = cb; }
    void setQPdfBookmarkModel_ConnectNotify_Callback(QPdfBookmarkModel_ConnectNotify_Callback cb) { qpdfbookmarkmodel_connectnotify_callback = cb; }
    void setQPdfBookmarkModel_DisconnectNotify_Callback(QPdfBookmarkModel_DisconnectNotify_Callback cb) { qpdfbookmarkmodel_disconnectnotify_callback = cb; }
    void setQPdfBookmarkModel_CreateIndex_Callback(QPdfBookmarkModel_CreateIndex_Callback cb) { qpdfbookmarkmodel_createindex_callback = cb; }
    void setQPdfBookmarkModel_EncodeData_Callback(QPdfBookmarkModel_EncodeData_Callback cb) { qpdfbookmarkmodel_encodedata_callback = cb; }
    void setQPdfBookmarkModel_DecodeData_Callback(QPdfBookmarkModel_DecodeData_Callback cb) { qpdfbookmarkmodel_decodedata_callback = cb; }
    void setQPdfBookmarkModel_BeginInsertRows_Callback(QPdfBookmarkModel_BeginInsertRows_Callback cb) { qpdfbookmarkmodel_begininsertrows_callback = cb; }
    void setQPdfBookmarkModel_EndInsertRows_Callback(QPdfBookmarkModel_EndInsertRows_Callback cb) { qpdfbookmarkmodel_endinsertrows_callback = cb; }
    void setQPdfBookmarkModel_BeginRemoveRows_Callback(QPdfBookmarkModel_BeginRemoveRows_Callback cb) { qpdfbookmarkmodel_beginremoverows_callback = cb; }
    void setQPdfBookmarkModel_EndRemoveRows_Callback(QPdfBookmarkModel_EndRemoveRows_Callback cb) { qpdfbookmarkmodel_endremoverows_callback = cb; }
    void setQPdfBookmarkModel_BeginMoveRows_Callback(QPdfBookmarkModel_BeginMoveRows_Callback cb) { qpdfbookmarkmodel_beginmoverows_callback = cb; }
    void setQPdfBookmarkModel_EndMoveRows_Callback(QPdfBookmarkModel_EndMoveRows_Callback cb) { qpdfbookmarkmodel_endmoverows_callback = cb; }
    void setQPdfBookmarkModel_BeginInsertColumns_Callback(QPdfBookmarkModel_BeginInsertColumns_Callback cb) { qpdfbookmarkmodel_begininsertcolumns_callback = cb; }
    void setQPdfBookmarkModel_EndInsertColumns_Callback(QPdfBookmarkModel_EndInsertColumns_Callback cb) { qpdfbookmarkmodel_endinsertcolumns_callback = cb; }
    void setQPdfBookmarkModel_BeginRemoveColumns_Callback(QPdfBookmarkModel_BeginRemoveColumns_Callback cb) { qpdfbookmarkmodel_beginremovecolumns_callback = cb; }
    void setQPdfBookmarkModel_EndRemoveColumns_Callback(QPdfBookmarkModel_EndRemoveColumns_Callback cb) { qpdfbookmarkmodel_endremovecolumns_callback = cb; }
    void setQPdfBookmarkModel_BeginMoveColumns_Callback(QPdfBookmarkModel_BeginMoveColumns_Callback cb) { qpdfbookmarkmodel_beginmovecolumns_callback = cb; }
    void setQPdfBookmarkModel_EndMoveColumns_Callback(QPdfBookmarkModel_EndMoveColumns_Callback cb) { qpdfbookmarkmodel_endmovecolumns_callback = cb; }
    void setQPdfBookmarkModel_BeginResetModel_Callback(QPdfBookmarkModel_BeginResetModel_Callback cb) { qpdfbookmarkmodel_beginresetmodel_callback = cb; }
    void setQPdfBookmarkModel_EndResetModel_Callback(QPdfBookmarkModel_EndResetModel_Callback cb) { qpdfbookmarkmodel_endresetmodel_callback = cb; }
    void setQPdfBookmarkModel_ChangePersistentIndex_Callback(QPdfBookmarkModel_ChangePersistentIndex_Callback cb) { qpdfbookmarkmodel_changepersistentindex_callback = cb; }
    void setQPdfBookmarkModel_ChangePersistentIndexList_Callback(QPdfBookmarkModel_ChangePersistentIndexList_Callback cb) { qpdfbookmarkmodel_changepersistentindexlist_callback = cb; }
    void setQPdfBookmarkModel_PersistentIndexList_Callback(QPdfBookmarkModel_PersistentIndexList_Callback cb) { qpdfbookmarkmodel_persistentindexlist_callback = cb; }
    void setQPdfBookmarkModel_Sender_Callback(QPdfBookmarkModel_Sender_Callback cb) { qpdfbookmarkmodel_sender_callback = cb; }
    void setQPdfBookmarkModel_SenderSignalIndex_Callback(QPdfBookmarkModel_SenderSignalIndex_Callback cb) { qpdfbookmarkmodel_sendersignalindex_callback = cb; }
    void setQPdfBookmarkModel_Receivers_Callback(QPdfBookmarkModel_Receivers_Callback cb) { qpdfbookmarkmodel_receivers_callback = cb; }
    void setQPdfBookmarkModel_IsSignalConnected_Callback(QPdfBookmarkModel_IsSignalConnected_Callback cb) { qpdfbookmarkmodel_issignalconnected_callback = cb; }

    // Base flag setters
    void setQPdfBookmarkModel_Metacall_IsBase(bool value) const { qpdfbookmarkmodel_metacall_isbase = value; }
    void setQPdfBookmarkModel_Data_IsBase(bool value) const { qpdfbookmarkmodel_data_isbase = value; }
    void setQPdfBookmarkModel_Index_IsBase(bool value) const { qpdfbookmarkmodel_index_isbase = value; }
    void setQPdfBookmarkModel_Parent_IsBase(bool value) const { qpdfbookmarkmodel_parent_isbase = value; }
    void setQPdfBookmarkModel_RowCount_IsBase(bool value) const { qpdfbookmarkmodel_rowcount_isbase = value; }
    void setQPdfBookmarkModel_ColumnCount_IsBase(bool value) const { qpdfbookmarkmodel_columncount_isbase = value; }
    void setQPdfBookmarkModel_RoleNames_IsBase(bool value) const { qpdfbookmarkmodel_rolenames_isbase = value; }
    void setQPdfBookmarkModel_Sibling_IsBase(bool value) const { qpdfbookmarkmodel_sibling_isbase = value; }
    void setQPdfBookmarkModel_HasChildren_IsBase(bool value) const { qpdfbookmarkmodel_haschildren_isbase = value; }
    void setQPdfBookmarkModel_SetData_IsBase(bool value) const { qpdfbookmarkmodel_setdata_isbase = value; }
    void setQPdfBookmarkModel_HeaderData_IsBase(bool value) const { qpdfbookmarkmodel_headerdata_isbase = value; }
    void setQPdfBookmarkModel_SetHeaderData_IsBase(bool value) const { qpdfbookmarkmodel_setheaderdata_isbase = value; }
    void setQPdfBookmarkModel_ItemData_IsBase(bool value) const { qpdfbookmarkmodel_itemdata_isbase = value; }
    void setQPdfBookmarkModel_SetItemData_IsBase(bool value) const { qpdfbookmarkmodel_setitemdata_isbase = value; }
    void setQPdfBookmarkModel_ClearItemData_IsBase(bool value) const { qpdfbookmarkmodel_clearitemdata_isbase = value; }
    void setQPdfBookmarkModel_MimeTypes_IsBase(bool value) const { qpdfbookmarkmodel_mimetypes_isbase = value; }
    void setQPdfBookmarkModel_MimeData_IsBase(bool value) const { qpdfbookmarkmodel_mimedata_isbase = value; }
    void setQPdfBookmarkModel_CanDropMimeData_IsBase(bool value) const { qpdfbookmarkmodel_candropmimedata_isbase = value; }
    void setQPdfBookmarkModel_DropMimeData_IsBase(bool value) const { qpdfbookmarkmodel_dropmimedata_isbase = value; }
    void setQPdfBookmarkModel_SupportedDropActions_IsBase(bool value) const { qpdfbookmarkmodel_supporteddropactions_isbase = value; }
    void setQPdfBookmarkModel_SupportedDragActions_IsBase(bool value) const { qpdfbookmarkmodel_supporteddragactions_isbase = value; }
    void setQPdfBookmarkModel_InsertRows_IsBase(bool value) const { qpdfbookmarkmodel_insertrows_isbase = value; }
    void setQPdfBookmarkModel_InsertColumns_IsBase(bool value) const { qpdfbookmarkmodel_insertcolumns_isbase = value; }
    void setQPdfBookmarkModel_RemoveRows_IsBase(bool value) const { qpdfbookmarkmodel_removerows_isbase = value; }
    void setQPdfBookmarkModel_RemoveColumns_IsBase(bool value) const { qpdfbookmarkmodel_removecolumns_isbase = value; }
    void setQPdfBookmarkModel_MoveRows_IsBase(bool value) const { qpdfbookmarkmodel_moverows_isbase = value; }
    void setQPdfBookmarkModel_MoveColumns_IsBase(bool value) const { qpdfbookmarkmodel_movecolumns_isbase = value; }
    void setQPdfBookmarkModel_FetchMore_IsBase(bool value) const { qpdfbookmarkmodel_fetchmore_isbase = value; }
    void setQPdfBookmarkModel_CanFetchMore_IsBase(bool value) const { qpdfbookmarkmodel_canfetchmore_isbase = value; }
    void setQPdfBookmarkModel_Flags_IsBase(bool value) const { qpdfbookmarkmodel_flags_isbase = value; }
    void setQPdfBookmarkModel_Sort_IsBase(bool value) const { qpdfbookmarkmodel_sort_isbase = value; }
    void setQPdfBookmarkModel_Buddy_IsBase(bool value) const { qpdfbookmarkmodel_buddy_isbase = value; }
    void setQPdfBookmarkModel_Match_IsBase(bool value) const { qpdfbookmarkmodel_match_isbase = value; }
    void setQPdfBookmarkModel_Span_IsBase(bool value) const { qpdfbookmarkmodel_span_isbase = value; }
    void setQPdfBookmarkModel_MultiData_IsBase(bool value) const { qpdfbookmarkmodel_multidata_isbase = value; }
    void setQPdfBookmarkModel_Submit_IsBase(bool value) const { qpdfbookmarkmodel_submit_isbase = value; }
    void setQPdfBookmarkModel_Revert_IsBase(bool value) const { qpdfbookmarkmodel_revert_isbase = value; }
    void setQPdfBookmarkModel_ResetInternalData_IsBase(bool value) const { qpdfbookmarkmodel_resetinternaldata_isbase = value; }
    void setQPdfBookmarkModel_Event_IsBase(bool value) const { qpdfbookmarkmodel_event_isbase = value; }
    void setQPdfBookmarkModel_EventFilter_IsBase(bool value) const { qpdfbookmarkmodel_eventfilter_isbase = value; }
    void setQPdfBookmarkModel_TimerEvent_IsBase(bool value) const { qpdfbookmarkmodel_timerevent_isbase = value; }
    void setQPdfBookmarkModel_ChildEvent_IsBase(bool value) const { qpdfbookmarkmodel_childevent_isbase = value; }
    void setQPdfBookmarkModel_CustomEvent_IsBase(bool value) const { qpdfbookmarkmodel_customevent_isbase = value; }
    void setQPdfBookmarkModel_ConnectNotify_IsBase(bool value) const { qpdfbookmarkmodel_connectnotify_isbase = value; }
    void setQPdfBookmarkModel_DisconnectNotify_IsBase(bool value) const { qpdfbookmarkmodel_disconnectnotify_isbase = value; }
    void setQPdfBookmarkModel_CreateIndex_IsBase(bool value) const { qpdfbookmarkmodel_createindex_isbase = value; }
    void setQPdfBookmarkModel_EncodeData_IsBase(bool value) const { qpdfbookmarkmodel_encodedata_isbase = value; }
    void setQPdfBookmarkModel_DecodeData_IsBase(bool value) const { qpdfbookmarkmodel_decodedata_isbase = value; }
    void setQPdfBookmarkModel_BeginInsertRows_IsBase(bool value) const { qpdfbookmarkmodel_begininsertrows_isbase = value; }
    void setQPdfBookmarkModel_EndInsertRows_IsBase(bool value) const { qpdfbookmarkmodel_endinsertrows_isbase = value; }
    void setQPdfBookmarkModel_BeginRemoveRows_IsBase(bool value) const { qpdfbookmarkmodel_beginremoverows_isbase = value; }
    void setQPdfBookmarkModel_EndRemoveRows_IsBase(bool value) const { qpdfbookmarkmodel_endremoverows_isbase = value; }
    void setQPdfBookmarkModel_BeginMoveRows_IsBase(bool value) const { qpdfbookmarkmodel_beginmoverows_isbase = value; }
    void setQPdfBookmarkModel_EndMoveRows_IsBase(bool value) const { qpdfbookmarkmodel_endmoverows_isbase = value; }
    void setQPdfBookmarkModel_BeginInsertColumns_IsBase(bool value) const { qpdfbookmarkmodel_begininsertcolumns_isbase = value; }
    void setQPdfBookmarkModel_EndInsertColumns_IsBase(bool value) const { qpdfbookmarkmodel_endinsertcolumns_isbase = value; }
    void setQPdfBookmarkModel_BeginRemoveColumns_IsBase(bool value) const { qpdfbookmarkmodel_beginremovecolumns_isbase = value; }
    void setQPdfBookmarkModel_EndRemoveColumns_IsBase(bool value) const { qpdfbookmarkmodel_endremovecolumns_isbase = value; }
    void setQPdfBookmarkModel_BeginMoveColumns_IsBase(bool value) const { qpdfbookmarkmodel_beginmovecolumns_isbase = value; }
    void setQPdfBookmarkModel_EndMoveColumns_IsBase(bool value) const { qpdfbookmarkmodel_endmovecolumns_isbase = value; }
    void setQPdfBookmarkModel_BeginResetModel_IsBase(bool value) const { qpdfbookmarkmodel_beginresetmodel_isbase = value; }
    void setQPdfBookmarkModel_EndResetModel_IsBase(bool value) const { qpdfbookmarkmodel_endresetmodel_isbase = value; }
    void setQPdfBookmarkModel_ChangePersistentIndex_IsBase(bool value) const { qpdfbookmarkmodel_changepersistentindex_isbase = value; }
    void setQPdfBookmarkModel_ChangePersistentIndexList_IsBase(bool value) const { qpdfbookmarkmodel_changepersistentindexlist_isbase = value; }
    void setQPdfBookmarkModel_PersistentIndexList_IsBase(bool value) const { qpdfbookmarkmodel_persistentindexlist_isbase = value; }
    void setQPdfBookmarkModel_Sender_IsBase(bool value) const { qpdfbookmarkmodel_sender_isbase = value; }
    void setQPdfBookmarkModel_SenderSignalIndex_IsBase(bool value) const { qpdfbookmarkmodel_sendersignalindex_isbase = value; }
    void setQPdfBookmarkModel_Receivers_IsBase(bool value) const { qpdfbookmarkmodel_receivers_isbase = value; }
    void setQPdfBookmarkModel_IsSignalConnected_IsBase(bool value) const { qpdfbookmarkmodel_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qpdfbookmarkmodel_metacall_isbase) {
            qpdfbookmarkmodel_metacall_isbase = false;
            return QPdfBookmarkModel::qt_metacall(param1, param2, param3);
        } else if (qpdfbookmarkmodel_metacall_callback != nullptr) {
            return qpdfbookmarkmodel_metacall_callback(this, param1, param2, param3);
        } else {
            return QPdfBookmarkModel::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(const QModelIndex& index, int role) const override {
        if (qpdfbookmarkmodel_data_isbase) {
            qpdfbookmarkmodel_data_isbase = false;
            return QPdfBookmarkModel::data(index, role);
        } else if (qpdfbookmarkmodel_data_callback != nullptr) {
            return qpdfbookmarkmodel_data_callback(this, index, role);
        } else {
            return QPdfBookmarkModel::data(index, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
        if (qpdfbookmarkmodel_index_isbase) {
            qpdfbookmarkmodel_index_isbase = false;
            return QPdfBookmarkModel::index(row, column, parent);
        } else if (qpdfbookmarkmodel_index_callback != nullptr) {
            return qpdfbookmarkmodel_index_callback(this, row, column, parent);
        } else {
            return QPdfBookmarkModel::index(row, column, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex parent(const QModelIndex& index) const override {
        if (qpdfbookmarkmodel_parent_isbase) {
            qpdfbookmarkmodel_parent_isbase = false;
            return QPdfBookmarkModel::parent(index);
        } else if (qpdfbookmarkmodel_parent_callback != nullptr) {
            return qpdfbookmarkmodel_parent_callback(this, index);
        } else {
            return QPdfBookmarkModel::parent(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int rowCount(const QModelIndex& parent) const override {
        if (qpdfbookmarkmodel_rowcount_isbase) {
            qpdfbookmarkmodel_rowcount_isbase = false;
            return QPdfBookmarkModel::rowCount(parent);
        } else if (qpdfbookmarkmodel_rowcount_callback != nullptr) {
            return qpdfbookmarkmodel_rowcount_callback(this, parent);
        } else {
            return QPdfBookmarkModel::rowCount(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int columnCount(const QModelIndex& parent) const override {
        if (qpdfbookmarkmodel_columncount_isbase) {
            qpdfbookmarkmodel_columncount_isbase = false;
            return QPdfBookmarkModel::columnCount(parent);
        } else if (qpdfbookmarkmodel_columncount_callback != nullptr) {
            return qpdfbookmarkmodel_columncount_callback(this, parent);
        } else {
            return QPdfBookmarkModel::columnCount(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QHash<int, QByteArray> roleNames() const override {
        if (qpdfbookmarkmodel_rolenames_isbase) {
            qpdfbookmarkmodel_rolenames_isbase = false;
            return QPdfBookmarkModel::roleNames();
        } else if (qpdfbookmarkmodel_rolenames_callback != nullptr) {
            return qpdfbookmarkmodel_rolenames_callback();
        } else {
            return QPdfBookmarkModel::roleNames();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
        if (qpdfbookmarkmodel_sibling_isbase) {
            qpdfbookmarkmodel_sibling_isbase = false;
            return QPdfBookmarkModel::sibling(row, column, idx);
        } else if (qpdfbookmarkmodel_sibling_callback != nullptr) {
            return qpdfbookmarkmodel_sibling_callback(this, row, column, idx);
        } else {
            return QPdfBookmarkModel::sibling(row, column, idx);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasChildren(const QModelIndex& parent) const override {
        if (qpdfbookmarkmodel_haschildren_isbase) {
            qpdfbookmarkmodel_haschildren_isbase = false;
            return QPdfBookmarkModel::hasChildren(parent);
        } else if (qpdfbookmarkmodel_haschildren_callback != nullptr) {
            return qpdfbookmarkmodel_haschildren_callback(this, parent);
        } else {
            return QPdfBookmarkModel::hasChildren(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
        if (qpdfbookmarkmodel_setdata_isbase) {
            qpdfbookmarkmodel_setdata_isbase = false;
            return QPdfBookmarkModel::setData(index, value, role);
        } else if (qpdfbookmarkmodel_setdata_callback != nullptr) {
            return qpdfbookmarkmodel_setdata_callback(this, index, value, role);
        } else {
            return QPdfBookmarkModel::setData(index, value, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
        if (qpdfbookmarkmodel_headerdata_isbase) {
            qpdfbookmarkmodel_headerdata_isbase = false;
            return QPdfBookmarkModel::headerData(section, orientation, role);
        } else if (qpdfbookmarkmodel_headerdata_callback != nullptr) {
            return qpdfbookmarkmodel_headerdata_callback(this, section, orientation, role);
        } else {
            return QPdfBookmarkModel::headerData(section, orientation, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
        if (qpdfbookmarkmodel_setheaderdata_isbase) {
            qpdfbookmarkmodel_setheaderdata_isbase = false;
            return QPdfBookmarkModel::setHeaderData(section, orientation, value, role);
        } else if (qpdfbookmarkmodel_setheaderdata_callback != nullptr) {
            return qpdfbookmarkmodel_setheaderdata_callback(this, section, orientation, value, role);
        } else {
            return QPdfBookmarkModel::setHeaderData(section, orientation, value, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
        if (qpdfbookmarkmodel_itemdata_isbase) {
            qpdfbookmarkmodel_itemdata_isbase = false;
            return QPdfBookmarkModel::itemData(index);
        } else if (qpdfbookmarkmodel_itemdata_callback != nullptr) {
            return qpdfbookmarkmodel_itemdata_callback(this, index);
        } else {
            return QPdfBookmarkModel::itemData(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
        if (qpdfbookmarkmodel_setitemdata_isbase) {
            qpdfbookmarkmodel_setitemdata_isbase = false;
            return QPdfBookmarkModel::setItemData(index, roles);
        } else if (qpdfbookmarkmodel_setitemdata_callback != nullptr) {
            return qpdfbookmarkmodel_setitemdata_callback(this, index, roles);
        } else {
            return QPdfBookmarkModel::setItemData(index, roles);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool clearItemData(const QModelIndex& index) override {
        if (qpdfbookmarkmodel_clearitemdata_isbase) {
            qpdfbookmarkmodel_clearitemdata_isbase = false;
            return QPdfBookmarkModel::clearItemData(index);
        } else if (qpdfbookmarkmodel_clearitemdata_callback != nullptr) {
            return qpdfbookmarkmodel_clearitemdata_callback(this, index);
        } else {
            return QPdfBookmarkModel::clearItemData(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QStringList mimeTypes() const override {
        if (qpdfbookmarkmodel_mimetypes_isbase) {
            qpdfbookmarkmodel_mimetypes_isbase = false;
            return QPdfBookmarkModel::mimeTypes();
        } else if (qpdfbookmarkmodel_mimetypes_callback != nullptr) {
            return qpdfbookmarkmodel_mimetypes_callback();
        } else {
            return QPdfBookmarkModel::mimeTypes();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* mimeData(const QModelIndexList& indexes) const override {
        if (qpdfbookmarkmodel_mimedata_isbase) {
            qpdfbookmarkmodel_mimedata_isbase = false;
            return QPdfBookmarkModel::mimeData(indexes);
        } else if (qpdfbookmarkmodel_mimedata_callback != nullptr) {
            return qpdfbookmarkmodel_mimedata_callback(this, indexes);
        } else {
            return QPdfBookmarkModel::mimeData(indexes);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
        if (qpdfbookmarkmodel_candropmimedata_isbase) {
            qpdfbookmarkmodel_candropmimedata_isbase = false;
            return QPdfBookmarkModel::canDropMimeData(data, action, row, column, parent);
        } else if (qpdfbookmarkmodel_candropmimedata_callback != nullptr) {
            return qpdfbookmarkmodel_candropmimedata_callback(this, data, action, row, column, parent);
        } else {
            return QPdfBookmarkModel::canDropMimeData(data, action, row, column, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
        if (qpdfbookmarkmodel_dropmimedata_isbase) {
            qpdfbookmarkmodel_dropmimedata_isbase = false;
            return QPdfBookmarkModel::dropMimeData(data, action, row, column, parent);
        } else if (qpdfbookmarkmodel_dropmimedata_callback != nullptr) {
            return qpdfbookmarkmodel_dropmimedata_callback(this, data, action, row, column, parent);
        } else {
            return QPdfBookmarkModel::dropMimeData(data, action, row, column, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (qpdfbookmarkmodel_supporteddropactions_isbase) {
            qpdfbookmarkmodel_supporteddropactions_isbase = false;
            return QPdfBookmarkModel::supportedDropActions();
        } else if (qpdfbookmarkmodel_supporteddropactions_callback != nullptr) {
            return qpdfbookmarkmodel_supporteddropactions_callback();
        } else {
            return QPdfBookmarkModel::supportedDropActions();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDragActions() const override {
        if (qpdfbookmarkmodel_supporteddragactions_isbase) {
            qpdfbookmarkmodel_supporteddragactions_isbase = false;
            return QPdfBookmarkModel::supportedDragActions();
        } else if (qpdfbookmarkmodel_supporteddragactions_callback != nullptr) {
            return qpdfbookmarkmodel_supporteddragactions_callback();
        } else {
            return QPdfBookmarkModel::supportedDragActions();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
        if (qpdfbookmarkmodel_insertrows_isbase) {
            qpdfbookmarkmodel_insertrows_isbase = false;
            return QPdfBookmarkModel::insertRows(row, count, parent);
        } else if (qpdfbookmarkmodel_insertrows_callback != nullptr) {
            return qpdfbookmarkmodel_insertrows_callback(this, row, count, parent);
        } else {
            return QPdfBookmarkModel::insertRows(row, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
        if (qpdfbookmarkmodel_insertcolumns_isbase) {
            qpdfbookmarkmodel_insertcolumns_isbase = false;
            return QPdfBookmarkModel::insertColumns(column, count, parent);
        } else if (qpdfbookmarkmodel_insertcolumns_callback != nullptr) {
            return qpdfbookmarkmodel_insertcolumns_callback(this, column, count, parent);
        } else {
            return QPdfBookmarkModel::insertColumns(column, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
        if (qpdfbookmarkmodel_removerows_isbase) {
            qpdfbookmarkmodel_removerows_isbase = false;
            return QPdfBookmarkModel::removeRows(row, count, parent);
        } else if (qpdfbookmarkmodel_removerows_callback != nullptr) {
            return qpdfbookmarkmodel_removerows_callback(this, row, count, parent);
        } else {
            return QPdfBookmarkModel::removeRows(row, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
        if (qpdfbookmarkmodel_removecolumns_isbase) {
            qpdfbookmarkmodel_removecolumns_isbase = false;
            return QPdfBookmarkModel::removeColumns(column, count, parent);
        } else if (qpdfbookmarkmodel_removecolumns_callback != nullptr) {
            return qpdfbookmarkmodel_removecolumns_callback(this, column, count, parent);
        } else {
            return QPdfBookmarkModel::removeColumns(column, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (qpdfbookmarkmodel_moverows_isbase) {
            qpdfbookmarkmodel_moverows_isbase = false;
            return QPdfBookmarkModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
        } else if (qpdfbookmarkmodel_moverows_callback != nullptr) {
            return qpdfbookmarkmodel_moverows_callback(this, sourceParent, sourceRow, count, destinationParent, destinationChild);
        } else {
            return QPdfBookmarkModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (qpdfbookmarkmodel_movecolumns_isbase) {
            qpdfbookmarkmodel_movecolumns_isbase = false;
            return QPdfBookmarkModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
        } else if (qpdfbookmarkmodel_movecolumns_callback != nullptr) {
            return qpdfbookmarkmodel_movecolumns_callback(this, sourceParent, sourceColumn, count, destinationParent, destinationChild);
        } else {
            return QPdfBookmarkModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void fetchMore(const QModelIndex& parent) override {
        if (qpdfbookmarkmodel_fetchmore_isbase) {
            qpdfbookmarkmodel_fetchmore_isbase = false;
            QPdfBookmarkModel::fetchMore(parent);
        } else if (qpdfbookmarkmodel_fetchmore_callback != nullptr) {
            qpdfbookmarkmodel_fetchmore_callback(this, parent);
        } else {
            QPdfBookmarkModel::fetchMore(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canFetchMore(const QModelIndex& parent) const override {
        if (qpdfbookmarkmodel_canfetchmore_isbase) {
            qpdfbookmarkmodel_canfetchmore_isbase = false;
            return QPdfBookmarkModel::canFetchMore(parent);
        } else if (qpdfbookmarkmodel_canfetchmore_callback != nullptr) {
            return qpdfbookmarkmodel_canfetchmore_callback(this, parent);
        } else {
            return QPdfBookmarkModel::canFetchMore(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
        if (qpdfbookmarkmodel_flags_isbase) {
            qpdfbookmarkmodel_flags_isbase = false;
            return QPdfBookmarkModel::flags(index);
        } else if (qpdfbookmarkmodel_flags_callback != nullptr) {
            return qpdfbookmarkmodel_flags_callback(this, index);
        } else {
            return QPdfBookmarkModel::flags(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void sort(int column, Qt::SortOrder order) override {
        if (qpdfbookmarkmodel_sort_isbase) {
            qpdfbookmarkmodel_sort_isbase = false;
            QPdfBookmarkModel::sort(column, order);
        } else if (qpdfbookmarkmodel_sort_callback != nullptr) {
            qpdfbookmarkmodel_sort_callback(this, column, order);
        } else {
            QPdfBookmarkModel::sort(column, order);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex buddy(const QModelIndex& index) const override {
        if (qpdfbookmarkmodel_buddy_isbase) {
            qpdfbookmarkmodel_buddy_isbase = false;
            return QPdfBookmarkModel::buddy(index);
        } else if (qpdfbookmarkmodel_buddy_callback != nullptr) {
            return qpdfbookmarkmodel_buddy_callback(this, index);
        } else {
            return QPdfBookmarkModel::buddy(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndexList match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
        if (qpdfbookmarkmodel_match_isbase) {
            qpdfbookmarkmodel_match_isbase = false;
            return QPdfBookmarkModel::match(start, role, value, hits, flags);
        } else if (qpdfbookmarkmodel_match_callback != nullptr) {
            return qpdfbookmarkmodel_match_callback(this, start, role, value, hits, flags);
        } else {
            return QPdfBookmarkModel::match(start, role, value, hits, flags);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize span(const QModelIndex& index) const override {
        if (qpdfbookmarkmodel_span_isbase) {
            qpdfbookmarkmodel_span_isbase = false;
            return QPdfBookmarkModel::span(index);
        } else if (qpdfbookmarkmodel_span_callback != nullptr) {
            return qpdfbookmarkmodel_span_callback(this, index);
        } else {
            return QPdfBookmarkModel::span(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
        if (qpdfbookmarkmodel_multidata_isbase) {
            qpdfbookmarkmodel_multidata_isbase = false;
            QPdfBookmarkModel::multiData(index, roleDataSpan);
        } else if (qpdfbookmarkmodel_multidata_callback != nullptr) {
            qpdfbookmarkmodel_multidata_callback(this, index, roleDataSpan);
        } else {
            QPdfBookmarkModel::multiData(index, roleDataSpan);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool submit() override {
        if (qpdfbookmarkmodel_submit_isbase) {
            qpdfbookmarkmodel_submit_isbase = false;
            return QPdfBookmarkModel::submit();
        } else if (qpdfbookmarkmodel_submit_callback != nullptr) {
            return qpdfbookmarkmodel_submit_callback();
        } else {
            return QPdfBookmarkModel::submit();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void revert() override {
        if (qpdfbookmarkmodel_revert_isbase) {
            qpdfbookmarkmodel_revert_isbase = false;
            QPdfBookmarkModel::revert();
        } else if (qpdfbookmarkmodel_revert_callback != nullptr) {
            qpdfbookmarkmodel_revert_callback();
        } else {
            QPdfBookmarkModel::revert();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetInternalData() override {
        if (qpdfbookmarkmodel_resetinternaldata_isbase) {
            qpdfbookmarkmodel_resetinternaldata_isbase = false;
            QPdfBookmarkModel::resetInternalData();
        } else if (qpdfbookmarkmodel_resetinternaldata_callback != nullptr) {
            qpdfbookmarkmodel_resetinternaldata_callback();
        } else {
            QPdfBookmarkModel::resetInternalData();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qpdfbookmarkmodel_event_isbase) {
            qpdfbookmarkmodel_event_isbase = false;
            return QPdfBookmarkModel::event(event);
        } else if (qpdfbookmarkmodel_event_callback != nullptr) {
            return qpdfbookmarkmodel_event_callback(this, event);
        } else {
            return QPdfBookmarkModel::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qpdfbookmarkmodel_eventfilter_isbase) {
            qpdfbookmarkmodel_eventfilter_isbase = false;
            return QPdfBookmarkModel::eventFilter(watched, event);
        } else if (qpdfbookmarkmodel_eventfilter_callback != nullptr) {
            return qpdfbookmarkmodel_eventfilter_callback(this, watched, event);
        } else {
            return QPdfBookmarkModel::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qpdfbookmarkmodel_timerevent_isbase) {
            qpdfbookmarkmodel_timerevent_isbase = false;
            QPdfBookmarkModel::timerEvent(event);
        } else if (qpdfbookmarkmodel_timerevent_callback != nullptr) {
            qpdfbookmarkmodel_timerevent_callback(this, event);
        } else {
            QPdfBookmarkModel::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qpdfbookmarkmodel_childevent_isbase) {
            qpdfbookmarkmodel_childevent_isbase = false;
            QPdfBookmarkModel::childEvent(event);
        } else if (qpdfbookmarkmodel_childevent_callback != nullptr) {
            qpdfbookmarkmodel_childevent_callback(this, event);
        } else {
            QPdfBookmarkModel::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qpdfbookmarkmodel_customevent_isbase) {
            qpdfbookmarkmodel_customevent_isbase = false;
            QPdfBookmarkModel::customEvent(event);
        } else if (qpdfbookmarkmodel_customevent_callback != nullptr) {
            qpdfbookmarkmodel_customevent_callback(this, event);
        } else {
            QPdfBookmarkModel::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qpdfbookmarkmodel_connectnotify_isbase) {
            qpdfbookmarkmodel_connectnotify_isbase = false;
            QPdfBookmarkModel::connectNotify(signal);
        } else if (qpdfbookmarkmodel_connectnotify_callback != nullptr) {
            qpdfbookmarkmodel_connectnotify_callback(this, signal);
        } else {
            QPdfBookmarkModel::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qpdfbookmarkmodel_disconnectnotify_isbase) {
            qpdfbookmarkmodel_disconnectnotify_isbase = false;
            QPdfBookmarkModel::disconnectNotify(signal);
        } else if (qpdfbookmarkmodel_disconnectnotify_callback != nullptr) {
            qpdfbookmarkmodel_disconnectnotify_callback(this, signal);
        } else {
            QPdfBookmarkModel::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QModelIndex createIndex(int row, int column) const {
        if (qpdfbookmarkmodel_createindex_isbase) {
            qpdfbookmarkmodel_createindex_isbase = false;
            return QPdfBookmarkModel::createIndex(row, column);
        } else if (qpdfbookmarkmodel_createindex_callback != nullptr) {
            return qpdfbookmarkmodel_createindex_callback(this, row, column);
        } else {
            return QPdfBookmarkModel::createIndex(row, column);
        }
    }

    // Virtual method for C ABI access and custom callback
    void encodeData(const QModelIndexList& indexes, QDataStream& stream) const {
        if (qpdfbookmarkmodel_encodedata_isbase) {
            qpdfbookmarkmodel_encodedata_isbase = false;
            QPdfBookmarkModel::encodeData(indexes, stream);
        } else if (qpdfbookmarkmodel_encodedata_callback != nullptr) {
            qpdfbookmarkmodel_encodedata_callback(this, indexes, stream);
        } else {
            QPdfBookmarkModel::encodeData(indexes, stream);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool decodeData(int row, int column, const QModelIndex& parent, QDataStream& stream) {
        if (qpdfbookmarkmodel_decodedata_isbase) {
            qpdfbookmarkmodel_decodedata_isbase = false;
            return QPdfBookmarkModel::decodeData(row, column, parent, stream);
        } else if (qpdfbookmarkmodel_decodedata_callback != nullptr) {
            return qpdfbookmarkmodel_decodedata_callback(this, row, column, parent, stream);
        } else {
            return QPdfBookmarkModel::decodeData(row, column, parent, stream);
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertRows(const QModelIndex& parent, int first, int last) {
        if (qpdfbookmarkmodel_begininsertrows_isbase) {
            qpdfbookmarkmodel_begininsertrows_isbase = false;
            QPdfBookmarkModel::beginInsertRows(parent, first, last);
        } else if (qpdfbookmarkmodel_begininsertrows_callback != nullptr) {
            qpdfbookmarkmodel_begininsertrows_callback(this, parent, first, last);
        } else {
            QPdfBookmarkModel::beginInsertRows(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endInsertRows() {
        if (qpdfbookmarkmodel_endinsertrows_isbase) {
            qpdfbookmarkmodel_endinsertrows_isbase = false;
            QPdfBookmarkModel::endInsertRows();
        } else if (qpdfbookmarkmodel_endinsertrows_callback != nullptr) {
            qpdfbookmarkmodel_endinsertrows_callback();
        } else {
            QPdfBookmarkModel::endInsertRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveRows(const QModelIndex& parent, int first, int last) {
        if (qpdfbookmarkmodel_beginremoverows_isbase) {
            qpdfbookmarkmodel_beginremoverows_isbase = false;
            QPdfBookmarkModel::beginRemoveRows(parent, first, last);
        } else if (qpdfbookmarkmodel_beginremoverows_callback != nullptr) {
            qpdfbookmarkmodel_beginremoverows_callback(this, parent, first, last);
        } else {
            QPdfBookmarkModel::beginRemoveRows(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveRows() {
        if (qpdfbookmarkmodel_endremoverows_isbase) {
            qpdfbookmarkmodel_endremoverows_isbase = false;
            QPdfBookmarkModel::endRemoveRows();
        } else if (qpdfbookmarkmodel_endremoverows_callback != nullptr) {
            qpdfbookmarkmodel_endremoverows_callback();
        } else {
            QPdfBookmarkModel::endRemoveRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveRows(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationRow) {
        if (qpdfbookmarkmodel_beginmoverows_isbase) {
            qpdfbookmarkmodel_beginmoverows_isbase = false;
            return QPdfBookmarkModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
        } else if (qpdfbookmarkmodel_beginmoverows_callback != nullptr) {
            return qpdfbookmarkmodel_beginmoverows_callback(this, sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
        } else {
            return QPdfBookmarkModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endMoveRows() {
        if (qpdfbookmarkmodel_endmoverows_isbase) {
            qpdfbookmarkmodel_endmoverows_isbase = false;
            QPdfBookmarkModel::endMoveRows();
        } else if (qpdfbookmarkmodel_endmoverows_callback != nullptr) {
            qpdfbookmarkmodel_endmoverows_callback();
        } else {
            QPdfBookmarkModel::endMoveRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertColumns(const QModelIndex& parent, int first, int last) {
        if (qpdfbookmarkmodel_begininsertcolumns_isbase) {
            qpdfbookmarkmodel_begininsertcolumns_isbase = false;
            QPdfBookmarkModel::beginInsertColumns(parent, first, last);
        } else if (qpdfbookmarkmodel_begininsertcolumns_callback != nullptr) {
            qpdfbookmarkmodel_begininsertcolumns_callback(this, parent, first, last);
        } else {
            QPdfBookmarkModel::beginInsertColumns(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endInsertColumns() {
        if (qpdfbookmarkmodel_endinsertcolumns_isbase) {
            qpdfbookmarkmodel_endinsertcolumns_isbase = false;
            QPdfBookmarkModel::endInsertColumns();
        } else if (qpdfbookmarkmodel_endinsertcolumns_callback != nullptr) {
            qpdfbookmarkmodel_endinsertcolumns_callback();
        } else {
            QPdfBookmarkModel::endInsertColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveColumns(const QModelIndex& parent, int first, int last) {
        if (qpdfbookmarkmodel_beginremovecolumns_isbase) {
            qpdfbookmarkmodel_beginremovecolumns_isbase = false;
            QPdfBookmarkModel::beginRemoveColumns(parent, first, last);
        } else if (qpdfbookmarkmodel_beginremovecolumns_callback != nullptr) {
            qpdfbookmarkmodel_beginremovecolumns_callback(this, parent, first, last);
        } else {
            QPdfBookmarkModel::beginRemoveColumns(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveColumns() {
        if (qpdfbookmarkmodel_endremovecolumns_isbase) {
            qpdfbookmarkmodel_endremovecolumns_isbase = false;
            QPdfBookmarkModel::endRemoveColumns();
        } else if (qpdfbookmarkmodel_endremovecolumns_callback != nullptr) {
            qpdfbookmarkmodel_endremovecolumns_callback();
        } else {
            QPdfBookmarkModel::endRemoveColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveColumns(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationColumn) {
        if (qpdfbookmarkmodel_beginmovecolumns_isbase) {
            qpdfbookmarkmodel_beginmovecolumns_isbase = false;
            return QPdfBookmarkModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
        } else if (qpdfbookmarkmodel_beginmovecolumns_callback != nullptr) {
            return qpdfbookmarkmodel_beginmovecolumns_callback(this, sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
        } else {
            return QPdfBookmarkModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endMoveColumns() {
        if (qpdfbookmarkmodel_endmovecolumns_isbase) {
            qpdfbookmarkmodel_endmovecolumns_isbase = false;
            QPdfBookmarkModel::endMoveColumns();
        } else if (qpdfbookmarkmodel_endmovecolumns_callback != nullptr) {
            qpdfbookmarkmodel_endmovecolumns_callback();
        } else {
            QPdfBookmarkModel::endMoveColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginResetModel() {
        if (qpdfbookmarkmodel_beginresetmodel_isbase) {
            qpdfbookmarkmodel_beginresetmodel_isbase = false;
            QPdfBookmarkModel::beginResetModel();
        } else if (qpdfbookmarkmodel_beginresetmodel_callback != nullptr) {
            qpdfbookmarkmodel_beginresetmodel_callback();
        } else {
            QPdfBookmarkModel::beginResetModel();
        }
    }

    // Virtual method for C ABI access and custom callback
    void endResetModel() {
        if (qpdfbookmarkmodel_endresetmodel_isbase) {
            qpdfbookmarkmodel_endresetmodel_isbase = false;
            QPdfBookmarkModel::endResetModel();
        } else if (qpdfbookmarkmodel_endresetmodel_callback != nullptr) {
            qpdfbookmarkmodel_endresetmodel_callback();
        } else {
            QPdfBookmarkModel::endResetModel();
        }
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndex(const QModelIndex& from, const QModelIndex& to) {
        if (qpdfbookmarkmodel_changepersistentindex_isbase) {
            qpdfbookmarkmodel_changepersistentindex_isbase = false;
            QPdfBookmarkModel::changePersistentIndex(from, to);
        } else if (qpdfbookmarkmodel_changepersistentindex_callback != nullptr) {
            qpdfbookmarkmodel_changepersistentindex_callback(this, from, to);
        } else {
            QPdfBookmarkModel::changePersistentIndex(from, to);
        }
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndexList(const QModelIndexList& from, const QModelIndexList& to) {
        if (qpdfbookmarkmodel_changepersistentindexlist_isbase) {
            qpdfbookmarkmodel_changepersistentindexlist_isbase = false;
            QPdfBookmarkModel::changePersistentIndexList(from, to);
        } else if (qpdfbookmarkmodel_changepersistentindexlist_callback != nullptr) {
            qpdfbookmarkmodel_changepersistentindexlist_callback(this, from, to);
        } else {
            QPdfBookmarkModel::changePersistentIndexList(from, to);
        }
    }

    // Virtual method for C ABI access and custom callback
    QModelIndexList persistentIndexList() const {
        if (qpdfbookmarkmodel_persistentindexlist_isbase) {
            qpdfbookmarkmodel_persistentindexlist_isbase = false;
            return QPdfBookmarkModel::persistentIndexList();
        } else if (qpdfbookmarkmodel_persistentindexlist_callback != nullptr) {
            return qpdfbookmarkmodel_persistentindexlist_callback();
        } else {
            return QPdfBookmarkModel::persistentIndexList();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qpdfbookmarkmodel_sender_isbase) {
            qpdfbookmarkmodel_sender_isbase = false;
            return QPdfBookmarkModel::sender();
        } else if (qpdfbookmarkmodel_sender_callback != nullptr) {
            return qpdfbookmarkmodel_sender_callback();
        } else {
            return QPdfBookmarkModel::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qpdfbookmarkmodel_sendersignalindex_isbase) {
            qpdfbookmarkmodel_sendersignalindex_isbase = false;
            return QPdfBookmarkModel::senderSignalIndex();
        } else if (qpdfbookmarkmodel_sendersignalindex_callback != nullptr) {
            return qpdfbookmarkmodel_sendersignalindex_callback();
        } else {
            return QPdfBookmarkModel::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qpdfbookmarkmodel_receivers_isbase) {
            qpdfbookmarkmodel_receivers_isbase = false;
            return QPdfBookmarkModel::receivers(signal);
        } else if (qpdfbookmarkmodel_receivers_callback != nullptr) {
            return qpdfbookmarkmodel_receivers_callback(this, signal);
        } else {
            return QPdfBookmarkModel::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qpdfbookmarkmodel_issignalconnected_isbase) {
            qpdfbookmarkmodel_issignalconnected_isbase = false;
            return QPdfBookmarkModel::isSignalConnected(signal);
        } else if (qpdfbookmarkmodel_issignalconnected_callback != nullptr) {
            return qpdfbookmarkmodel_issignalconnected_callback(this, signal);
        } else {
            return QPdfBookmarkModel::isSignalConnected(signal);
        }
    }
};

#endif
