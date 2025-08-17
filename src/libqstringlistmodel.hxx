#pragma once
#ifndef SRCC_LIBVIRTUALQSTRINGLISTMODEL_H
#define SRCC_LIBVIRTUALQSTRINGLISTMODEL_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QStringListModel so that we can call protected methods
class VirtualQStringListModel final : public QStringListModel {

  public:
    // Virtual class boolean flag
    bool isVirtualQStringListModel = true;

    // Virtual class public types (including callbacks)
    using QStringListModel_Metacall_Callback = int (*)(QStringListModel*, int, int, void**);
    using QStringListModel_RowCount_Callback = int (*)(const QStringListModel*, QModelIndex*);
    using QStringListModel_Sibling_Callback = QModelIndex* (*)(const QStringListModel*, int, int, QModelIndex*);
    using QStringListModel_Data_Callback = QVariant* (*)(const QStringListModel*, QModelIndex*, int);
    using QStringListModel_SetData_Callback = bool (*)(QStringListModel*, QModelIndex*, QVariant*, int);
    using QStringListModel_ClearItemData_Callback = bool (*)(QStringListModel*, QModelIndex*);
    using QStringListModel_Flags_Callback = int (*)(const QStringListModel*, QModelIndex*);
    using QStringListModel_InsertRows_Callback = bool (*)(QStringListModel*, int, int, QModelIndex*);
    using QStringListModel_RemoveRows_Callback = bool (*)(QStringListModel*, int, int, QModelIndex*);
    using QStringListModel_MoveRows_Callback = bool (*)(QStringListModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QStringListModel_ItemData_Callback = libqt_map /* of int to QVariant* */ (*)(const QStringListModel*, QModelIndex*);
    using QStringListModel_SetItemData_Callback = bool (*)(QStringListModel*, QModelIndex*, libqt_map /* of int to QVariant* */);
    using QStringListModel_Sort_Callback = void (*)(QStringListModel*, int, int);
    using QStringListModel_SupportedDropActions_Callback = int (*)();
    using QStringListModel_Index_Callback = QModelIndex* (*)(const QStringListModel*, int, int, QModelIndex*);
    using QStringListModel_DropMimeData_Callback = bool (*)(QStringListModel*, QMimeData*, int, int, int, QModelIndex*);
    using QStringListModel_HeaderData_Callback = QVariant* (*)(const QStringListModel*, int, int, int);
    using QStringListModel_SetHeaderData_Callback = bool (*)(QStringListModel*, int, int, QVariant*, int);
    using QStringListModel_MimeTypes_Callback = libqt_list /* of libqt_string */ (*)();
    using QStringListModel_MimeData_Callback = QMimeData* (*)(const QStringListModel*, libqt_list /* of QModelIndex* */);
    using QStringListModel_CanDropMimeData_Callback = bool (*)(const QStringListModel*, QMimeData*, int, int, int, QModelIndex*);
    using QStringListModel_SupportedDragActions_Callback = int (*)();
    using QStringListModel_InsertColumns_Callback = bool (*)(QStringListModel*, int, int, QModelIndex*);
    using QStringListModel_RemoveColumns_Callback = bool (*)(QStringListModel*, int, int, QModelIndex*);
    using QStringListModel_MoveColumns_Callback = bool (*)(QStringListModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QStringListModel_FetchMore_Callback = void (*)(QStringListModel*, QModelIndex*);
    using QStringListModel_CanFetchMore_Callback = bool (*)(const QStringListModel*, QModelIndex*);
    using QStringListModel_Buddy_Callback = QModelIndex* (*)(const QStringListModel*, QModelIndex*);
    using QStringListModel_Match_Callback = libqt_list /* of QModelIndex* */ (*)(const QStringListModel*, QModelIndex*, int, QVariant*, int, int);
    using QStringListModel_Span_Callback = QSize* (*)(const QStringListModel*, QModelIndex*);
    using QStringListModel_RoleNames_Callback = libqt_map /* of int to libqt_string */ (*)();
    using QStringListModel_MultiData_Callback = void (*)(const QStringListModel*, QModelIndex*, QModelRoleDataSpan*);
    using QStringListModel_Submit_Callback = bool (*)();
    using QStringListModel_Revert_Callback = void (*)();
    using QStringListModel_ResetInternalData_Callback = void (*)();
    using QStringListModel_Event_Callback = bool (*)(QStringListModel*, QEvent*);
    using QStringListModel_EventFilter_Callback = bool (*)(QStringListModel*, QObject*, QEvent*);
    using QStringListModel_TimerEvent_Callback = void (*)(QStringListModel*, QTimerEvent*);
    using QStringListModel_ChildEvent_Callback = void (*)(QStringListModel*, QChildEvent*);
    using QStringListModel_CustomEvent_Callback = void (*)(QStringListModel*, QEvent*);
    using QStringListModel_ConnectNotify_Callback = void (*)(QStringListModel*, QMetaMethod*);
    using QStringListModel_DisconnectNotify_Callback = void (*)(QStringListModel*, QMetaMethod*);
    using QStringListModel_CreateIndex_Callback = QModelIndex* (*)(const QStringListModel*, int, int);
    using QStringListModel_EncodeData_Callback = void (*)(const QStringListModel*, libqt_list /* of QModelIndex* */, QDataStream*);
    using QStringListModel_DecodeData_Callback = bool (*)(QStringListModel*, int, int, QModelIndex*, QDataStream*);
    using QStringListModel_BeginInsertRows_Callback = void (*)(QStringListModel*, QModelIndex*, int, int);
    using QStringListModel_EndInsertRows_Callback = void (*)();
    using QStringListModel_BeginRemoveRows_Callback = void (*)(QStringListModel*, QModelIndex*, int, int);
    using QStringListModel_EndRemoveRows_Callback = void (*)();
    using QStringListModel_BeginMoveRows_Callback = bool (*)(QStringListModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QStringListModel_EndMoveRows_Callback = void (*)();
    using QStringListModel_BeginInsertColumns_Callback = void (*)(QStringListModel*, QModelIndex*, int, int);
    using QStringListModel_EndInsertColumns_Callback = void (*)();
    using QStringListModel_BeginRemoveColumns_Callback = void (*)(QStringListModel*, QModelIndex*, int, int);
    using QStringListModel_EndRemoveColumns_Callback = void (*)();
    using QStringListModel_BeginMoveColumns_Callback = bool (*)(QStringListModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QStringListModel_EndMoveColumns_Callback = void (*)();
    using QStringListModel_BeginResetModel_Callback = void (*)();
    using QStringListModel_EndResetModel_Callback = void (*)();
    using QStringListModel_ChangePersistentIndex_Callback = void (*)(QStringListModel*, QModelIndex*, QModelIndex*);
    using QStringListModel_ChangePersistentIndexList_Callback = void (*)(QStringListModel*, libqt_list /* of QModelIndex* */, libqt_list /* of QModelIndex* */);
    using QStringListModel_PersistentIndexList_Callback = libqt_list /* of QModelIndex* */ (*)();
    using QStringListModel_Sender_Callback = QObject* (*)();
    using QStringListModel_SenderSignalIndex_Callback = int (*)();
    using QStringListModel_Receivers_Callback = int (*)(const QStringListModel*, const char*);
    using QStringListModel_IsSignalConnected_Callback = bool (*)(const QStringListModel*, QMetaMethod*);

  protected:
    // Instance callback storage
    QStringListModel_Metacall_Callback qstringlistmodel_metacall_callback = nullptr;
    QStringListModel_RowCount_Callback qstringlistmodel_rowcount_callback = nullptr;
    QStringListModel_Sibling_Callback qstringlistmodel_sibling_callback = nullptr;
    QStringListModel_Data_Callback qstringlistmodel_data_callback = nullptr;
    QStringListModel_SetData_Callback qstringlistmodel_setdata_callback = nullptr;
    QStringListModel_ClearItemData_Callback qstringlistmodel_clearitemdata_callback = nullptr;
    QStringListModel_Flags_Callback qstringlistmodel_flags_callback = nullptr;
    QStringListModel_InsertRows_Callback qstringlistmodel_insertrows_callback = nullptr;
    QStringListModel_RemoveRows_Callback qstringlistmodel_removerows_callback = nullptr;
    QStringListModel_MoveRows_Callback qstringlistmodel_moverows_callback = nullptr;
    QStringListModel_ItemData_Callback qstringlistmodel_itemdata_callback = nullptr;
    QStringListModel_SetItemData_Callback qstringlistmodel_setitemdata_callback = nullptr;
    QStringListModel_Sort_Callback qstringlistmodel_sort_callback = nullptr;
    QStringListModel_SupportedDropActions_Callback qstringlistmodel_supporteddropactions_callback = nullptr;
    QStringListModel_Index_Callback qstringlistmodel_index_callback = nullptr;
    QStringListModel_DropMimeData_Callback qstringlistmodel_dropmimedata_callback = nullptr;
    QStringListModel_HeaderData_Callback qstringlistmodel_headerdata_callback = nullptr;
    QStringListModel_SetHeaderData_Callback qstringlistmodel_setheaderdata_callback = nullptr;
    QStringListModel_MimeTypes_Callback qstringlistmodel_mimetypes_callback = nullptr;
    QStringListModel_MimeData_Callback qstringlistmodel_mimedata_callback = nullptr;
    QStringListModel_CanDropMimeData_Callback qstringlistmodel_candropmimedata_callback = nullptr;
    QStringListModel_SupportedDragActions_Callback qstringlistmodel_supporteddragactions_callback = nullptr;
    QStringListModel_InsertColumns_Callback qstringlistmodel_insertcolumns_callback = nullptr;
    QStringListModel_RemoveColumns_Callback qstringlistmodel_removecolumns_callback = nullptr;
    QStringListModel_MoveColumns_Callback qstringlistmodel_movecolumns_callback = nullptr;
    QStringListModel_FetchMore_Callback qstringlistmodel_fetchmore_callback = nullptr;
    QStringListModel_CanFetchMore_Callback qstringlistmodel_canfetchmore_callback = nullptr;
    QStringListModel_Buddy_Callback qstringlistmodel_buddy_callback = nullptr;
    QStringListModel_Match_Callback qstringlistmodel_match_callback = nullptr;
    QStringListModel_Span_Callback qstringlistmodel_span_callback = nullptr;
    QStringListModel_RoleNames_Callback qstringlistmodel_rolenames_callback = nullptr;
    QStringListModel_MultiData_Callback qstringlistmodel_multidata_callback = nullptr;
    QStringListModel_Submit_Callback qstringlistmodel_submit_callback = nullptr;
    QStringListModel_Revert_Callback qstringlistmodel_revert_callback = nullptr;
    QStringListModel_ResetInternalData_Callback qstringlistmodel_resetinternaldata_callback = nullptr;
    QStringListModel_Event_Callback qstringlistmodel_event_callback = nullptr;
    QStringListModel_EventFilter_Callback qstringlistmodel_eventfilter_callback = nullptr;
    QStringListModel_TimerEvent_Callback qstringlistmodel_timerevent_callback = nullptr;
    QStringListModel_ChildEvent_Callback qstringlistmodel_childevent_callback = nullptr;
    QStringListModel_CustomEvent_Callback qstringlistmodel_customevent_callback = nullptr;
    QStringListModel_ConnectNotify_Callback qstringlistmodel_connectnotify_callback = nullptr;
    QStringListModel_DisconnectNotify_Callback qstringlistmodel_disconnectnotify_callback = nullptr;
    QStringListModel_CreateIndex_Callback qstringlistmodel_createindex_callback = nullptr;
    QStringListModel_EncodeData_Callback qstringlistmodel_encodedata_callback = nullptr;
    QStringListModel_DecodeData_Callback qstringlistmodel_decodedata_callback = nullptr;
    QStringListModel_BeginInsertRows_Callback qstringlistmodel_begininsertrows_callback = nullptr;
    QStringListModel_EndInsertRows_Callback qstringlistmodel_endinsertrows_callback = nullptr;
    QStringListModel_BeginRemoveRows_Callback qstringlistmodel_beginremoverows_callback = nullptr;
    QStringListModel_EndRemoveRows_Callback qstringlistmodel_endremoverows_callback = nullptr;
    QStringListModel_BeginMoveRows_Callback qstringlistmodel_beginmoverows_callback = nullptr;
    QStringListModel_EndMoveRows_Callback qstringlistmodel_endmoverows_callback = nullptr;
    QStringListModel_BeginInsertColumns_Callback qstringlistmodel_begininsertcolumns_callback = nullptr;
    QStringListModel_EndInsertColumns_Callback qstringlistmodel_endinsertcolumns_callback = nullptr;
    QStringListModel_BeginRemoveColumns_Callback qstringlistmodel_beginremovecolumns_callback = nullptr;
    QStringListModel_EndRemoveColumns_Callback qstringlistmodel_endremovecolumns_callback = nullptr;
    QStringListModel_BeginMoveColumns_Callback qstringlistmodel_beginmovecolumns_callback = nullptr;
    QStringListModel_EndMoveColumns_Callback qstringlistmodel_endmovecolumns_callback = nullptr;
    QStringListModel_BeginResetModel_Callback qstringlistmodel_beginresetmodel_callback = nullptr;
    QStringListModel_EndResetModel_Callback qstringlistmodel_endresetmodel_callback = nullptr;
    QStringListModel_ChangePersistentIndex_Callback qstringlistmodel_changepersistentindex_callback = nullptr;
    QStringListModel_ChangePersistentIndexList_Callback qstringlistmodel_changepersistentindexlist_callback = nullptr;
    QStringListModel_PersistentIndexList_Callback qstringlistmodel_persistentindexlist_callback = nullptr;
    QStringListModel_Sender_Callback qstringlistmodel_sender_callback = nullptr;
    QStringListModel_SenderSignalIndex_Callback qstringlistmodel_sendersignalindex_callback = nullptr;
    QStringListModel_Receivers_Callback qstringlistmodel_receivers_callback = nullptr;
    QStringListModel_IsSignalConnected_Callback qstringlistmodel_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qstringlistmodel_metacall_isbase = false;
    mutable bool qstringlistmodel_rowcount_isbase = false;
    mutable bool qstringlistmodel_sibling_isbase = false;
    mutable bool qstringlistmodel_data_isbase = false;
    mutable bool qstringlistmodel_setdata_isbase = false;
    mutable bool qstringlistmodel_clearitemdata_isbase = false;
    mutable bool qstringlistmodel_flags_isbase = false;
    mutable bool qstringlistmodel_insertrows_isbase = false;
    mutable bool qstringlistmodel_removerows_isbase = false;
    mutable bool qstringlistmodel_moverows_isbase = false;
    mutable bool qstringlistmodel_itemdata_isbase = false;
    mutable bool qstringlistmodel_setitemdata_isbase = false;
    mutable bool qstringlistmodel_sort_isbase = false;
    mutable bool qstringlistmodel_supporteddropactions_isbase = false;
    mutable bool qstringlistmodel_index_isbase = false;
    mutable bool qstringlistmodel_dropmimedata_isbase = false;
    mutable bool qstringlistmodel_headerdata_isbase = false;
    mutable bool qstringlistmodel_setheaderdata_isbase = false;
    mutable bool qstringlistmodel_mimetypes_isbase = false;
    mutable bool qstringlistmodel_mimedata_isbase = false;
    mutable bool qstringlistmodel_candropmimedata_isbase = false;
    mutable bool qstringlistmodel_supporteddragactions_isbase = false;
    mutable bool qstringlistmodel_insertcolumns_isbase = false;
    mutable bool qstringlistmodel_removecolumns_isbase = false;
    mutable bool qstringlistmodel_movecolumns_isbase = false;
    mutable bool qstringlistmodel_fetchmore_isbase = false;
    mutable bool qstringlistmodel_canfetchmore_isbase = false;
    mutable bool qstringlistmodel_buddy_isbase = false;
    mutable bool qstringlistmodel_match_isbase = false;
    mutable bool qstringlistmodel_span_isbase = false;
    mutable bool qstringlistmodel_rolenames_isbase = false;
    mutable bool qstringlistmodel_multidata_isbase = false;
    mutable bool qstringlistmodel_submit_isbase = false;
    mutable bool qstringlistmodel_revert_isbase = false;
    mutable bool qstringlistmodel_resetinternaldata_isbase = false;
    mutable bool qstringlistmodel_event_isbase = false;
    mutable bool qstringlistmodel_eventfilter_isbase = false;
    mutable bool qstringlistmodel_timerevent_isbase = false;
    mutable bool qstringlistmodel_childevent_isbase = false;
    mutable bool qstringlistmodel_customevent_isbase = false;
    mutable bool qstringlistmodel_connectnotify_isbase = false;
    mutable bool qstringlistmodel_disconnectnotify_isbase = false;
    mutable bool qstringlistmodel_createindex_isbase = false;
    mutable bool qstringlistmodel_encodedata_isbase = false;
    mutable bool qstringlistmodel_decodedata_isbase = false;
    mutable bool qstringlistmodel_begininsertrows_isbase = false;
    mutable bool qstringlistmodel_endinsertrows_isbase = false;
    mutable bool qstringlistmodel_beginremoverows_isbase = false;
    mutable bool qstringlistmodel_endremoverows_isbase = false;
    mutable bool qstringlistmodel_beginmoverows_isbase = false;
    mutable bool qstringlistmodel_endmoverows_isbase = false;
    mutable bool qstringlistmodel_begininsertcolumns_isbase = false;
    mutable bool qstringlistmodel_endinsertcolumns_isbase = false;
    mutable bool qstringlistmodel_beginremovecolumns_isbase = false;
    mutable bool qstringlistmodel_endremovecolumns_isbase = false;
    mutable bool qstringlistmodel_beginmovecolumns_isbase = false;
    mutable bool qstringlistmodel_endmovecolumns_isbase = false;
    mutable bool qstringlistmodel_beginresetmodel_isbase = false;
    mutable bool qstringlistmodel_endresetmodel_isbase = false;
    mutable bool qstringlistmodel_changepersistentindex_isbase = false;
    mutable bool qstringlistmodel_changepersistentindexlist_isbase = false;
    mutable bool qstringlistmodel_persistentindexlist_isbase = false;
    mutable bool qstringlistmodel_sender_isbase = false;
    mutable bool qstringlistmodel_sendersignalindex_isbase = false;
    mutable bool qstringlistmodel_receivers_isbase = false;
    mutable bool qstringlistmodel_issignalconnected_isbase = false;

  public:
    VirtualQStringListModel() : QStringListModel() {};
    VirtualQStringListModel(const QList<QString>& strings) : QStringListModel(strings) {};
    VirtualQStringListModel(QObject* parent) : QStringListModel(parent) {};
    VirtualQStringListModel(const QList<QString>& strings, QObject* parent) : QStringListModel(strings, parent) {};

    ~VirtualQStringListModel() {
        qstringlistmodel_metacall_callback = nullptr;
        qstringlistmodel_rowcount_callback = nullptr;
        qstringlistmodel_sibling_callback = nullptr;
        qstringlistmodel_data_callback = nullptr;
        qstringlistmodel_setdata_callback = nullptr;
        qstringlistmodel_clearitemdata_callback = nullptr;
        qstringlistmodel_flags_callback = nullptr;
        qstringlistmodel_insertrows_callback = nullptr;
        qstringlistmodel_removerows_callback = nullptr;
        qstringlistmodel_moverows_callback = nullptr;
        qstringlistmodel_itemdata_callback = nullptr;
        qstringlistmodel_setitemdata_callback = nullptr;
        qstringlistmodel_sort_callback = nullptr;
        qstringlistmodel_supporteddropactions_callback = nullptr;
        qstringlistmodel_index_callback = nullptr;
        qstringlistmodel_dropmimedata_callback = nullptr;
        qstringlistmodel_headerdata_callback = nullptr;
        qstringlistmodel_setheaderdata_callback = nullptr;
        qstringlistmodel_mimetypes_callback = nullptr;
        qstringlistmodel_mimedata_callback = nullptr;
        qstringlistmodel_candropmimedata_callback = nullptr;
        qstringlistmodel_supporteddragactions_callback = nullptr;
        qstringlistmodel_insertcolumns_callback = nullptr;
        qstringlistmodel_removecolumns_callback = nullptr;
        qstringlistmodel_movecolumns_callback = nullptr;
        qstringlistmodel_fetchmore_callback = nullptr;
        qstringlistmodel_canfetchmore_callback = nullptr;
        qstringlistmodel_buddy_callback = nullptr;
        qstringlistmodel_match_callback = nullptr;
        qstringlistmodel_span_callback = nullptr;
        qstringlistmodel_rolenames_callback = nullptr;
        qstringlistmodel_multidata_callback = nullptr;
        qstringlistmodel_submit_callback = nullptr;
        qstringlistmodel_revert_callback = nullptr;
        qstringlistmodel_resetinternaldata_callback = nullptr;
        qstringlistmodel_event_callback = nullptr;
        qstringlistmodel_eventfilter_callback = nullptr;
        qstringlistmodel_timerevent_callback = nullptr;
        qstringlistmodel_childevent_callback = nullptr;
        qstringlistmodel_customevent_callback = nullptr;
        qstringlistmodel_connectnotify_callback = nullptr;
        qstringlistmodel_disconnectnotify_callback = nullptr;
        qstringlistmodel_createindex_callback = nullptr;
        qstringlistmodel_encodedata_callback = nullptr;
        qstringlistmodel_decodedata_callback = nullptr;
        qstringlistmodel_begininsertrows_callback = nullptr;
        qstringlistmodel_endinsertrows_callback = nullptr;
        qstringlistmodel_beginremoverows_callback = nullptr;
        qstringlistmodel_endremoverows_callback = nullptr;
        qstringlistmodel_beginmoverows_callback = nullptr;
        qstringlistmodel_endmoverows_callback = nullptr;
        qstringlistmodel_begininsertcolumns_callback = nullptr;
        qstringlistmodel_endinsertcolumns_callback = nullptr;
        qstringlistmodel_beginremovecolumns_callback = nullptr;
        qstringlistmodel_endremovecolumns_callback = nullptr;
        qstringlistmodel_beginmovecolumns_callback = nullptr;
        qstringlistmodel_endmovecolumns_callback = nullptr;
        qstringlistmodel_beginresetmodel_callback = nullptr;
        qstringlistmodel_endresetmodel_callback = nullptr;
        qstringlistmodel_changepersistentindex_callback = nullptr;
        qstringlistmodel_changepersistentindexlist_callback = nullptr;
        qstringlistmodel_persistentindexlist_callback = nullptr;
        qstringlistmodel_sender_callback = nullptr;
        qstringlistmodel_sendersignalindex_callback = nullptr;
        qstringlistmodel_receivers_callback = nullptr;
        qstringlistmodel_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQStringListModel_Metacall_Callback(QStringListModel_Metacall_Callback cb) { qstringlistmodel_metacall_callback = cb; }
    inline void setQStringListModel_RowCount_Callback(QStringListModel_RowCount_Callback cb) { qstringlistmodel_rowcount_callback = cb; }
    inline void setQStringListModel_Sibling_Callback(QStringListModel_Sibling_Callback cb) { qstringlistmodel_sibling_callback = cb; }
    inline void setQStringListModel_Data_Callback(QStringListModel_Data_Callback cb) { qstringlistmodel_data_callback = cb; }
    inline void setQStringListModel_SetData_Callback(QStringListModel_SetData_Callback cb) { qstringlistmodel_setdata_callback = cb; }
    inline void setQStringListModel_ClearItemData_Callback(QStringListModel_ClearItemData_Callback cb) { qstringlistmodel_clearitemdata_callback = cb; }
    inline void setQStringListModel_Flags_Callback(QStringListModel_Flags_Callback cb) { qstringlistmodel_flags_callback = cb; }
    inline void setQStringListModel_InsertRows_Callback(QStringListModel_InsertRows_Callback cb) { qstringlistmodel_insertrows_callback = cb; }
    inline void setQStringListModel_RemoveRows_Callback(QStringListModel_RemoveRows_Callback cb) { qstringlistmodel_removerows_callback = cb; }
    inline void setQStringListModel_MoveRows_Callback(QStringListModel_MoveRows_Callback cb) { qstringlistmodel_moverows_callback = cb; }
    inline void setQStringListModel_ItemData_Callback(QStringListModel_ItemData_Callback cb) { qstringlistmodel_itemdata_callback = cb; }
    inline void setQStringListModel_SetItemData_Callback(QStringListModel_SetItemData_Callback cb) { qstringlistmodel_setitemdata_callback = cb; }
    inline void setQStringListModel_Sort_Callback(QStringListModel_Sort_Callback cb) { qstringlistmodel_sort_callback = cb; }
    inline void setQStringListModel_SupportedDropActions_Callback(QStringListModel_SupportedDropActions_Callback cb) { qstringlistmodel_supporteddropactions_callback = cb; }
    inline void setQStringListModel_Index_Callback(QStringListModel_Index_Callback cb) { qstringlistmodel_index_callback = cb; }
    inline void setQStringListModel_DropMimeData_Callback(QStringListModel_DropMimeData_Callback cb) { qstringlistmodel_dropmimedata_callback = cb; }
    inline void setQStringListModel_HeaderData_Callback(QStringListModel_HeaderData_Callback cb) { qstringlistmodel_headerdata_callback = cb; }
    inline void setQStringListModel_SetHeaderData_Callback(QStringListModel_SetHeaderData_Callback cb) { qstringlistmodel_setheaderdata_callback = cb; }
    inline void setQStringListModel_MimeTypes_Callback(QStringListModel_MimeTypes_Callback cb) { qstringlistmodel_mimetypes_callback = cb; }
    inline void setQStringListModel_MimeData_Callback(QStringListModel_MimeData_Callback cb) { qstringlistmodel_mimedata_callback = cb; }
    inline void setQStringListModel_CanDropMimeData_Callback(QStringListModel_CanDropMimeData_Callback cb) { qstringlistmodel_candropmimedata_callback = cb; }
    inline void setQStringListModel_SupportedDragActions_Callback(QStringListModel_SupportedDragActions_Callback cb) { qstringlistmodel_supporteddragactions_callback = cb; }
    inline void setQStringListModel_InsertColumns_Callback(QStringListModel_InsertColumns_Callback cb) { qstringlistmodel_insertcolumns_callback = cb; }
    inline void setQStringListModel_RemoveColumns_Callback(QStringListModel_RemoveColumns_Callback cb) { qstringlistmodel_removecolumns_callback = cb; }
    inline void setQStringListModel_MoveColumns_Callback(QStringListModel_MoveColumns_Callback cb) { qstringlistmodel_movecolumns_callback = cb; }
    inline void setQStringListModel_FetchMore_Callback(QStringListModel_FetchMore_Callback cb) { qstringlistmodel_fetchmore_callback = cb; }
    inline void setQStringListModel_CanFetchMore_Callback(QStringListModel_CanFetchMore_Callback cb) { qstringlistmodel_canfetchmore_callback = cb; }
    inline void setQStringListModel_Buddy_Callback(QStringListModel_Buddy_Callback cb) { qstringlistmodel_buddy_callback = cb; }
    inline void setQStringListModel_Match_Callback(QStringListModel_Match_Callback cb) { qstringlistmodel_match_callback = cb; }
    inline void setQStringListModel_Span_Callback(QStringListModel_Span_Callback cb) { qstringlistmodel_span_callback = cb; }
    inline void setQStringListModel_RoleNames_Callback(QStringListModel_RoleNames_Callback cb) { qstringlistmodel_rolenames_callback = cb; }
    inline void setQStringListModel_MultiData_Callback(QStringListModel_MultiData_Callback cb) { qstringlistmodel_multidata_callback = cb; }
    inline void setQStringListModel_Submit_Callback(QStringListModel_Submit_Callback cb) { qstringlistmodel_submit_callback = cb; }
    inline void setQStringListModel_Revert_Callback(QStringListModel_Revert_Callback cb) { qstringlistmodel_revert_callback = cb; }
    inline void setQStringListModel_ResetInternalData_Callback(QStringListModel_ResetInternalData_Callback cb) { qstringlistmodel_resetinternaldata_callback = cb; }
    inline void setQStringListModel_Event_Callback(QStringListModel_Event_Callback cb) { qstringlistmodel_event_callback = cb; }
    inline void setQStringListModel_EventFilter_Callback(QStringListModel_EventFilter_Callback cb) { qstringlistmodel_eventfilter_callback = cb; }
    inline void setQStringListModel_TimerEvent_Callback(QStringListModel_TimerEvent_Callback cb) { qstringlistmodel_timerevent_callback = cb; }
    inline void setQStringListModel_ChildEvent_Callback(QStringListModel_ChildEvent_Callback cb) { qstringlistmodel_childevent_callback = cb; }
    inline void setQStringListModel_CustomEvent_Callback(QStringListModel_CustomEvent_Callback cb) { qstringlistmodel_customevent_callback = cb; }
    inline void setQStringListModel_ConnectNotify_Callback(QStringListModel_ConnectNotify_Callback cb) { qstringlistmodel_connectnotify_callback = cb; }
    inline void setQStringListModel_DisconnectNotify_Callback(QStringListModel_DisconnectNotify_Callback cb) { qstringlistmodel_disconnectnotify_callback = cb; }
    inline void setQStringListModel_CreateIndex_Callback(QStringListModel_CreateIndex_Callback cb) { qstringlistmodel_createindex_callback = cb; }
    inline void setQStringListModel_EncodeData_Callback(QStringListModel_EncodeData_Callback cb) { qstringlistmodel_encodedata_callback = cb; }
    inline void setQStringListModel_DecodeData_Callback(QStringListModel_DecodeData_Callback cb) { qstringlistmodel_decodedata_callback = cb; }
    inline void setQStringListModel_BeginInsertRows_Callback(QStringListModel_BeginInsertRows_Callback cb) { qstringlistmodel_begininsertrows_callback = cb; }
    inline void setQStringListModel_EndInsertRows_Callback(QStringListModel_EndInsertRows_Callback cb) { qstringlistmodel_endinsertrows_callback = cb; }
    inline void setQStringListModel_BeginRemoveRows_Callback(QStringListModel_BeginRemoveRows_Callback cb) { qstringlistmodel_beginremoverows_callback = cb; }
    inline void setQStringListModel_EndRemoveRows_Callback(QStringListModel_EndRemoveRows_Callback cb) { qstringlistmodel_endremoverows_callback = cb; }
    inline void setQStringListModel_BeginMoveRows_Callback(QStringListModel_BeginMoveRows_Callback cb) { qstringlistmodel_beginmoverows_callback = cb; }
    inline void setQStringListModel_EndMoveRows_Callback(QStringListModel_EndMoveRows_Callback cb) { qstringlistmodel_endmoverows_callback = cb; }
    inline void setQStringListModel_BeginInsertColumns_Callback(QStringListModel_BeginInsertColumns_Callback cb) { qstringlistmodel_begininsertcolumns_callback = cb; }
    inline void setQStringListModel_EndInsertColumns_Callback(QStringListModel_EndInsertColumns_Callback cb) { qstringlistmodel_endinsertcolumns_callback = cb; }
    inline void setQStringListModel_BeginRemoveColumns_Callback(QStringListModel_BeginRemoveColumns_Callback cb) { qstringlistmodel_beginremovecolumns_callback = cb; }
    inline void setQStringListModel_EndRemoveColumns_Callback(QStringListModel_EndRemoveColumns_Callback cb) { qstringlistmodel_endremovecolumns_callback = cb; }
    inline void setQStringListModel_BeginMoveColumns_Callback(QStringListModel_BeginMoveColumns_Callback cb) { qstringlistmodel_beginmovecolumns_callback = cb; }
    inline void setQStringListModel_EndMoveColumns_Callback(QStringListModel_EndMoveColumns_Callback cb) { qstringlistmodel_endmovecolumns_callback = cb; }
    inline void setQStringListModel_BeginResetModel_Callback(QStringListModel_BeginResetModel_Callback cb) { qstringlistmodel_beginresetmodel_callback = cb; }
    inline void setQStringListModel_EndResetModel_Callback(QStringListModel_EndResetModel_Callback cb) { qstringlistmodel_endresetmodel_callback = cb; }
    inline void setQStringListModel_ChangePersistentIndex_Callback(QStringListModel_ChangePersistentIndex_Callback cb) { qstringlistmodel_changepersistentindex_callback = cb; }
    inline void setQStringListModel_ChangePersistentIndexList_Callback(QStringListModel_ChangePersistentIndexList_Callback cb) { qstringlistmodel_changepersistentindexlist_callback = cb; }
    inline void setQStringListModel_PersistentIndexList_Callback(QStringListModel_PersistentIndexList_Callback cb) { qstringlistmodel_persistentindexlist_callback = cb; }
    inline void setQStringListModel_Sender_Callback(QStringListModel_Sender_Callback cb) { qstringlistmodel_sender_callback = cb; }
    inline void setQStringListModel_SenderSignalIndex_Callback(QStringListModel_SenderSignalIndex_Callback cb) { qstringlistmodel_sendersignalindex_callback = cb; }
    inline void setQStringListModel_Receivers_Callback(QStringListModel_Receivers_Callback cb) { qstringlistmodel_receivers_callback = cb; }
    inline void setQStringListModel_IsSignalConnected_Callback(QStringListModel_IsSignalConnected_Callback cb) { qstringlistmodel_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQStringListModel_Metacall_IsBase(bool value) const { qstringlistmodel_metacall_isbase = value; }
    inline void setQStringListModel_RowCount_IsBase(bool value) const { qstringlistmodel_rowcount_isbase = value; }
    inline void setQStringListModel_Sibling_IsBase(bool value) const { qstringlistmodel_sibling_isbase = value; }
    inline void setQStringListModel_Data_IsBase(bool value) const { qstringlistmodel_data_isbase = value; }
    inline void setQStringListModel_SetData_IsBase(bool value) const { qstringlistmodel_setdata_isbase = value; }
    inline void setQStringListModel_ClearItemData_IsBase(bool value) const { qstringlistmodel_clearitemdata_isbase = value; }
    inline void setQStringListModel_Flags_IsBase(bool value) const { qstringlistmodel_flags_isbase = value; }
    inline void setQStringListModel_InsertRows_IsBase(bool value) const { qstringlistmodel_insertrows_isbase = value; }
    inline void setQStringListModel_RemoveRows_IsBase(bool value) const { qstringlistmodel_removerows_isbase = value; }
    inline void setQStringListModel_MoveRows_IsBase(bool value) const { qstringlistmodel_moverows_isbase = value; }
    inline void setQStringListModel_ItemData_IsBase(bool value) const { qstringlistmodel_itemdata_isbase = value; }
    inline void setQStringListModel_SetItemData_IsBase(bool value) const { qstringlistmodel_setitemdata_isbase = value; }
    inline void setQStringListModel_Sort_IsBase(bool value) const { qstringlistmodel_sort_isbase = value; }
    inline void setQStringListModel_SupportedDropActions_IsBase(bool value) const { qstringlistmodel_supporteddropactions_isbase = value; }
    inline void setQStringListModel_Index_IsBase(bool value) const { qstringlistmodel_index_isbase = value; }
    inline void setQStringListModel_DropMimeData_IsBase(bool value) const { qstringlistmodel_dropmimedata_isbase = value; }
    inline void setQStringListModel_HeaderData_IsBase(bool value) const { qstringlistmodel_headerdata_isbase = value; }
    inline void setQStringListModel_SetHeaderData_IsBase(bool value) const { qstringlistmodel_setheaderdata_isbase = value; }
    inline void setQStringListModel_MimeTypes_IsBase(bool value) const { qstringlistmodel_mimetypes_isbase = value; }
    inline void setQStringListModel_MimeData_IsBase(bool value) const { qstringlistmodel_mimedata_isbase = value; }
    inline void setQStringListModel_CanDropMimeData_IsBase(bool value) const { qstringlistmodel_candropmimedata_isbase = value; }
    inline void setQStringListModel_SupportedDragActions_IsBase(bool value) const { qstringlistmodel_supporteddragactions_isbase = value; }
    inline void setQStringListModel_InsertColumns_IsBase(bool value) const { qstringlistmodel_insertcolumns_isbase = value; }
    inline void setQStringListModel_RemoveColumns_IsBase(bool value) const { qstringlistmodel_removecolumns_isbase = value; }
    inline void setQStringListModel_MoveColumns_IsBase(bool value) const { qstringlistmodel_movecolumns_isbase = value; }
    inline void setQStringListModel_FetchMore_IsBase(bool value) const { qstringlistmodel_fetchmore_isbase = value; }
    inline void setQStringListModel_CanFetchMore_IsBase(bool value) const { qstringlistmodel_canfetchmore_isbase = value; }
    inline void setQStringListModel_Buddy_IsBase(bool value) const { qstringlistmodel_buddy_isbase = value; }
    inline void setQStringListModel_Match_IsBase(bool value) const { qstringlistmodel_match_isbase = value; }
    inline void setQStringListModel_Span_IsBase(bool value) const { qstringlistmodel_span_isbase = value; }
    inline void setQStringListModel_RoleNames_IsBase(bool value) const { qstringlistmodel_rolenames_isbase = value; }
    inline void setQStringListModel_MultiData_IsBase(bool value) const { qstringlistmodel_multidata_isbase = value; }
    inline void setQStringListModel_Submit_IsBase(bool value) const { qstringlistmodel_submit_isbase = value; }
    inline void setQStringListModel_Revert_IsBase(bool value) const { qstringlistmodel_revert_isbase = value; }
    inline void setQStringListModel_ResetInternalData_IsBase(bool value) const { qstringlistmodel_resetinternaldata_isbase = value; }
    inline void setQStringListModel_Event_IsBase(bool value) const { qstringlistmodel_event_isbase = value; }
    inline void setQStringListModel_EventFilter_IsBase(bool value) const { qstringlistmodel_eventfilter_isbase = value; }
    inline void setQStringListModel_TimerEvent_IsBase(bool value) const { qstringlistmodel_timerevent_isbase = value; }
    inline void setQStringListModel_ChildEvent_IsBase(bool value) const { qstringlistmodel_childevent_isbase = value; }
    inline void setQStringListModel_CustomEvent_IsBase(bool value) const { qstringlistmodel_customevent_isbase = value; }
    inline void setQStringListModel_ConnectNotify_IsBase(bool value) const { qstringlistmodel_connectnotify_isbase = value; }
    inline void setQStringListModel_DisconnectNotify_IsBase(bool value) const { qstringlistmodel_disconnectnotify_isbase = value; }
    inline void setQStringListModel_CreateIndex_IsBase(bool value) const { qstringlistmodel_createindex_isbase = value; }
    inline void setQStringListModel_EncodeData_IsBase(bool value) const { qstringlistmodel_encodedata_isbase = value; }
    inline void setQStringListModel_DecodeData_IsBase(bool value) const { qstringlistmodel_decodedata_isbase = value; }
    inline void setQStringListModel_BeginInsertRows_IsBase(bool value) const { qstringlistmodel_begininsertrows_isbase = value; }
    inline void setQStringListModel_EndInsertRows_IsBase(bool value) const { qstringlistmodel_endinsertrows_isbase = value; }
    inline void setQStringListModel_BeginRemoveRows_IsBase(bool value) const { qstringlistmodel_beginremoverows_isbase = value; }
    inline void setQStringListModel_EndRemoveRows_IsBase(bool value) const { qstringlistmodel_endremoverows_isbase = value; }
    inline void setQStringListModel_BeginMoveRows_IsBase(bool value) const { qstringlistmodel_beginmoverows_isbase = value; }
    inline void setQStringListModel_EndMoveRows_IsBase(bool value) const { qstringlistmodel_endmoverows_isbase = value; }
    inline void setQStringListModel_BeginInsertColumns_IsBase(bool value) const { qstringlistmodel_begininsertcolumns_isbase = value; }
    inline void setQStringListModel_EndInsertColumns_IsBase(bool value) const { qstringlistmodel_endinsertcolumns_isbase = value; }
    inline void setQStringListModel_BeginRemoveColumns_IsBase(bool value) const { qstringlistmodel_beginremovecolumns_isbase = value; }
    inline void setQStringListModel_EndRemoveColumns_IsBase(bool value) const { qstringlistmodel_endremovecolumns_isbase = value; }
    inline void setQStringListModel_BeginMoveColumns_IsBase(bool value) const { qstringlistmodel_beginmovecolumns_isbase = value; }
    inline void setQStringListModel_EndMoveColumns_IsBase(bool value) const { qstringlistmodel_endmovecolumns_isbase = value; }
    inline void setQStringListModel_BeginResetModel_IsBase(bool value) const { qstringlistmodel_beginresetmodel_isbase = value; }
    inline void setQStringListModel_EndResetModel_IsBase(bool value) const { qstringlistmodel_endresetmodel_isbase = value; }
    inline void setQStringListModel_ChangePersistentIndex_IsBase(bool value) const { qstringlistmodel_changepersistentindex_isbase = value; }
    inline void setQStringListModel_ChangePersistentIndexList_IsBase(bool value) const { qstringlistmodel_changepersistentindexlist_isbase = value; }
    inline void setQStringListModel_PersistentIndexList_IsBase(bool value) const { qstringlistmodel_persistentindexlist_isbase = value; }
    inline void setQStringListModel_Sender_IsBase(bool value) const { qstringlistmodel_sender_isbase = value; }
    inline void setQStringListModel_SenderSignalIndex_IsBase(bool value) const { qstringlistmodel_sendersignalindex_isbase = value; }
    inline void setQStringListModel_Receivers_IsBase(bool value) const { qstringlistmodel_receivers_isbase = value; }
    inline void setQStringListModel_IsSignalConnected_IsBase(bool value) const { qstringlistmodel_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qstringlistmodel_metacall_isbase) {
            qstringlistmodel_metacall_isbase = false;
            return QStringListModel::qt_metacall(param1, param2, param3);
        } else if (qstringlistmodel_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qstringlistmodel_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QStringListModel::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int rowCount(const QModelIndex& parent) const override {
        if (qstringlistmodel_rowcount_isbase) {
            qstringlistmodel_rowcount_isbase = false;
            return QStringListModel::rowCount(parent);
        } else if (qstringlistmodel_rowcount_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            int callback_ret = qstringlistmodel_rowcount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QStringListModel::rowCount(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
        if (qstringlistmodel_sibling_isbase) {
            qstringlistmodel_sibling_isbase = false;
            return QStringListModel::sibling(row, column, idx);
        } else if (qstringlistmodel_sibling_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& idx_ret = idx;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&idx_ret);

            QModelIndex* callback_ret = qstringlistmodel_sibling_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return QStringListModel::sibling(row, column, idx);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(const QModelIndex& index, int role) const override {
        if (qstringlistmodel_data_isbase) {
            qstringlistmodel_data_isbase = false;
            return QStringListModel::data(index, role);
        } else if (qstringlistmodel_data_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = role;

            QVariant* callback_ret = qstringlistmodel_data_callback(this, cbval1, cbval2);
            return *callback_ret;
        } else {
            return QStringListModel::data(index, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
        if (qstringlistmodel_setdata_isbase) {
            qstringlistmodel_setdata_isbase = false;
            return QStringListModel::setData(index, value, role);
        } else if (qstringlistmodel_setdata_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            int cbval3 = role;

            bool callback_ret = qstringlistmodel_setdata_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QStringListModel::setData(index, value, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool clearItemData(const QModelIndex& index) override {
        if (qstringlistmodel_clearitemdata_isbase) {
            qstringlistmodel_clearitemdata_isbase = false;
            return QStringListModel::clearItemData(index);
        } else if (qstringlistmodel_clearitemdata_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            bool callback_ret = qstringlistmodel_clearitemdata_callback(this, cbval1);
            return callback_ret;
        } else {
            return QStringListModel::clearItemData(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
        if (qstringlistmodel_flags_isbase) {
            qstringlistmodel_flags_isbase = false;
            return QStringListModel::flags(index);
        } else if (qstringlistmodel_flags_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            int callback_ret = qstringlistmodel_flags_callback(this, cbval1);
            return static_cast<Qt::ItemFlags>(callback_ret);
        } else {
            return QStringListModel::flags(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
        if (qstringlistmodel_insertrows_isbase) {
            qstringlistmodel_insertrows_isbase = false;
            return QStringListModel::insertRows(row, count, parent);
        } else if (qstringlistmodel_insertrows_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = qstringlistmodel_insertrows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QStringListModel::insertRows(row, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
        if (qstringlistmodel_removerows_isbase) {
            qstringlistmodel_removerows_isbase = false;
            return QStringListModel::removeRows(row, count, parent);
        } else if (qstringlistmodel_removerows_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = qstringlistmodel_removerows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QStringListModel::removeRows(row, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (qstringlistmodel_moverows_isbase) {
            qstringlistmodel_moverows_isbase = false;
            return QStringListModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
        } else if (qstringlistmodel_moverows_callback != nullptr) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceRow;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;

            bool callback_ret = qstringlistmodel_moverows_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return QStringListModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
        if (qstringlistmodel_itemdata_isbase) {
            qstringlistmodel_itemdata_isbase = false;
            return QStringListModel::itemData(index);
        } else if (qstringlistmodel_itemdata_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            libqt_map /* of int to QVariant* */ callback_ret = qstringlistmodel_itemdata_callback(this, cbval1);
            QMap<int, QVariant> callback_ret_QMap;
            int* callback_ret_karr = static_cast<int*>(callback_ret.keys);
            QVariant** callback_ret_varr = static_cast<QVariant**>(callback_ret.values);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QMap[static_cast<int>(callback_ret_karr[i])] = *(callback_ret_varr[i]);
            }
            return callback_ret_QMap;
        } else {
            return QStringListModel::itemData(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
        if (qstringlistmodel_setitemdata_isbase) {
            qstringlistmodel_setitemdata_isbase = false;
            return QStringListModel::setItemData(index, roles);
        } else if (qstringlistmodel_setitemdata_callback != nullptr) {
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

            bool callback_ret = qstringlistmodel_setitemdata_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QStringListModel::setItemData(index, roles);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void sort(int column, Qt::SortOrder order) override {
        if (qstringlistmodel_sort_isbase) {
            qstringlistmodel_sort_isbase = false;
            QStringListModel::sort(column, order);
        } else if (qstringlistmodel_sort_callback != nullptr) {
            int cbval1 = column;
            int cbval2 = static_cast<int>(order);

            qstringlistmodel_sort_callback(this, cbval1, cbval2);
        } else {
            QStringListModel::sort(column, order);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (qstringlistmodel_supporteddropactions_isbase) {
            qstringlistmodel_supporteddropactions_isbase = false;
            return QStringListModel::supportedDropActions();
        } else if (qstringlistmodel_supporteddropactions_callback != nullptr) {
            int callback_ret = qstringlistmodel_supporteddropactions_callback();
            return static_cast<Qt::DropActions>(callback_ret);
        } else {
            return QStringListModel::supportedDropActions();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
        if (qstringlistmodel_index_isbase) {
            qstringlistmodel_index_isbase = false;
            return QStringListModel::index(row, column, parent);
        } else if (qstringlistmodel_index_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            QModelIndex* callback_ret = qstringlistmodel_index_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return QStringListModel::index(row, column, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
        if (qstringlistmodel_dropmimedata_isbase) {
            qstringlistmodel_dropmimedata_isbase = false;
            return QStringListModel::dropMimeData(data, action, row, column, parent);
        } else if (qstringlistmodel_dropmimedata_callback != nullptr) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = qstringlistmodel_dropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return QStringListModel::dropMimeData(data, action, row, column, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
        if (qstringlistmodel_headerdata_isbase) {
            qstringlistmodel_headerdata_isbase = false;
            return QStringListModel::headerData(section, orientation, role);
        } else if (qstringlistmodel_headerdata_callback != nullptr) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            int cbval3 = role;

            QVariant* callback_ret = qstringlistmodel_headerdata_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return QStringListModel::headerData(section, orientation, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
        if (qstringlistmodel_setheaderdata_isbase) {
            qstringlistmodel_setheaderdata_isbase = false;
            return QStringListModel::setHeaderData(section, orientation, value, role);
        } else if (qstringlistmodel_setheaderdata_callback != nullptr) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = role;

            bool callback_ret = qstringlistmodel_setheaderdata_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        } else {
            return QStringListModel::setHeaderData(section, orientation, value, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> mimeTypes() const override {
        if (qstringlistmodel_mimetypes_isbase) {
            qstringlistmodel_mimetypes_isbase = false;
            return QStringListModel::mimeTypes();
        } else if (qstringlistmodel_mimetypes_callback != nullptr) {
            libqt_list /* of libqt_string */ callback_ret = qstringlistmodel_mimetypes_callback();
            QList<QString> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            libqt_string* callback_ret_arr = static_cast<libqt_string*>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                QString callback_ret_arr_i_QString = QString::fromUtf8(callback_ret_arr[i].data, callback_ret_arr[i].len);
                callback_ret_QList.push_back(callback_ret_arr_i_QString);
            }
            return callback_ret_QList;
        } else {
            return QStringListModel::mimeTypes();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* mimeData(const QList<QModelIndex>& indexes) const override {
        if (qstringlistmodel_mimedata_isbase) {
            qstringlistmodel_mimedata_isbase = false;
            return QStringListModel::mimeData(indexes);
        } else if (qstringlistmodel_mimedata_callback != nullptr) {
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

            QMimeData* callback_ret = qstringlistmodel_mimedata_callback(this, cbval1);
            return callback_ret;
        } else {
            return QStringListModel::mimeData(indexes);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
        if (qstringlistmodel_candropmimedata_isbase) {
            qstringlistmodel_candropmimedata_isbase = false;
            return QStringListModel::canDropMimeData(data, action, row, column, parent);
        } else if (qstringlistmodel_candropmimedata_callback != nullptr) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = qstringlistmodel_candropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return QStringListModel::canDropMimeData(data, action, row, column, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDragActions() const override {
        if (qstringlistmodel_supporteddragactions_isbase) {
            qstringlistmodel_supporteddragactions_isbase = false;
            return QStringListModel::supportedDragActions();
        } else if (qstringlistmodel_supporteddragactions_callback != nullptr) {
            int callback_ret = qstringlistmodel_supporteddragactions_callback();
            return static_cast<Qt::DropActions>(callback_ret);
        } else {
            return QStringListModel::supportedDragActions();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
        if (qstringlistmodel_insertcolumns_isbase) {
            qstringlistmodel_insertcolumns_isbase = false;
            return QStringListModel::insertColumns(column, count, parent);
        } else if (qstringlistmodel_insertcolumns_callback != nullptr) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = qstringlistmodel_insertcolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QStringListModel::insertColumns(column, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
        if (qstringlistmodel_removecolumns_isbase) {
            qstringlistmodel_removecolumns_isbase = false;
            return QStringListModel::removeColumns(column, count, parent);
        } else if (qstringlistmodel_removecolumns_callback != nullptr) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = qstringlistmodel_removecolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QStringListModel::removeColumns(column, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (qstringlistmodel_movecolumns_isbase) {
            qstringlistmodel_movecolumns_isbase = false;
            return QStringListModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
        } else if (qstringlistmodel_movecolumns_callback != nullptr) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceColumn;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;

            bool callback_ret = qstringlistmodel_movecolumns_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return QStringListModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void fetchMore(const QModelIndex& parent) override {
        if (qstringlistmodel_fetchmore_isbase) {
            qstringlistmodel_fetchmore_isbase = false;
            QStringListModel::fetchMore(parent);
        } else if (qstringlistmodel_fetchmore_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            qstringlistmodel_fetchmore_callback(this, cbval1);
        } else {
            QStringListModel::fetchMore(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canFetchMore(const QModelIndex& parent) const override {
        if (qstringlistmodel_canfetchmore_isbase) {
            qstringlistmodel_canfetchmore_isbase = false;
            return QStringListModel::canFetchMore(parent);
        } else if (qstringlistmodel_canfetchmore_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = qstringlistmodel_canfetchmore_callback(this, cbval1);
            return callback_ret;
        } else {
            return QStringListModel::canFetchMore(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex buddy(const QModelIndex& index) const override {
        if (qstringlistmodel_buddy_isbase) {
            qstringlistmodel_buddy_isbase = false;
            return QStringListModel::buddy(index);
        } else if (qstringlistmodel_buddy_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QModelIndex* callback_ret = qstringlistmodel_buddy_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QStringListModel::buddy(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
        if (qstringlistmodel_match_isbase) {
            qstringlistmodel_match_isbase = false;
            return QStringListModel::match(start, role, value, hits, flags);
        } else if (qstringlistmodel_match_callback != nullptr) {
            const QModelIndex& start_ret = start;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&start_ret);
            int cbval2 = role;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = hits;
            int cbval5 = static_cast<int>(flags);

            libqt_list /* of QModelIndex* */ callback_ret = qstringlistmodel_match_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            QList<QModelIndex> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QModelIndex** callback_ret_arr = static_cast<QModelIndex**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            return callback_ret_QList;
        } else {
            return QStringListModel::match(start, role, value, hits, flags);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize span(const QModelIndex& index) const override {
        if (qstringlistmodel_span_isbase) {
            qstringlistmodel_span_isbase = false;
            return QStringListModel::span(index);
        } else if (qstringlistmodel_span_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QSize* callback_ret = qstringlistmodel_span_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QStringListModel::span(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QHash<int, QByteArray> roleNames() const override {
        if (qstringlistmodel_rolenames_isbase) {
            qstringlistmodel_rolenames_isbase = false;
            return QStringListModel::roleNames();
        } else if (qstringlistmodel_rolenames_callback != nullptr) {
            libqt_map /* of int to libqt_string */ callback_ret = qstringlistmodel_rolenames_callback();
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
            return QStringListModel::roleNames();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
        if (qstringlistmodel_multidata_isbase) {
            qstringlistmodel_multidata_isbase = false;
            QStringListModel::multiData(index, roleDataSpan);
        } else if (qstringlistmodel_multidata_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelRoleDataSpan* cbval2 = new QModelRoleDataSpan(roleDataSpan);

            qstringlistmodel_multidata_callback(this, cbval1, cbval2);
        } else {
            QStringListModel::multiData(index, roleDataSpan);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool submit() override {
        if (qstringlistmodel_submit_isbase) {
            qstringlistmodel_submit_isbase = false;
            return QStringListModel::submit();
        } else if (qstringlistmodel_submit_callback != nullptr) {
            bool callback_ret = qstringlistmodel_submit_callback();
            return callback_ret;
        } else {
            return QStringListModel::submit();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void revert() override {
        if (qstringlistmodel_revert_isbase) {
            qstringlistmodel_revert_isbase = false;
            QStringListModel::revert();
        } else if (qstringlistmodel_revert_callback != nullptr) {
            qstringlistmodel_revert_callback();
        } else {
            QStringListModel::revert();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetInternalData() override {
        if (qstringlistmodel_resetinternaldata_isbase) {
            qstringlistmodel_resetinternaldata_isbase = false;
            QStringListModel::resetInternalData();
        } else if (qstringlistmodel_resetinternaldata_callback != nullptr) {
            qstringlistmodel_resetinternaldata_callback();
        } else {
            QStringListModel::resetInternalData();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qstringlistmodel_event_isbase) {
            qstringlistmodel_event_isbase = false;
            return QStringListModel::event(event);
        } else if (qstringlistmodel_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qstringlistmodel_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QStringListModel::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qstringlistmodel_eventfilter_isbase) {
            qstringlistmodel_eventfilter_isbase = false;
            return QStringListModel::eventFilter(watched, event);
        } else if (qstringlistmodel_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qstringlistmodel_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QStringListModel::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qstringlistmodel_timerevent_isbase) {
            qstringlistmodel_timerevent_isbase = false;
            QStringListModel::timerEvent(event);
        } else if (qstringlistmodel_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qstringlistmodel_timerevent_callback(this, cbval1);
        } else {
            QStringListModel::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qstringlistmodel_childevent_isbase) {
            qstringlistmodel_childevent_isbase = false;
            QStringListModel::childEvent(event);
        } else if (qstringlistmodel_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qstringlistmodel_childevent_callback(this, cbval1);
        } else {
            QStringListModel::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qstringlistmodel_customevent_isbase) {
            qstringlistmodel_customevent_isbase = false;
            QStringListModel::customEvent(event);
        } else if (qstringlistmodel_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qstringlistmodel_customevent_callback(this, cbval1);
        } else {
            QStringListModel::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qstringlistmodel_connectnotify_isbase) {
            qstringlistmodel_connectnotify_isbase = false;
            QStringListModel::connectNotify(signal);
        } else if (qstringlistmodel_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qstringlistmodel_connectnotify_callback(this, cbval1);
        } else {
            QStringListModel::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qstringlistmodel_disconnectnotify_isbase) {
            qstringlistmodel_disconnectnotify_isbase = false;
            QStringListModel::disconnectNotify(signal);
        } else if (qstringlistmodel_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qstringlistmodel_disconnectnotify_callback(this, cbval1);
        } else {
            QStringListModel::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QModelIndex createIndex(int row, int column) const {
        if (qstringlistmodel_createindex_isbase) {
            qstringlistmodel_createindex_isbase = false;
            return QStringListModel::createIndex(row, column);
        } else if (qstringlistmodel_createindex_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;

            QModelIndex* callback_ret = qstringlistmodel_createindex_callback(this, cbval1, cbval2);
            return *callback_ret;
        } else {
            return QStringListModel::createIndex(row, column);
        }
    }

    // Virtual method for C ABI access and custom callback
    void encodeData(const QList<QModelIndex>& indexes, QDataStream& stream) const {
        if (qstringlistmodel_encodedata_isbase) {
            qstringlistmodel_encodedata_isbase = false;
            QStringListModel::encodeData(indexes, stream);
        } else if (qstringlistmodel_encodedata_callback != nullptr) {
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

            qstringlistmodel_encodedata_callback(this, cbval1, cbval2);
        } else {
            QStringListModel::encodeData(indexes, stream);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool decodeData(int row, int column, const QModelIndex& parent, QDataStream& stream) {
        if (qstringlistmodel_decodedata_isbase) {
            qstringlistmodel_decodedata_isbase = false;
            return QStringListModel::decodeData(row, column, parent, stream);
        } else if (qstringlistmodel_decodedata_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            QDataStream& stream_ret = stream;
            // Cast returned reference into pointer
            QDataStream* cbval4 = &stream_ret;

            bool callback_ret = qstringlistmodel_decodedata_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        } else {
            return QStringListModel::decodeData(row, column, parent, stream);
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertRows(const QModelIndex& parent, int first, int last) {
        if (qstringlistmodel_begininsertrows_isbase) {
            qstringlistmodel_begininsertrows_isbase = false;
            QStringListModel::beginInsertRows(parent, first, last);
        } else if (qstringlistmodel_begininsertrows_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            qstringlistmodel_begininsertrows_callback(this, cbval1, cbval2, cbval3);
        } else {
            QStringListModel::beginInsertRows(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endInsertRows() {
        if (qstringlistmodel_endinsertrows_isbase) {
            qstringlistmodel_endinsertrows_isbase = false;
            QStringListModel::endInsertRows();
        } else if (qstringlistmodel_endinsertrows_callback != nullptr) {
            qstringlistmodel_endinsertrows_callback();
        } else {
            QStringListModel::endInsertRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveRows(const QModelIndex& parent, int first, int last) {
        if (qstringlistmodel_beginremoverows_isbase) {
            qstringlistmodel_beginremoverows_isbase = false;
            QStringListModel::beginRemoveRows(parent, first, last);
        } else if (qstringlistmodel_beginremoverows_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            qstringlistmodel_beginremoverows_callback(this, cbval1, cbval2, cbval3);
        } else {
            QStringListModel::beginRemoveRows(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveRows() {
        if (qstringlistmodel_endremoverows_isbase) {
            qstringlistmodel_endremoverows_isbase = false;
            QStringListModel::endRemoveRows();
        } else if (qstringlistmodel_endremoverows_callback != nullptr) {
            qstringlistmodel_endremoverows_callback();
        } else {
            QStringListModel::endRemoveRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveRows(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationRow) {
        if (qstringlistmodel_beginmoverows_isbase) {
            qstringlistmodel_beginmoverows_isbase = false;
            return QStringListModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
        } else if (qstringlistmodel_beginmoverows_callback != nullptr) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceFirst;
            int cbval3 = sourceLast;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationRow;

            bool callback_ret = qstringlistmodel_beginmoverows_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return QStringListModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endMoveRows() {
        if (qstringlistmodel_endmoverows_isbase) {
            qstringlistmodel_endmoverows_isbase = false;
            QStringListModel::endMoveRows();
        } else if (qstringlistmodel_endmoverows_callback != nullptr) {
            qstringlistmodel_endmoverows_callback();
        } else {
            QStringListModel::endMoveRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertColumns(const QModelIndex& parent, int first, int last) {
        if (qstringlistmodel_begininsertcolumns_isbase) {
            qstringlistmodel_begininsertcolumns_isbase = false;
            QStringListModel::beginInsertColumns(parent, first, last);
        } else if (qstringlistmodel_begininsertcolumns_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            qstringlistmodel_begininsertcolumns_callback(this, cbval1, cbval2, cbval3);
        } else {
            QStringListModel::beginInsertColumns(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endInsertColumns() {
        if (qstringlistmodel_endinsertcolumns_isbase) {
            qstringlistmodel_endinsertcolumns_isbase = false;
            QStringListModel::endInsertColumns();
        } else if (qstringlistmodel_endinsertcolumns_callback != nullptr) {
            qstringlistmodel_endinsertcolumns_callback();
        } else {
            QStringListModel::endInsertColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveColumns(const QModelIndex& parent, int first, int last) {
        if (qstringlistmodel_beginremovecolumns_isbase) {
            qstringlistmodel_beginremovecolumns_isbase = false;
            QStringListModel::beginRemoveColumns(parent, first, last);
        } else if (qstringlistmodel_beginremovecolumns_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            qstringlistmodel_beginremovecolumns_callback(this, cbval1, cbval2, cbval3);
        } else {
            QStringListModel::beginRemoveColumns(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveColumns() {
        if (qstringlistmodel_endremovecolumns_isbase) {
            qstringlistmodel_endremovecolumns_isbase = false;
            QStringListModel::endRemoveColumns();
        } else if (qstringlistmodel_endremovecolumns_callback != nullptr) {
            qstringlistmodel_endremovecolumns_callback();
        } else {
            QStringListModel::endRemoveColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveColumns(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationColumn) {
        if (qstringlistmodel_beginmovecolumns_isbase) {
            qstringlistmodel_beginmovecolumns_isbase = false;
            return QStringListModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
        } else if (qstringlistmodel_beginmovecolumns_callback != nullptr) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceFirst;
            int cbval3 = sourceLast;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationColumn;

            bool callback_ret = qstringlistmodel_beginmovecolumns_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return QStringListModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endMoveColumns() {
        if (qstringlistmodel_endmovecolumns_isbase) {
            qstringlistmodel_endmovecolumns_isbase = false;
            QStringListModel::endMoveColumns();
        } else if (qstringlistmodel_endmovecolumns_callback != nullptr) {
            qstringlistmodel_endmovecolumns_callback();
        } else {
            QStringListModel::endMoveColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginResetModel() {
        if (qstringlistmodel_beginresetmodel_isbase) {
            qstringlistmodel_beginresetmodel_isbase = false;
            QStringListModel::beginResetModel();
        } else if (qstringlistmodel_beginresetmodel_callback != nullptr) {
            qstringlistmodel_beginresetmodel_callback();
        } else {
            QStringListModel::beginResetModel();
        }
    }

    // Virtual method for C ABI access and custom callback
    void endResetModel() {
        if (qstringlistmodel_endresetmodel_isbase) {
            qstringlistmodel_endresetmodel_isbase = false;
            QStringListModel::endResetModel();
        } else if (qstringlistmodel_endresetmodel_callback != nullptr) {
            qstringlistmodel_endresetmodel_callback();
        } else {
            QStringListModel::endResetModel();
        }
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndex(const QModelIndex& from, const QModelIndex& to) {
        if (qstringlistmodel_changepersistentindex_isbase) {
            qstringlistmodel_changepersistentindex_isbase = false;
            QStringListModel::changePersistentIndex(from, to);
        } else if (qstringlistmodel_changepersistentindex_callback != nullptr) {
            const QModelIndex& from_ret = from;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&from_ret);
            const QModelIndex& to_ret = to;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&to_ret);

            qstringlistmodel_changepersistentindex_callback(this, cbval1, cbval2);
        } else {
            QStringListModel::changePersistentIndex(from, to);
        }
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndexList(const QList<QModelIndex>& from, const QList<QModelIndex>& to) {
        if (qstringlistmodel_changepersistentindexlist_isbase) {
            qstringlistmodel_changepersistentindexlist_isbase = false;
            QStringListModel::changePersistentIndexList(from, to);
        } else if (qstringlistmodel_changepersistentindexlist_callback != nullptr) {
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

            qstringlistmodel_changepersistentindexlist_callback(this, cbval1, cbval2);
        } else {
            QStringListModel::changePersistentIndexList(from, to);
        }
    }

    // Virtual method for C ABI access and custom callback
    QList<QModelIndex> persistentIndexList() const {
        if (qstringlistmodel_persistentindexlist_isbase) {
            qstringlistmodel_persistentindexlist_isbase = false;
            return QStringListModel::persistentIndexList();
        } else if (qstringlistmodel_persistentindexlist_callback != nullptr) {
            libqt_list /* of QModelIndex* */ callback_ret = qstringlistmodel_persistentindexlist_callback();
            QList<QModelIndex> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QModelIndex** callback_ret_arr = static_cast<QModelIndex**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            return callback_ret_QList;
        } else {
            return QStringListModel::persistentIndexList();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qstringlistmodel_sender_isbase) {
            qstringlistmodel_sender_isbase = false;
            return QStringListModel::sender();
        } else if (qstringlistmodel_sender_callback != nullptr) {
            QObject* callback_ret = qstringlistmodel_sender_callback();
            return callback_ret;
        } else {
            return QStringListModel::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qstringlistmodel_sendersignalindex_isbase) {
            qstringlistmodel_sendersignalindex_isbase = false;
            return QStringListModel::senderSignalIndex();
        } else if (qstringlistmodel_sendersignalindex_callback != nullptr) {
            int callback_ret = qstringlistmodel_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QStringListModel::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qstringlistmodel_receivers_isbase) {
            qstringlistmodel_receivers_isbase = false;
            return QStringListModel::receivers(signal);
        } else if (qstringlistmodel_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qstringlistmodel_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QStringListModel::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qstringlistmodel_issignalconnected_isbase) {
            qstringlistmodel_issignalconnected_isbase = false;
            return QStringListModel::isSignalConnected(signal);
        } else if (qstringlistmodel_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qstringlistmodel_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QStringListModel::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QStringListModel_ResetInternalData(QStringListModel* self);
    friend void QStringListModel_QBaseResetInternalData(QStringListModel* self);
    friend void QStringListModel_TimerEvent(QStringListModel* self, QTimerEvent* event);
    friend void QStringListModel_QBaseTimerEvent(QStringListModel* self, QTimerEvent* event);
    friend void QStringListModel_ChildEvent(QStringListModel* self, QChildEvent* event);
    friend void QStringListModel_QBaseChildEvent(QStringListModel* self, QChildEvent* event);
    friend void QStringListModel_CustomEvent(QStringListModel* self, QEvent* event);
    friend void QStringListModel_QBaseCustomEvent(QStringListModel* self, QEvent* event);
    friend void QStringListModel_ConnectNotify(QStringListModel* self, const QMetaMethod* signal);
    friend void QStringListModel_QBaseConnectNotify(QStringListModel* self, const QMetaMethod* signal);
    friend void QStringListModel_DisconnectNotify(QStringListModel* self, const QMetaMethod* signal);
    friend void QStringListModel_QBaseDisconnectNotify(QStringListModel* self, const QMetaMethod* signal);
    friend QModelIndex* QStringListModel_CreateIndex(const QStringListModel* self, int row, int column);
    friend QModelIndex* QStringListModel_QBaseCreateIndex(const QStringListModel* self, int row, int column);
    friend void QStringListModel_EncodeData(const QStringListModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
    friend void QStringListModel_QBaseEncodeData(const QStringListModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
    friend bool QStringListModel_DecodeData(QStringListModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
    friend bool QStringListModel_QBaseDecodeData(QStringListModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
    friend void QStringListModel_BeginInsertRows(QStringListModel* self, const QModelIndex* parent, int first, int last);
    friend void QStringListModel_QBaseBeginInsertRows(QStringListModel* self, const QModelIndex* parent, int first, int last);
    friend void QStringListModel_EndInsertRows(QStringListModel* self);
    friend void QStringListModel_QBaseEndInsertRows(QStringListModel* self);
    friend void QStringListModel_BeginRemoveRows(QStringListModel* self, const QModelIndex* parent, int first, int last);
    friend void QStringListModel_QBaseBeginRemoveRows(QStringListModel* self, const QModelIndex* parent, int first, int last);
    friend void QStringListModel_EndRemoveRows(QStringListModel* self);
    friend void QStringListModel_QBaseEndRemoveRows(QStringListModel* self);
    friend bool QStringListModel_BeginMoveRows(QStringListModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
    friend bool QStringListModel_QBaseBeginMoveRows(QStringListModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
    friend void QStringListModel_EndMoveRows(QStringListModel* self);
    friend void QStringListModel_QBaseEndMoveRows(QStringListModel* self);
    friend void QStringListModel_BeginInsertColumns(QStringListModel* self, const QModelIndex* parent, int first, int last);
    friend void QStringListModel_QBaseBeginInsertColumns(QStringListModel* self, const QModelIndex* parent, int first, int last);
    friend void QStringListModel_EndInsertColumns(QStringListModel* self);
    friend void QStringListModel_QBaseEndInsertColumns(QStringListModel* self);
    friend void QStringListModel_BeginRemoveColumns(QStringListModel* self, const QModelIndex* parent, int first, int last);
    friend void QStringListModel_QBaseBeginRemoveColumns(QStringListModel* self, const QModelIndex* parent, int first, int last);
    friend void QStringListModel_EndRemoveColumns(QStringListModel* self);
    friend void QStringListModel_QBaseEndRemoveColumns(QStringListModel* self);
    friend bool QStringListModel_BeginMoveColumns(QStringListModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
    friend bool QStringListModel_QBaseBeginMoveColumns(QStringListModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
    friend void QStringListModel_EndMoveColumns(QStringListModel* self);
    friend void QStringListModel_QBaseEndMoveColumns(QStringListModel* self);
    friend void QStringListModel_BeginResetModel(QStringListModel* self);
    friend void QStringListModel_QBaseBeginResetModel(QStringListModel* self);
    friend void QStringListModel_EndResetModel(QStringListModel* self);
    friend void QStringListModel_QBaseEndResetModel(QStringListModel* self);
    friend void QStringListModel_ChangePersistentIndex(QStringListModel* self, const QModelIndex* from, const QModelIndex* to);
    friend void QStringListModel_QBaseChangePersistentIndex(QStringListModel* self, const QModelIndex* from, const QModelIndex* to);
    friend void QStringListModel_ChangePersistentIndexList(QStringListModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
    friend void QStringListModel_QBaseChangePersistentIndexList(QStringListModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
    friend libqt_list /* of QModelIndex* */ QStringListModel_PersistentIndexList(const QStringListModel* self);
    friend libqt_list /* of QModelIndex* */ QStringListModel_QBasePersistentIndexList(const QStringListModel* self);
    friend QObject* QStringListModel_Sender(const QStringListModel* self);
    friend QObject* QStringListModel_QBaseSender(const QStringListModel* self);
    friend int QStringListModel_SenderSignalIndex(const QStringListModel* self);
    friend int QStringListModel_QBaseSenderSignalIndex(const QStringListModel* self);
    friend int QStringListModel_Receivers(const QStringListModel* self, const char* signal);
    friend int QStringListModel_QBaseReceivers(const QStringListModel* self, const char* signal);
    friend bool QStringListModel_IsSignalConnected(const QStringListModel* self, const QMetaMethod* signal);
    friend bool QStringListModel_QBaseIsSignalConnected(const QStringListModel* self, const QMetaMethod* signal);
};

#endif
