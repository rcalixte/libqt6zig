#pragma once
#ifndef LIBQSTANDARDITEMMODEL_HXX
#define LIBQSTANDARDITEMMODEL_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QStandardItem
class VirtualQStandardItem final : public QStandardItem {
  public:
    // Virtual class public types (including callbacks and access types)
    using QStandardItem_Data_Callback = QVariant* (*)(const QStandardItem*, int);
    using QStandardItem_MultiData_Callback = void (*)(const QStandardItem*, QModelRoleDataSpan*);
    using QStandardItem_SetData_Callback = void (*)(QStandardItem*, QVariant*, int);
    using QStandardItem_Clone_Callback = QStandardItem* (*)(const QStandardItem*);
    using QStandardItem_Type_Callback = int (*)(const QStandardItem*);
    using QStandardItem_Read_Callback = void (*)(QStandardItem*, QDataStream*);
    using QStandardItem_Write_Callback = void (*)(const QStandardItem*, QDataStream*);
    using QStandardItem_OperatorLesser_Callback = bool (*)(const QStandardItem*, QStandardItem*);
    using QStandardItem::emitDataChanged;

    // Instance callback storage
    QStandardItem_Data_Callback qstandarditem_data_callback = nullptr;
    QStandardItem_MultiData_Callback qstandarditem_multidata_callback = nullptr;
    QStandardItem_SetData_Callback qstandarditem_setdata_callback = nullptr;
    QStandardItem_Clone_Callback qstandarditem_clone_callback = nullptr;
    QStandardItem_Type_Callback qstandarditem_type_callback = nullptr;
    QStandardItem_Read_Callback qstandarditem_read_callback = nullptr;
    QStandardItem_Write_Callback qstandarditem_write_callback = nullptr;
    QStandardItem_OperatorLesser_Callback qstandarditem_operatorlesser_callback = nullptr;

    VirtualQStandardItem() : QStandardItem() {};
    VirtualQStandardItem(const QString& text) : QStandardItem(text) {};
    VirtualQStandardItem(const QIcon& icon, const QString& text) : QStandardItem(icon, text) {};
    VirtualQStandardItem(int rows) : QStandardItem(rows) {};
    VirtualQStandardItem(int rows, int columns) : QStandardItem(rows, columns) {};

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(int role) const override {
        if (qstandarditem_data_callback) {
            int cbval1 = role;
            QVariant* callback_ret = qstandarditem_data_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QStandardItem::data(role);
    }

    // Virtual method for C ABI access and custom callback
    virtual void multiData(QModelRoleDataSpan roleDataSpan) const override {
        if (qstandarditem_multidata_callback) {
            QModelRoleDataSpan* cbval1 = new QModelRoleDataSpan(roleDataSpan);
            qstandarditem_multidata_callback(this, cbval1);
            return;
        }
        QStandardItem::multiData(roleDataSpan);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setData(const QVariant& value, int role) override {
        if (qstandarditem_setdata_callback) {
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&value_ret);
            int cbval2 = role;
            qstandarditem_setdata_callback(this, cbval1, cbval2);
            return;
        }
        QStandardItem::setData(value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual QStandardItem* clone() const override {
        if (qstandarditem_clone_callback) {
            QStandardItem* callback_ret = qstandarditem_clone_callback(this);
            return callback_ret;
        }
        return QStandardItem::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual int type() const override {
        if (qstandarditem_type_callback) {
            int callback_ret = qstandarditem_type_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QStandardItem::type();
    }

    // Virtual method for C ABI access and custom callback
    virtual void read(QDataStream& in) override {
        if (qstandarditem_read_callback) {
            QDataStream& in_ret = in;
            // Cast returned reference into pointer
            QDataStream* cbval1 = &in_ret;
            qstandarditem_read_callback(this, cbval1);
            return;
        }
        QStandardItem::read(in);
    }

    // Virtual method for C ABI access and custom callback
    virtual void write(QDataStream& out) const override {
        if (qstandarditem_write_callback) {
            QDataStream& out_ret = out;
            // Cast returned reference into pointer
            QDataStream* cbval1 = &out_ret;
            qstandarditem_write_callback(this, cbval1);
            return;
        }
        QStandardItem::write(out);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool operator<(const QStandardItem& other) const override {
        if (qstandarditem_operatorlesser_callback) {
            const QStandardItem& other_ret = other;
            // Cast returned reference into pointer
            QStandardItem* cbval1 = const_cast<QStandardItem*>(&other_ret);
            bool callback_ret = qstandarditem_operatorlesser_callback(this, cbval1);
            return callback_ret;
        }
        return QStandardItem::operator<(other);
    }
};

// This class is a subclass of QStandardItemModel
class VirtualQStandardItemModel final : public QStandardItemModel {
  public:
    // Virtual class public types (including callbacks and access types)
    using QStandardItemModel_MetaObject_Callback = QMetaObject* (*)(const QStandardItemModel*);
    using QStandardItemModel_Metacast_Callback = void* (*)(QStandardItemModel*, const char*);
    using QStandardItemModel_Metacall_Callback = int (*)(QStandardItemModel*, int, int, void**);
    using QStandardItemModel_RoleNames_Callback = libqt_map /* of int to libqt_string */ (*)(const QStandardItemModel*);
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
    using QStandardItemModel_SupportedDropActions_Callback = int (*)(const QStandardItemModel*);
    using QStandardItemModel_ItemData_Callback = libqt_map /* of int to QVariant* */ (*)(const QStandardItemModel*, QModelIndex*);
    using QStandardItemModel_SetItemData_Callback = bool (*)(QStandardItemModel*, QModelIndex*, libqt_map /* of int to QVariant* */);
    using QStandardItemModel_Sort_Callback = void (*)(QStandardItemModel*, int, int);
    using QStandardItemModel_MimeTypes_Callback = const char** (*)(const QStandardItemModel*);
    using QStandardItemModel_MimeData_Callback = QMimeData* (*)(const QStandardItemModel*, libqt_list /* of QModelIndex* */);
    using QStandardItemModel_DropMimeData_Callback = bool (*)(QStandardItemModel*, QMimeData*, int, int, int, QModelIndex*);
    using QStandardItemModel_Sibling_Callback = QModelIndex* (*)(const QStandardItemModel*, int, int, QModelIndex*);
    using QStandardItemModel_CanDropMimeData_Callback = bool (*)(const QStandardItemModel*, QMimeData*, int, int, int, QModelIndex*);
    using QStandardItemModel_SupportedDragActions_Callback = int (*)(const QStandardItemModel*);
    using QStandardItemModel_MoveRows_Callback = bool (*)(QStandardItemModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QStandardItemModel_MoveColumns_Callback = bool (*)(QStandardItemModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QStandardItemModel_FetchMore_Callback = void (*)(QStandardItemModel*, QModelIndex*);
    using QStandardItemModel_CanFetchMore_Callback = bool (*)(const QStandardItemModel*, QModelIndex*);
    using QStandardItemModel_Buddy_Callback = QModelIndex* (*)(const QStandardItemModel*, QModelIndex*);
    using QStandardItemModel_Match_Callback = libqt_list /* of QModelIndex* */ (*)(const QStandardItemModel*, QModelIndex*, int, QVariant*, int, int);
    using QStandardItemModel_Span_Callback = QSize* (*)(const QStandardItemModel*, QModelIndex*);
    using QStandardItemModel_Submit_Callback = bool (*)(QStandardItemModel*);
    using QStandardItemModel_Revert_Callback = void (*)(QStandardItemModel*);
    using QStandardItemModel_ResetInternalData_Callback = void (*)(QStandardItemModel*);
    using QStandardItemModel_Event_Callback = bool (*)(QStandardItemModel*, QEvent*);
    using QStandardItemModel_EventFilter_Callback = bool (*)(QStandardItemModel*, QObject*, QEvent*);
    using QStandardItemModel_TimerEvent_Callback = void (*)(QStandardItemModel*, QTimerEvent*);
    using QStandardItemModel_ChildEvent_Callback = void (*)(QStandardItemModel*, QChildEvent*);
    using QStandardItemModel_CustomEvent_Callback = void (*)(QStandardItemModel*, QEvent*);
    using QStandardItemModel_ConnectNotify_Callback = void (*)(QStandardItemModel*, QMetaMethod*);
    using QStandardItemModel_DisconnectNotify_Callback = void (*)(QStandardItemModel*, QMetaMethod*);
    using QStandardItemModel::beginInsertColumns;
    using QStandardItemModel::beginInsertRows;
    using QStandardItemModel::beginMoveColumns;
    using QStandardItemModel::beginMoveRows;
    using QStandardItemModel::beginRemoveColumns;
    using QStandardItemModel::beginRemoveRows;
    using QStandardItemModel::beginResetModel;
    using QStandardItemModel::changePersistentIndex;
    using QStandardItemModel::changePersistentIndexList;
    using QStandardItemModel::createIndex;
    using QStandardItemModel::decodeData;
    using QStandardItemModel::encodeData;
    using QStandardItemModel::endInsertColumns;
    using QStandardItemModel::endInsertRows;
    using QStandardItemModel::endMoveColumns;
    using QStandardItemModel::endMoveRows;
    using QStandardItemModel::endRemoveColumns;
    using QStandardItemModel::endRemoveRows;
    using QStandardItemModel::endResetModel;
    using QStandardItemModel::isSignalConnected;
    using QStandardItemModel::persistentIndexList;
    using QStandardItemModel::receivers;
    using QStandardItemModel::sender;
    using QStandardItemModel::senderSignalIndex;

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

    // Access struct
    struct Base : QStandardItemModel {
        using QStandardItemModel::childEvent;
        using QStandardItemModel::connectNotify;
        using QStandardItemModel::customEvent;
        using QStandardItemModel::disconnectNotify;
        using QStandardItemModel::resetInternalData;
        using QStandardItemModel::timerEvent;
    };

    VirtualQStandardItemModel() : QStandardItemModel() {};
    VirtualQStandardItemModel(int rows, int columns) : QStandardItemModel(rows, columns) {};
    VirtualQStandardItemModel(QObject* parent) : QStandardItemModel(parent) {};
    VirtualQStandardItemModel(int rows, int columns, QObject* parent) : QStandardItemModel(rows, columns, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qstandarditemmodel_metaobject_callback) {
            QMetaObject* callback_ret = qstandarditemmodel_metaobject_callback(this);
            return callback_ret;
        }
        return QStandardItemModel::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qstandarditemmodel_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qstandarditemmodel_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QStandardItemModel::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qstandarditemmodel_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qstandarditemmodel_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QStandardItemModel::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QHash<int, QByteArray> roleNames() const override {
        if (qstandarditemmodel_rolenames_callback) {
            libqt_map /* of int to libqt_string */ callback_ret = qstandarditemmodel_rolenames_callback(this);
            QHash<int, QByteArray> callback_ret_QHash;
            callback_ret_QHash.reserve(callback_ret.len);
            int* callback_ret_karr = static_cast<int*>(callback_ret.keys);
            libqt_string* callback_ret_varr = static_cast<libqt_string*>(callback_ret.values);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                QByteArray callback_ret_varr_i_QByteArray(callback_ret_varr[i].data, callback_ret_varr[i].len);
                callback_ret_QHash.insert(static_cast<int>(callback_ret_karr[i]), callback_ret_varr_i_QByteArray);
            }
            return callback_ret_QHash;
        }
        return QStandardItemModel::roleNames();
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
        if (qstandarditemmodel_index_callback) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            QModelIndex* callback_ret = qstandarditemmodel_index_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QStandardItemModel::index(row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex parent(const QModelIndex& child) const override {
        if (qstandarditemmodel_parent_callback) {
            const QModelIndex& child_ret = child;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&child_ret);
            QModelIndex* callback_ret = qstandarditemmodel_parent_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QStandardItemModel::parent(child);
    }

    // Virtual method for C ABI access and custom callback
    virtual int rowCount(const QModelIndex& parent) const override {
        if (qstandarditemmodel_rowcount_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int callback_ret = qstandarditemmodel_rowcount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QStandardItemModel::rowCount(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual int columnCount(const QModelIndex& parent) const override {
        if (qstandarditemmodel_columncount_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int callback_ret = qstandarditemmodel_columncount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QStandardItemModel::columnCount(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasChildren(const QModelIndex& parent) const override {
        if (qstandarditemmodel_haschildren_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qstandarditemmodel_haschildren_callback(this, cbval1);
            return callback_ret;
        }
        return QStandardItemModel::hasChildren(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(const QModelIndex& index, int role) const override {
        if (qstandarditemmodel_data_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = role;
            QVariant* callback_ret = qstandarditemmodel_data_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QStandardItemModel::data(index, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
        if (qstandarditemmodel_multidata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelRoleDataSpan* cbval2 = new QModelRoleDataSpan(roleDataSpan);
            qstandarditemmodel_multidata_callback(this, cbval1, cbval2);
            return;
        }
        QStandardItemModel::multiData(index, roleDataSpan);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
        if (qstandarditemmodel_setdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            int cbval3 = role;
            bool callback_ret = qstandarditemmodel_setdata_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QStandardItemModel::setData(index, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool clearItemData(const QModelIndex& index) override {
        if (qstandarditemmodel_clearitemdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            bool callback_ret = qstandarditemmodel_clearitemdata_callback(this, cbval1);
            return callback_ret;
        }
        return QStandardItemModel::clearItemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
        if (qstandarditemmodel_headerdata_callback) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            int cbval3 = role;
            QVariant* callback_ret = qstandarditemmodel_headerdata_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QStandardItemModel::headerData(section, orientation, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
        if (qstandarditemmodel_setheaderdata_callback) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = role;
            bool callback_ret = qstandarditemmodel_setheaderdata_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        }
        return QStandardItemModel::setHeaderData(section, orientation, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
        if (qstandarditemmodel_insertrows_callback) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qstandarditemmodel_insertrows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QStandardItemModel::insertRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
        if (qstandarditemmodel_insertcolumns_callback) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qstandarditemmodel_insertcolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QStandardItemModel::insertColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
        if (qstandarditemmodel_removerows_callback) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qstandarditemmodel_removerows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QStandardItemModel::removeRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
        if (qstandarditemmodel_removecolumns_callback) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qstandarditemmodel_removecolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QStandardItemModel::removeColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
        if (qstandarditemmodel_flags_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int callback_ret = qstandarditemmodel_flags_callback(this, cbval1);
            return static_cast<Qt::ItemFlags>(callback_ret);
        }
        return QStandardItemModel::flags(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (qstandarditemmodel_supporteddropactions_callback) {
            int callback_ret = qstandarditemmodel_supporteddropactions_callback(this);
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return QStandardItemModel::supportedDropActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
        if (qstandarditemmodel_itemdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            libqt_map /* of int to QVariant* */ callback_ret = qstandarditemmodel_itemdata_callback(this, cbval1);
            QMap<int, QVariant> callback_ret_QMap;
            int* callback_ret_karr = static_cast<int*>(callback_ret.keys);
            QVariant** callback_ret_varr = static_cast<QVariant**>(callback_ret.values);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QMap.insert(static_cast<int>(callback_ret_karr[i]), *(callback_ret_varr[i]));
            }
            return callback_ret_QMap;
        }
        return QStandardItemModel::itemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
        if (qstandarditemmodel_setitemdata_callback) {
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
            bool callback_ret = qstandarditemmodel_setitemdata_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QStandardItemModel::setItemData(index, roles);
    }

    // Virtual method for C ABI access and custom callback
    virtual void sort(int column, Qt::SortOrder order) override {
        if (qstandarditemmodel_sort_callback) {
            int cbval1 = column;
            int cbval2 = static_cast<int>(order);
            qstandarditemmodel_sort_callback(this, cbval1, cbval2);
            return;
        }
        QStandardItemModel::sort(column, order);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> mimeTypes() const override {
        if (qstandarditemmodel_mimetypes_callback) {
            const char** callback_ret = qstandarditemmodel_mimetypes_callback(this);
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
        if (qstandarditemmodel_mimedata_callback) {
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
            QMimeData* callback_ret = qstandarditemmodel_mimedata_callback(this, cbval1);
            free(indexes_arr);
            return callback_ret;
        }
        return QStandardItemModel::mimeData(indexes);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
        if (qstandarditemmodel_dropmimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qstandarditemmodel_dropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return QStandardItemModel::dropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
        if (qstandarditemmodel_sibling_callback) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& idx_ret = idx;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&idx_ret);
            QModelIndex* callback_ret = qstandarditemmodel_sibling_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QStandardItemModel::sibling(row, column, idx);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
        if (qstandarditemmodel_candropmimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qstandarditemmodel_candropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return QStandardItemModel::canDropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDragActions() const override {
        if (qstandarditemmodel_supporteddragactions_callback) {
            int callback_ret = qstandarditemmodel_supporteddragactions_callback(this);
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return QStandardItemModel::supportedDragActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (qstandarditemmodel_moverows_callback) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceRow;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;
            bool callback_ret = qstandarditemmodel_moverows_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return QStandardItemModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (qstandarditemmodel_movecolumns_callback) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceColumn;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;
            bool callback_ret = qstandarditemmodel_movecolumns_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return QStandardItemModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual void fetchMore(const QModelIndex& parent) override {
        if (qstandarditemmodel_fetchmore_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            qstandarditemmodel_fetchmore_callback(this, cbval1);
            return;
        }
        QStandardItemModel::fetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canFetchMore(const QModelIndex& parent) const override {
        if (qstandarditemmodel_canfetchmore_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qstandarditemmodel_canfetchmore_callback(this, cbval1);
            return callback_ret;
        }
        return QStandardItemModel::canFetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex buddy(const QModelIndex& index) const override {
        if (qstandarditemmodel_buddy_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelIndex* callback_ret = qstandarditemmodel_buddy_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QStandardItemModel::buddy(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
        if (qstandarditemmodel_match_callback) {
            const QModelIndex& start_ret = start;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&start_ret);
            int cbval2 = role;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = hits;
            int cbval5 = static_cast<int>(flags);
            libqt_list /* of QModelIndex* */ callback_ret = qstandarditemmodel_match_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
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
        if (qstandarditemmodel_span_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QSize* callback_ret = qstandarditemmodel_span_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QStandardItemModel::span(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool submit() override {
        if (qstandarditemmodel_submit_callback) {
            bool callback_ret = qstandarditemmodel_submit_callback(this);
            return callback_ret;
        }
        return QStandardItemModel::submit();
    }

    // Virtual method for C ABI access and custom callback
    virtual void revert() override {
        if (qstandarditemmodel_revert_callback) {
            qstandarditemmodel_revert_callback(this);
            return;
        }
        QStandardItemModel::revert();
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetInternalData() override {
        if (qstandarditemmodel_resetinternaldata_callback) {
            qstandarditemmodel_resetinternaldata_callback(this);
            return;
        }
        QStandardItemModel::resetInternalData();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qstandarditemmodel_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qstandarditemmodel_event_callback(this, cbval1);
            return callback_ret;
        }
        return QStandardItemModel::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qstandarditemmodel_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qstandarditemmodel_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QStandardItemModel::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qstandarditemmodel_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qstandarditemmodel_timerevent_callback(this, cbval1);
            return;
        }
        QStandardItemModel::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qstandarditemmodel_childevent_callback) {
            QChildEvent* cbval1 = event;
            qstandarditemmodel_childevent_callback(this, cbval1);
            return;
        }
        QStandardItemModel::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qstandarditemmodel_customevent_callback) {
            QEvent* cbval1 = event;
            qstandarditemmodel_customevent_callback(this, cbval1);
            return;
        }
        QStandardItemModel::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qstandarditemmodel_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qstandarditemmodel_connectnotify_callback(this, cbval1);
            return;
        }
        QStandardItemModel::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qstandarditemmodel_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qstandarditemmodel_disconnectnotify_callback(this, cbval1);
            return;
        }
        QStandardItemModel::disconnectNotify(signal);
    }

    // Friend functions
    friend void QStandardItemModel_SuperResetInternalData(QStandardItemModel* self);
    friend void QStandardItemModel_SuperTimerEvent(QStandardItemModel* self, QTimerEvent* event);
    friend void QStandardItemModel_SuperChildEvent(QStandardItemModel* self, QChildEvent* event);
    friend void QStandardItemModel_SuperCustomEvent(QStandardItemModel* self, QEvent* event);
    friend void QStandardItemModel_SuperConnectNotify(QStandardItemModel* self, const QMetaMethod* signal);
    friend void QStandardItemModel_SuperDisconnectNotify(QStandardItemModel* self, const QMetaMethod* signal);
};

#endif
