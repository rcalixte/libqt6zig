#pragma once
#ifndef SRCC_LIBVIRTUALQSTANDARDITEMMODEL_H
#define SRCC_LIBVIRTUALQSTANDARDITEMMODEL_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QStandardItem so that we can call protected methods
class VirtualQStandardItem final : public QStandardItem {

  public:
    // Virtual class boolean flag
    bool isVirtualQStandardItem = true;

    // Virtual class public types (including callbacks)
    using QStandardItem_Data_Callback = QVariant* (*)(const QStandardItem*, int);
    using QStandardItem_MultiData_Callback = void (*)(const QStandardItem*, QModelRoleDataSpan*);
    using QStandardItem_SetData_Callback = void (*)(QStandardItem*, QVariant*, int);
    using QStandardItem_Clone_Callback = QStandardItem* (*)();
    using QStandardItem_Type_Callback = int (*)();
    using QStandardItem_Read_Callback = void (*)(QStandardItem*, QDataStream*);
    using QStandardItem_Write_Callback = void (*)(const QStandardItem*, QDataStream*);
    using QStandardItem_OperatorLesser_Callback = bool (*)(const QStandardItem*, QStandardItem*);
    using QStandardItem_OperatorAssign_Callback = void (*)(QStandardItem*, QStandardItem*);
    using QStandardItem_EmitDataChanged_Callback = void (*)();

  protected:
    // Instance callback storage
    QStandardItem_Data_Callback qstandarditem_data_callback = nullptr;
    QStandardItem_MultiData_Callback qstandarditem_multidata_callback = nullptr;
    QStandardItem_SetData_Callback qstandarditem_setdata_callback = nullptr;
    QStandardItem_Clone_Callback qstandarditem_clone_callback = nullptr;
    QStandardItem_Type_Callback qstandarditem_type_callback = nullptr;
    QStandardItem_Read_Callback qstandarditem_read_callback = nullptr;
    QStandardItem_Write_Callback qstandarditem_write_callback = nullptr;
    QStandardItem_OperatorLesser_Callback qstandarditem_operatorlesser_callback = nullptr;
    QStandardItem_OperatorAssign_Callback qstandarditem_operatorassign_callback = nullptr;
    QStandardItem_EmitDataChanged_Callback qstandarditem_emitdatachanged_callback = nullptr;

    // Instance base flags
    mutable bool qstandarditem_data_isbase = false;
    mutable bool qstandarditem_multidata_isbase = false;
    mutable bool qstandarditem_setdata_isbase = false;
    mutable bool qstandarditem_clone_isbase = false;
    mutable bool qstandarditem_type_isbase = false;
    mutable bool qstandarditem_read_isbase = false;
    mutable bool qstandarditem_write_isbase = false;
    mutable bool qstandarditem_operatorlesser_isbase = false;
    mutable bool qstandarditem_operatorassign_isbase = false;
    mutable bool qstandarditem_emitdatachanged_isbase = false;

  public:
    VirtualQStandardItem() : QStandardItem() {};
    VirtualQStandardItem(const QString& text) : QStandardItem(text) {};
    VirtualQStandardItem(const QIcon& icon, const QString& text) : QStandardItem(icon, text) {};
    VirtualQStandardItem(int rows) : QStandardItem(rows) {};
    VirtualQStandardItem(int rows, int columns) : QStandardItem(rows, columns) {};

    // Callback setters
    inline void setQStandardItem_Data_Callback(QStandardItem_Data_Callback cb) { qstandarditem_data_callback = cb; }
    inline void setQStandardItem_MultiData_Callback(QStandardItem_MultiData_Callback cb) { qstandarditem_multidata_callback = cb; }
    inline void setQStandardItem_SetData_Callback(QStandardItem_SetData_Callback cb) { qstandarditem_setdata_callback = cb; }
    inline void setQStandardItem_Clone_Callback(QStandardItem_Clone_Callback cb) { qstandarditem_clone_callback = cb; }
    inline void setQStandardItem_Type_Callback(QStandardItem_Type_Callback cb) { qstandarditem_type_callback = cb; }
    inline void setQStandardItem_Read_Callback(QStandardItem_Read_Callback cb) { qstandarditem_read_callback = cb; }
    inline void setQStandardItem_Write_Callback(QStandardItem_Write_Callback cb) { qstandarditem_write_callback = cb; }
    inline void setQStandardItem_OperatorLesser_Callback(QStandardItem_OperatorLesser_Callback cb) { qstandarditem_operatorlesser_callback = cb; }
    inline void setQStandardItem_OperatorAssign_Callback(QStandardItem_OperatorAssign_Callback cb) { qstandarditem_operatorassign_callback = cb; }
    inline void setQStandardItem_EmitDataChanged_Callback(QStandardItem_EmitDataChanged_Callback cb) { qstandarditem_emitdatachanged_callback = cb; }

    // Base flag setters
    inline void setQStandardItem_Data_IsBase(bool value) const { qstandarditem_data_isbase = value; }
    inline void setQStandardItem_MultiData_IsBase(bool value) const { qstandarditem_multidata_isbase = value; }
    inline void setQStandardItem_SetData_IsBase(bool value) const { qstandarditem_setdata_isbase = value; }
    inline void setQStandardItem_Clone_IsBase(bool value) const { qstandarditem_clone_isbase = value; }
    inline void setQStandardItem_Type_IsBase(bool value) const { qstandarditem_type_isbase = value; }
    inline void setQStandardItem_Read_IsBase(bool value) const { qstandarditem_read_isbase = value; }
    inline void setQStandardItem_Write_IsBase(bool value) const { qstandarditem_write_isbase = value; }
    inline void setQStandardItem_OperatorLesser_IsBase(bool value) const { qstandarditem_operatorlesser_isbase = value; }
    inline void setQStandardItem_OperatorAssign_IsBase(bool value) const { qstandarditem_operatorassign_isbase = value; }
    inline void setQStandardItem_EmitDataChanged_IsBase(bool value) const { qstandarditem_emitdatachanged_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(int role) const override {
        if (qstandarditem_data_isbase) {
            qstandarditem_data_isbase = false;
            return QStandardItem::data(role);
        }
        auto data_cb = qstandarditem_data_callback;
        if (data_cb) {
            int cbval1 = role;

            QVariant* callback_ret = data_cb(this, cbval1);
            return *callback_ret;
        }
        return QStandardItem::data(role);
    }

    // Virtual method for C ABI access and custom callback
    virtual void multiData(QModelRoleDataSpan roleDataSpan) const override {
        if (qstandarditem_multidata_isbase) {
            qstandarditem_multidata_isbase = false;
            QStandardItem::multiData(roleDataSpan);
            return;
        }
        auto multidata_cb = qstandarditem_multidata_callback;
        if (multidata_cb) {
            QModelRoleDataSpan* cbval1 = new QModelRoleDataSpan(roleDataSpan);

            multidata_cb(this, cbval1);
            return;
        }
        QStandardItem::multiData(roleDataSpan);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setData(const QVariant& value, int role) override {
        if (qstandarditem_setdata_isbase) {
            qstandarditem_setdata_isbase = false;
            QStandardItem::setData(value, role);
            return;
        }
        auto setdata_cb = qstandarditem_setdata_callback;
        if (setdata_cb) {
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&value_ret);
            int cbval2 = role;

            setdata_cb(this, cbval1, cbval2);
            return;
        }
        QStandardItem::setData(value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual QStandardItem* clone() const override {
        if (qstandarditem_clone_isbase) {
            qstandarditem_clone_isbase = false;
            return QStandardItem::clone();
        }
        auto clone_cb = qstandarditem_clone_callback;
        if (clone_cb) {
            QStandardItem* callback_ret = clone_cb();
            return callback_ret;
        }
        return QStandardItem::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual int type() const override {
        if (qstandarditem_type_isbase) {
            qstandarditem_type_isbase = false;
            return QStandardItem::type();
        }
        auto type_cb = qstandarditem_type_callback;
        if (type_cb) {
            int callback_ret = type_cb();
            return static_cast<int>(callback_ret);
        }
        return QStandardItem::type();
    }

    // Virtual method for C ABI access and custom callback
    virtual void read(QDataStream& in) override {
        if (qstandarditem_read_isbase) {
            qstandarditem_read_isbase = false;
            QStandardItem::read(in);
            return;
        }
        auto read_cb = qstandarditem_read_callback;
        if (read_cb) {
            QDataStream& in_ret = in;
            // Cast returned reference into pointer
            QDataStream* cbval1 = &in_ret;

            read_cb(this, cbval1);
            return;
        }
        QStandardItem::read(in);
    }

    // Virtual method for C ABI access and custom callback
    virtual void write(QDataStream& out) const override {
        if (qstandarditem_write_isbase) {
            qstandarditem_write_isbase = false;
            QStandardItem::write(out);
            return;
        }
        auto write_cb = qstandarditem_write_callback;
        if (write_cb) {
            QDataStream& out_ret = out;
            // Cast returned reference into pointer
            QDataStream* cbval1 = &out_ret;

            write_cb(this, cbval1);
            return;
        }
        QStandardItem::write(out);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool operator<(const QStandardItem& other) const override {
        if (qstandarditem_operatorlesser_isbase) {
            qstandarditem_operatorlesser_isbase = false;
            return QStandardItem::operator<(other);
        }
        auto operatorlesser_cb = qstandarditem_operatorlesser_callback;
        if (operatorlesser_cb) {
            const QStandardItem& other_ret = other;
            // Cast returned reference into pointer
            QStandardItem* cbval1 = const_cast<QStandardItem*>(&other_ret);

            bool callback_ret = operatorlesser_cb(this, cbval1);
            return callback_ret;
        }
        return QStandardItem::operator<(other);
    }

    // Virtual method for C ABI access and custom callback
    void operator=(const QStandardItem& other) {
        if (qstandarditem_operatorassign_isbase) {
            qstandarditem_operatorassign_isbase = false;
            QStandardItem::operator=(other);
            return;
        }
        auto operatorassign_cb = qstandarditem_operatorassign_callback;
        if (operatorassign_cb) {
            const QStandardItem& other_ret = other;
            // Cast returned reference into pointer
            QStandardItem* cbval1 = const_cast<QStandardItem*>(&other_ret);

            operatorassign_cb(this, cbval1);
            return;
        }
        QStandardItem::operator=(other);
    }

    // Virtual method for C ABI access and custom callback
    void emitDataChanged() {
        if (qstandarditem_emitdatachanged_isbase) {
            qstandarditem_emitdatachanged_isbase = false;
            QStandardItem::emitDataChanged();
            return;
        }
        auto emitdatachanged_cb = qstandarditem_emitdatachanged_callback;
        if (emitdatachanged_cb) {
            emitdatachanged_cb();
            return;
        }
        QStandardItem::emitDataChanged();
    }

    // Friend functions
    friend void QStandardItem_OperatorAssign(QStandardItem* self, const QStandardItem* other);
    friend void QStandardItem_SuperOperatorAssign(QStandardItem* self, const QStandardItem* other);
    friend void QStandardItem_EmitDataChanged(QStandardItem* self);
    friend void QStandardItem_SuperEmitDataChanged(QStandardItem* self);
};

// This class is a subclass of QStandardItemModel so that we can call protected methods
class VirtualQStandardItemModel final : public QStandardItemModel {

  public:
    // Virtual class boolean flag
    bool isVirtualQStandardItemModel = true;

    // Virtual class public types (including callbacks)
    using QStandardItemModel_MetaObject_Callback = QMetaObject* (*)();
    using QStandardItemModel_Metacast_Callback = void* (*)(QStandardItemModel*, const char*);
    using QStandardItemModel_Metacall_Callback = int (*)(QStandardItemModel*, int, int, void**);
    using QStandardItemModel_RoleNames_Callback = libqt_map /* of int to libqt_string */ (*)();
    using QStandardItemModel_Index_Callback = QModelIndex* (*)(const QStandardItemModel*, int, int, QModelIndex*);
    using QStandardItemModel_Parent_Callback = QModelIndex* (*)(const QStandardItemModel*, QModelIndex*);
    using QStandardItemModel_RowCount_Callback = int (*)(const QStandardItemModel*, QModelIndex*);
    using QStandardItemModel_ColumnCount_Callback = int (*)(const QStandardItemModel*, QModelIndex*);
    using QStandardItemModel_HasChildren_Callback = bool (*)(const QStandardItemModel*, QModelIndex*);
    using QStandardItemModel_Data_Callback = QVariant* (*)(const QStandardItemModel*, QModelIndex*, int);
    using QStandardItemModel_MultiData_Callback = void (*)(const QStandardItemModel*, QModelIndex*, QModelRoleDataSpan*);
    using QStandardItemModel_SetData_Callback = bool (*)(QStandardItemModel*, QModelIndex*, QVariant*, int);
    using QStandardItemModel_ClearItemData_Callback = bool (*)(QStandardItemModel*, QModelIndex*);
    using QStandardItemModel_HeaderData_Callback = QVariant* (*)(const QStandardItemModel*, int, int, int);
    using QStandardItemModel_SetHeaderData_Callback = bool (*)(QStandardItemModel*, int, int, QVariant*, int);
    using QStandardItemModel_InsertRows_Callback = bool (*)(QStandardItemModel*, int, int, QModelIndex*);
    using QStandardItemModel_InsertColumns_Callback = bool (*)(QStandardItemModel*, int, int, QModelIndex*);
    using QStandardItemModel_RemoveRows_Callback = bool (*)(QStandardItemModel*, int, int, QModelIndex*);
    using QStandardItemModel_RemoveColumns_Callback = bool (*)(QStandardItemModel*, int, int, QModelIndex*);
    using QStandardItemModel_Flags_Callback = int (*)(const QStandardItemModel*, QModelIndex*);
    using QStandardItemModel_SupportedDropActions_Callback = int (*)();
    using QStandardItemModel_ItemData_Callback = libqt_map /* of int to QVariant* */ (*)(const QStandardItemModel*, QModelIndex*);
    using QStandardItemModel_SetItemData_Callback = bool (*)(QStandardItemModel*, QModelIndex*, libqt_map /* of int to QVariant* */);
    using QStandardItemModel_Sort_Callback = void (*)(QStandardItemModel*, int, int);
    using QStandardItemModel_MimeTypes_Callback = const char** (*)();
    using QStandardItemModel_MimeData_Callback = QMimeData* (*)(const QStandardItemModel*, libqt_list /* of QModelIndex* */);
    using QStandardItemModel_DropMimeData_Callback = bool (*)(QStandardItemModel*, QMimeData*, int, int, int, QModelIndex*);
    using QStandardItemModel_Sibling_Callback = QModelIndex* (*)(const QStandardItemModel*, int, int, QModelIndex*);
    using QStandardItemModel_CanDropMimeData_Callback = bool (*)(const QStandardItemModel*, QMimeData*, int, int, int, QModelIndex*);
    using QStandardItemModel_SupportedDragActions_Callback = int (*)();
    using QStandardItemModel_MoveRows_Callback = bool (*)(QStandardItemModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QStandardItemModel_MoveColumns_Callback = bool (*)(QStandardItemModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QStandardItemModel_FetchMore_Callback = void (*)(QStandardItemModel*, QModelIndex*);
    using QStandardItemModel_CanFetchMore_Callback = bool (*)(const QStandardItemModel*, QModelIndex*);
    using QStandardItemModel_Buddy_Callback = QModelIndex* (*)(const QStandardItemModel*, QModelIndex*);
    using QStandardItemModel_Match_Callback = libqt_list /* of QModelIndex* */ (*)(const QStandardItemModel*, QModelIndex*, int, QVariant*, int, int);
    using QStandardItemModel_Span_Callback = QSize* (*)(const QStandardItemModel*, QModelIndex*);
    using QStandardItemModel_Submit_Callback = bool (*)();
    using QStandardItemModel_Revert_Callback = void (*)();
    using QStandardItemModel_ResetInternalData_Callback = void (*)();
    using QStandardItemModel_Event_Callback = bool (*)(QStandardItemModel*, QEvent*);
    using QStandardItemModel_EventFilter_Callback = bool (*)(QStandardItemModel*, QObject*, QEvent*);
    using QStandardItemModel_TimerEvent_Callback = void (*)(QStandardItemModel*, QTimerEvent*);
    using QStandardItemModel_ChildEvent_Callback = void (*)(QStandardItemModel*, QChildEvent*);
    using QStandardItemModel_CustomEvent_Callback = void (*)(QStandardItemModel*, QEvent*);
    using QStandardItemModel_ConnectNotify_Callback = void (*)(QStandardItemModel*, QMetaMethod*);
    using QStandardItemModel_DisconnectNotify_Callback = void (*)(QStandardItemModel*, QMetaMethod*);
    using QStandardItemModel_CreateIndex_Callback = QModelIndex* (*)(const QStandardItemModel*, int, int);
    using QStandardItemModel_EncodeData_Callback = void (*)(const QStandardItemModel*, libqt_list /* of QModelIndex* */, QDataStream*);
    using QStandardItemModel_DecodeData_Callback = bool (*)(QStandardItemModel*, int, int, QModelIndex*, QDataStream*);
    using QStandardItemModel_BeginInsertRows_Callback = void (*)(QStandardItemModel*, QModelIndex*, int, int);
    using QStandardItemModel_EndInsertRows_Callback = void (*)();
    using QStandardItemModel_BeginRemoveRows_Callback = void (*)(QStandardItemModel*, QModelIndex*, int, int);
    using QStandardItemModel_EndRemoveRows_Callback = void (*)();
    using QStandardItemModel_BeginMoveRows_Callback = bool (*)(QStandardItemModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QStandardItemModel_EndMoveRows_Callback = void (*)();
    using QStandardItemModel_BeginInsertColumns_Callback = void (*)(QStandardItemModel*, QModelIndex*, int, int);
    using QStandardItemModel_EndInsertColumns_Callback = void (*)();
    using QStandardItemModel_BeginRemoveColumns_Callback = void (*)(QStandardItemModel*, QModelIndex*, int, int);
    using QStandardItemModel_EndRemoveColumns_Callback = void (*)();
    using QStandardItemModel_BeginMoveColumns_Callback = bool (*)(QStandardItemModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QStandardItemModel_EndMoveColumns_Callback = void (*)();
    using QStandardItemModel_BeginResetModel_Callback = void (*)();
    using QStandardItemModel_EndResetModel_Callback = void (*)();
    using QStandardItemModel_ChangePersistentIndex_Callback = void (*)(QStandardItemModel*, QModelIndex*, QModelIndex*);
    using QStandardItemModel_ChangePersistentIndexList_Callback = void (*)(QStandardItemModel*, libqt_list /* of QModelIndex* */, libqt_list /* of QModelIndex* */);
    using QStandardItemModel_PersistentIndexList_Callback = libqt_list /* of QModelIndex* */ (*)();
    using QStandardItemModel_Sender_Callback = QObject* (*)();
    using QStandardItemModel_SenderSignalIndex_Callback = int (*)();
    using QStandardItemModel_Receivers_Callback = int (*)(const QStandardItemModel*, const char*);
    using QStandardItemModel_IsSignalConnected_Callback = bool (*)(const QStandardItemModel*, QMetaMethod*);

  protected:
    // Instance callback storage
    QStandardItemModel_MetaObject_Callback qstandarditemmodel_metaobject_callback = nullptr;
    QStandardItemModel_Metacast_Callback qstandarditemmodel_metacast_callback = nullptr;
    QStandardItemModel_Metacall_Callback qstandarditemmodel_metacall_callback = nullptr;
    QStandardItemModel_RoleNames_Callback qstandarditemmodel_rolenames_callback = nullptr;
    QStandardItemModel_Index_Callback qstandarditemmodel_index_callback = nullptr;
    QStandardItemModel_Parent_Callback qstandarditemmodel_parent_callback = nullptr;
    QStandardItemModel_RowCount_Callback qstandarditemmodel_rowcount_callback = nullptr;
    QStandardItemModel_ColumnCount_Callback qstandarditemmodel_columncount_callback = nullptr;
    QStandardItemModel_HasChildren_Callback qstandarditemmodel_haschildren_callback = nullptr;
    QStandardItemModel_Data_Callback qstandarditemmodel_data_callback = nullptr;
    QStandardItemModel_MultiData_Callback qstandarditemmodel_multidata_callback = nullptr;
    QStandardItemModel_SetData_Callback qstandarditemmodel_setdata_callback = nullptr;
    QStandardItemModel_ClearItemData_Callback qstandarditemmodel_clearitemdata_callback = nullptr;
    QStandardItemModel_HeaderData_Callback qstandarditemmodel_headerdata_callback = nullptr;
    QStandardItemModel_SetHeaderData_Callback qstandarditemmodel_setheaderdata_callback = nullptr;
    QStandardItemModel_InsertRows_Callback qstandarditemmodel_insertrows_callback = nullptr;
    QStandardItemModel_InsertColumns_Callback qstandarditemmodel_insertcolumns_callback = nullptr;
    QStandardItemModel_RemoveRows_Callback qstandarditemmodel_removerows_callback = nullptr;
    QStandardItemModel_RemoveColumns_Callback qstandarditemmodel_removecolumns_callback = nullptr;
    QStandardItemModel_Flags_Callback qstandarditemmodel_flags_callback = nullptr;
    QStandardItemModel_SupportedDropActions_Callback qstandarditemmodel_supporteddropactions_callback = nullptr;
    QStandardItemModel_ItemData_Callback qstandarditemmodel_itemdata_callback = nullptr;
    QStandardItemModel_SetItemData_Callback qstandarditemmodel_setitemdata_callback = nullptr;
    QStandardItemModel_Sort_Callback qstandarditemmodel_sort_callback = nullptr;
    QStandardItemModel_MimeTypes_Callback qstandarditemmodel_mimetypes_callback = nullptr;
    QStandardItemModel_MimeData_Callback qstandarditemmodel_mimedata_callback = nullptr;
    QStandardItemModel_DropMimeData_Callback qstandarditemmodel_dropmimedata_callback = nullptr;
    QStandardItemModel_Sibling_Callback qstandarditemmodel_sibling_callback = nullptr;
    QStandardItemModel_CanDropMimeData_Callback qstandarditemmodel_candropmimedata_callback = nullptr;
    QStandardItemModel_SupportedDragActions_Callback qstandarditemmodel_supporteddragactions_callback = nullptr;
    QStandardItemModel_MoveRows_Callback qstandarditemmodel_moverows_callback = nullptr;
    QStandardItemModel_MoveColumns_Callback qstandarditemmodel_movecolumns_callback = nullptr;
    QStandardItemModel_FetchMore_Callback qstandarditemmodel_fetchmore_callback = nullptr;
    QStandardItemModel_CanFetchMore_Callback qstandarditemmodel_canfetchmore_callback = nullptr;
    QStandardItemModel_Buddy_Callback qstandarditemmodel_buddy_callback = nullptr;
    QStandardItemModel_Match_Callback qstandarditemmodel_match_callback = nullptr;
    QStandardItemModel_Span_Callback qstandarditemmodel_span_callback = nullptr;
    QStandardItemModel_Submit_Callback qstandarditemmodel_submit_callback = nullptr;
    QStandardItemModel_Revert_Callback qstandarditemmodel_revert_callback = nullptr;
    QStandardItemModel_ResetInternalData_Callback qstandarditemmodel_resetinternaldata_callback = nullptr;
    QStandardItemModel_Event_Callback qstandarditemmodel_event_callback = nullptr;
    QStandardItemModel_EventFilter_Callback qstandarditemmodel_eventfilter_callback = nullptr;
    QStandardItemModel_TimerEvent_Callback qstandarditemmodel_timerevent_callback = nullptr;
    QStandardItemModel_ChildEvent_Callback qstandarditemmodel_childevent_callback = nullptr;
    QStandardItemModel_CustomEvent_Callback qstandarditemmodel_customevent_callback = nullptr;
    QStandardItemModel_ConnectNotify_Callback qstandarditemmodel_connectnotify_callback = nullptr;
    QStandardItemModel_DisconnectNotify_Callback qstandarditemmodel_disconnectnotify_callback = nullptr;
    QStandardItemModel_CreateIndex_Callback qstandarditemmodel_createindex_callback = nullptr;
    QStandardItemModel_EncodeData_Callback qstandarditemmodel_encodedata_callback = nullptr;
    QStandardItemModel_DecodeData_Callback qstandarditemmodel_decodedata_callback = nullptr;
    QStandardItemModel_BeginInsertRows_Callback qstandarditemmodel_begininsertrows_callback = nullptr;
    QStandardItemModel_EndInsertRows_Callback qstandarditemmodel_endinsertrows_callback = nullptr;
    QStandardItemModel_BeginRemoveRows_Callback qstandarditemmodel_beginremoverows_callback = nullptr;
    QStandardItemModel_EndRemoveRows_Callback qstandarditemmodel_endremoverows_callback = nullptr;
    QStandardItemModel_BeginMoveRows_Callback qstandarditemmodel_beginmoverows_callback = nullptr;
    QStandardItemModel_EndMoveRows_Callback qstandarditemmodel_endmoverows_callback = nullptr;
    QStandardItemModel_BeginInsertColumns_Callback qstandarditemmodel_begininsertcolumns_callback = nullptr;
    QStandardItemModel_EndInsertColumns_Callback qstandarditemmodel_endinsertcolumns_callback = nullptr;
    QStandardItemModel_BeginRemoveColumns_Callback qstandarditemmodel_beginremovecolumns_callback = nullptr;
    QStandardItemModel_EndRemoveColumns_Callback qstandarditemmodel_endremovecolumns_callback = nullptr;
    QStandardItemModel_BeginMoveColumns_Callback qstandarditemmodel_beginmovecolumns_callback = nullptr;
    QStandardItemModel_EndMoveColumns_Callback qstandarditemmodel_endmovecolumns_callback = nullptr;
    QStandardItemModel_BeginResetModel_Callback qstandarditemmodel_beginresetmodel_callback = nullptr;
    QStandardItemModel_EndResetModel_Callback qstandarditemmodel_endresetmodel_callback = nullptr;
    QStandardItemModel_ChangePersistentIndex_Callback qstandarditemmodel_changepersistentindex_callback = nullptr;
    QStandardItemModel_ChangePersistentIndexList_Callback qstandarditemmodel_changepersistentindexlist_callback = nullptr;
    QStandardItemModel_PersistentIndexList_Callback qstandarditemmodel_persistentindexlist_callback = nullptr;
    QStandardItemModel_Sender_Callback qstandarditemmodel_sender_callback = nullptr;
    QStandardItemModel_SenderSignalIndex_Callback qstandarditemmodel_sendersignalindex_callback = nullptr;
    QStandardItemModel_Receivers_Callback qstandarditemmodel_receivers_callback = nullptr;
    QStandardItemModel_IsSignalConnected_Callback qstandarditemmodel_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qstandarditemmodel_metaobject_isbase = false;
    mutable bool qstandarditemmodel_metacast_isbase = false;
    mutable bool qstandarditemmodel_metacall_isbase = false;
    mutable bool qstandarditemmodel_rolenames_isbase = false;
    mutable bool qstandarditemmodel_index_isbase = false;
    mutable bool qstandarditemmodel_parent_isbase = false;
    mutable bool qstandarditemmodel_rowcount_isbase = false;
    mutable bool qstandarditemmodel_columncount_isbase = false;
    mutable bool qstandarditemmodel_haschildren_isbase = false;
    mutable bool qstandarditemmodel_data_isbase = false;
    mutable bool qstandarditemmodel_multidata_isbase = false;
    mutable bool qstandarditemmodel_setdata_isbase = false;
    mutable bool qstandarditemmodel_clearitemdata_isbase = false;
    mutable bool qstandarditemmodel_headerdata_isbase = false;
    mutable bool qstandarditemmodel_setheaderdata_isbase = false;
    mutable bool qstandarditemmodel_insertrows_isbase = false;
    mutable bool qstandarditemmodel_insertcolumns_isbase = false;
    mutable bool qstandarditemmodel_removerows_isbase = false;
    mutable bool qstandarditemmodel_removecolumns_isbase = false;
    mutable bool qstandarditemmodel_flags_isbase = false;
    mutable bool qstandarditemmodel_supporteddropactions_isbase = false;
    mutable bool qstandarditemmodel_itemdata_isbase = false;
    mutable bool qstandarditemmodel_setitemdata_isbase = false;
    mutable bool qstandarditemmodel_sort_isbase = false;
    mutable bool qstandarditemmodel_mimetypes_isbase = false;
    mutable bool qstandarditemmodel_mimedata_isbase = false;
    mutable bool qstandarditemmodel_dropmimedata_isbase = false;
    mutable bool qstandarditemmodel_sibling_isbase = false;
    mutable bool qstandarditemmodel_candropmimedata_isbase = false;
    mutable bool qstandarditemmodel_supporteddragactions_isbase = false;
    mutable bool qstandarditemmodel_moverows_isbase = false;
    mutable bool qstandarditemmodel_movecolumns_isbase = false;
    mutable bool qstandarditemmodel_fetchmore_isbase = false;
    mutable bool qstandarditemmodel_canfetchmore_isbase = false;
    mutable bool qstandarditemmodel_buddy_isbase = false;
    mutable bool qstandarditemmodel_match_isbase = false;
    mutable bool qstandarditemmodel_span_isbase = false;
    mutable bool qstandarditemmodel_submit_isbase = false;
    mutable bool qstandarditemmodel_revert_isbase = false;
    mutable bool qstandarditemmodel_resetinternaldata_isbase = false;
    mutable bool qstandarditemmodel_event_isbase = false;
    mutable bool qstandarditemmodel_eventfilter_isbase = false;
    mutable bool qstandarditemmodel_timerevent_isbase = false;
    mutable bool qstandarditemmodel_childevent_isbase = false;
    mutable bool qstandarditemmodel_customevent_isbase = false;
    mutable bool qstandarditemmodel_connectnotify_isbase = false;
    mutable bool qstandarditemmodel_disconnectnotify_isbase = false;
    mutable bool qstandarditemmodel_createindex_isbase = false;
    mutable bool qstandarditemmodel_encodedata_isbase = false;
    mutable bool qstandarditemmodel_decodedata_isbase = false;
    mutable bool qstandarditemmodel_begininsertrows_isbase = false;
    mutable bool qstandarditemmodel_endinsertrows_isbase = false;
    mutable bool qstandarditemmodel_beginremoverows_isbase = false;
    mutable bool qstandarditemmodel_endremoverows_isbase = false;
    mutable bool qstandarditemmodel_beginmoverows_isbase = false;
    mutable bool qstandarditemmodel_endmoverows_isbase = false;
    mutable bool qstandarditemmodel_begininsertcolumns_isbase = false;
    mutable bool qstandarditemmodel_endinsertcolumns_isbase = false;
    mutable bool qstandarditemmodel_beginremovecolumns_isbase = false;
    mutable bool qstandarditemmodel_endremovecolumns_isbase = false;
    mutable bool qstandarditemmodel_beginmovecolumns_isbase = false;
    mutable bool qstandarditemmodel_endmovecolumns_isbase = false;
    mutable bool qstandarditemmodel_beginresetmodel_isbase = false;
    mutable bool qstandarditemmodel_endresetmodel_isbase = false;
    mutable bool qstandarditemmodel_changepersistentindex_isbase = false;
    mutable bool qstandarditemmodel_changepersistentindexlist_isbase = false;
    mutable bool qstandarditemmodel_persistentindexlist_isbase = false;
    mutable bool qstandarditemmodel_sender_isbase = false;
    mutable bool qstandarditemmodel_sendersignalindex_isbase = false;
    mutable bool qstandarditemmodel_receivers_isbase = false;
    mutable bool qstandarditemmodel_issignalconnected_isbase = false;

  public:
    VirtualQStandardItemModel() : QStandardItemModel() {};
    VirtualQStandardItemModel(int rows, int columns) : QStandardItemModel(rows, columns) {};
    VirtualQStandardItemModel(QObject* parent) : QStandardItemModel(parent) {};
    VirtualQStandardItemModel(int rows, int columns, QObject* parent) : QStandardItemModel(rows, columns, parent) {};

    // Callback setters
    inline void setQStandardItemModel_MetaObject_Callback(QStandardItemModel_MetaObject_Callback cb) { qstandarditemmodel_metaobject_callback = cb; }
    inline void setQStandardItemModel_Metacast_Callback(QStandardItemModel_Metacast_Callback cb) { qstandarditemmodel_metacast_callback = cb; }
    inline void setQStandardItemModel_Metacall_Callback(QStandardItemModel_Metacall_Callback cb) { qstandarditemmodel_metacall_callback = cb; }
    inline void setQStandardItemModel_RoleNames_Callback(QStandardItemModel_RoleNames_Callback cb) { qstandarditemmodel_rolenames_callback = cb; }
    inline void setQStandardItemModel_Index_Callback(QStandardItemModel_Index_Callback cb) { qstandarditemmodel_index_callback = cb; }
    inline void setQStandardItemModel_Parent_Callback(QStandardItemModel_Parent_Callback cb) { qstandarditemmodel_parent_callback = cb; }
    inline void setQStandardItemModel_RowCount_Callback(QStandardItemModel_RowCount_Callback cb) { qstandarditemmodel_rowcount_callback = cb; }
    inline void setQStandardItemModel_ColumnCount_Callback(QStandardItemModel_ColumnCount_Callback cb) { qstandarditemmodel_columncount_callback = cb; }
    inline void setQStandardItemModel_HasChildren_Callback(QStandardItemModel_HasChildren_Callback cb) { qstandarditemmodel_haschildren_callback = cb; }
    inline void setQStandardItemModel_Data_Callback(QStandardItemModel_Data_Callback cb) { qstandarditemmodel_data_callback = cb; }
    inline void setQStandardItemModel_MultiData_Callback(QStandardItemModel_MultiData_Callback cb) { qstandarditemmodel_multidata_callback = cb; }
    inline void setQStandardItemModel_SetData_Callback(QStandardItemModel_SetData_Callback cb) { qstandarditemmodel_setdata_callback = cb; }
    inline void setQStandardItemModel_ClearItemData_Callback(QStandardItemModel_ClearItemData_Callback cb) { qstandarditemmodel_clearitemdata_callback = cb; }
    inline void setQStandardItemModel_HeaderData_Callback(QStandardItemModel_HeaderData_Callback cb) { qstandarditemmodel_headerdata_callback = cb; }
    inline void setQStandardItemModel_SetHeaderData_Callback(QStandardItemModel_SetHeaderData_Callback cb) { qstandarditemmodel_setheaderdata_callback = cb; }
    inline void setQStandardItemModel_InsertRows_Callback(QStandardItemModel_InsertRows_Callback cb) { qstandarditemmodel_insertrows_callback = cb; }
    inline void setQStandardItemModel_InsertColumns_Callback(QStandardItemModel_InsertColumns_Callback cb) { qstandarditemmodel_insertcolumns_callback = cb; }
    inline void setQStandardItemModel_RemoveRows_Callback(QStandardItemModel_RemoveRows_Callback cb) { qstandarditemmodel_removerows_callback = cb; }
    inline void setQStandardItemModel_RemoveColumns_Callback(QStandardItemModel_RemoveColumns_Callback cb) { qstandarditemmodel_removecolumns_callback = cb; }
    inline void setQStandardItemModel_Flags_Callback(QStandardItemModel_Flags_Callback cb) { qstandarditemmodel_flags_callback = cb; }
    inline void setQStandardItemModel_SupportedDropActions_Callback(QStandardItemModel_SupportedDropActions_Callback cb) { qstandarditemmodel_supporteddropactions_callback = cb; }
    inline void setQStandardItemModel_ItemData_Callback(QStandardItemModel_ItemData_Callback cb) { qstandarditemmodel_itemdata_callback = cb; }
    inline void setQStandardItemModel_SetItemData_Callback(QStandardItemModel_SetItemData_Callback cb) { qstandarditemmodel_setitemdata_callback = cb; }
    inline void setQStandardItemModel_Sort_Callback(QStandardItemModel_Sort_Callback cb) { qstandarditemmodel_sort_callback = cb; }
    inline void setQStandardItemModel_MimeTypes_Callback(QStandardItemModel_MimeTypes_Callback cb) { qstandarditemmodel_mimetypes_callback = cb; }
    inline void setQStandardItemModel_MimeData_Callback(QStandardItemModel_MimeData_Callback cb) { qstandarditemmodel_mimedata_callback = cb; }
    inline void setQStandardItemModel_DropMimeData_Callback(QStandardItemModel_DropMimeData_Callback cb) { qstandarditemmodel_dropmimedata_callback = cb; }
    inline void setQStandardItemModel_Sibling_Callback(QStandardItemModel_Sibling_Callback cb) { qstandarditemmodel_sibling_callback = cb; }
    inline void setQStandardItemModel_CanDropMimeData_Callback(QStandardItemModel_CanDropMimeData_Callback cb) { qstandarditemmodel_candropmimedata_callback = cb; }
    inline void setQStandardItemModel_SupportedDragActions_Callback(QStandardItemModel_SupportedDragActions_Callback cb) { qstandarditemmodel_supporteddragactions_callback = cb; }
    inline void setQStandardItemModel_MoveRows_Callback(QStandardItemModel_MoveRows_Callback cb) { qstandarditemmodel_moverows_callback = cb; }
    inline void setQStandardItemModel_MoveColumns_Callback(QStandardItemModel_MoveColumns_Callback cb) { qstandarditemmodel_movecolumns_callback = cb; }
    inline void setQStandardItemModel_FetchMore_Callback(QStandardItemModel_FetchMore_Callback cb) { qstandarditemmodel_fetchmore_callback = cb; }
    inline void setQStandardItemModel_CanFetchMore_Callback(QStandardItemModel_CanFetchMore_Callback cb) { qstandarditemmodel_canfetchmore_callback = cb; }
    inline void setQStandardItemModel_Buddy_Callback(QStandardItemModel_Buddy_Callback cb) { qstandarditemmodel_buddy_callback = cb; }
    inline void setQStandardItemModel_Match_Callback(QStandardItemModel_Match_Callback cb) { qstandarditemmodel_match_callback = cb; }
    inline void setQStandardItemModel_Span_Callback(QStandardItemModel_Span_Callback cb) { qstandarditemmodel_span_callback = cb; }
    inline void setQStandardItemModel_Submit_Callback(QStandardItemModel_Submit_Callback cb) { qstandarditemmodel_submit_callback = cb; }
    inline void setQStandardItemModel_Revert_Callback(QStandardItemModel_Revert_Callback cb) { qstandarditemmodel_revert_callback = cb; }
    inline void setQStandardItemModel_ResetInternalData_Callback(QStandardItemModel_ResetInternalData_Callback cb) { qstandarditemmodel_resetinternaldata_callback = cb; }
    inline void setQStandardItemModel_Event_Callback(QStandardItemModel_Event_Callback cb) { qstandarditemmodel_event_callback = cb; }
    inline void setQStandardItemModel_EventFilter_Callback(QStandardItemModel_EventFilter_Callback cb) { qstandarditemmodel_eventfilter_callback = cb; }
    inline void setQStandardItemModel_TimerEvent_Callback(QStandardItemModel_TimerEvent_Callback cb) { qstandarditemmodel_timerevent_callback = cb; }
    inline void setQStandardItemModel_ChildEvent_Callback(QStandardItemModel_ChildEvent_Callback cb) { qstandarditemmodel_childevent_callback = cb; }
    inline void setQStandardItemModel_CustomEvent_Callback(QStandardItemModel_CustomEvent_Callback cb) { qstandarditemmodel_customevent_callback = cb; }
    inline void setQStandardItemModel_ConnectNotify_Callback(QStandardItemModel_ConnectNotify_Callback cb) { qstandarditemmodel_connectnotify_callback = cb; }
    inline void setQStandardItemModel_DisconnectNotify_Callback(QStandardItemModel_DisconnectNotify_Callback cb) { qstandarditemmodel_disconnectnotify_callback = cb; }
    inline void setQStandardItemModel_CreateIndex_Callback(QStandardItemModel_CreateIndex_Callback cb) { qstandarditemmodel_createindex_callback = cb; }
    inline void setQStandardItemModel_EncodeData_Callback(QStandardItemModel_EncodeData_Callback cb) { qstandarditemmodel_encodedata_callback = cb; }
    inline void setQStandardItemModel_DecodeData_Callback(QStandardItemModel_DecodeData_Callback cb) { qstandarditemmodel_decodedata_callback = cb; }
    inline void setQStandardItemModel_BeginInsertRows_Callback(QStandardItemModel_BeginInsertRows_Callback cb) { qstandarditemmodel_begininsertrows_callback = cb; }
    inline void setQStandardItemModel_EndInsertRows_Callback(QStandardItemModel_EndInsertRows_Callback cb) { qstandarditemmodel_endinsertrows_callback = cb; }
    inline void setQStandardItemModel_BeginRemoveRows_Callback(QStandardItemModel_BeginRemoveRows_Callback cb) { qstandarditemmodel_beginremoverows_callback = cb; }
    inline void setQStandardItemModel_EndRemoveRows_Callback(QStandardItemModel_EndRemoveRows_Callback cb) { qstandarditemmodel_endremoverows_callback = cb; }
    inline void setQStandardItemModel_BeginMoveRows_Callback(QStandardItemModel_BeginMoveRows_Callback cb) { qstandarditemmodel_beginmoverows_callback = cb; }
    inline void setQStandardItemModel_EndMoveRows_Callback(QStandardItemModel_EndMoveRows_Callback cb) { qstandarditemmodel_endmoverows_callback = cb; }
    inline void setQStandardItemModel_BeginInsertColumns_Callback(QStandardItemModel_BeginInsertColumns_Callback cb) { qstandarditemmodel_begininsertcolumns_callback = cb; }
    inline void setQStandardItemModel_EndInsertColumns_Callback(QStandardItemModel_EndInsertColumns_Callback cb) { qstandarditemmodel_endinsertcolumns_callback = cb; }
    inline void setQStandardItemModel_BeginRemoveColumns_Callback(QStandardItemModel_BeginRemoveColumns_Callback cb) { qstandarditemmodel_beginremovecolumns_callback = cb; }
    inline void setQStandardItemModel_EndRemoveColumns_Callback(QStandardItemModel_EndRemoveColumns_Callback cb) { qstandarditemmodel_endremovecolumns_callback = cb; }
    inline void setQStandardItemModel_BeginMoveColumns_Callback(QStandardItemModel_BeginMoveColumns_Callback cb) { qstandarditemmodel_beginmovecolumns_callback = cb; }
    inline void setQStandardItemModel_EndMoveColumns_Callback(QStandardItemModel_EndMoveColumns_Callback cb) { qstandarditemmodel_endmovecolumns_callback = cb; }
    inline void setQStandardItemModel_BeginResetModel_Callback(QStandardItemModel_BeginResetModel_Callback cb) { qstandarditemmodel_beginresetmodel_callback = cb; }
    inline void setQStandardItemModel_EndResetModel_Callback(QStandardItemModel_EndResetModel_Callback cb) { qstandarditemmodel_endresetmodel_callback = cb; }
    inline void setQStandardItemModel_ChangePersistentIndex_Callback(QStandardItemModel_ChangePersistentIndex_Callback cb) { qstandarditemmodel_changepersistentindex_callback = cb; }
    inline void setQStandardItemModel_ChangePersistentIndexList_Callback(QStandardItemModel_ChangePersistentIndexList_Callback cb) { qstandarditemmodel_changepersistentindexlist_callback = cb; }
    inline void setQStandardItemModel_PersistentIndexList_Callback(QStandardItemModel_PersistentIndexList_Callback cb) { qstandarditemmodel_persistentindexlist_callback = cb; }
    inline void setQStandardItemModel_Sender_Callback(QStandardItemModel_Sender_Callback cb) { qstandarditemmodel_sender_callback = cb; }
    inline void setQStandardItemModel_SenderSignalIndex_Callback(QStandardItemModel_SenderSignalIndex_Callback cb) { qstandarditemmodel_sendersignalindex_callback = cb; }
    inline void setQStandardItemModel_Receivers_Callback(QStandardItemModel_Receivers_Callback cb) { qstandarditemmodel_receivers_callback = cb; }
    inline void setQStandardItemModel_IsSignalConnected_Callback(QStandardItemModel_IsSignalConnected_Callback cb) { qstandarditemmodel_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQStandardItemModel_MetaObject_IsBase(bool value) const { qstandarditemmodel_metaobject_isbase = value; }
    inline void setQStandardItemModel_Metacast_IsBase(bool value) const { qstandarditemmodel_metacast_isbase = value; }
    inline void setQStandardItemModel_Metacall_IsBase(bool value) const { qstandarditemmodel_metacall_isbase = value; }
    inline void setQStandardItemModel_RoleNames_IsBase(bool value) const { qstandarditemmodel_rolenames_isbase = value; }
    inline void setQStandardItemModel_Index_IsBase(bool value) const { qstandarditemmodel_index_isbase = value; }
    inline void setQStandardItemModel_Parent_IsBase(bool value) const { qstandarditemmodel_parent_isbase = value; }
    inline void setQStandardItemModel_RowCount_IsBase(bool value) const { qstandarditemmodel_rowcount_isbase = value; }
    inline void setQStandardItemModel_ColumnCount_IsBase(bool value) const { qstandarditemmodel_columncount_isbase = value; }
    inline void setQStandardItemModel_HasChildren_IsBase(bool value) const { qstandarditemmodel_haschildren_isbase = value; }
    inline void setQStandardItemModel_Data_IsBase(bool value) const { qstandarditemmodel_data_isbase = value; }
    inline void setQStandardItemModel_MultiData_IsBase(bool value) const { qstandarditemmodel_multidata_isbase = value; }
    inline void setQStandardItemModel_SetData_IsBase(bool value) const { qstandarditemmodel_setdata_isbase = value; }
    inline void setQStandardItemModel_ClearItemData_IsBase(bool value) const { qstandarditemmodel_clearitemdata_isbase = value; }
    inline void setQStandardItemModel_HeaderData_IsBase(bool value) const { qstandarditemmodel_headerdata_isbase = value; }
    inline void setQStandardItemModel_SetHeaderData_IsBase(bool value) const { qstandarditemmodel_setheaderdata_isbase = value; }
    inline void setQStandardItemModel_InsertRows_IsBase(bool value) const { qstandarditemmodel_insertrows_isbase = value; }
    inline void setQStandardItemModel_InsertColumns_IsBase(bool value) const { qstandarditemmodel_insertcolumns_isbase = value; }
    inline void setQStandardItemModel_RemoveRows_IsBase(bool value) const { qstandarditemmodel_removerows_isbase = value; }
    inline void setQStandardItemModel_RemoveColumns_IsBase(bool value) const { qstandarditemmodel_removecolumns_isbase = value; }
    inline void setQStandardItemModel_Flags_IsBase(bool value) const { qstandarditemmodel_flags_isbase = value; }
    inline void setQStandardItemModel_SupportedDropActions_IsBase(bool value) const { qstandarditemmodel_supporteddropactions_isbase = value; }
    inline void setQStandardItemModel_ItemData_IsBase(bool value) const { qstandarditemmodel_itemdata_isbase = value; }
    inline void setQStandardItemModel_SetItemData_IsBase(bool value) const { qstandarditemmodel_setitemdata_isbase = value; }
    inline void setQStandardItemModel_Sort_IsBase(bool value) const { qstandarditemmodel_sort_isbase = value; }
    inline void setQStandardItemModel_MimeTypes_IsBase(bool value) const { qstandarditemmodel_mimetypes_isbase = value; }
    inline void setQStandardItemModel_MimeData_IsBase(bool value) const { qstandarditemmodel_mimedata_isbase = value; }
    inline void setQStandardItemModel_DropMimeData_IsBase(bool value) const { qstandarditemmodel_dropmimedata_isbase = value; }
    inline void setQStandardItemModel_Sibling_IsBase(bool value) const { qstandarditemmodel_sibling_isbase = value; }
    inline void setQStandardItemModel_CanDropMimeData_IsBase(bool value) const { qstandarditemmodel_candropmimedata_isbase = value; }
    inline void setQStandardItemModel_SupportedDragActions_IsBase(bool value) const { qstandarditemmodel_supporteddragactions_isbase = value; }
    inline void setQStandardItemModel_MoveRows_IsBase(bool value) const { qstandarditemmodel_moverows_isbase = value; }
    inline void setQStandardItemModel_MoveColumns_IsBase(bool value) const { qstandarditemmodel_movecolumns_isbase = value; }
    inline void setQStandardItemModel_FetchMore_IsBase(bool value) const { qstandarditemmodel_fetchmore_isbase = value; }
    inline void setQStandardItemModel_CanFetchMore_IsBase(bool value) const { qstandarditemmodel_canfetchmore_isbase = value; }
    inline void setQStandardItemModel_Buddy_IsBase(bool value) const { qstandarditemmodel_buddy_isbase = value; }
    inline void setQStandardItemModel_Match_IsBase(bool value) const { qstandarditemmodel_match_isbase = value; }
    inline void setQStandardItemModel_Span_IsBase(bool value) const { qstandarditemmodel_span_isbase = value; }
    inline void setQStandardItemModel_Submit_IsBase(bool value) const { qstandarditemmodel_submit_isbase = value; }
    inline void setQStandardItemModel_Revert_IsBase(bool value) const { qstandarditemmodel_revert_isbase = value; }
    inline void setQStandardItemModel_ResetInternalData_IsBase(bool value) const { qstandarditemmodel_resetinternaldata_isbase = value; }
    inline void setQStandardItemModel_Event_IsBase(bool value) const { qstandarditemmodel_event_isbase = value; }
    inline void setQStandardItemModel_EventFilter_IsBase(bool value) const { qstandarditemmodel_eventfilter_isbase = value; }
    inline void setQStandardItemModel_TimerEvent_IsBase(bool value) const { qstandarditemmodel_timerevent_isbase = value; }
    inline void setQStandardItemModel_ChildEvent_IsBase(bool value) const { qstandarditemmodel_childevent_isbase = value; }
    inline void setQStandardItemModel_CustomEvent_IsBase(bool value) const { qstandarditemmodel_customevent_isbase = value; }
    inline void setQStandardItemModel_ConnectNotify_IsBase(bool value) const { qstandarditemmodel_connectnotify_isbase = value; }
    inline void setQStandardItemModel_DisconnectNotify_IsBase(bool value) const { qstandarditemmodel_disconnectnotify_isbase = value; }
    inline void setQStandardItemModel_CreateIndex_IsBase(bool value) const { qstandarditemmodel_createindex_isbase = value; }
    inline void setQStandardItemModel_EncodeData_IsBase(bool value) const { qstandarditemmodel_encodedata_isbase = value; }
    inline void setQStandardItemModel_DecodeData_IsBase(bool value) const { qstandarditemmodel_decodedata_isbase = value; }
    inline void setQStandardItemModel_BeginInsertRows_IsBase(bool value) const { qstandarditemmodel_begininsertrows_isbase = value; }
    inline void setQStandardItemModel_EndInsertRows_IsBase(bool value) const { qstandarditemmodel_endinsertrows_isbase = value; }
    inline void setQStandardItemModel_BeginRemoveRows_IsBase(bool value) const { qstandarditemmodel_beginremoverows_isbase = value; }
    inline void setQStandardItemModel_EndRemoveRows_IsBase(bool value) const { qstandarditemmodel_endremoverows_isbase = value; }
    inline void setQStandardItemModel_BeginMoveRows_IsBase(bool value) const { qstandarditemmodel_beginmoverows_isbase = value; }
    inline void setQStandardItemModel_EndMoveRows_IsBase(bool value) const { qstandarditemmodel_endmoverows_isbase = value; }
    inline void setQStandardItemModel_BeginInsertColumns_IsBase(bool value) const { qstandarditemmodel_begininsertcolumns_isbase = value; }
    inline void setQStandardItemModel_EndInsertColumns_IsBase(bool value) const { qstandarditemmodel_endinsertcolumns_isbase = value; }
    inline void setQStandardItemModel_BeginRemoveColumns_IsBase(bool value) const { qstandarditemmodel_beginremovecolumns_isbase = value; }
    inline void setQStandardItemModel_EndRemoveColumns_IsBase(bool value) const { qstandarditemmodel_endremovecolumns_isbase = value; }
    inline void setQStandardItemModel_BeginMoveColumns_IsBase(bool value) const { qstandarditemmodel_beginmovecolumns_isbase = value; }
    inline void setQStandardItemModel_EndMoveColumns_IsBase(bool value) const { qstandarditemmodel_endmovecolumns_isbase = value; }
    inline void setQStandardItemModel_BeginResetModel_IsBase(bool value) const { qstandarditemmodel_beginresetmodel_isbase = value; }
    inline void setQStandardItemModel_EndResetModel_IsBase(bool value) const { qstandarditemmodel_endresetmodel_isbase = value; }
    inline void setQStandardItemModel_ChangePersistentIndex_IsBase(bool value) const { qstandarditemmodel_changepersistentindex_isbase = value; }
    inline void setQStandardItemModel_ChangePersistentIndexList_IsBase(bool value) const { qstandarditemmodel_changepersistentindexlist_isbase = value; }
    inline void setQStandardItemModel_PersistentIndexList_IsBase(bool value) const { qstandarditemmodel_persistentindexlist_isbase = value; }
    inline void setQStandardItemModel_Sender_IsBase(bool value) const { qstandarditemmodel_sender_isbase = value; }
    inline void setQStandardItemModel_SenderSignalIndex_IsBase(bool value) const { qstandarditemmodel_sendersignalindex_isbase = value; }
    inline void setQStandardItemModel_Receivers_IsBase(bool value) const { qstandarditemmodel_receivers_isbase = value; }
    inline void setQStandardItemModel_IsSignalConnected_IsBase(bool value) const { qstandarditemmodel_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qstandarditemmodel_metaobject_isbase) {
            qstandarditemmodel_metaobject_isbase = false;
            return QStandardItemModel::metaObject();
        }
        auto metaobject_cb = qstandarditemmodel_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QStandardItemModel::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qstandarditemmodel_metacast_isbase) {
            qstandarditemmodel_metacast_isbase = false;
            return QStandardItemModel::qt_metacast(param1);
        }
        auto metacast_cb = qstandarditemmodel_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QStandardItemModel::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qstandarditemmodel_metacall_isbase) {
            qstandarditemmodel_metacall_isbase = false;
            return QStandardItemModel::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qstandarditemmodel_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QStandardItemModel::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QHash<int, QByteArray> roleNames() const override {
        if (qstandarditemmodel_rolenames_isbase) {
            qstandarditemmodel_rolenames_isbase = false;
            return QStandardItemModel::roleNames();
        }
        auto rolenames_cb = qstandarditemmodel_rolenames_callback;
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
        return QStandardItemModel::roleNames();
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
        if (qstandarditemmodel_index_isbase) {
            qstandarditemmodel_index_isbase = false;
            return QStandardItemModel::index(row, column, parent);
        }
        auto index_cb = qstandarditemmodel_index_callback;
        if (index_cb) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            QModelIndex* callback_ret = index_cb(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        }
        return QStandardItemModel::index(row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex parent(const QModelIndex& child) const override {
        if (qstandarditemmodel_parent_isbase) {
            qstandarditemmodel_parent_isbase = false;
            return QStandardItemModel::parent(child);
        }
        auto parent_cb = qstandarditemmodel_parent_callback;
        if (parent_cb) {
            const QModelIndex& child_ret = child;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&child_ret);

            QModelIndex* callback_ret = parent_cb(this, cbval1);
            return *callback_ret;
        }
        return QStandardItemModel::parent(child);
    }

    // Virtual method for C ABI access and custom callback
    virtual int rowCount(const QModelIndex& parent) const override {
        if (qstandarditemmodel_rowcount_isbase) {
            qstandarditemmodel_rowcount_isbase = false;
            return QStandardItemModel::rowCount(parent);
        }
        auto rowcount_cb = qstandarditemmodel_rowcount_callback;
        if (rowcount_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            int callback_ret = rowcount_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QStandardItemModel::rowCount(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual int columnCount(const QModelIndex& parent) const override {
        if (qstandarditemmodel_columncount_isbase) {
            qstandarditemmodel_columncount_isbase = false;
            return QStandardItemModel::columnCount(parent);
        }
        auto columncount_cb = qstandarditemmodel_columncount_callback;
        if (columncount_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            int callback_ret = columncount_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QStandardItemModel::columnCount(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasChildren(const QModelIndex& parent) const override {
        if (qstandarditemmodel_haschildren_isbase) {
            qstandarditemmodel_haschildren_isbase = false;
            return QStandardItemModel::hasChildren(parent);
        }
        auto haschildren_cb = qstandarditemmodel_haschildren_callback;
        if (haschildren_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = haschildren_cb(this, cbval1);
            return callback_ret;
        }
        return QStandardItemModel::hasChildren(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(const QModelIndex& index, int role) const override {
        if (qstandarditemmodel_data_isbase) {
            qstandarditemmodel_data_isbase = false;
            return QStandardItemModel::data(index, role);
        }
        auto data_cb = qstandarditemmodel_data_callback;
        if (data_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = role;

            QVariant* callback_ret = data_cb(this, cbval1, cbval2);
            return *callback_ret;
        }
        return QStandardItemModel::data(index, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
        if (qstandarditemmodel_multidata_isbase) {
            qstandarditemmodel_multidata_isbase = false;
            QStandardItemModel::multiData(index, roleDataSpan);
            return;
        }
        auto multidata_cb = qstandarditemmodel_multidata_callback;
        if (multidata_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelRoleDataSpan* cbval2 = new QModelRoleDataSpan(roleDataSpan);

            multidata_cb(this, cbval1, cbval2);
            return;
        }
        QStandardItemModel::multiData(index, roleDataSpan);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
        if (qstandarditemmodel_setdata_isbase) {
            qstandarditemmodel_setdata_isbase = false;
            return QStandardItemModel::setData(index, value, role);
        }
        auto setdata_cb = qstandarditemmodel_setdata_callback;
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
        return QStandardItemModel::setData(index, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool clearItemData(const QModelIndex& index) override {
        if (qstandarditemmodel_clearitemdata_isbase) {
            qstandarditemmodel_clearitemdata_isbase = false;
            return QStandardItemModel::clearItemData(index);
        }
        auto clearitemdata_cb = qstandarditemmodel_clearitemdata_callback;
        if (clearitemdata_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            bool callback_ret = clearitemdata_cb(this, cbval1);
            return callback_ret;
        }
        return QStandardItemModel::clearItemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
        if (qstandarditemmodel_headerdata_isbase) {
            qstandarditemmodel_headerdata_isbase = false;
            return QStandardItemModel::headerData(section, orientation, role);
        }
        auto headerdata_cb = qstandarditemmodel_headerdata_callback;
        if (headerdata_cb) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            int cbval3 = role;

            QVariant* callback_ret = headerdata_cb(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        }
        return QStandardItemModel::headerData(section, orientation, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
        if (qstandarditemmodel_setheaderdata_isbase) {
            qstandarditemmodel_setheaderdata_isbase = false;
            return QStandardItemModel::setHeaderData(section, orientation, value, role);
        }
        auto setheaderdata_cb = qstandarditemmodel_setheaderdata_callback;
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
        return QStandardItemModel::setHeaderData(section, orientation, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
        if (qstandarditemmodel_insertrows_isbase) {
            qstandarditemmodel_insertrows_isbase = false;
            return QStandardItemModel::insertRows(row, count, parent);
        }
        auto insertrows_cb = qstandarditemmodel_insertrows_callback;
        if (insertrows_cb) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = insertrows_cb(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QStandardItemModel::insertRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
        if (qstandarditemmodel_insertcolumns_isbase) {
            qstandarditemmodel_insertcolumns_isbase = false;
            return QStandardItemModel::insertColumns(column, count, parent);
        }
        auto insertcolumns_cb = qstandarditemmodel_insertcolumns_callback;
        if (insertcolumns_cb) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = insertcolumns_cb(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QStandardItemModel::insertColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
        if (qstandarditemmodel_removerows_isbase) {
            qstandarditemmodel_removerows_isbase = false;
            return QStandardItemModel::removeRows(row, count, parent);
        }
        auto removerows_cb = qstandarditemmodel_removerows_callback;
        if (removerows_cb) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = removerows_cb(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QStandardItemModel::removeRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
        if (qstandarditemmodel_removecolumns_isbase) {
            qstandarditemmodel_removecolumns_isbase = false;
            return QStandardItemModel::removeColumns(column, count, parent);
        }
        auto removecolumns_cb = qstandarditemmodel_removecolumns_callback;
        if (removecolumns_cb) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = removecolumns_cb(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QStandardItemModel::removeColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
        if (qstandarditemmodel_flags_isbase) {
            qstandarditemmodel_flags_isbase = false;
            return QStandardItemModel::flags(index);
        }
        auto flags_cb = qstandarditemmodel_flags_callback;
        if (flags_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            int callback_ret = flags_cb(this, cbval1);
            return static_cast<Qt::ItemFlags>(callback_ret);
        }
        return QStandardItemModel::flags(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (qstandarditemmodel_supporteddropactions_isbase) {
            qstandarditemmodel_supporteddropactions_isbase = false;
            return QStandardItemModel::supportedDropActions();
        }
        auto supporteddropactions_cb = qstandarditemmodel_supporteddropactions_callback;
        if (supporteddropactions_cb) {
            int callback_ret = supporteddropactions_cb();
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return QStandardItemModel::supportedDropActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
        if (qstandarditemmodel_itemdata_isbase) {
            qstandarditemmodel_itemdata_isbase = false;
            return QStandardItemModel::itemData(index);
        }
        auto itemdata_cb = qstandarditemmodel_itemdata_callback;
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
        return QStandardItemModel::itemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
        if (qstandarditemmodel_setitemdata_isbase) {
            qstandarditemmodel_setitemdata_isbase = false;
            return QStandardItemModel::setItemData(index, roles);
        }
        auto setitemdata_cb = qstandarditemmodel_setitemdata_callback;
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
        return QStandardItemModel::setItemData(index, roles);
    }

    // Virtual method for C ABI access and custom callback
    virtual void sort(int column, Qt::SortOrder order) override {
        if (qstandarditemmodel_sort_isbase) {
            qstandarditemmodel_sort_isbase = false;
            QStandardItemModel::sort(column, order);
            return;
        }
        auto sort_cb = qstandarditemmodel_sort_callback;
        if (sort_cb) {
            int cbval1 = column;
            int cbval2 = static_cast<int>(order);

            sort_cb(this, cbval1, cbval2);
            return;
        }
        QStandardItemModel::sort(column, order);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> mimeTypes() const override {
        if (qstandarditemmodel_mimetypes_isbase) {
            qstandarditemmodel_mimetypes_isbase = false;
            return QStandardItemModel::mimeTypes();
        }
        auto mimetypes_cb = qstandarditemmodel_mimetypes_callback;
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
        return QStandardItemModel::mimeTypes();
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* mimeData(const QList<QModelIndex>& indexes) const override {
        if (qstandarditemmodel_mimedata_isbase) {
            qstandarditemmodel_mimedata_isbase = false;
            return QStandardItemModel::mimeData(indexes);
        }
        auto mimedata_cb = qstandarditemmodel_mimedata_callback;
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
        return QStandardItemModel::mimeData(indexes);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
        if (qstandarditemmodel_dropmimedata_isbase) {
            qstandarditemmodel_dropmimedata_isbase = false;
            return QStandardItemModel::dropMimeData(data, action, row, column, parent);
        }
        auto dropmimedata_cb = qstandarditemmodel_dropmimedata_callback;
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
        return QStandardItemModel::dropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
        if (qstandarditemmodel_sibling_isbase) {
            qstandarditemmodel_sibling_isbase = false;
            return QStandardItemModel::sibling(row, column, idx);
        }
        auto sibling_cb = qstandarditemmodel_sibling_callback;
        if (sibling_cb) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& idx_ret = idx;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&idx_ret);

            QModelIndex* callback_ret = sibling_cb(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        }
        return QStandardItemModel::sibling(row, column, idx);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
        if (qstandarditemmodel_candropmimedata_isbase) {
            qstandarditemmodel_candropmimedata_isbase = false;
            return QStandardItemModel::canDropMimeData(data, action, row, column, parent);
        }
        auto candropmimedata_cb = qstandarditemmodel_candropmimedata_callback;
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
        return QStandardItemModel::canDropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDragActions() const override {
        if (qstandarditemmodel_supporteddragactions_isbase) {
            qstandarditemmodel_supporteddragactions_isbase = false;
            return QStandardItemModel::supportedDragActions();
        }
        auto supporteddragactions_cb = qstandarditemmodel_supporteddragactions_callback;
        if (supporteddragactions_cb) {
            int callback_ret = supporteddragactions_cb();
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return QStandardItemModel::supportedDragActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (qstandarditemmodel_moverows_isbase) {
            qstandarditemmodel_moverows_isbase = false;
            return QStandardItemModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
        }
        auto moverows_cb = qstandarditemmodel_moverows_callback;
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
        return QStandardItemModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (qstandarditemmodel_movecolumns_isbase) {
            qstandarditemmodel_movecolumns_isbase = false;
            return QStandardItemModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
        }
        auto movecolumns_cb = qstandarditemmodel_movecolumns_callback;
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
        return QStandardItemModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual void fetchMore(const QModelIndex& parent) override {
        if (qstandarditemmodel_fetchmore_isbase) {
            qstandarditemmodel_fetchmore_isbase = false;
            QStandardItemModel::fetchMore(parent);
            return;
        }
        auto fetchmore_cb = qstandarditemmodel_fetchmore_callback;
        if (fetchmore_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            fetchmore_cb(this, cbval1);
            return;
        }
        QStandardItemModel::fetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canFetchMore(const QModelIndex& parent) const override {
        if (qstandarditemmodel_canfetchmore_isbase) {
            qstandarditemmodel_canfetchmore_isbase = false;
            return QStandardItemModel::canFetchMore(parent);
        }
        auto canfetchmore_cb = qstandarditemmodel_canfetchmore_callback;
        if (canfetchmore_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = canfetchmore_cb(this, cbval1);
            return callback_ret;
        }
        return QStandardItemModel::canFetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex buddy(const QModelIndex& index) const override {
        if (qstandarditemmodel_buddy_isbase) {
            qstandarditemmodel_buddy_isbase = false;
            return QStandardItemModel::buddy(index);
        }
        auto buddy_cb = qstandarditemmodel_buddy_callback;
        if (buddy_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QModelIndex* callback_ret = buddy_cb(this, cbval1);
            return *callback_ret;
        }
        return QStandardItemModel::buddy(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
        if (qstandarditemmodel_match_isbase) {
            qstandarditemmodel_match_isbase = false;
            return QStandardItemModel::match(start, role, value, hits, flags);
        }
        auto match_cb = qstandarditemmodel_match_callback;
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
        return QStandardItemModel::match(start, role, value, hits, flags);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize span(const QModelIndex& index) const override {
        if (qstandarditemmodel_span_isbase) {
            qstandarditemmodel_span_isbase = false;
            return QStandardItemModel::span(index);
        }
        auto span_cb = qstandarditemmodel_span_callback;
        if (span_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QSize* callback_ret = span_cb(this, cbval1);
            return *callback_ret;
        }
        return QStandardItemModel::span(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool submit() override {
        if (qstandarditemmodel_submit_isbase) {
            qstandarditemmodel_submit_isbase = false;
            return QStandardItemModel::submit();
        }
        auto submit_cb = qstandarditemmodel_submit_callback;
        if (submit_cb) {
            bool callback_ret = submit_cb();
            return callback_ret;
        }
        return QStandardItemModel::submit();
    }

    // Virtual method for C ABI access and custom callback
    virtual void revert() override {
        if (qstandarditemmodel_revert_isbase) {
            qstandarditemmodel_revert_isbase = false;
            QStandardItemModel::revert();
            return;
        }
        auto revert_cb = qstandarditemmodel_revert_callback;
        if (revert_cb) {
            revert_cb();
            return;
        }
        QStandardItemModel::revert();
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetInternalData() override {
        if (qstandarditemmodel_resetinternaldata_isbase) {
            qstandarditemmodel_resetinternaldata_isbase = false;
            QStandardItemModel::resetInternalData();
            return;
        }
        auto resetinternaldata_cb = qstandarditemmodel_resetinternaldata_callback;
        if (resetinternaldata_cb) {
            resetinternaldata_cb();
            return;
        }
        QStandardItemModel::resetInternalData();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qstandarditemmodel_event_isbase) {
            qstandarditemmodel_event_isbase = false;
            return QStandardItemModel::event(event);
        }
        auto event_cb = qstandarditemmodel_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QStandardItemModel::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qstandarditemmodel_eventfilter_isbase) {
            qstandarditemmodel_eventfilter_isbase = false;
            return QStandardItemModel::eventFilter(watched, event);
        }
        auto eventfilter_cb = qstandarditemmodel_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QStandardItemModel::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qstandarditemmodel_timerevent_isbase) {
            qstandarditemmodel_timerevent_isbase = false;
            QStandardItemModel::timerEvent(event);
            return;
        }
        auto timerevent_cb = qstandarditemmodel_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QStandardItemModel::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qstandarditemmodel_childevent_isbase) {
            qstandarditemmodel_childevent_isbase = false;
            QStandardItemModel::childEvent(event);
            return;
        }
        auto childevent_cb = qstandarditemmodel_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QStandardItemModel::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qstandarditemmodel_customevent_isbase) {
            qstandarditemmodel_customevent_isbase = false;
            QStandardItemModel::customEvent(event);
            return;
        }
        auto customevent_cb = qstandarditemmodel_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QStandardItemModel::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qstandarditemmodel_connectnotify_isbase) {
            qstandarditemmodel_connectnotify_isbase = false;
            QStandardItemModel::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qstandarditemmodel_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QStandardItemModel::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qstandarditemmodel_disconnectnotify_isbase) {
            qstandarditemmodel_disconnectnotify_isbase = false;
            QStandardItemModel::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qstandarditemmodel_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QStandardItemModel::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QModelIndex createIndex(int row, int column) const {
        if (qstandarditemmodel_createindex_isbase) {
            qstandarditemmodel_createindex_isbase = false;
            return QStandardItemModel::createIndex(row, column);
        }
        auto createindex_cb = qstandarditemmodel_createindex_callback;
        if (createindex_cb) {
            int cbval1 = row;
            int cbval2 = column;

            QModelIndex* callback_ret = createindex_cb(this, cbval1, cbval2);
            return *callback_ret;
        }
        return QStandardItemModel::createIndex(row, column);
    }

    // Virtual method for C ABI access and custom callback
    void encodeData(const QList<QModelIndex>& indexes, QDataStream& stream) const {
        if (qstandarditemmodel_encodedata_isbase) {
            qstandarditemmodel_encodedata_isbase = false;
            QStandardItemModel::encodeData(indexes, stream);
            return;
        }
        auto encodedata_cb = qstandarditemmodel_encodedata_callback;
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
        QStandardItemModel::encodeData(indexes, stream);
    }

    // Virtual method for C ABI access and custom callback
    bool decodeData(int row, int column, const QModelIndex& parent, QDataStream& stream) {
        if (qstandarditemmodel_decodedata_isbase) {
            qstandarditemmodel_decodedata_isbase = false;
            return QStandardItemModel::decodeData(row, column, parent, stream);
        }
        auto decodedata_cb = qstandarditemmodel_decodedata_callback;
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
        return QStandardItemModel::decodeData(row, column, parent, stream);
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertRows(const QModelIndex& parent, int first, int last) {
        if (qstandarditemmodel_begininsertrows_isbase) {
            qstandarditemmodel_begininsertrows_isbase = false;
            QStandardItemModel::beginInsertRows(parent, first, last);
            return;
        }
        auto begininsertrows_cb = qstandarditemmodel_begininsertrows_callback;
        if (begininsertrows_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            begininsertrows_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        QStandardItemModel::beginInsertRows(parent, first, last);
    }

    // Virtual method for C ABI access and custom callback
    void endInsertRows() {
        if (qstandarditemmodel_endinsertrows_isbase) {
            qstandarditemmodel_endinsertrows_isbase = false;
            QStandardItemModel::endInsertRows();
            return;
        }
        auto endinsertrows_cb = qstandarditemmodel_endinsertrows_callback;
        if (endinsertrows_cb) {
            endinsertrows_cb();
            return;
        }
        QStandardItemModel::endInsertRows();
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveRows(const QModelIndex& parent, int first, int last) {
        if (qstandarditemmodel_beginremoverows_isbase) {
            qstandarditemmodel_beginremoverows_isbase = false;
            QStandardItemModel::beginRemoveRows(parent, first, last);
            return;
        }
        auto beginremoverows_cb = qstandarditemmodel_beginremoverows_callback;
        if (beginremoverows_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            beginremoverows_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        QStandardItemModel::beginRemoveRows(parent, first, last);
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveRows() {
        if (qstandarditemmodel_endremoverows_isbase) {
            qstandarditemmodel_endremoverows_isbase = false;
            QStandardItemModel::endRemoveRows();
            return;
        }
        auto endremoverows_cb = qstandarditemmodel_endremoverows_callback;
        if (endremoverows_cb) {
            endremoverows_cb();
            return;
        }
        QStandardItemModel::endRemoveRows();
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveRows(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationRow) {
        if (qstandarditemmodel_beginmoverows_isbase) {
            qstandarditemmodel_beginmoverows_isbase = false;
            return QStandardItemModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
        }
        auto beginmoverows_cb = qstandarditemmodel_beginmoverows_callback;
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
        return QStandardItemModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
    }

    // Virtual method for C ABI access and custom callback
    void endMoveRows() {
        if (qstandarditemmodel_endmoverows_isbase) {
            qstandarditemmodel_endmoverows_isbase = false;
            QStandardItemModel::endMoveRows();
            return;
        }
        auto endmoverows_cb = qstandarditemmodel_endmoverows_callback;
        if (endmoverows_cb) {
            endmoverows_cb();
            return;
        }
        QStandardItemModel::endMoveRows();
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertColumns(const QModelIndex& parent, int first, int last) {
        if (qstandarditemmodel_begininsertcolumns_isbase) {
            qstandarditemmodel_begininsertcolumns_isbase = false;
            QStandardItemModel::beginInsertColumns(parent, first, last);
            return;
        }
        auto begininsertcolumns_cb = qstandarditemmodel_begininsertcolumns_callback;
        if (begininsertcolumns_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            begininsertcolumns_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        QStandardItemModel::beginInsertColumns(parent, first, last);
    }

    // Virtual method for C ABI access and custom callback
    void endInsertColumns() {
        if (qstandarditemmodel_endinsertcolumns_isbase) {
            qstandarditemmodel_endinsertcolumns_isbase = false;
            QStandardItemModel::endInsertColumns();
            return;
        }
        auto endinsertcolumns_cb = qstandarditemmodel_endinsertcolumns_callback;
        if (endinsertcolumns_cb) {
            endinsertcolumns_cb();
            return;
        }
        QStandardItemModel::endInsertColumns();
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveColumns(const QModelIndex& parent, int first, int last) {
        if (qstandarditemmodel_beginremovecolumns_isbase) {
            qstandarditemmodel_beginremovecolumns_isbase = false;
            QStandardItemModel::beginRemoveColumns(parent, first, last);
            return;
        }
        auto beginremovecolumns_cb = qstandarditemmodel_beginremovecolumns_callback;
        if (beginremovecolumns_cb) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            beginremovecolumns_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        QStandardItemModel::beginRemoveColumns(parent, first, last);
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveColumns() {
        if (qstandarditemmodel_endremovecolumns_isbase) {
            qstandarditemmodel_endremovecolumns_isbase = false;
            QStandardItemModel::endRemoveColumns();
            return;
        }
        auto endremovecolumns_cb = qstandarditemmodel_endremovecolumns_callback;
        if (endremovecolumns_cb) {
            endremovecolumns_cb();
            return;
        }
        QStandardItemModel::endRemoveColumns();
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveColumns(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationColumn) {
        if (qstandarditemmodel_beginmovecolumns_isbase) {
            qstandarditemmodel_beginmovecolumns_isbase = false;
            return QStandardItemModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
        }
        auto beginmovecolumns_cb = qstandarditemmodel_beginmovecolumns_callback;
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
        return QStandardItemModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
    }

    // Virtual method for C ABI access and custom callback
    void endMoveColumns() {
        if (qstandarditemmodel_endmovecolumns_isbase) {
            qstandarditemmodel_endmovecolumns_isbase = false;
            QStandardItemModel::endMoveColumns();
            return;
        }
        auto endmovecolumns_cb = qstandarditemmodel_endmovecolumns_callback;
        if (endmovecolumns_cb) {
            endmovecolumns_cb();
            return;
        }
        QStandardItemModel::endMoveColumns();
    }

    // Virtual method for C ABI access and custom callback
    void beginResetModel() {
        if (qstandarditemmodel_beginresetmodel_isbase) {
            qstandarditemmodel_beginresetmodel_isbase = false;
            QStandardItemModel::beginResetModel();
            return;
        }
        auto beginresetmodel_cb = qstandarditemmodel_beginresetmodel_callback;
        if (beginresetmodel_cb) {
            beginresetmodel_cb();
            return;
        }
        QStandardItemModel::beginResetModel();
    }

    // Virtual method for C ABI access and custom callback
    void endResetModel() {
        if (qstandarditemmodel_endresetmodel_isbase) {
            qstandarditemmodel_endresetmodel_isbase = false;
            QStandardItemModel::endResetModel();
            return;
        }
        auto endresetmodel_cb = qstandarditemmodel_endresetmodel_callback;
        if (endresetmodel_cb) {
            endresetmodel_cb();
            return;
        }
        QStandardItemModel::endResetModel();
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndex(const QModelIndex& from, const QModelIndex& to) {
        if (qstandarditemmodel_changepersistentindex_isbase) {
            qstandarditemmodel_changepersistentindex_isbase = false;
            QStandardItemModel::changePersistentIndex(from, to);
            return;
        }
        auto changepersistentindex_cb = qstandarditemmodel_changepersistentindex_callback;
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
        QStandardItemModel::changePersistentIndex(from, to);
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndexList(const QList<QModelIndex>& from, const QList<QModelIndex>& to) {
        if (qstandarditemmodel_changepersistentindexlist_isbase) {
            qstandarditemmodel_changepersistentindexlist_isbase = false;
            QStandardItemModel::changePersistentIndexList(from, to);
            return;
        }
        auto changepersistentindexlist_cb = qstandarditemmodel_changepersistentindexlist_callback;
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
        QStandardItemModel::changePersistentIndexList(from, to);
    }

    // Virtual method for C ABI access and custom callback
    QList<QModelIndex> persistentIndexList() const {
        if (qstandarditemmodel_persistentindexlist_isbase) {
            qstandarditemmodel_persistentindexlist_isbase = false;
            return QStandardItemModel::persistentIndexList();
        }
        auto persistentindexlist_cb = qstandarditemmodel_persistentindexlist_callback;
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
        return QStandardItemModel::persistentIndexList();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qstandarditemmodel_sender_isbase) {
            qstandarditemmodel_sender_isbase = false;
            return QStandardItemModel::sender();
        }
        auto sender_cb = qstandarditemmodel_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QStandardItemModel::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qstandarditemmodel_sendersignalindex_isbase) {
            qstandarditemmodel_sendersignalindex_isbase = false;
            return QStandardItemModel::senderSignalIndex();
        }
        auto sendersignalindex_cb = qstandarditemmodel_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QStandardItemModel::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qstandarditemmodel_receivers_isbase) {
            qstandarditemmodel_receivers_isbase = false;
            return QStandardItemModel::receivers(signal);
        }
        auto receivers_cb = qstandarditemmodel_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QStandardItemModel::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qstandarditemmodel_issignalconnected_isbase) {
            qstandarditemmodel_issignalconnected_isbase = false;
            return QStandardItemModel::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qstandarditemmodel_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QStandardItemModel::isSignalConnected(signal);
    }

    // Friend functions
    friend void QStandardItemModel_ResetInternalData(QStandardItemModel* self);
    friend void QStandardItemModel_SuperResetInternalData(QStandardItemModel* self);
    friend void QStandardItemModel_TimerEvent(QStandardItemModel* self, QTimerEvent* event);
    friend void QStandardItemModel_SuperTimerEvent(QStandardItemModel* self, QTimerEvent* event);
    friend void QStandardItemModel_ChildEvent(QStandardItemModel* self, QChildEvent* event);
    friend void QStandardItemModel_SuperChildEvent(QStandardItemModel* self, QChildEvent* event);
    friend void QStandardItemModel_CustomEvent(QStandardItemModel* self, QEvent* event);
    friend void QStandardItemModel_SuperCustomEvent(QStandardItemModel* self, QEvent* event);
    friend void QStandardItemModel_ConnectNotify(QStandardItemModel* self, const QMetaMethod* signal);
    friend void QStandardItemModel_SuperConnectNotify(QStandardItemModel* self, const QMetaMethod* signal);
    friend void QStandardItemModel_DisconnectNotify(QStandardItemModel* self, const QMetaMethod* signal);
    friend void QStandardItemModel_SuperDisconnectNotify(QStandardItemModel* self, const QMetaMethod* signal);
    friend QModelIndex* QStandardItemModel_CreateIndex(const QStandardItemModel* self, int row, int column);
    friend QModelIndex* QStandardItemModel_SuperCreateIndex(const QStandardItemModel* self, int row, int column);
    friend void QStandardItemModel_EncodeData(const QStandardItemModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
    friend void QStandardItemModel_SuperEncodeData(const QStandardItemModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
    friend bool QStandardItemModel_DecodeData(QStandardItemModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
    friend bool QStandardItemModel_SuperDecodeData(QStandardItemModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
    friend void QStandardItemModel_BeginInsertRows(QStandardItemModel* self, const QModelIndex* parent, int first, int last);
    friend void QStandardItemModel_SuperBeginInsertRows(QStandardItemModel* self, const QModelIndex* parent, int first, int last);
    friend void QStandardItemModel_EndInsertRows(QStandardItemModel* self);
    friend void QStandardItemModel_SuperEndInsertRows(QStandardItemModel* self);
    friend void QStandardItemModel_BeginRemoveRows(QStandardItemModel* self, const QModelIndex* parent, int first, int last);
    friend void QStandardItemModel_SuperBeginRemoveRows(QStandardItemModel* self, const QModelIndex* parent, int first, int last);
    friend void QStandardItemModel_EndRemoveRows(QStandardItemModel* self);
    friend void QStandardItemModel_SuperEndRemoveRows(QStandardItemModel* self);
    friend bool QStandardItemModel_BeginMoveRows(QStandardItemModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
    friend bool QStandardItemModel_SuperBeginMoveRows(QStandardItemModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
    friend void QStandardItemModel_EndMoveRows(QStandardItemModel* self);
    friend void QStandardItemModel_SuperEndMoveRows(QStandardItemModel* self);
    friend void QStandardItemModel_BeginInsertColumns(QStandardItemModel* self, const QModelIndex* parent, int first, int last);
    friend void QStandardItemModel_SuperBeginInsertColumns(QStandardItemModel* self, const QModelIndex* parent, int first, int last);
    friend void QStandardItemModel_EndInsertColumns(QStandardItemModel* self);
    friend void QStandardItemModel_SuperEndInsertColumns(QStandardItemModel* self);
    friend void QStandardItemModel_BeginRemoveColumns(QStandardItemModel* self, const QModelIndex* parent, int first, int last);
    friend void QStandardItemModel_SuperBeginRemoveColumns(QStandardItemModel* self, const QModelIndex* parent, int first, int last);
    friend void QStandardItemModel_EndRemoveColumns(QStandardItemModel* self);
    friend void QStandardItemModel_SuperEndRemoveColumns(QStandardItemModel* self);
    friend bool QStandardItemModel_BeginMoveColumns(QStandardItemModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
    friend bool QStandardItemModel_SuperBeginMoveColumns(QStandardItemModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
    friend void QStandardItemModel_EndMoveColumns(QStandardItemModel* self);
    friend void QStandardItemModel_SuperEndMoveColumns(QStandardItemModel* self);
    friend void QStandardItemModel_BeginResetModel(QStandardItemModel* self);
    friend void QStandardItemModel_SuperBeginResetModel(QStandardItemModel* self);
    friend void QStandardItemModel_EndResetModel(QStandardItemModel* self);
    friend void QStandardItemModel_SuperEndResetModel(QStandardItemModel* self);
    friend void QStandardItemModel_ChangePersistentIndex(QStandardItemModel* self, const QModelIndex* from, const QModelIndex* to);
    friend void QStandardItemModel_SuperChangePersistentIndex(QStandardItemModel* self, const QModelIndex* from, const QModelIndex* to);
    friend void QStandardItemModel_ChangePersistentIndexList(QStandardItemModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
    friend void QStandardItemModel_SuperChangePersistentIndexList(QStandardItemModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
    friend libqt_list /* of QModelIndex* */ QStandardItemModel_PersistentIndexList(const QStandardItemModel* self);
    friend libqt_list /* of QModelIndex* */ QStandardItemModel_SuperPersistentIndexList(const QStandardItemModel* self);
    friend QObject* QStandardItemModel_Sender(const QStandardItemModel* self);
    friend QObject* QStandardItemModel_SuperSender(const QStandardItemModel* self);
    friend int QStandardItemModel_SenderSignalIndex(const QStandardItemModel* self);
    friend int QStandardItemModel_SuperSenderSignalIndex(const QStandardItemModel* self);
    friend int QStandardItemModel_Receivers(const QStandardItemModel* self, const char* signal);
    friend int QStandardItemModel_SuperReceivers(const QStandardItemModel* self, const char* signal);
    friend bool QStandardItemModel_IsSignalConnected(const QStandardItemModel* self, const QMetaMethod* signal);
    friend bool QStandardItemModel_SuperIsSignalConnected(const QStandardItemModel* self, const QMetaMethod* signal);
};

#endif
