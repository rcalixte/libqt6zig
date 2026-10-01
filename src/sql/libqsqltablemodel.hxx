#pragma once
#ifndef SQL_LIBQSQLTABLEMODEL_HXX
#define SQL_LIBQSQLTABLEMODEL_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QSqlTableModel
class VirtualQSqlTableModel final : public QSqlTableModel {
  public:
    // Virtual class public types (including callbacks and access types)
    using QSqlTableModel_MetaObject_Callback = QMetaObject* (*)(const QSqlTableModel*);
    using QSqlTableModel_Metacast_Callback = void* (*)(QSqlTableModel*, const char*);
    using QSqlTableModel_Metacall_Callback = int (*)(QSqlTableModel*, int, int, void**);
    using QSqlTableModel_SetTable_Callback = void (*)(QSqlTableModel*, const char*);
    using QSqlTableModel_Flags_Callback = int (*)(const QSqlTableModel*, QModelIndex*);
    using QSqlTableModel_Data_Callback = QVariant* (*)(const QSqlTableModel*, QModelIndex*, int);
    using QSqlTableModel_SetData_Callback = bool (*)(QSqlTableModel*, QModelIndex*, QVariant*, int);
    using QSqlTableModel_ClearItemData_Callback = bool (*)(QSqlTableModel*, QModelIndex*);
    using QSqlTableModel_HeaderData_Callback = QVariant* (*)(const QSqlTableModel*, int, int, int);
    using QSqlTableModel_Clear_Callback = void (*)(QSqlTableModel*);
    using QSqlTableModel_SetEditStrategy_Callback = void (*)(QSqlTableModel*, int);
    using QSqlTableModel_Sort_Callback = void (*)(QSqlTableModel*, int, int);
    using QSqlTableModel_SetSort_Callback = void (*)(QSqlTableModel*, int, int);
    using QSqlTableModel_SetFilter_Callback = void (*)(QSqlTableModel*, const char*);
    using QSqlTableModel_RowCount_Callback = int (*)(const QSqlTableModel*, QModelIndex*);
    using QSqlTableModel_RemoveColumns_Callback = bool (*)(QSqlTableModel*, int, int, QModelIndex*);
    using QSqlTableModel_RemoveRows_Callback = bool (*)(QSqlTableModel*, int, int, QModelIndex*);
    using QSqlTableModel_InsertRows_Callback = bool (*)(QSqlTableModel*, int, int, QModelIndex*);
    using QSqlTableModel_RevertRow_Callback = void (*)(QSqlTableModel*, int);
    using QSqlTableModel_Select_Callback = bool (*)(QSqlTableModel*);
    using QSqlTableModel_SelectRow_Callback = bool (*)(QSqlTableModel*, int);
    using QSqlTableModel_Submit_Callback = bool (*)(QSqlTableModel*);
    using QSqlTableModel_Revert_Callback = void (*)(QSqlTableModel*);
    using QSqlTableModel_UpdateRowInTable_Callback = bool (*)(QSqlTableModel*, int, QSqlRecord*);
    using QSqlTableModel_InsertRowIntoTable_Callback = bool (*)(QSqlTableModel*, QSqlRecord*);
    using QSqlTableModel_DeleteRowFromTable_Callback = bool (*)(QSqlTableModel*, int);
    using QSqlTableModel_OrderByClause_Callback = const char* (*)(const QSqlTableModel*);
    using QSqlTableModel_SelectStatement_Callback = const char* (*)(const QSqlTableModel*);
    using QSqlTableModel_IndexInQuery_Callback = QModelIndex* (*)(const QSqlTableModel*, QModelIndex*);
    using QSqlTableModel_ColumnCount_Callback = int (*)(const QSqlTableModel*, QModelIndex*);
    using QSqlTableModel_SetHeaderData_Callback = bool (*)(QSqlTableModel*, int, int, QVariant*, int);
    using QSqlTableModel_InsertColumns_Callback = bool (*)(QSqlTableModel*, int, int, QModelIndex*);
    using QSqlTableModel_FetchMore_Callback = void (*)(QSqlTableModel*, QModelIndex*);
    using QSqlTableModel_CanFetchMore_Callback = bool (*)(const QSqlTableModel*, QModelIndex*);
    using QSqlTableModel_RoleNames_Callback = libqt_map /* of int to libqt_string */ (*)(const QSqlTableModel*);
    using QSqlTableModel_QueryChange_Callback = void (*)(QSqlTableModel*);
    using QSqlTableModel_Index_Callback = QModelIndex* (*)(const QSqlTableModel*, int, int, QModelIndex*);
    using QSqlTableModel_Sibling_Callback = QModelIndex* (*)(const QSqlTableModel*, int, int, QModelIndex*);
    using QSqlTableModel_DropMimeData_Callback = bool (*)(QSqlTableModel*, QMimeData*, int, int, int, QModelIndex*);
    using QSqlTableModel_ItemData_Callback = libqt_map /* of int to QVariant* */ (*)(const QSqlTableModel*, QModelIndex*);
    using QSqlTableModel_SetItemData_Callback = bool (*)(QSqlTableModel*, QModelIndex*, libqt_map /* of int to QVariant* */);
    using QSqlTableModel_MimeTypes_Callback = const char** (*)(const QSqlTableModel*);
    using QSqlTableModel_MimeData_Callback = QMimeData* (*)(const QSqlTableModel*, libqt_list /* of QModelIndex* */);
    using QSqlTableModel_CanDropMimeData_Callback = bool (*)(const QSqlTableModel*, QMimeData*, int, int, int, QModelIndex*);
    using QSqlTableModel_SupportedDropActions_Callback = int (*)(const QSqlTableModel*);
    using QSqlTableModel_SupportedDragActions_Callback = int (*)(const QSqlTableModel*);
    using QSqlTableModel_MoveRows_Callback = bool (*)(QSqlTableModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QSqlTableModel_MoveColumns_Callback = bool (*)(QSqlTableModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QSqlTableModel_Buddy_Callback = QModelIndex* (*)(const QSqlTableModel*, QModelIndex*);
    using QSqlTableModel_Match_Callback = libqt_list /* of QModelIndex* */ (*)(const QSqlTableModel*, QModelIndex*, int, QVariant*, int, int);
    using QSqlTableModel_Span_Callback = QSize* (*)(const QSqlTableModel*, QModelIndex*);
    using QSqlTableModel_MultiData_Callback = void (*)(const QSqlTableModel*, QModelIndex*, QModelRoleDataSpan*);
    using QSqlTableModel_ResetInternalData_Callback = void (*)(QSqlTableModel*);
    using QSqlTableModel_Event_Callback = bool (*)(QSqlTableModel*, QEvent*);
    using QSqlTableModel_EventFilter_Callback = bool (*)(QSqlTableModel*, QObject*, QEvent*);
    using QSqlTableModel_TimerEvent_Callback = void (*)(QSqlTableModel*, QTimerEvent*);
    using QSqlTableModel_ChildEvent_Callback = void (*)(QSqlTableModel*, QChildEvent*);
    using QSqlTableModel_CustomEvent_Callback = void (*)(QSqlTableModel*, QEvent*);
    using QSqlTableModel_ConnectNotify_Callback = void (*)(QSqlTableModel*, QMetaMethod*);
    using QSqlTableModel_DisconnectNotify_Callback = void (*)(QSqlTableModel*, QMetaMethod*);
    using QSqlTableModel::beginInsertColumns;
    using QSqlTableModel::beginInsertRows;
    using QSqlTableModel::beginMoveColumns;
    using QSqlTableModel::beginMoveRows;
    using QSqlTableModel::beginRemoveColumns;
    using QSqlTableModel::beginRemoveRows;
    using QSqlTableModel::beginResetModel;
    using QSqlTableModel::changePersistentIndex;
    using QSqlTableModel::changePersistentIndexList;
    using QSqlTableModel::createIndex;
    using QSqlTableModel::decodeData;
    using QSqlTableModel::encodeData;
    using QSqlTableModel::endInsertColumns;
    using QSqlTableModel::endInsertRows;
    using QSqlTableModel::endMoveColumns;
    using QSqlTableModel::endMoveRows;
    using QSqlTableModel::endRemoveColumns;
    using QSqlTableModel::endRemoveRows;
    using QSqlTableModel::endResetModel;
    using QSqlTableModel::isSignalConnected;
    using QSqlTableModel::persistentIndexList;
    using QSqlTableModel::primaryValues;
    using QSqlTableModel::receivers;
    using QSqlTableModel::sender;
    using QSqlTableModel::senderSignalIndex;
    using QSqlTableModel::setLastError;
    using QSqlTableModel::setPrimaryKey;

    // Instance callback storage
    QSqlTableModel_MetaObject_Callback qsqltablemodel_metaobject_callback = nullptr;
    QSqlTableModel_Metacast_Callback qsqltablemodel_metacast_callback = nullptr;
    QSqlTableModel_Metacall_Callback qsqltablemodel_metacall_callback = nullptr;
    QSqlTableModel_SetTable_Callback qsqltablemodel_settable_callback = nullptr;
    QSqlTableModel_Flags_Callback qsqltablemodel_flags_callback = nullptr;
    QSqlTableModel_Data_Callback qsqltablemodel_data_callback = nullptr;
    QSqlTableModel_SetData_Callback qsqltablemodel_setdata_callback = nullptr;
    QSqlTableModel_ClearItemData_Callback qsqltablemodel_clearitemdata_callback = nullptr;
    QSqlTableModel_HeaderData_Callback qsqltablemodel_headerdata_callback = nullptr;
    QSqlTableModel_Clear_Callback qsqltablemodel_clear_callback = nullptr;
    QSqlTableModel_SetEditStrategy_Callback qsqltablemodel_seteditstrategy_callback = nullptr;
    QSqlTableModel_Sort_Callback qsqltablemodel_sort_callback = nullptr;
    QSqlTableModel_SetSort_Callback qsqltablemodel_setsort_callback = nullptr;
    QSqlTableModel_SetFilter_Callback qsqltablemodel_setfilter_callback = nullptr;
    QSqlTableModel_RowCount_Callback qsqltablemodel_rowcount_callback = nullptr;
    QSqlTableModel_RemoveColumns_Callback qsqltablemodel_removecolumns_callback = nullptr;
    QSqlTableModel_RemoveRows_Callback qsqltablemodel_removerows_callback = nullptr;
    QSqlTableModel_InsertRows_Callback qsqltablemodel_insertrows_callback = nullptr;
    QSqlTableModel_RevertRow_Callback qsqltablemodel_revertrow_callback = nullptr;
    QSqlTableModel_Select_Callback qsqltablemodel_select_callback = nullptr;
    QSqlTableModel_SelectRow_Callback qsqltablemodel_selectrow_callback = nullptr;
    QSqlTableModel_Submit_Callback qsqltablemodel_submit_callback = nullptr;
    QSqlTableModel_Revert_Callback qsqltablemodel_revert_callback = nullptr;
    QSqlTableModel_UpdateRowInTable_Callback qsqltablemodel_updaterowintable_callback = nullptr;
    QSqlTableModel_InsertRowIntoTable_Callback qsqltablemodel_insertrowintotable_callback = nullptr;
    QSqlTableModel_DeleteRowFromTable_Callback qsqltablemodel_deleterowfromtable_callback = nullptr;
    QSqlTableModel_OrderByClause_Callback qsqltablemodel_orderbyclause_callback = nullptr;
    QSqlTableModel_SelectStatement_Callback qsqltablemodel_selectstatement_callback = nullptr;
    QSqlTableModel_IndexInQuery_Callback qsqltablemodel_indexinquery_callback = nullptr;
    QSqlTableModel_ColumnCount_Callback qsqltablemodel_columncount_callback = nullptr;
    QSqlTableModel_SetHeaderData_Callback qsqltablemodel_setheaderdata_callback = nullptr;
    QSqlTableModel_InsertColumns_Callback qsqltablemodel_insertcolumns_callback = nullptr;
    QSqlTableModel_FetchMore_Callback qsqltablemodel_fetchmore_callback = nullptr;
    QSqlTableModel_CanFetchMore_Callback qsqltablemodel_canfetchmore_callback = nullptr;
    QSqlTableModel_RoleNames_Callback qsqltablemodel_rolenames_callback = nullptr;
    QSqlTableModel_QueryChange_Callback qsqltablemodel_querychange_callback = nullptr;
    QSqlTableModel_Index_Callback qsqltablemodel_index_callback = nullptr;
    QSqlTableModel_Sibling_Callback qsqltablemodel_sibling_callback = nullptr;
    QSqlTableModel_DropMimeData_Callback qsqltablemodel_dropmimedata_callback = nullptr;
    QSqlTableModel_ItemData_Callback qsqltablemodel_itemdata_callback = nullptr;
    QSqlTableModel_SetItemData_Callback qsqltablemodel_setitemdata_callback = nullptr;
    QSqlTableModel_MimeTypes_Callback qsqltablemodel_mimetypes_callback = nullptr;
    QSqlTableModel_MimeData_Callback qsqltablemodel_mimedata_callback = nullptr;
    QSqlTableModel_CanDropMimeData_Callback qsqltablemodel_candropmimedata_callback = nullptr;
    QSqlTableModel_SupportedDropActions_Callback qsqltablemodel_supporteddropactions_callback = nullptr;
    QSqlTableModel_SupportedDragActions_Callback qsqltablemodel_supporteddragactions_callback = nullptr;
    QSqlTableModel_MoveRows_Callback qsqltablemodel_moverows_callback = nullptr;
    QSqlTableModel_MoveColumns_Callback qsqltablemodel_movecolumns_callback = nullptr;
    QSqlTableModel_Buddy_Callback qsqltablemodel_buddy_callback = nullptr;
    QSqlTableModel_Match_Callback qsqltablemodel_match_callback = nullptr;
    QSqlTableModel_Span_Callback qsqltablemodel_span_callback = nullptr;
    QSqlTableModel_MultiData_Callback qsqltablemodel_multidata_callback = nullptr;
    QSqlTableModel_ResetInternalData_Callback qsqltablemodel_resetinternaldata_callback = nullptr;
    QSqlTableModel_Event_Callback qsqltablemodel_event_callback = nullptr;
    QSqlTableModel_EventFilter_Callback qsqltablemodel_eventfilter_callback = nullptr;
    QSqlTableModel_TimerEvent_Callback qsqltablemodel_timerevent_callback = nullptr;
    QSqlTableModel_ChildEvent_Callback qsqltablemodel_childevent_callback = nullptr;
    QSqlTableModel_CustomEvent_Callback qsqltablemodel_customevent_callback = nullptr;
    QSqlTableModel_ConnectNotify_Callback qsqltablemodel_connectnotify_callback = nullptr;
    QSqlTableModel_DisconnectNotify_Callback qsqltablemodel_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QSqlTableModel {
        using QSqlTableModel::childEvent;
        using QSqlTableModel::connectNotify;
        using QSqlTableModel::customEvent;
        using QSqlTableModel::deleteRowFromTable;
        using QSqlTableModel::disconnectNotify;
        using QSqlTableModel::indexInQuery;
        using QSqlTableModel::insertRowIntoTable;
        using QSqlTableModel::orderByClause;
        using QSqlTableModel::queryChange;
        using QSqlTableModel::resetInternalData;
        using QSqlTableModel::selectStatement;
        using QSqlTableModel::timerEvent;
        using QSqlTableModel::updateRowInTable;
    };

    VirtualQSqlTableModel() : QSqlTableModel() {};
    VirtualQSqlTableModel(QObject* parent) : QSqlTableModel(parent) {};
    VirtualQSqlTableModel(QObject* parent, const QSqlDatabase& db) : QSqlTableModel(parent, db) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qsqltablemodel_metaobject_callback) {
            QMetaObject* callback_ret = qsqltablemodel_metaobject_callback(this);
            return callback_ret;
        }
        return QSqlTableModel::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qsqltablemodel_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qsqltablemodel_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QSqlTableModel::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qsqltablemodel_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qsqltablemodel_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QSqlTableModel::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setTable(const QString& tableName) override {
        if (qsqltablemodel_settable_callback) {
            const auto tableName_ret = tableName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray tableName_b = tableName_ret.toUtf8();
            auto tableName_str_len = tableName_b.length();
            const char* tableName_str = static_cast<const char*>(malloc(tableName_str_len + 1));
            memcpy((void*)tableName_str, tableName_b.data(), tableName_str_len);
            ((char*)tableName_str)[tableName_str_len] = '\0';
            const char* cbval1 = tableName_str;
            qsqltablemodel_settable_callback(this, cbval1);
            libqt_free(tableName_str);
            return;
        }
        QSqlTableModel::setTable(tableName);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
        if (qsqltablemodel_flags_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int callback_ret = qsqltablemodel_flags_callback(this, cbval1);
            return static_cast<Qt::ItemFlags>(callback_ret);
        }
        return QSqlTableModel::flags(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(const QModelIndex& idx, int role) const override {
        if (qsqltablemodel_data_callback) {
            const QModelIndex& idx_ret = idx;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&idx_ret);
            int cbval2 = role;
            QVariant* callback_ret = qsqltablemodel_data_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QSqlTableModel::data(idx, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
        if (qsqltablemodel_setdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            int cbval3 = role;
            bool callback_ret = qsqltablemodel_setdata_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QSqlTableModel::setData(index, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool clearItemData(const QModelIndex& index) override {
        if (qsqltablemodel_clearitemdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            bool callback_ret = qsqltablemodel_clearitemdata_callback(this, cbval1);
            return callback_ret;
        }
        return QSqlTableModel::clearItemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
        if (qsqltablemodel_headerdata_callback) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            int cbval3 = role;
            QVariant* callback_ret = qsqltablemodel_headerdata_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QSqlTableModel::headerData(section, orientation, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual void clear() override {
        if (qsqltablemodel_clear_callback) {
            qsqltablemodel_clear_callback(this);
            return;
        }
        QSqlTableModel::clear();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditStrategy(QSqlTableModel::EditStrategy strategy) override {
        if (qsqltablemodel_seteditstrategy_callback) {
            int cbval1 = static_cast<int>(strategy);
            qsqltablemodel_seteditstrategy_callback(this, cbval1);
            return;
        }
        QSqlTableModel::setEditStrategy(strategy);
    }

    // Virtual method for C ABI access and custom callback
    virtual void sort(int column, Qt::SortOrder order) override {
        if (qsqltablemodel_sort_callback) {
            int cbval1 = column;
            int cbval2 = static_cast<int>(order);
            qsqltablemodel_sort_callback(this, cbval1, cbval2);
            return;
        }
        QSqlTableModel::sort(column, order);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSort(int column, Qt::SortOrder order) override {
        if (qsqltablemodel_setsort_callback) {
            int cbval1 = column;
            int cbval2 = static_cast<int>(order);
            qsqltablemodel_setsort_callback(this, cbval1, cbval2);
            return;
        }
        QSqlTableModel::setSort(column, order);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFilter(const QString& filter) override {
        if (qsqltablemodel_setfilter_callback) {
            const auto filter_ret = filter;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray filter_b = filter_ret.toUtf8();
            auto filter_str_len = filter_b.length();
            const char* filter_str = static_cast<const char*>(malloc(filter_str_len + 1));
            memcpy((void*)filter_str, filter_b.data(), filter_str_len);
            ((char*)filter_str)[filter_str_len] = '\0';
            const char* cbval1 = filter_str;
            qsqltablemodel_setfilter_callback(this, cbval1);
            libqt_free(filter_str);
            return;
        }
        QSqlTableModel::setFilter(filter);
    }

    // Virtual method for C ABI access and custom callback
    virtual int rowCount(const QModelIndex& parent) const override {
        if (qsqltablemodel_rowcount_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int callback_ret = qsqltablemodel_rowcount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QSqlTableModel::rowCount(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
        if (qsqltablemodel_removecolumns_callback) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qsqltablemodel_removecolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QSqlTableModel::removeColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
        if (qsqltablemodel_removerows_callback) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qsqltablemodel_removerows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QSqlTableModel::removeRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
        if (qsqltablemodel_insertrows_callback) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qsqltablemodel_insertrows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QSqlTableModel::insertRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void revertRow(int row) override {
        if (qsqltablemodel_revertrow_callback) {
            int cbval1 = row;
            qsqltablemodel_revertrow_callback(this, cbval1);
            return;
        }
        QSqlTableModel::revertRow(row);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool select() override {
        if (qsqltablemodel_select_callback) {
            bool callback_ret = qsqltablemodel_select_callback(this);
            return callback_ret;
        }
        return QSqlTableModel::select();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool selectRow(int row) override {
        if (qsqltablemodel_selectrow_callback) {
            int cbval1 = row;
            bool callback_ret = qsqltablemodel_selectrow_callback(this, cbval1);
            return callback_ret;
        }
        return QSqlTableModel::selectRow(row);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool submit() override {
        if (qsqltablemodel_submit_callback) {
            bool callback_ret = qsqltablemodel_submit_callback(this);
            return callback_ret;
        }
        return QSqlTableModel::submit();
    }

    // Virtual method for C ABI access and custom callback
    virtual void revert() override {
        if (qsqltablemodel_revert_callback) {
            qsqltablemodel_revert_callback(this);
            return;
        }
        QSqlTableModel::revert();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool updateRowInTable(int row, const QSqlRecord& values) override {
        if (qsqltablemodel_updaterowintable_callback) {
            int cbval1 = row;
            const QSqlRecord& values_ret = values;
            // Cast returned reference into pointer
            QSqlRecord* cbval2 = const_cast<QSqlRecord*>(&values_ret);
            bool callback_ret = qsqltablemodel_updaterowintable_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QSqlTableModel::updateRowInTable(row, values);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertRowIntoTable(const QSqlRecord& values) override {
        if (qsqltablemodel_insertrowintotable_callback) {
            const QSqlRecord& values_ret = values;
            // Cast returned reference into pointer
            QSqlRecord* cbval1 = const_cast<QSqlRecord*>(&values_ret);
            bool callback_ret = qsqltablemodel_insertrowintotable_callback(this, cbval1);
            return callback_ret;
        }
        return QSqlTableModel::insertRowIntoTable(values);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool deleteRowFromTable(int row) override {
        if (qsqltablemodel_deleterowfromtable_callback) {
            int cbval1 = row;
            bool callback_ret = qsqltablemodel_deleterowfromtable_callback(this, cbval1);
            return callback_ret;
        }
        return QSqlTableModel::deleteRowFromTable(row);
    }

    // Virtual method for C ABI access and custom callback
    virtual QString orderByClause() const override {
        if (qsqltablemodel_orderbyclause_callback) {
            const char* callback_ret = qsqltablemodel_orderbyclause_callback(this);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return QSqlTableModel::orderByClause();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString selectStatement() const override {
        if (qsqltablemodel_selectstatement_callback) {
            const char* callback_ret = qsqltablemodel_selectstatement_callback(this);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return QSqlTableModel::selectStatement();
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex indexInQuery(const QModelIndex& item) const override {
        if (qsqltablemodel_indexinquery_callback) {
            const QModelIndex& item_ret = item;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&item_ret);
            QModelIndex* callback_ret = qsqltablemodel_indexinquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QSqlTableModel::indexInQuery(item);
    }

    // Virtual method for C ABI access and custom callback
    virtual int columnCount(const QModelIndex& parent) const override {
        if (qsqltablemodel_columncount_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int callback_ret = qsqltablemodel_columncount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QSqlTableModel::columnCount(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
        if (qsqltablemodel_setheaderdata_callback) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = role;
            bool callback_ret = qsqltablemodel_setheaderdata_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        }
        return QSqlTableModel::setHeaderData(section, orientation, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
        if (qsqltablemodel_insertcolumns_callback) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qsqltablemodel_insertcolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QSqlTableModel::insertColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void fetchMore(const QModelIndex& parent) override {
        if (qsqltablemodel_fetchmore_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            qsqltablemodel_fetchmore_callback(this, cbval1);
            return;
        }
        QSqlTableModel::fetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canFetchMore(const QModelIndex& parent) const override {
        if (qsqltablemodel_canfetchmore_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qsqltablemodel_canfetchmore_callback(this, cbval1);
            return callback_ret;
        }
        return QSqlTableModel::canFetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QHash<int, QByteArray> roleNames() const override {
        if (qsqltablemodel_rolenames_callback) {
            libqt_map /* of int to libqt_string */ callback_ret = qsqltablemodel_rolenames_callback(this);
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
        return QSqlTableModel::roleNames();
    }

    // Virtual method for C ABI access and custom callback
    virtual void queryChange() override {
        if (qsqltablemodel_querychange_callback) {
            qsqltablemodel_querychange_callback(this);
            return;
        }
        QSqlTableModel::queryChange();
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
        if (qsqltablemodel_index_callback) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            QModelIndex* callback_ret = qsqltablemodel_index_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QSqlTableModel::index(row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
        if (qsqltablemodel_sibling_callback) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& idx_ret = idx;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&idx_ret);
            QModelIndex* callback_ret = qsqltablemodel_sibling_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QSqlTableModel::sibling(row, column, idx);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
        if (qsqltablemodel_dropmimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qsqltablemodel_dropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return QSqlTableModel::dropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
        if (qsqltablemodel_itemdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            libqt_map /* of int to QVariant* */ callback_ret = qsqltablemodel_itemdata_callback(this, cbval1);
            QMap<int, QVariant> callback_ret_QMap;
            int* callback_ret_karr = static_cast<int*>(callback_ret.keys);
            QVariant** callback_ret_varr = static_cast<QVariant**>(callback_ret.values);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QMap.insert(static_cast<int>(callback_ret_karr[i]), *(callback_ret_varr[i]));
            }
            return callback_ret_QMap;
        }
        return QSqlTableModel::itemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
        if (qsqltablemodel_setitemdata_callback) {
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
            bool callback_ret = qsqltablemodel_setitemdata_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QSqlTableModel::setItemData(index, roles);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> mimeTypes() const override {
        if (qsqltablemodel_mimetypes_callback) {
            const char** callback_ret = qsqltablemodel_mimetypes_callback(this);
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
        return QSqlTableModel::mimeTypes();
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* mimeData(const QList<QModelIndex>& indexes) const override {
        if (qsqltablemodel_mimedata_callback) {
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
            QMimeData* callback_ret = qsqltablemodel_mimedata_callback(this, cbval1);
            free(indexes_arr);
            return callback_ret;
        }
        return QSqlTableModel::mimeData(indexes);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
        if (qsqltablemodel_candropmimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qsqltablemodel_candropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return QSqlTableModel::canDropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (qsqltablemodel_supporteddropactions_callback) {
            int callback_ret = qsqltablemodel_supporteddropactions_callback(this);
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return QSqlTableModel::supportedDropActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDragActions() const override {
        if (qsqltablemodel_supporteddragactions_callback) {
            int callback_ret = qsqltablemodel_supporteddragactions_callback(this);
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return QSqlTableModel::supportedDragActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (qsqltablemodel_moverows_callback) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceRow;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;
            bool callback_ret = qsqltablemodel_moverows_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return QSqlTableModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (qsqltablemodel_movecolumns_callback) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceColumn;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;
            bool callback_ret = qsqltablemodel_movecolumns_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return QSqlTableModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex buddy(const QModelIndex& index) const override {
        if (qsqltablemodel_buddy_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelIndex* callback_ret = qsqltablemodel_buddy_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QSqlTableModel::buddy(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
        if (qsqltablemodel_match_callback) {
            const QModelIndex& start_ret = start;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&start_ret);
            int cbval2 = role;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = hits;
            int cbval5 = static_cast<int>(flags);
            libqt_list /* of QModelIndex* */ callback_ret = qsqltablemodel_match_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            QList<QModelIndex> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QModelIndex** callback_ret_arr = static_cast<QModelIndex**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return QSqlTableModel::match(start, role, value, hits, flags);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize span(const QModelIndex& index) const override {
        if (qsqltablemodel_span_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QSize* callback_ret = qsqltablemodel_span_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QSqlTableModel::span(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
        if (qsqltablemodel_multidata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelRoleDataSpan* cbval2 = new QModelRoleDataSpan(roleDataSpan);
            qsqltablemodel_multidata_callback(this, cbval1, cbval2);
            return;
        }
        QSqlTableModel::multiData(index, roleDataSpan);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetInternalData() override {
        if (qsqltablemodel_resetinternaldata_callback) {
            qsqltablemodel_resetinternaldata_callback(this);
            return;
        }
        QSqlTableModel::resetInternalData();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qsqltablemodel_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qsqltablemodel_event_callback(this, cbval1);
            return callback_ret;
        }
        return QSqlTableModel::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qsqltablemodel_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qsqltablemodel_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QSqlTableModel::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qsqltablemodel_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qsqltablemodel_timerevent_callback(this, cbval1);
            return;
        }
        QSqlTableModel::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qsqltablemodel_childevent_callback) {
            QChildEvent* cbval1 = event;
            qsqltablemodel_childevent_callback(this, cbval1);
            return;
        }
        QSqlTableModel::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qsqltablemodel_customevent_callback) {
            QEvent* cbval1 = event;
            qsqltablemodel_customevent_callback(this, cbval1);
            return;
        }
        QSqlTableModel::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qsqltablemodel_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qsqltablemodel_connectnotify_callback(this, cbval1);
            return;
        }
        QSqlTableModel::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qsqltablemodel_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qsqltablemodel_disconnectnotify_callback(this, cbval1);
            return;
        }
        QSqlTableModel::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QSqlTableModel_SuperUpdateRowInTable(QSqlTableModel* self, int row, const QSqlRecord* values);
    friend bool QSqlTableModel_SuperInsertRowIntoTable(QSqlTableModel* self, const QSqlRecord* values);
    friend bool QSqlTableModel_SuperDeleteRowFromTable(QSqlTableModel* self, int row);
    friend libqt_string QSqlTableModel_SuperOrderByClause(const QSqlTableModel* self);
    friend libqt_string QSqlTableModel_SuperSelectStatement(const QSqlTableModel* self);
    friend QModelIndex* QSqlTableModel_SuperIndexInQuery(const QSqlTableModel* self, const QModelIndex* item);
    friend void QSqlTableModel_SuperQueryChange(QSqlTableModel* self);
    friend void QSqlTableModel_SuperResetInternalData(QSqlTableModel* self);
    friend void QSqlTableModel_SuperTimerEvent(QSqlTableModel* self, QTimerEvent* event);
    friend void QSqlTableModel_SuperChildEvent(QSqlTableModel* self, QChildEvent* event);
    friend void QSqlTableModel_SuperCustomEvent(QSqlTableModel* self, QEvent* event);
    friend void QSqlTableModel_SuperConnectNotify(QSqlTableModel* self, const QMetaMethod* signal);
    friend void QSqlTableModel_SuperDisconnectNotify(QSqlTableModel* self, const QMetaMethod* signal);
};

#endif
