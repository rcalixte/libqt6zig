#pragma once
#ifndef SQL_LIBQSQLQUERYMODEL_HXX
#define SQL_LIBQSQLQUERYMODEL_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QSqlQueryModel
class VirtualQSqlQueryModel final : public QSqlQueryModel {
  public:
    // Virtual class public types (including callbacks and access types)
    using QSqlQueryModel_MetaObject_Callback = QMetaObject* (*)(const QSqlQueryModel*);
    using QSqlQueryModel_Metacast_Callback = void* (*)(QSqlQueryModel*, const char*);
    using QSqlQueryModel_Metacall_Callback = int (*)(QSqlQueryModel*, int, int, void**);
    using QSqlQueryModel_RowCount_Callback = int (*)(const QSqlQueryModel*, QModelIndex*);
    using QSqlQueryModel_ColumnCount_Callback = int (*)(const QSqlQueryModel*, QModelIndex*);
    using QSqlQueryModel_Data_Callback = QVariant* (*)(const QSqlQueryModel*, QModelIndex*, int);
    using QSqlQueryModel_HeaderData_Callback = QVariant* (*)(const QSqlQueryModel*, int, int, int);
    using QSqlQueryModel_SetHeaderData_Callback = bool (*)(QSqlQueryModel*, int, int, QVariant*, int);
    using QSqlQueryModel_InsertColumns_Callback = bool (*)(QSqlQueryModel*, int, int, QModelIndex*);
    using QSqlQueryModel_RemoveColumns_Callback = bool (*)(QSqlQueryModel*, int, int, QModelIndex*);
    using QSqlQueryModel_Clear_Callback = void (*)(QSqlQueryModel*);
    using QSqlQueryModel_FetchMore_Callback = void (*)(QSqlQueryModel*, QModelIndex*);
    using QSqlQueryModel_CanFetchMore_Callback = bool (*)(const QSqlQueryModel*, QModelIndex*);
    using QSqlQueryModel_RoleNames_Callback = libqt_map /* of int to libqt_string */ (*)(const QSqlQueryModel*);
    using QSqlQueryModel_QueryChange_Callback = void (*)(QSqlQueryModel*);
    using QSqlQueryModel_IndexInQuery_Callback = QModelIndex* (*)(const QSqlQueryModel*, QModelIndex*);
    using QSqlQueryModel_Index_Callback = QModelIndex* (*)(const QSqlQueryModel*, int, int, QModelIndex*);
    using QSqlQueryModel_Sibling_Callback = QModelIndex* (*)(const QSqlQueryModel*, int, int, QModelIndex*);
    using QSqlQueryModel_DropMimeData_Callback = bool (*)(QSqlQueryModel*, QMimeData*, int, int, int, QModelIndex*);
    using QSqlQueryModel_Flags_Callback = int (*)(const QSqlQueryModel*, QModelIndex*);
    using QSqlQueryModel_SetData_Callback = bool (*)(QSqlQueryModel*, QModelIndex*, QVariant*, int);
    using QSqlQueryModel_ItemData_Callback = libqt_map /* of int to QVariant* */ (*)(const QSqlQueryModel*, QModelIndex*);
    using QSqlQueryModel_SetItemData_Callback = bool (*)(QSqlQueryModel*, QModelIndex*, libqt_map /* of int to QVariant* */);
    using QSqlQueryModel_ClearItemData_Callback = bool (*)(QSqlQueryModel*, QModelIndex*);
    using QSqlQueryModel_MimeTypes_Callback = const char** (*)(const QSqlQueryModel*);
    using QSqlQueryModel_MimeData_Callback = QMimeData* (*)(const QSqlQueryModel*, libqt_list /* of QModelIndex* */);
    using QSqlQueryModel_CanDropMimeData_Callback = bool (*)(const QSqlQueryModel*, QMimeData*, int, int, int, QModelIndex*);
    using QSqlQueryModel_SupportedDropActions_Callback = int (*)(const QSqlQueryModel*);
    using QSqlQueryModel_SupportedDragActions_Callback = int (*)(const QSqlQueryModel*);
    using QSqlQueryModel_InsertRows_Callback = bool (*)(QSqlQueryModel*, int, int, QModelIndex*);
    using QSqlQueryModel_RemoveRows_Callback = bool (*)(QSqlQueryModel*, int, int, QModelIndex*);
    using QSqlQueryModel_MoveRows_Callback = bool (*)(QSqlQueryModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QSqlQueryModel_MoveColumns_Callback = bool (*)(QSqlQueryModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QSqlQueryModel_Sort_Callback = void (*)(QSqlQueryModel*, int, int);
    using QSqlQueryModel_Buddy_Callback = QModelIndex* (*)(const QSqlQueryModel*, QModelIndex*);
    using QSqlQueryModel_Match_Callback = libqt_list /* of QModelIndex* */ (*)(const QSqlQueryModel*, QModelIndex*, int, QVariant*, int, int);
    using QSqlQueryModel_Span_Callback = QSize* (*)(const QSqlQueryModel*, QModelIndex*);
    using QSqlQueryModel_MultiData_Callback = void (*)(const QSqlQueryModel*, QModelIndex*, QModelRoleDataSpan*);
    using QSqlQueryModel_Submit_Callback = bool (*)(QSqlQueryModel*);
    using QSqlQueryModel_Revert_Callback = void (*)(QSqlQueryModel*);
    using QSqlQueryModel_ResetInternalData_Callback = void (*)(QSqlQueryModel*);
    using QSqlQueryModel_Event_Callback = bool (*)(QSqlQueryModel*, QEvent*);
    using QSqlQueryModel_EventFilter_Callback = bool (*)(QSqlQueryModel*, QObject*, QEvent*);
    using QSqlQueryModel_TimerEvent_Callback = void (*)(QSqlQueryModel*, QTimerEvent*);
    using QSqlQueryModel_ChildEvent_Callback = void (*)(QSqlQueryModel*, QChildEvent*);
    using QSqlQueryModel_CustomEvent_Callback = void (*)(QSqlQueryModel*, QEvent*);
    using QSqlQueryModel_ConnectNotify_Callback = void (*)(QSqlQueryModel*, QMetaMethod*);
    using QSqlQueryModel_DisconnectNotify_Callback = void (*)(QSqlQueryModel*, QMetaMethod*);
    using QSqlQueryModel::beginInsertColumns;
    using QSqlQueryModel::beginInsertRows;
    using QSqlQueryModel::beginMoveColumns;
    using QSqlQueryModel::beginMoveRows;
    using QSqlQueryModel::beginRemoveColumns;
    using QSqlQueryModel::beginRemoveRows;
    using QSqlQueryModel::beginResetModel;
    using QSqlQueryModel::changePersistentIndex;
    using QSqlQueryModel::changePersistentIndexList;
    using QSqlQueryModel::createIndex;
    using QSqlQueryModel::decodeData;
    using QSqlQueryModel::encodeData;
    using QSqlQueryModel::endInsertColumns;
    using QSqlQueryModel::endInsertRows;
    using QSqlQueryModel::endMoveColumns;
    using QSqlQueryModel::endMoveRows;
    using QSqlQueryModel::endRemoveColumns;
    using QSqlQueryModel::endRemoveRows;
    using QSqlQueryModel::endResetModel;
    using QSqlQueryModel::isSignalConnected;
    using QSqlQueryModel::persistentIndexList;
    using QSqlQueryModel::receivers;
    using QSqlQueryModel::sender;
    using QSqlQueryModel::senderSignalIndex;
    using QSqlQueryModel::setLastError;

    // Instance callback storage
    QSqlQueryModel_MetaObject_Callback qsqlquerymodel_metaobject_callback = nullptr;
    QSqlQueryModel_Metacast_Callback qsqlquerymodel_metacast_callback = nullptr;
    QSqlQueryModel_Metacall_Callback qsqlquerymodel_metacall_callback = nullptr;
    QSqlQueryModel_RowCount_Callback qsqlquerymodel_rowcount_callback = nullptr;
    QSqlQueryModel_ColumnCount_Callback qsqlquerymodel_columncount_callback = nullptr;
    QSqlQueryModel_Data_Callback qsqlquerymodel_data_callback = nullptr;
    QSqlQueryModel_HeaderData_Callback qsqlquerymodel_headerdata_callback = nullptr;
    QSqlQueryModel_SetHeaderData_Callback qsqlquerymodel_setheaderdata_callback = nullptr;
    QSqlQueryModel_InsertColumns_Callback qsqlquerymodel_insertcolumns_callback = nullptr;
    QSqlQueryModel_RemoveColumns_Callback qsqlquerymodel_removecolumns_callback = nullptr;
    QSqlQueryModel_Clear_Callback qsqlquerymodel_clear_callback = nullptr;
    QSqlQueryModel_FetchMore_Callback qsqlquerymodel_fetchmore_callback = nullptr;
    QSqlQueryModel_CanFetchMore_Callback qsqlquerymodel_canfetchmore_callback = nullptr;
    QSqlQueryModel_RoleNames_Callback qsqlquerymodel_rolenames_callback = nullptr;
    QSqlQueryModel_QueryChange_Callback qsqlquerymodel_querychange_callback = nullptr;
    QSqlQueryModel_IndexInQuery_Callback qsqlquerymodel_indexinquery_callback = nullptr;
    QSqlQueryModel_Index_Callback qsqlquerymodel_index_callback = nullptr;
    QSqlQueryModel_Sibling_Callback qsqlquerymodel_sibling_callback = nullptr;
    QSqlQueryModel_DropMimeData_Callback qsqlquerymodel_dropmimedata_callback = nullptr;
    QSqlQueryModel_Flags_Callback qsqlquerymodel_flags_callback = nullptr;
    QSqlQueryModel_SetData_Callback qsqlquerymodel_setdata_callback = nullptr;
    QSqlQueryModel_ItemData_Callback qsqlquerymodel_itemdata_callback = nullptr;
    QSqlQueryModel_SetItemData_Callback qsqlquerymodel_setitemdata_callback = nullptr;
    QSqlQueryModel_ClearItemData_Callback qsqlquerymodel_clearitemdata_callback = nullptr;
    QSqlQueryModel_MimeTypes_Callback qsqlquerymodel_mimetypes_callback = nullptr;
    QSqlQueryModel_MimeData_Callback qsqlquerymodel_mimedata_callback = nullptr;
    QSqlQueryModel_CanDropMimeData_Callback qsqlquerymodel_candropmimedata_callback = nullptr;
    QSqlQueryModel_SupportedDropActions_Callback qsqlquerymodel_supporteddropactions_callback = nullptr;
    QSqlQueryModel_SupportedDragActions_Callback qsqlquerymodel_supporteddragactions_callback = nullptr;
    QSqlQueryModel_InsertRows_Callback qsqlquerymodel_insertrows_callback = nullptr;
    QSqlQueryModel_RemoveRows_Callback qsqlquerymodel_removerows_callback = nullptr;
    QSqlQueryModel_MoveRows_Callback qsqlquerymodel_moverows_callback = nullptr;
    QSqlQueryModel_MoveColumns_Callback qsqlquerymodel_movecolumns_callback = nullptr;
    QSqlQueryModel_Sort_Callback qsqlquerymodel_sort_callback = nullptr;
    QSqlQueryModel_Buddy_Callback qsqlquerymodel_buddy_callback = nullptr;
    QSqlQueryModel_Match_Callback qsqlquerymodel_match_callback = nullptr;
    QSqlQueryModel_Span_Callback qsqlquerymodel_span_callback = nullptr;
    QSqlQueryModel_MultiData_Callback qsqlquerymodel_multidata_callback = nullptr;
    QSqlQueryModel_Submit_Callback qsqlquerymodel_submit_callback = nullptr;
    QSqlQueryModel_Revert_Callback qsqlquerymodel_revert_callback = nullptr;
    QSqlQueryModel_ResetInternalData_Callback qsqlquerymodel_resetinternaldata_callback = nullptr;
    QSqlQueryModel_Event_Callback qsqlquerymodel_event_callback = nullptr;
    QSqlQueryModel_EventFilter_Callback qsqlquerymodel_eventfilter_callback = nullptr;
    QSqlQueryModel_TimerEvent_Callback qsqlquerymodel_timerevent_callback = nullptr;
    QSqlQueryModel_ChildEvent_Callback qsqlquerymodel_childevent_callback = nullptr;
    QSqlQueryModel_CustomEvent_Callback qsqlquerymodel_customevent_callback = nullptr;
    QSqlQueryModel_ConnectNotify_Callback qsqlquerymodel_connectnotify_callback = nullptr;
    QSqlQueryModel_DisconnectNotify_Callback qsqlquerymodel_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QSqlQueryModel {
        using QSqlQueryModel::childEvent;
        using QSqlQueryModel::connectNotify;
        using QSqlQueryModel::customEvent;
        using QSqlQueryModel::disconnectNotify;
        using QSqlQueryModel::indexInQuery;
        using QSqlQueryModel::queryChange;
        using QSqlQueryModel::resetInternalData;
        using QSqlQueryModel::timerEvent;
    };

    VirtualQSqlQueryModel() : QSqlQueryModel() {};
    VirtualQSqlQueryModel(QObject* parent) : QSqlQueryModel(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qsqlquerymodel_metaobject_callback) {
            QMetaObject* callback_ret = qsqlquerymodel_metaobject_callback(this);
            return callback_ret;
        }
        return QSqlQueryModel::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qsqlquerymodel_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qsqlquerymodel_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QSqlQueryModel::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qsqlquerymodel_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qsqlquerymodel_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QSqlQueryModel::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual int rowCount(const QModelIndex& parent) const override {
        if (qsqlquerymodel_rowcount_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int callback_ret = qsqlquerymodel_rowcount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QSqlQueryModel::rowCount(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual int columnCount(const QModelIndex& parent) const override {
        if (qsqlquerymodel_columncount_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int callback_ret = qsqlquerymodel_columncount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QSqlQueryModel::columnCount(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(const QModelIndex& item, int role) const override {
        if (qsqlquerymodel_data_callback) {
            const QModelIndex& item_ret = item;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&item_ret);
            int cbval2 = role;
            QVariant* callback_ret = qsqlquerymodel_data_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QSqlQueryModel::data(item, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
        if (qsqlquerymodel_headerdata_callback) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            int cbval3 = role;
            QVariant* callback_ret = qsqlquerymodel_headerdata_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QSqlQueryModel::headerData(section, orientation, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
        if (qsqlquerymodel_setheaderdata_callback) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = role;
            bool callback_ret = qsqlquerymodel_setheaderdata_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        }
        return QSqlQueryModel::setHeaderData(section, orientation, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
        if (qsqlquerymodel_insertcolumns_callback) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qsqlquerymodel_insertcolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QSqlQueryModel::insertColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
        if (qsqlquerymodel_removecolumns_callback) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qsqlquerymodel_removecolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QSqlQueryModel::removeColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void clear() override {
        if (qsqlquerymodel_clear_callback) {
            qsqlquerymodel_clear_callback(this);
            return;
        }
        QSqlQueryModel::clear();
    }

    // Virtual method for C ABI access and custom callback
    virtual void fetchMore(const QModelIndex& parent) override {
        if (qsqlquerymodel_fetchmore_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            qsqlquerymodel_fetchmore_callback(this, cbval1);
            return;
        }
        QSqlQueryModel::fetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canFetchMore(const QModelIndex& parent) const override {
        if (qsqlquerymodel_canfetchmore_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qsqlquerymodel_canfetchmore_callback(this, cbval1);
            return callback_ret;
        }
        return QSqlQueryModel::canFetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QHash<int, QByteArray> roleNames() const override {
        if (qsqlquerymodel_rolenames_callback) {
            libqt_map /* of int to libqt_string */ callback_ret = qsqlquerymodel_rolenames_callback(this);
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
        return QSqlQueryModel::roleNames();
    }

    // Virtual method for C ABI access and custom callback
    virtual void queryChange() override {
        if (qsqlquerymodel_querychange_callback) {
            qsqlquerymodel_querychange_callback(this);
            return;
        }
        QSqlQueryModel::queryChange();
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex indexInQuery(const QModelIndex& item) const override {
        if (qsqlquerymodel_indexinquery_callback) {
            const QModelIndex& item_ret = item;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&item_ret);
            QModelIndex* callback_ret = qsqlquerymodel_indexinquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QSqlQueryModel::indexInQuery(item);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
        if (qsqlquerymodel_index_callback) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            QModelIndex* callback_ret = qsqlquerymodel_index_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QSqlQueryModel::index(row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
        if (qsqlquerymodel_sibling_callback) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& idx_ret = idx;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&idx_ret);
            QModelIndex* callback_ret = qsqlquerymodel_sibling_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QSqlQueryModel::sibling(row, column, idx);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
        if (qsqlquerymodel_dropmimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qsqlquerymodel_dropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return QSqlQueryModel::dropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
        if (qsqlquerymodel_flags_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int callback_ret = qsqlquerymodel_flags_callback(this, cbval1);
            return static_cast<Qt::ItemFlags>(callback_ret);
        }
        return QSqlQueryModel::flags(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
        if (qsqlquerymodel_setdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            int cbval3 = role;
            bool callback_ret = qsqlquerymodel_setdata_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QSqlQueryModel::setData(index, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
        if (qsqlquerymodel_itemdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            libqt_map /* of int to QVariant* */ callback_ret = qsqlquerymodel_itemdata_callback(this, cbval1);
            QMap<int, QVariant> callback_ret_QMap;
            int* callback_ret_karr = static_cast<int*>(callback_ret.keys);
            QVariant** callback_ret_varr = static_cast<QVariant**>(callback_ret.values);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QMap.insert(static_cast<int>(callback_ret_karr[i]), *(callback_ret_varr[i]));
            }
            return callback_ret_QMap;
        }
        return QSqlQueryModel::itemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
        if (qsqlquerymodel_setitemdata_callback) {
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
            bool callback_ret = qsqlquerymodel_setitemdata_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QSqlQueryModel::setItemData(index, roles);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool clearItemData(const QModelIndex& index) override {
        if (qsqlquerymodel_clearitemdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            bool callback_ret = qsqlquerymodel_clearitemdata_callback(this, cbval1);
            return callback_ret;
        }
        return QSqlQueryModel::clearItemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> mimeTypes() const override {
        if (qsqlquerymodel_mimetypes_callback) {
            const char** callback_ret = qsqlquerymodel_mimetypes_callback(this);
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
        return QSqlQueryModel::mimeTypes();
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* mimeData(const QList<QModelIndex>& indexes) const override {
        if (qsqlquerymodel_mimedata_callback) {
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
            QMimeData* callback_ret = qsqlquerymodel_mimedata_callback(this, cbval1);
            free(indexes_arr);
            return callback_ret;
        }
        return QSqlQueryModel::mimeData(indexes);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
        if (qsqlquerymodel_candropmimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qsqlquerymodel_candropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return QSqlQueryModel::canDropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (qsqlquerymodel_supporteddropactions_callback) {
            int callback_ret = qsqlquerymodel_supporteddropactions_callback(this);
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return QSqlQueryModel::supportedDropActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDragActions() const override {
        if (qsqlquerymodel_supporteddragactions_callback) {
            int callback_ret = qsqlquerymodel_supporteddragactions_callback(this);
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return QSqlQueryModel::supportedDragActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
        if (qsqlquerymodel_insertrows_callback) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qsqlquerymodel_insertrows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QSqlQueryModel::insertRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
        if (qsqlquerymodel_removerows_callback) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qsqlquerymodel_removerows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QSqlQueryModel::removeRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (qsqlquerymodel_moverows_callback) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceRow;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;
            bool callback_ret = qsqlquerymodel_moverows_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return QSqlQueryModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (qsqlquerymodel_movecolumns_callback) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceColumn;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;
            bool callback_ret = qsqlquerymodel_movecolumns_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return QSqlQueryModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual void sort(int column, Qt::SortOrder order) override {
        if (qsqlquerymodel_sort_callback) {
            int cbval1 = column;
            int cbval2 = static_cast<int>(order);
            qsqlquerymodel_sort_callback(this, cbval1, cbval2);
            return;
        }
        QSqlQueryModel::sort(column, order);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex buddy(const QModelIndex& index) const override {
        if (qsqlquerymodel_buddy_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelIndex* callback_ret = qsqlquerymodel_buddy_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QSqlQueryModel::buddy(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
        if (qsqlquerymodel_match_callback) {
            const QModelIndex& start_ret = start;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&start_ret);
            int cbval2 = role;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = hits;
            int cbval5 = static_cast<int>(flags);
            libqt_list /* of QModelIndex* */ callback_ret = qsqlquerymodel_match_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            QList<QModelIndex> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QModelIndex** callback_ret_arr = static_cast<QModelIndex**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return QSqlQueryModel::match(start, role, value, hits, flags);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize span(const QModelIndex& index) const override {
        if (qsqlquerymodel_span_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QSize* callback_ret = qsqlquerymodel_span_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QSqlQueryModel::span(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
        if (qsqlquerymodel_multidata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelRoleDataSpan* cbval2 = new QModelRoleDataSpan(roleDataSpan);
            qsqlquerymodel_multidata_callback(this, cbval1, cbval2);
            return;
        }
        QSqlQueryModel::multiData(index, roleDataSpan);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool submit() override {
        if (qsqlquerymodel_submit_callback) {
            bool callback_ret = qsqlquerymodel_submit_callback(this);
            return callback_ret;
        }
        return QSqlQueryModel::submit();
    }

    // Virtual method for C ABI access and custom callback
    virtual void revert() override {
        if (qsqlquerymodel_revert_callback) {
            qsqlquerymodel_revert_callback(this);
            return;
        }
        QSqlQueryModel::revert();
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetInternalData() override {
        if (qsqlquerymodel_resetinternaldata_callback) {
            qsqlquerymodel_resetinternaldata_callback(this);
            return;
        }
        QSqlQueryModel::resetInternalData();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qsqlquerymodel_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qsqlquerymodel_event_callback(this, cbval1);
            return callback_ret;
        }
        return QSqlQueryModel::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qsqlquerymodel_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qsqlquerymodel_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QSqlQueryModel::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qsqlquerymodel_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qsqlquerymodel_timerevent_callback(this, cbval1);
            return;
        }
        QSqlQueryModel::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qsqlquerymodel_childevent_callback) {
            QChildEvent* cbval1 = event;
            qsqlquerymodel_childevent_callback(this, cbval1);
            return;
        }
        QSqlQueryModel::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qsqlquerymodel_customevent_callback) {
            QEvent* cbval1 = event;
            qsqlquerymodel_customevent_callback(this, cbval1);
            return;
        }
        QSqlQueryModel::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qsqlquerymodel_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qsqlquerymodel_connectnotify_callback(this, cbval1);
            return;
        }
        QSqlQueryModel::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qsqlquerymodel_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qsqlquerymodel_disconnectnotify_callback(this, cbval1);
            return;
        }
        QSqlQueryModel::disconnectNotify(signal);
    }

    // Friend functions
    friend void QSqlQueryModel_SuperQueryChange(QSqlQueryModel* self);
    friend QModelIndex* QSqlQueryModel_SuperIndexInQuery(const QSqlQueryModel* self, const QModelIndex* item);
    friend void QSqlQueryModel_SuperResetInternalData(QSqlQueryModel* self);
    friend void QSqlQueryModel_SuperTimerEvent(QSqlQueryModel* self, QTimerEvent* event);
    friend void QSqlQueryModel_SuperChildEvent(QSqlQueryModel* self, QChildEvent* event);
    friend void QSqlQueryModel_SuperCustomEvent(QSqlQueryModel* self, QEvent* event);
    friend void QSqlQueryModel_SuperConnectNotify(QSqlQueryModel* self, const QMetaMethod* signal);
    friend void QSqlQueryModel_SuperDisconnectNotify(QSqlQueryModel* self, const QMetaMethod* signal);
};

#endif
