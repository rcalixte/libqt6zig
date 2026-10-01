#pragma once
#ifndef SQL_LIBQSQLRELATIONALTABLEMODEL_HXX
#define SQL_LIBQSQLRELATIONALTABLEMODEL_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QSqlRelationalTableModel
class VirtualQSqlRelationalTableModel final : public QSqlRelationalTableModel {
  public:
    // Virtual class public types (including callbacks and access types)
    using QSqlRelationalTableModel_MetaObject_Callback = QMetaObject* (*)(const QSqlRelationalTableModel*);
    using QSqlRelationalTableModel_Metacast_Callback = void* (*)(QSqlRelationalTableModel*, const char*);
    using QSqlRelationalTableModel_Metacall_Callback = int (*)(QSqlRelationalTableModel*, int, int, void**);
    using QSqlRelationalTableModel_Data_Callback = QVariant* (*)(const QSqlRelationalTableModel*, QModelIndex*, int);
    using QSqlRelationalTableModel_SetData_Callback = bool (*)(QSqlRelationalTableModel*, QModelIndex*, QVariant*, int);
    using QSqlRelationalTableModel_RemoveColumns_Callback = bool (*)(QSqlRelationalTableModel*, int, int, QModelIndex*);
    using QSqlRelationalTableModel_Clear_Callback = void (*)(QSqlRelationalTableModel*);
    using QSqlRelationalTableModel_Select_Callback = bool (*)(QSqlRelationalTableModel*);
    using QSqlRelationalTableModel_SetTable_Callback = void (*)(QSqlRelationalTableModel*, const char*);
    using QSqlRelationalTableModel_SetRelation_Callback = void (*)(QSqlRelationalTableModel*, int, QSqlRelation*);
    using QSqlRelationalTableModel_RelationModel_Callback = QSqlTableModel* (*)(const QSqlRelationalTableModel*, int);
    using QSqlRelationalTableModel_RevertRow_Callback = void (*)(QSqlRelationalTableModel*, int);
    using QSqlRelationalTableModel_SelectStatement_Callback = const char* (*)(const QSqlRelationalTableModel*);
    using QSqlRelationalTableModel_UpdateRowInTable_Callback = bool (*)(QSqlRelationalTableModel*, int, QSqlRecord*);
    using QSqlRelationalTableModel_InsertRowIntoTable_Callback = bool (*)(QSqlRelationalTableModel*, QSqlRecord*);
    using QSqlRelationalTableModel_OrderByClause_Callback = const char* (*)(const QSqlRelationalTableModel*);
    using QSqlRelationalTableModel_Flags_Callback = int (*)(const QSqlRelationalTableModel*, QModelIndex*);
    using QSqlRelationalTableModel_ClearItemData_Callback = bool (*)(QSqlRelationalTableModel*, QModelIndex*);
    using QSqlRelationalTableModel_HeaderData_Callback = QVariant* (*)(const QSqlRelationalTableModel*, int, int, int);
    using QSqlRelationalTableModel_SetEditStrategy_Callback = void (*)(QSqlRelationalTableModel*, int);
    using QSqlRelationalTableModel_Sort_Callback = void (*)(QSqlRelationalTableModel*, int, int);
    using QSqlRelationalTableModel_SetSort_Callback = void (*)(QSqlRelationalTableModel*, int, int);
    using QSqlRelationalTableModel_SetFilter_Callback = void (*)(QSqlRelationalTableModel*, const char*);
    using QSqlRelationalTableModel_RowCount_Callback = int (*)(const QSqlRelationalTableModel*, QModelIndex*);
    using QSqlRelationalTableModel_RemoveRows_Callback = bool (*)(QSqlRelationalTableModel*, int, int, QModelIndex*);
    using QSqlRelationalTableModel_InsertRows_Callback = bool (*)(QSqlRelationalTableModel*, int, int, QModelIndex*);
    using QSqlRelationalTableModel_SelectRow_Callback = bool (*)(QSqlRelationalTableModel*, int);
    using QSqlRelationalTableModel_Submit_Callback = bool (*)(QSqlRelationalTableModel*);
    using QSqlRelationalTableModel_Revert_Callback = void (*)(QSqlRelationalTableModel*);
    using QSqlRelationalTableModel_DeleteRowFromTable_Callback = bool (*)(QSqlRelationalTableModel*, int);
    using QSqlRelationalTableModel_IndexInQuery_Callback = QModelIndex* (*)(const QSqlRelationalTableModel*, QModelIndex*);
    using QSqlRelationalTableModel_ColumnCount_Callback = int (*)(const QSqlRelationalTableModel*, QModelIndex*);
    using QSqlRelationalTableModel_SetHeaderData_Callback = bool (*)(QSqlRelationalTableModel*, int, int, QVariant*, int);
    using QSqlRelationalTableModel_InsertColumns_Callback = bool (*)(QSqlRelationalTableModel*, int, int, QModelIndex*);
    using QSqlRelationalTableModel_FetchMore_Callback = void (*)(QSqlRelationalTableModel*, QModelIndex*);
    using QSqlRelationalTableModel_CanFetchMore_Callback = bool (*)(const QSqlRelationalTableModel*, QModelIndex*);
    using QSqlRelationalTableModel_RoleNames_Callback = libqt_map /* of int to libqt_string */ (*)(const QSqlRelationalTableModel*);
    using QSqlRelationalTableModel_QueryChange_Callback = void (*)(QSqlRelationalTableModel*);
    using QSqlRelationalTableModel_Index_Callback = QModelIndex* (*)(const QSqlRelationalTableModel*, int, int, QModelIndex*);
    using QSqlRelationalTableModel_Sibling_Callback = QModelIndex* (*)(const QSqlRelationalTableModel*, int, int, QModelIndex*);
    using QSqlRelationalTableModel_DropMimeData_Callback = bool (*)(QSqlRelationalTableModel*, QMimeData*, int, int, int, QModelIndex*);
    using QSqlRelationalTableModel_ItemData_Callback = libqt_map /* of int to QVariant* */ (*)(const QSqlRelationalTableModel*, QModelIndex*);
    using QSqlRelationalTableModel_SetItemData_Callback = bool (*)(QSqlRelationalTableModel*, QModelIndex*, libqt_map /* of int to QVariant* */);
    using QSqlRelationalTableModel_MimeTypes_Callback = const char** (*)(const QSqlRelationalTableModel*);
    using QSqlRelationalTableModel_MimeData_Callback = QMimeData* (*)(const QSqlRelationalTableModel*, libqt_list /* of QModelIndex* */);
    using QSqlRelationalTableModel_CanDropMimeData_Callback = bool (*)(const QSqlRelationalTableModel*, QMimeData*, int, int, int, QModelIndex*);
    using QSqlRelationalTableModel_SupportedDropActions_Callback = int (*)(const QSqlRelationalTableModel*);
    using QSqlRelationalTableModel_SupportedDragActions_Callback = int (*)(const QSqlRelationalTableModel*);
    using QSqlRelationalTableModel_MoveRows_Callback = bool (*)(QSqlRelationalTableModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QSqlRelationalTableModel_MoveColumns_Callback = bool (*)(QSqlRelationalTableModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QSqlRelationalTableModel_Buddy_Callback = QModelIndex* (*)(const QSqlRelationalTableModel*, QModelIndex*);
    using QSqlRelationalTableModel_Match_Callback = libqt_list /* of QModelIndex* */ (*)(const QSqlRelationalTableModel*, QModelIndex*, int, QVariant*, int, int);
    using QSqlRelationalTableModel_Span_Callback = QSize* (*)(const QSqlRelationalTableModel*, QModelIndex*);
    using QSqlRelationalTableModel_MultiData_Callback = void (*)(const QSqlRelationalTableModel*, QModelIndex*, QModelRoleDataSpan*);
    using QSqlRelationalTableModel_ResetInternalData_Callback = void (*)(QSqlRelationalTableModel*);
    using QSqlRelationalTableModel_Event_Callback = bool (*)(QSqlRelationalTableModel*, QEvent*);
    using QSqlRelationalTableModel_EventFilter_Callback = bool (*)(QSqlRelationalTableModel*, QObject*, QEvent*);
    using QSqlRelationalTableModel_TimerEvent_Callback = void (*)(QSqlRelationalTableModel*, QTimerEvent*);
    using QSqlRelationalTableModel_ChildEvent_Callback = void (*)(QSqlRelationalTableModel*, QChildEvent*);
    using QSqlRelationalTableModel_CustomEvent_Callback = void (*)(QSqlRelationalTableModel*, QEvent*);
    using QSqlRelationalTableModel_ConnectNotify_Callback = void (*)(QSqlRelationalTableModel*, QMetaMethod*);
    using QSqlRelationalTableModel_DisconnectNotify_Callback = void (*)(QSqlRelationalTableModel*, QMetaMethod*);
    using QSqlRelationalTableModel::beginInsertColumns;
    using QSqlRelationalTableModel::beginInsertRows;
    using QSqlRelationalTableModel::beginMoveColumns;
    using QSqlRelationalTableModel::beginMoveRows;
    using QSqlRelationalTableModel::beginRemoveColumns;
    using QSqlRelationalTableModel::beginRemoveRows;
    using QSqlRelationalTableModel::beginResetModel;
    using QSqlRelationalTableModel::changePersistentIndex;
    using QSqlRelationalTableModel::changePersistentIndexList;
    using QSqlRelationalTableModel::createIndex;
    using QSqlRelationalTableModel::decodeData;
    using QSqlRelationalTableModel::encodeData;
    using QSqlRelationalTableModel::endInsertColumns;
    using QSqlRelationalTableModel::endInsertRows;
    using QSqlRelationalTableModel::endMoveColumns;
    using QSqlRelationalTableModel::endMoveRows;
    using QSqlRelationalTableModel::endRemoveColumns;
    using QSqlRelationalTableModel::endRemoveRows;
    using QSqlRelationalTableModel::endResetModel;
    using QSqlRelationalTableModel::isSignalConnected;
    using QSqlRelationalTableModel::persistentIndexList;
    using QSqlRelationalTableModel::primaryValues;
    using QSqlRelationalTableModel::receivers;
    using QSqlRelationalTableModel::sender;
    using QSqlRelationalTableModel::senderSignalIndex;
    using QSqlRelationalTableModel::setLastError;
    using QSqlRelationalTableModel::setPrimaryKey;

    // Instance callback storage
    QSqlRelationalTableModel_MetaObject_Callback qsqlrelationaltablemodel_metaobject_callback = nullptr;
    QSqlRelationalTableModel_Metacast_Callback qsqlrelationaltablemodel_metacast_callback = nullptr;
    QSqlRelationalTableModel_Metacall_Callback qsqlrelationaltablemodel_metacall_callback = nullptr;
    QSqlRelationalTableModel_Data_Callback qsqlrelationaltablemodel_data_callback = nullptr;
    QSqlRelationalTableModel_SetData_Callback qsqlrelationaltablemodel_setdata_callback = nullptr;
    QSqlRelationalTableModel_RemoveColumns_Callback qsqlrelationaltablemodel_removecolumns_callback = nullptr;
    QSqlRelationalTableModel_Clear_Callback qsqlrelationaltablemodel_clear_callback = nullptr;
    QSqlRelationalTableModel_Select_Callback qsqlrelationaltablemodel_select_callback = nullptr;
    QSqlRelationalTableModel_SetTable_Callback qsqlrelationaltablemodel_settable_callback = nullptr;
    QSqlRelationalTableModel_SetRelation_Callback qsqlrelationaltablemodel_setrelation_callback = nullptr;
    QSqlRelationalTableModel_RelationModel_Callback qsqlrelationaltablemodel_relationmodel_callback = nullptr;
    QSqlRelationalTableModel_RevertRow_Callback qsqlrelationaltablemodel_revertrow_callback = nullptr;
    QSqlRelationalTableModel_SelectStatement_Callback qsqlrelationaltablemodel_selectstatement_callback = nullptr;
    QSqlRelationalTableModel_UpdateRowInTable_Callback qsqlrelationaltablemodel_updaterowintable_callback = nullptr;
    QSqlRelationalTableModel_InsertRowIntoTable_Callback qsqlrelationaltablemodel_insertrowintotable_callback = nullptr;
    QSqlRelationalTableModel_OrderByClause_Callback qsqlrelationaltablemodel_orderbyclause_callback = nullptr;
    QSqlRelationalTableModel_Flags_Callback qsqlrelationaltablemodel_flags_callback = nullptr;
    QSqlRelationalTableModel_ClearItemData_Callback qsqlrelationaltablemodel_clearitemdata_callback = nullptr;
    QSqlRelationalTableModel_HeaderData_Callback qsqlrelationaltablemodel_headerdata_callback = nullptr;
    QSqlRelationalTableModel_SetEditStrategy_Callback qsqlrelationaltablemodel_seteditstrategy_callback = nullptr;
    QSqlRelationalTableModel_Sort_Callback qsqlrelationaltablemodel_sort_callback = nullptr;
    QSqlRelationalTableModel_SetSort_Callback qsqlrelationaltablemodel_setsort_callback = nullptr;
    QSqlRelationalTableModel_SetFilter_Callback qsqlrelationaltablemodel_setfilter_callback = nullptr;
    QSqlRelationalTableModel_RowCount_Callback qsqlrelationaltablemodel_rowcount_callback = nullptr;
    QSqlRelationalTableModel_RemoveRows_Callback qsqlrelationaltablemodel_removerows_callback = nullptr;
    QSqlRelationalTableModel_InsertRows_Callback qsqlrelationaltablemodel_insertrows_callback = nullptr;
    QSqlRelationalTableModel_SelectRow_Callback qsqlrelationaltablemodel_selectrow_callback = nullptr;
    QSqlRelationalTableModel_Submit_Callback qsqlrelationaltablemodel_submit_callback = nullptr;
    QSqlRelationalTableModel_Revert_Callback qsqlrelationaltablemodel_revert_callback = nullptr;
    QSqlRelationalTableModel_DeleteRowFromTable_Callback qsqlrelationaltablemodel_deleterowfromtable_callback = nullptr;
    QSqlRelationalTableModel_IndexInQuery_Callback qsqlrelationaltablemodel_indexinquery_callback = nullptr;
    QSqlRelationalTableModel_ColumnCount_Callback qsqlrelationaltablemodel_columncount_callback = nullptr;
    QSqlRelationalTableModel_SetHeaderData_Callback qsqlrelationaltablemodel_setheaderdata_callback = nullptr;
    QSqlRelationalTableModel_InsertColumns_Callback qsqlrelationaltablemodel_insertcolumns_callback = nullptr;
    QSqlRelationalTableModel_FetchMore_Callback qsqlrelationaltablemodel_fetchmore_callback = nullptr;
    QSqlRelationalTableModel_CanFetchMore_Callback qsqlrelationaltablemodel_canfetchmore_callback = nullptr;
    QSqlRelationalTableModel_RoleNames_Callback qsqlrelationaltablemodel_rolenames_callback = nullptr;
    QSqlRelationalTableModel_QueryChange_Callback qsqlrelationaltablemodel_querychange_callback = nullptr;
    QSqlRelationalTableModel_Index_Callback qsqlrelationaltablemodel_index_callback = nullptr;
    QSqlRelationalTableModel_Sibling_Callback qsqlrelationaltablemodel_sibling_callback = nullptr;
    QSqlRelationalTableModel_DropMimeData_Callback qsqlrelationaltablemodel_dropmimedata_callback = nullptr;
    QSqlRelationalTableModel_ItemData_Callback qsqlrelationaltablemodel_itemdata_callback = nullptr;
    QSqlRelationalTableModel_SetItemData_Callback qsqlrelationaltablemodel_setitemdata_callback = nullptr;
    QSqlRelationalTableModel_MimeTypes_Callback qsqlrelationaltablemodel_mimetypes_callback = nullptr;
    QSqlRelationalTableModel_MimeData_Callback qsqlrelationaltablemodel_mimedata_callback = nullptr;
    QSqlRelationalTableModel_CanDropMimeData_Callback qsqlrelationaltablemodel_candropmimedata_callback = nullptr;
    QSqlRelationalTableModel_SupportedDropActions_Callback qsqlrelationaltablemodel_supporteddropactions_callback = nullptr;
    QSqlRelationalTableModel_SupportedDragActions_Callback qsqlrelationaltablemodel_supporteddragactions_callback = nullptr;
    QSqlRelationalTableModel_MoveRows_Callback qsqlrelationaltablemodel_moverows_callback = nullptr;
    QSqlRelationalTableModel_MoveColumns_Callback qsqlrelationaltablemodel_movecolumns_callback = nullptr;
    QSqlRelationalTableModel_Buddy_Callback qsqlrelationaltablemodel_buddy_callback = nullptr;
    QSqlRelationalTableModel_Match_Callback qsqlrelationaltablemodel_match_callback = nullptr;
    QSqlRelationalTableModel_Span_Callback qsqlrelationaltablemodel_span_callback = nullptr;
    QSqlRelationalTableModel_MultiData_Callback qsqlrelationaltablemodel_multidata_callback = nullptr;
    QSqlRelationalTableModel_ResetInternalData_Callback qsqlrelationaltablemodel_resetinternaldata_callback = nullptr;
    QSqlRelationalTableModel_Event_Callback qsqlrelationaltablemodel_event_callback = nullptr;
    QSqlRelationalTableModel_EventFilter_Callback qsqlrelationaltablemodel_eventfilter_callback = nullptr;
    QSqlRelationalTableModel_TimerEvent_Callback qsqlrelationaltablemodel_timerevent_callback = nullptr;
    QSqlRelationalTableModel_ChildEvent_Callback qsqlrelationaltablemodel_childevent_callback = nullptr;
    QSqlRelationalTableModel_CustomEvent_Callback qsqlrelationaltablemodel_customevent_callback = nullptr;
    QSqlRelationalTableModel_ConnectNotify_Callback qsqlrelationaltablemodel_connectnotify_callback = nullptr;
    QSqlRelationalTableModel_DisconnectNotify_Callback qsqlrelationaltablemodel_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QSqlRelationalTableModel {
        using QSqlRelationalTableModel::childEvent;
        using QSqlRelationalTableModel::connectNotify;
        using QSqlRelationalTableModel::customEvent;
        using QSqlRelationalTableModel::deleteRowFromTable;
        using QSqlRelationalTableModel::disconnectNotify;
        using QSqlRelationalTableModel::indexInQuery;
        using QSqlRelationalTableModel::insertRowIntoTable;
        using QSqlRelationalTableModel::orderByClause;
        using QSqlRelationalTableModel::queryChange;
        using QSqlRelationalTableModel::resetInternalData;
        using QSqlRelationalTableModel::selectStatement;
        using QSqlRelationalTableModel::timerEvent;
        using QSqlRelationalTableModel::updateRowInTable;
    };

    VirtualQSqlRelationalTableModel() : QSqlRelationalTableModel() {};
    VirtualQSqlRelationalTableModel(QObject* parent) : QSqlRelationalTableModel(parent) {};
    VirtualQSqlRelationalTableModel(QObject* parent, const QSqlDatabase& db) : QSqlRelationalTableModel(parent, db) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qsqlrelationaltablemodel_metaobject_callback) {
            QMetaObject* callback_ret = qsqlrelationaltablemodel_metaobject_callback(this);
            return callback_ret;
        }
        return QSqlRelationalTableModel::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qsqlrelationaltablemodel_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qsqlrelationaltablemodel_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QSqlRelationalTableModel::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qsqlrelationaltablemodel_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qsqlrelationaltablemodel_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QSqlRelationalTableModel::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(const QModelIndex& item, int role) const override {
        if (qsqlrelationaltablemodel_data_callback) {
            const QModelIndex& item_ret = item;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&item_ret);
            int cbval2 = role;
            QVariant* callback_ret = qsqlrelationaltablemodel_data_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QSqlRelationalTableModel::data(item, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setData(const QModelIndex& item, const QVariant& value, int role) override {
        if (qsqlrelationaltablemodel_setdata_callback) {
            const QModelIndex& item_ret = item;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&item_ret);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            int cbval3 = role;
            bool callback_ret = qsqlrelationaltablemodel_setdata_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QSqlRelationalTableModel::setData(item, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
        if (qsqlrelationaltablemodel_removecolumns_callback) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qsqlrelationaltablemodel_removecolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QSqlRelationalTableModel::removeColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void clear() override {
        if (qsqlrelationaltablemodel_clear_callback) {
            qsqlrelationaltablemodel_clear_callback(this);
            return;
        }
        QSqlRelationalTableModel::clear();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool select() override {
        if (qsqlrelationaltablemodel_select_callback) {
            bool callback_ret = qsqlrelationaltablemodel_select_callback(this);
            return callback_ret;
        }
        return QSqlRelationalTableModel::select();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setTable(const QString& tableName) override {
        if (qsqlrelationaltablemodel_settable_callback) {
            const auto tableName_ret = tableName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray tableName_b = tableName_ret.toUtf8();
            auto tableName_str_len = tableName_b.length();
            const char* tableName_str = static_cast<const char*>(malloc(tableName_str_len + 1));
            memcpy((void*)tableName_str, tableName_b.data(), tableName_str_len);
            ((char*)tableName_str)[tableName_str_len] = '\0';
            const char* cbval1 = tableName_str;
            qsqlrelationaltablemodel_settable_callback(this, cbval1);
            libqt_free(tableName_str);
            return;
        }
        QSqlRelationalTableModel::setTable(tableName);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setRelation(int column, const QSqlRelation& relation) override {
        if (qsqlrelationaltablemodel_setrelation_callback) {
            int cbval1 = column;
            const QSqlRelation& relation_ret = relation;
            // Cast returned reference into pointer
            QSqlRelation* cbval2 = const_cast<QSqlRelation*>(&relation_ret);
            qsqlrelationaltablemodel_setrelation_callback(this, cbval1, cbval2);
            return;
        }
        QSqlRelationalTableModel::setRelation(column, relation);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSqlTableModel* relationModel(int column) const override {
        if (qsqlrelationaltablemodel_relationmodel_callback) {
            int cbval1 = column;
            QSqlTableModel* callback_ret = qsqlrelationaltablemodel_relationmodel_callback(this, cbval1);
            return callback_ret;
        }
        return QSqlRelationalTableModel::relationModel(column);
    }

    // Virtual method for C ABI access and custom callback
    virtual void revertRow(int row) override {
        if (qsqlrelationaltablemodel_revertrow_callback) {
            int cbval1 = row;
            qsqlrelationaltablemodel_revertrow_callback(this, cbval1);
            return;
        }
        QSqlRelationalTableModel::revertRow(row);
    }

    // Virtual method for C ABI access and custom callback
    virtual QString selectStatement() const override {
        if (qsqlrelationaltablemodel_selectstatement_callback) {
            const char* callback_ret = qsqlrelationaltablemodel_selectstatement_callback(this);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return QSqlRelationalTableModel::selectStatement();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool updateRowInTable(int row, const QSqlRecord& values) override {
        if (qsqlrelationaltablemodel_updaterowintable_callback) {
            int cbval1 = row;
            const QSqlRecord& values_ret = values;
            // Cast returned reference into pointer
            QSqlRecord* cbval2 = const_cast<QSqlRecord*>(&values_ret);
            bool callback_ret = qsqlrelationaltablemodel_updaterowintable_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QSqlRelationalTableModel::updateRowInTable(row, values);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertRowIntoTable(const QSqlRecord& values) override {
        if (qsqlrelationaltablemodel_insertrowintotable_callback) {
            const QSqlRecord& values_ret = values;
            // Cast returned reference into pointer
            QSqlRecord* cbval1 = const_cast<QSqlRecord*>(&values_ret);
            bool callback_ret = qsqlrelationaltablemodel_insertrowintotable_callback(this, cbval1);
            return callback_ret;
        }
        return QSqlRelationalTableModel::insertRowIntoTable(values);
    }

    // Virtual method for C ABI access and custom callback
    virtual QString orderByClause() const override {
        if (qsqlrelationaltablemodel_orderbyclause_callback) {
            const char* callback_ret = qsqlrelationaltablemodel_orderbyclause_callback(this);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return QSqlRelationalTableModel::orderByClause();
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
        if (qsqlrelationaltablemodel_flags_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int callback_ret = qsqlrelationaltablemodel_flags_callback(this, cbval1);
            return static_cast<Qt::ItemFlags>(callback_ret);
        }
        return QSqlRelationalTableModel::flags(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool clearItemData(const QModelIndex& index) override {
        if (qsqlrelationaltablemodel_clearitemdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            bool callback_ret = qsqlrelationaltablemodel_clearitemdata_callback(this, cbval1);
            return callback_ret;
        }
        return QSqlRelationalTableModel::clearItemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
        if (qsqlrelationaltablemodel_headerdata_callback) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            int cbval3 = role;
            QVariant* callback_ret = qsqlrelationaltablemodel_headerdata_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QSqlRelationalTableModel::headerData(section, orientation, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditStrategy(QSqlTableModel::EditStrategy strategy) override {
        if (qsqlrelationaltablemodel_seteditstrategy_callback) {
            int cbval1 = static_cast<int>(strategy);
            qsqlrelationaltablemodel_seteditstrategy_callback(this, cbval1);
            return;
        }
        QSqlRelationalTableModel::setEditStrategy(strategy);
    }

    // Virtual method for C ABI access and custom callback
    virtual void sort(int column, Qt::SortOrder order) override {
        if (qsqlrelationaltablemodel_sort_callback) {
            int cbval1 = column;
            int cbval2 = static_cast<int>(order);
            qsqlrelationaltablemodel_sort_callback(this, cbval1, cbval2);
            return;
        }
        QSqlRelationalTableModel::sort(column, order);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSort(int column, Qt::SortOrder order) override {
        if (qsqlrelationaltablemodel_setsort_callback) {
            int cbval1 = column;
            int cbval2 = static_cast<int>(order);
            qsqlrelationaltablemodel_setsort_callback(this, cbval1, cbval2);
            return;
        }
        QSqlRelationalTableModel::setSort(column, order);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFilter(const QString& filter) override {
        if (qsqlrelationaltablemodel_setfilter_callback) {
            const auto filter_ret = filter;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray filter_b = filter_ret.toUtf8();
            auto filter_str_len = filter_b.length();
            const char* filter_str = static_cast<const char*>(malloc(filter_str_len + 1));
            memcpy((void*)filter_str, filter_b.data(), filter_str_len);
            ((char*)filter_str)[filter_str_len] = '\0';
            const char* cbval1 = filter_str;
            qsqlrelationaltablemodel_setfilter_callback(this, cbval1);
            libqt_free(filter_str);
            return;
        }
        QSqlRelationalTableModel::setFilter(filter);
    }

    // Virtual method for C ABI access and custom callback
    virtual int rowCount(const QModelIndex& parent) const override {
        if (qsqlrelationaltablemodel_rowcount_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int callback_ret = qsqlrelationaltablemodel_rowcount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QSqlRelationalTableModel::rowCount(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
        if (qsqlrelationaltablemodel_removerows_callback) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qsqlrelationaltablemodel_removerows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QSqlRelationalTableModel::removeRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
        if (qsqlrelationaltablemodel_insertrows_callback) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qsqlrelationaltablemodel_insertrows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QSqlRelationalTableModel::insertRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool selectRow(int row) override {
        if (qsqlrelationaltablemodel_selectrow_callback) {
            int cbval1 = row;
            bool callback_ret = qsqlrelationaltablemodel_selectrow_callback(this, cbval1);
            return callback_ret;
        }
        return QSqlRelationalTableModel::selectRow(row);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool submit() override {
        if (qsqlrelationaltablemodel_submit_callback) {
            bool callback_ret = qsqlrelationaltablemodel_submit_callback(this);
            return callback_ret;
        }
        return QSqlRelationalTableModel::submit();
    }

    // Virtual method for C ABI access and custom callback
    virtual void revert() override {
        if (qsqlrelationaltablemodel_revert_callback) {
            qsqlrelationaltablemodel_revert_callback(this);
            return;
        }
        QSqlRelationalTableModel::revert();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool deleteRowFromTable(int row) override {
        if (qsqlrelationaltablemodel_deleterowfromtable_callback) {
            int cbval1 = row;
            bool callback_ret = qsqlrelationaltablemodel_deleterowfromtable_callback(this, cbval1);
            return callback_ret;
        }
        return QSqlRelationalTableModel::deleteRowFromTable(row);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex indexInQuery(const QModelIndex& item) const override {
        if (qsqlrelationaltablemodel_indexinquery_callback) {
            const QModelIndex& item_ret = item;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&item_ret);
            QModelIndex* callback_ret = qsqlrelationaltablemodel_indexinquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QSqlRelationalTableModel::indexInQuery(item);
    }

    // Virtual method for C ABI access and custom callback
    virtual int columnCount(const QModelIndex& parent) const override {
        if (qsqlrelationaltablemodel_columncount_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int callback_ret = qsqlrelationaltablemodel_columncount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QSqlRelationalTableModel::columnCount(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
        if (qsqlrelationaltablemodel_setheaderdata_callback) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = role;
            bool callback_ret = qsqlrelationaltablemodel_setheaderdata_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        }
        return QSqlRelationalTableModel::setHeaderData(section, orientation, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
        if (qsqlrelationaltablemodel_insertcolumns_callback) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qsqlrelationaltablemodel_insertcolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QSqlRelationalTableModel::insertColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void fetchMore(const QModelIndex& parent) override {
        if (qsqlrelationaltablemodel_fetchmore_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            qsqlrelationaltablemodel_fetchmore_callback(this, cbval1);
            return;
        }
        QSqlRelationalTableModel::fetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canFetchMore(const QModelIndex& parent) const override {
        if (qsqlrelationaltablemodel_canfetchmore_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qsqlrelationaltablemodel_canfetchmore_callback(this, cbval1);
            return callback_ret;
        }
        return QSqlRelationalTableModel::canFetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QHash<int, QByteArray> roleNames() const override {
        if (qsqlrelationaltablemodel_rolenames_callback) {
            libqt_map /* of int to libqt_string */ callback_ret = qsqlrelationaltablemodel_rolenames_callback(this);
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
        return QSqlRelationalTableModel::roleNames();
    }

    // Virtual method for C ABI access and custom callback
    virtual void queryChange() override {
        if (qsqlrelationaltablemodel_querychange_callback) {
            qsqlrelationaltablemodel_querychange_callback(this);
            return;
        }
        QSqlRelationalTableModel::queryChange();
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
        if (qsqlrelationaltablemodel_index_callback) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            QModelIndex* callback_ret = qsqlrelationaltablemodel_index_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QSqlRelationalTableModel::index(row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
        if (qsqlrelationaltablemodel_sibling_callback) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& idx_ret = idx;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&idx_ret);
            QModelIndex* callback_ret = qsqlrelationaltablemodel_sibling_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QSqlRelationalTableModel::sibling(row, column, idx);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
        if (qsqlrelationaltablemodel_dropmimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qsqlrelationaltablemodel_dropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return QSqlRelationalTableModel::dropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
        if (qsqlrelationaltablemodel_itemdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            libqt_map /* of int to QVariant* */ callback_ret = qsqlrelationaltablemodel_itemdata_callback(this, cbval1);
            QMap<int, QVariant> callback_ret_QMap;
            int* callback_ret_karr = static_cast<int*>(callback_ret.keys);
            QVariant** callback_ret_varr = static_cast<QVariant**>(callback_ret.values);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QMap.insert(static_cast<int>(callback_ret_karr[i]), *(callback_ret_varr[i]));
            }
            return callback_ret_QMap;
        }
        return QSqlRelationalTableModel::itemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
        if (qsqlrelationaltablemodel_setitemdata_callback) {
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
            bool callback_ret = qsqlrelationaltablemodel_setitemdata_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QSqlRelationalTableModel::setItemData(index, roles);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> mimeTypes() const override {
        if (qsqlrelationaltablemodel_mimetypes_callback) {
            const char** callback_ret = qsqlrelationaltablemodel_mimetypes_callback(this);
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
        return QSqlRelationalTableModel::mimeTypes();
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* mimeData(const QList<QModelIndex>& indexes) const override {
        if (qsqlrelationaltablemodel_mimedata_callback) {
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
            QMimeData* callback_ret = qsqlrelationaltablemodel_mimedata_callback(this, cbval1);
            free(indexes_arr);
            return callback_ret;
        }
        return QSqlRelationalTableModel::mimeData(indexes);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
        if (qsqlrelationaltablemodel_candropmimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qsqlrelationaltablemodel_candropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return QSqlRelationalTableModel::canDropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (qsqlrelationaltablemodel_supporteddropactions_callback) {
            int callback_ret = qsqlrelationaltablemodel_supporteddropactions_callback(this);
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return QSqlRelationalTableModel::supportedDropActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDragActions() const override {
        if (qsqlrelationaltablemodel_supporteddragactions_callback) {
            int callback_ret = qsqlrelationaltablemodel_supporteddragactions_callback(this);
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return QSqlRelationalTableModel::supportedDragActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (qsqlrelationaltablemodel_moverows_callback) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceRow;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;
            bool callback_ret = qsqlrelationaltablemodel_moverows_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return QSqlRelationalTableModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (qsqlrelationaltablemodel_movecolumns_callback) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceColumn;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;
            bool callback_ret = qsqlrelationaltablemodel_movecolumns_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return QSqlRelationalTableModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex buddy(const QModelIndex& index) const override {
        if (qsqlrelationaltablemodel_buddy_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelIndex* callback_ret = qsqlrelationaltablemodel_buddy_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QSqlRelationalTableModel::buddy(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
        if (qsqlrelationaltablemodel_match_callback) {
            const QModelIndex& start_ret = start;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&start_ret);
            int cbval2 = role;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = hits;
            int cbval5 = static_cast<int>(flags);
            libqt_list /* of QModelIndex* */ callback_ret = qsqlrelationaltablemodel_match_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            QList<QModelIndex> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QModelIndex** callback_ret_arr = static_cast<QModelIndex**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return QSqlRelationalTableModel::match(start, role, value, hits, flags);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize span(const QModelIndex& index) const override {
        if (qsqlrelationaltablemodel_span_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QSize* callback_ret = qsqlrelationaltablemodel_span_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QSqlRelationalTableModel::span(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
        if (qsqlrelationaltablemodel_multidata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelRoleDataSpan* cbval2 = new QModelRoleDataSpan(roleDataSpan);
            qsqlrelationaltablemodel_multidata_callback(this, cbval1, cbval2);
            return;
        }
        QSqlRelationalTableModel::multiData(index, roleDataSpan);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetInternalData() override {
        if (qsqlrelationaltablemodel_resetinternaldata_callback) {
            qsqlrelationaltablemodel_resetinternaldata_callback(this);
            return;
        }
        QSqlRelationalTableModel::resetInternalData();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qsqlrelationaltablemodel_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qsqlrelationaltablemodel_event_callback(this, cbval1);
            return callback_ret;
        }
        return QSqlRelationalTableModel::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qsqlrelationaltablemodel_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qsqlrelationaltablemodel_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QSqlRelationalTableModel::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qsqlrelationaltablemodel_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qsqlrelationaltablemodel_timerevent_callback(this, cbval1);
            return;
        }
        QSqlRelationalTableModel::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qsqlrelationaltablemodel_childevent_callback) {
            QChildEvent* cbval1 = event;
            qsqlrelationaltablemodel_childevent_callback(this, cbval1);
            return;
        }
        QSqlRelationalTableModel::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qsqlrelationaltablemodel_customevent_callback) {
            QEvent* cbval1 = event;
            qsqlrelationaltablemodel_customevent_callback(this, cbval1);
            return;
        }
        QSqlRelationalTableModel::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qsqlrelationaltablemodel_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qsqlrelationaltablemodel_connectnotify_callback(this, cbval1);
            return;
        }
        QSqlRelationalTableModel::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qsqlrelationaltablemodel_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qsqlrelationaltablemodel_disconnectnotify_callback(this, cbval1);
            return;
        }
        QSqlRelationalTableModel::disconnectNotify(signal);
    }

    // Friend functions
    friend libqt_string QSqlRelationalTableModel_SuperSelectStatement(const QSqlRelationalTableModel* self);
    friend bool QSqlRelationalTableModel_SuperUpdateRowInTable(QSqlRelationalTableModel* self, int row, const QSqlRecord* values);
    friend bool QSqlRelationalTableModel_SuperInsertRowIntoTable(QSqlRelationalTableModel* self, const QSqlRecord* values);
    friend libqt_string QSqlRelationalTableModel_SuperOrderByClause(const QSqlRelationalTableModel* self);
    friend bool QSqlRelationalTableModel_SuperDeleteRowFromTable(QSqlRelationalTableModel* self, int row);
    friend QModelIndex* QSqlRelationalTableModel_SuperIndexInQuery(const QSqlRelationalTableModel* self, const QModelIndex* item);
    friend void QSqlRelationalTableModel_SuperQueryChange(QSqlRelationalTableModel* self);
    friend void QSqlRelationalTableModel_SuperResetInternalData(QSqlRelationalTableModel* self);
    friend void QSqlRelationalTableModel_SuperTimerEvent(QSqlRelationalTableModel* self, QTimerEvent* event);
    friend void QSqlRelationalTableModel_SuperChildEvent(QSqlRelationalTableModel* self, QChildEvent* event);
    friend void QSqlRelationalTableModel_SuperCustomEvent(QSqlRelationalTableModel* self, QEvent* event);
    friend void QSqlRelationalTableModel_SuperConnectNotify(QSqlRelationalTableModel* self, const QMetaMethod* signal);
    friend void QSqlRelationalTableModel_SuperDisconnectNotify(QSqlRelationalTableModel* self, const QMetaMethod* signal);
};

#endif
