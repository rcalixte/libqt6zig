#pragma once
#ifndef LIBQSORTFILTERPROXYMODEL_HXX
#define LIBQSORTFILTERPROXYMODEL_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QSortFilterProxyModel
class VirtualQSortFilterProxyModel final : public QSortFilterProxyModel {
  public:
    // Virtual class public types (including callbacks and access types)
    using QSortFilterProxyModel_MetaObject_Callback = QMetaObject* (*)(const QSortFilterProxyModel*);
    using QSortFilterProxyModel_Metacast_Callback = void* (*)(QSortFilterProxyModel*, const char*);
    using QSortFilterProxyModel_Metacall_Callback = int (*)(QSortFilterProxyModel*, int, int, void**);
    using QSortFilterProxyModel_SetSourceModel_Callback = void (*)(QSortFilterProxyModel*, QAbstractItemModel*);
    using QSortFilterProxyModel_MapToSource_Callback = QModelIndex* (*)(const QSortFilterProxyModel*, QModelIndex*);
    using QSortFilterProxyModel_MapFromSource_Callback = QModelIndex* (*)(const QSortFilterProxyModel*, QModelIndex*);
    using QSortFilterProxyModel_MapSelectionToSource_Callback = QItemSelection* (*)(const QSortFilterProxyModel*, QItemSelection*);
    using QSortFilterProxyModel_MapSelectionFromSource_Callback = QItemSelection* (*)(const QSortFilterProxyModel*, QItemSelection*);
    using QSortFilterProxyModel_FilterAcceptsRow_Callback = bool (*)(const QSortFilterProxyModel*, int, QModelIndex*);
    using QSortFilterProxyModel_FilterAcceptsColumn_Callback = bool (*)(const QSortFilterProxyModel*, int, QModelIndex*);
    using QSortFilterProxyModel_LessThan_Callback = bool (*)(const QSortFilterProxyModel*, QModelIndex*, QModelIndex*);
    using QSortFilterProxyModel_Index_Callback = QModelIndex* (*)(const QSortFilterProxyModel*, int, int, QModelIndex*);
    using QSortFilterProxyModel_Parent_Callback = QModelIndex* (*)(const QSortFilterProxyModel*, QModelIndex*);
    using QSortFilterProxyModel_Sibling_Callback = QModelIndex* (*)(const QSortFilterProxyModel*, int, int, QModelIndex*);
    using QSortFilterProxyModel_RowCount_Callback = int (*)(const QSortFilterProxyModel*, QModelIndex*);
    using QSortFilterProxyModel_ColumnCount_Callback = int (*)(const QSortFilterProxyModel*, QModelIndex*);
    using QSortFilterProxyModel_HasChildren_Callback = bool (*)(const QSortFilterProxyModel*, QModelIndex*);
    using QSortFilterProxyModel_Data_Callback = QVariant* (*)(const QSortFilterProxyModel*, QModelIndex*, int);
    using QSortFilterProxyModel_SetData_Callback = bool (*)(QSortFilterProxyModel*, QModelIndex*, QVariant*, int);
    using QSortFilterProxyModel_HeaderData_Callback = QVariant* (*)(const QSortFilterProxyModel*, int, int, int);
    using QSortFilterProxyModel_SetHeaderData_Callback = bool (*)(QSortFilterProxyModel*, int, int, QVariant*, int);
    using QSortFilterProxyModel_MimeData_Callback = QMimeData* (*)(const QSortFilterProxyModel*, libqt_list /* of QModelIndex* */);
    using QSortFilterProxyModel_DropMimeData_Callback = bool (*)(QSortFilterProxyModel*, QMimeData*, int, int, int, QModelIndex*);
    using QSortFilterProxyModel_InsertRows_Callback = bool (*)(QSortFilterProxyModel*, int, int, QModelIndex*);
    using QSortFilterProxyModel_InsertColumns_Callback = bool (*)(QSortFilterProxyModel*, int, int, QModelIndex*);
    using QSortFilterProxyModel_RemoveRows_Callback = bool (*)(QSortFilterProxyModel*, int, int, QModelIndex*);
    using QSortFilterProxyModel_RemoveColumns_Callback = bool (*)(QSortFilterProxyModel*, int, int, QModelIndex*);
    using QSortFilterProxyModel_FetchMore_Callback = void (*)(QSortFilterProxyModel*, QModelIndex*);
    using QSortFilterProxyModel_CanFetchMore_Callback = bool (*)(const QSortFilterProxyModel*, QModelIndex*);
    using QSortFilterProxyModel_Flags_Callback = int (*)(const QSortFilterProxyModel*, QModelIndex*);
    using QSortFilterProxyModel_Buddy_Callback = QModelIndex* (*)(const QSortFilterProxyModel*, QModelIndex*);
    using QSortFilterProxyModel_Match_Callback = libqt_list /* of QModelIndex* */ (*)(const QSortFilterProxyModel*, QModelIndex*, int, QVariant*, int, int);
    using QSortFilterProxyModel_Span_Callback = QSize* (*)(const QSortFilterProxyModel*, QModelIndex*);
    using QSortFilterProxyModel_Sort_Callback = void (*)(QSortFilterProxyModel*, int, int);
    using QSortFilterProxyModel_MimeTypes_Callback = const char** (*)(const QSortFilterProxyModel*);
    using QSortFilterProxyModel_SupportedDropActions_Callback = int (*)(const QSortFilterProxyModel*);
    using QSortFilterProxyModel_Submit_Callback = bool (*)(QSortFilterProxyModel*);
    using QSortFilterProxyModel_Revert_Callback = void (*)(QSortFilterProxyModel*);
    using QSortFilterProxyModel_ItemData_Callback = libqt_map /* of int to QVariant* */ (*)(const QSortFilterProxyModel*, QModelIndex*);
    using QSortFilterProxyModel_SetItemData_Callback = bool (*)(QSortFilterProxyModel*, QModelIndex*, libqt_map /* of int to QVariant* */);
    using QSortFilterProxyModel_ClearItemData_Callback = bool (*)(QSortFilterProxyModel*, QModelIndex*);
    using QSortFilterProxyModel_CanDropMimeData_Callback = bool (*)(const QSortFilterProxyModel*, QMimeData*, int, int, int, QModelIndex*);
    using QSortFilterProxyModel_SupportedDragActions_Callback = int (*)(const QSortFilterProxyModel*);
    using QSortFilterProxyModel_RoleNames_Callback = libqt_map /* of int to libqt_string */ (*)(const QSortFilterProxyModel*);
    using QSortFilterProxyModel_MoveRows_Callback = bool (*)(QSortFilterProxyModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QSortFilterProxyModel_MoveColumns_Callback = bool (*)(QSortFilterProxyModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QSortFilterProxyModel_MultiData_Callback = void (*)(const QSortFilterProxyModel*, QModelIndex*, QModelRoleDataSpan*);
    using QSortFilterProxyModel_ResetInternalData_Callback = void (*)(QSortFilterProxyModel*);
    using QSortFilterProxyModel_Event_Callback = bool (*)(QSortFilterProxyModel*, QEvent*);
    using QSortFilterProxyModel_EventFilter_Callback = bool (*)(QSortFilterProxyModel*, QObject*, QEvent*);
    using QSortFilterProxyModel_TimerEvent_Callback = void (*)(QSortFilterProxyModel*, QTimerEvent*);
    using QSortFilterProxyModel_ChildEvent_Callback = void (*)(QSortFilterProxyModel*, QChildEvent*);
    using QSortFilterProxyModel_CustomEvent_Callback = void (*)(QSortFilterProxyModel*, QEvent*);
    using QSortFilterProxyModel_ConnectNotify_Callback = void (*)(QSortFilterProxyModel*, QMetaMethod*);
    using QSortFilterProxyModel_DisconnectNotify_Callback = void (*)(QSortFilterProxyModel*, QMetaMethod*);
    using QSortFilterProxyModel::beginInsertColumns;
    using QSortFilterProxyModel::beginInsertRows;
    using QSortFilterProxyModel::beginMoveColumns;
    using QSortFilterProxyModel::beginMoveRows;
    using QSortFilterProxyModel::beginRemoveColumns;
    using QSortFilterProxyModel::beginRemoveRows;
    using QSortFilterProxyModel::beginResetModel;
    using QSortFilterProxyModel::changePersistentIndex;
    using QSortFilterProxyModel::changePersistentIndexList;
    using QSortFilterProxyModel::createIndex;
    using QSortFilterProxyModel::createSourceIndex;
    using QSortFilterProxyModel::decodeData;
    using QSortFilterProxyModel::encodeData;
    using QSortFilterProxyModel::endInsertColumns;
    using QSortFilterProxyModel::endInsertRows;
    using QSortFilterProxyModel::endMoveColumns;
    using QSortFilterProxyModel::endMoveRows;
    using QSortFilterProxyModel::endRemoveColumns;
    using QSortFilterProxyModel::endRemoveRows;
    using QSortFilterProxyModel::endResetModel;
    using QSortFilterProxyModel::invalidateColumnsFilter;
    using QSortFilterProxyModel::invalidateFilter;
    using QSortFilterProxyModel::invalidateRowsFilter;
    using QSortFilterProxyModel::isSignalConnected;
    using QSortFilterProxyModel::persistentIndexList;
    using QSortFilterProxyModel::receivers;
    using QSortFilterProxyModel::sender;
    using QSortFilterProxyModel::senderSignalIndex;

    // Instance callback storage
    QSortFilterProxyModel_MetaObject_Callback qsortfilterproxymodel_metaobject_callback = nullptr;
    QSortFilterProxyModel_Metacast_Callback qsortfilterproxymodel_metacast_callback = nullptr;
    QSortFilterProxyModel_Metacall_Callback qsortfilterproxymodel_metacall_callback = nullptr;
    QSortFilterProxyModel_SetSourceModel_Callback qsortfilterproxymodel_setsourcemodel_callback = nullptr;
    QSortFilterProxyModel_MapToSource_Callback qsortfilterproxymodel_maptosource_callback = nullptr;
    QSortFilterProxyModel_MapFromSource_Callback qsortfilterproxymodel_mapfromsource_callback = nullptr;
    QSortFilterProxyModel_MapSelectionToSource_Callback qsortfilterproxymodel_mapselectiontosource_callback = nullptr;
    QSortFilterProxyModel_MapSelectionFromSource_Callback qsortfilterproxymodel_mapselectionfromsource_callback = nullptr;
    QSortFilterProxyModel_FilterAcceptsRow_Callback qsortfilterproxymodel_filteracceptsrow_callback = nullptr;
    QSortFilterProxyModel_FilterAcceptsColumn_Callback qsortfilterproxymodel_filteracceptscolumn_callback = nullptr;
    QSortFilterProxyModel_LessThan_Callback qsortfilterproxymodel_lessthan_callback = nullptr;
    QSortFilterProxyModel_Index_Callback qsortfilterproxymodel_index_callback = nullptr;
    QSortFilterProxyModel_Parent_Callback qsortfilterproxymodel_parent_callback = nullptr;
    QSortFilterProxyModel_Sibling_Callback qsortfilterproxymodel_sibling_callback = nullptr;
    QSortFilterProxyModel_RowCount_Callback qsortfilterproxymodel_rowcount_callback = nullptr;
    QSortFilterProxyModel_ColumnCount_Callback qsortfilterproxymodel_columncount_callback = nullptr;
    QSortFilterProxyModel_HasChildren_Callback qsortfilterproxymodel_haschildren_callback = nullptr;
    QSortFilterProxyModel_Data_Callback qsortfilterproxymodel_data_callback = nullptr;
    QSortFilterProxyModel_SetData_Callback qsortfilterproxymodel_setdata_callback = nullptr;
    QSortFilterProxyModel_HeaderData_Callback qsortfilterproxymodel_headerdata_callback = nullptr;
    QSortFilterProxyModel_SetHeaderData_Callback qsortfilterproxymodel_setheaderdata_callback = nullptr;
    QSortFilterProxyModel_MimeData_Callback qsortfilterproxymodel_mimedata_callback = nullptr;
    QSortFilterProxyModel_DropMimeData_Callback qsortfilterproxymodel_dropmimedata_callback = nullptr;
    QSortFilterProxyModel_InsertRows_Callback qsortfilterproxymodel_insertrows_callback = nullptr;
    QSortFilterProxyModel_InsertColumns_Callback qsortfilterproxymodel_insertcolumns_callback = nullptr;
    QSortFilterProxyModel_RemoveRows_Callback qsortfilterproxymodel_removerows_callback = nullptr;
    QSortFilterProxyModel_RemoveColumns_Callback qsortfilterproxymodel_removecolumns_callback = nullptr;
    QSortFilterProxyModel_FetchMore_Callback qsortfilterproxymodel_fetchmore_callback = nullptr;
    QSortFilterProxyModel_CanFetchMore_Callback qsortfilterproxymodel_canfetchmore_callback = nullptr;
    QSortFilterProxyModel_Flags_Callback qsortfilterproxymodel_flags_callback = nullptr;
    QSortFilterProxyModel_Buddy_Callback qsortfilterproxymodel_buddy_callback = nullptr;
    QSortFilterProxyModel_Match_Callback qsortfilterproxymodel_match_callback = nullptr;
    QSortFilterProxyModel_Span_Callback qsortfilterproxymodel_span_callback = nullptr;
    QSortFilterProxyModel_Sort_Callback qsortfilterproxymodel_sort_callback = nullptr;
    QSortFilterProxyModel_MimeTypes_Callback qsortfilterproxymodel_mimetypes_callback = nullptr;
    QSortFilterProxyModel_SupportedDropActions_Callback qsortfilterproxymodel_supporteddropactions_callback = nullptr;
    QSortFilterProxyModel_Submit_Callback qsortfilterproxymodel_submit_callback = nullptr;
    QSortFilterProxyModel_Revert_Callback qsortfilterproxymodel_revert_callback = nullptr;
    QSortFilterProxyModel_ItemData_Callback qsortfilterproxymodel_itemdata_callback = nullptr;
    QSortFilterProxyModel_SetItemData_Callback qsortfilterproxymodel_setitemdata_callback = nullptr;
    QSortFilterProxyModel_ClearItemData_Callback qsortfilterproxymodel_clearitemdata_callback = nullptr;
    QSortFilterProxyModel_CanDropMimeData_Callback qsortfilterproxymodel_candropmimedata_callback = nullptr;
    QSortFilterProxyModel_SupportedDragActions_Callback qsortfilterproxymodel_supporteddragactions_callback = nullptr;
    QSortFilterProxyModel_RoleNames_Callback qsortfilterproxymodel_rolenames_callback = nullptr;
    QSortFilterProxyModel_MoveRows_Callback qsortfilterproxymodel_moverows_callback = nullptr;
    QSortFilterProxyModel_MoveColumns_Callback qsortfilterproxymodel_movecolumns_callback = nullptr;
    QSortFilterProxyModel_MultiData_Callback qsortfilterproxymodel_multidata_callback = nullptr;
    QSortFilterProxyModel_ResetInternalData_Callback qsortfilterproxymodel_resetinternaldata_callback = nullptr;
    QSortFilterProxyModel_Event_Callback qsortfilterproxymodel_event_callback = nullptr;
    QSortFilterProxyModel_EventFilter_Callback qsortfilterproxymodel_eventfilter_callback = nullptr;
    QSortFilterProxyModel_TimerEvent_Callback qsortfilterproxymodel_timerevent_callback = nullptr;
    QSortFilterProxyModel_ChildEvent_Callback qsortfilterproxymodel_childevent_callback = nullptr;
    QSortFilterProxyModel_CustomEvent_Callback qsortfilterproxymodel_customevent_callback = nullptr;
    QSortFilterProxyModel_ConnectNotify_Callback qsortfilterproxymodel_connectnotify_callback = nullptr;
    QSortFilterProxyModel_DisconnectNotify_Callback qsortfilterproxymodel_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QSortFilterProxyModel {
        using QSortFilterProxyModel::childEvent;
        using QSortFilterProxyModel::connectNotify;
        using QSortFilterProxyModel::customEvent;
        using QSortFilterProxyModel::disconnectNotify;
        using QSortFilterProxyModel::filterAcceptsColumn;
        using QSortFilterProxyModel::filterAcceptsRow;
        using QSortFilterProxyModel::lessThan;
        using QSortFilterProxyModel::resetInternalData;
        using QSortFilterProxyModel::timerEvent;
    };

    VirtualQSortFilterProxyModel() : QSortFilterProxyModel() {};
    VirtualQSortFilterProxyModel(QObject* parent) : QSortFilterProxyModel(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qsortfilterproxymodel_metaobject_callback) {
            QMetaObject* callback_ret = qsortfilterproxymodel_metaobject_callback(this);
            return callback_ret;
        }
        return QSortFilterProxyModel::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qsortfilterproxymodel_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qsortfilterproxymodel_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QSortFilterProxyModel::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qsortfilterproxymodel_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qsortfilterproxymodel_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QSortFilterProxyModel::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSourceModel(QAbstractItemModel* sourceModel) override {
        if (qsortfilterproxymodel_setsourcemodel_callback) {
            QAbstractItemModel* cbval1 = sourceModel;
            qsortfilterproxymodel_setsourcemodel_callback(this, cbval1);
            return;
        }
        QSortFilterProxyModel::setSourceModel(sourceModel);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex mapToSource(const QModelIndex& proxyIndex) const override {
        if (qsortfilterproxymodel_maptosource_callback) {
            const QModelIndex& proxyIndex_ret = proxyIndex;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&proxyIndex_ret);
            QModelIndex* callback_ret = qsortfilterproxymodel_maptosource_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QSortFilterProxyModel::mapToSource(proxyIndex);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex mapFromSource(const QModelIndex& sourceIndex) const override {
        if (qsortfilterproxymodel_mapfromsource_callback) {
            const QModelIndex& sourceIndex_ret = sourceIndex;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceIndex_ret);
            QModelIndex* callback_ret = qsortfilterproxymodel_mapfromsource_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QSortFilterProxyModel::mapFromSource(sourceIndex);
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelection mapSelectionToSource(const QItemSelection& proxySelection) const override {
        if (qsortfilterproxymodel_mapselectiontosource_callback) {
            const QItemSelection& proxySelection_ret = proxySelection;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&proxySelection_ret);
            QItemSelection* callback_ret = qsortfilterproxymodel_mapselectiontosource_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QSortFilterProxyModel::mapSelectionToSource(proxySelection);
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelection mapSelectionFromSource(const QItemSelection& sourceSelection) const override {
        if (qsortfilterproxymodel_mapselectionfromsource_callback) {
            const QItemSelection& sourceSelection_ret = sourceSelection;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&sourceSelection_ret);
            QItemSelection* callback_ret = qsortfilterproxymodel_mapselectionfromsource_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QSortFilterProxyModel::mapSelectionFromSource(sourceSelection);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool filterAcceptsRow(int source_row, const QModelIndex& source_parent) const override {
        if (qsortfilterproxymodel_filteracceptsrow_callback) {
            int cbval1 = source_row;
            const QModelIndex& source_parent_ret = source_parent;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&source_parent_ret);
            bool callback_ret = qsortfilterproxymodel_filteracceptsrow_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QSortFilterProxyModel::filterAcceptsRow(source_row, source_parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool filterAcceptsColumn(int source_column, const QModelIndex& source_parent) const override {
        if (qsortfilterproxymodel_filteracceptscolumn_callback) {
            int cbval1 = source_column;
            const QModelIndex& source_parent_ret = source_parent;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&source_parent_ret);
            bool callback_ret = qsortfilterproxymodel_filteracceptscolumn_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QSortFilterProxyModel::filterAcceptsColumn(source_column, source_parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool lessThan(const QModelIndex& source_left, const QModelIndex& source_right) const override {
        if (qsortfilterproxymodel_lessthan_callback) {
            const QModelIndex& source_left_ret = source_left;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&source_left_ret);
            const QModelIndex& source_right_ret = source_right;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&source_right_ret);
            bool callback_ret = qsortfilterproxymodel_lessthan_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QSortFilterProxyModel::lessThan(source_left, source_right);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
        if (qsortfilterproxymodel_index_callback) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            QModelIndex* callback_ret = qsortfilterproxymodel_index_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QSortFilterProxyModel::index(row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex parent(const QModelIndex& child) const override {
        if (qsortfilterproxymodel_parent_callback) {
            const QModelIndex& child_ret = child;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&child_ret);
            QModelIndex* callback_ret = qsortfilterproxymodel_parent_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QSortFilterProxyModel::parent(child);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
        if (qsortfilterproxymodel_sibling_callback) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& idx_ret = idx;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&idx_ret);
            QModelIndex* callback_ret = qsortfilterproxymodel_sibling_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QSortFilterProxyModel::sibling(row, column, idx);
    }

    // Virtual method for C ABI access and custom callback
    virtual int rowCount(const QModelIndex& parent) const override {
        if (qsortfilterproxymodel_rowcount_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int callback_ret = qsortfilterproxymodel_rowcount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QSortFilterProxyModel::rowCount(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual int columnCount(const QModelIndex& parent) const override {
        if (qsortfilterproxymodel_columncount_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int callback_ret = qsortfilterproxymodel_columncount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QSortFilterProxyModel::columnCount(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasChildren(const QModelIndex& parent) const override {
        if (qsortfilterproxymodel_haschildren_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qsortfilterproxymodel_haschildren_callback(this, cbval1);
            return callback_ret;
        }
        return QSortFilterProxyModel::hasChildren(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(const QModelIndex& index, int role) const override {
        if (qsortfilterproxymodel_data_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = role;
            QVariant* callback_ret = qsortfilterproxymodel_data_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QSortFilterProxyModel::data(index, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
        if (qsortfilterproxymodel_setdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            int cbval3 = role;
            bool callback_ret = qsortfilterproxymodel_setdata_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QSortFilterProxyModel::setData(index, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
        if (qsortfilterproxymodel_headerdata_callback) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            int cbval3 = role;
            QVariant* callback_ret = qsortfilterproxymodel_headerdata_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QSortFilterProxyModel::headerData(section, orientation, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
        if (qsortfilterproxymodel_setheaderdata_callback) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = role;
            bool callback_ret = qsortfilterproxymodel_setheaderdata_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        }
        return QSortFilterProxyModel::setHeaderData(section, orientation, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* mimeData(const QList<QModelIndex>& indexes) const override {
        if (qsortfilterproxymodel_mimedata_callback) {
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
            QMimeData* callback_ret = qsortfilterproxymodel_mimedata_callback(this, cbval1);
            free(indexes_arr);
            return callback_ret;
        }
        return QSortFilterProxyModel::mimeData(indexes);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
        if (qsortfilterproxymodel_dropmimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qsortfilterproxymodel_dropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return QSortFilterProxyModel::dropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
        if (qsortfilterproxymodel_insertrows_callback) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qsortfilterproxymodel_insertrows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QSortFilterProxyModel::insertRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
        if (qsortfilterproxymodel_insertcolumns_callback) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qsortfilterproxymodel_insertcolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QSortFilterProxyModel::insertColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
        if (qsortfilterproxymodel_removerows_callback) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qsortfilterproxymodel_removerows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QSortFilterProxyModel::removeRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
        if (qsortfilterproxymodel_removecolumns_callback) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qsortfilterproxymodel_removecolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QSortFilterProxyModel::removeColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void fetchMore(const QModelIndex& parent) override {
        if (qsortfilterproxymodel_fetchmore_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            qsortfilterproxymodel_fetchmore_callback(this, cbval1);
            return;
        }
        QSortFilterProxyModel::fetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canFetchMore(const QModelIndex& parent) const override {
        if (qsortfilterproxymodel_canfetchmore_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qsortfilterproxymodel_canfetchmore_callback(this, cbval1);
            return callback_ret;
        }
        return QSortFilterProxyModel::canFetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
        if (qsortfilterproxymodel_flags_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int callback_ret = qsortfilterproxymodel_flags_callback(this, cbval1);
            return static_cast<Qt::ItemFlags>(callback_ret);
        }
        return QSortFilterProxyModel::flags(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex buddy(const QModelIndex& index) const override {
        if (qsortfilterproxymodel_buddy_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelIndex* callback_ret = qsortfilterproxymodel_buddy_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QSortFilterProxyModel::buddy(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
        if (qsortfilterproxymodel_match_callback) {
            const QModelIndex& start_ret = start;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&start_ret);
            int cbval2 = role;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = hits;
            int cbval5 = static_cast<int>(flags);
            libqt_list /* of QModelIndex* */ callback_ret = qsortfilterproxymodel_match_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            QList<QModelIndex> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QModelIndex** callback_ret_arr = static_cast<QModelIndex**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return QSortFilterProxyModel::match(start, role, value, hits, flags);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize span(const QModelIndex& index) const override {
        if (qsortfilterproxymodel_span_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QSize* callback_ret = qsortfilterproxymodel_span_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QSortFilterProxyModel::span(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void sort(int column, Qt::SortOrder order) override {
        if (qsortfilterproxymodel_sort_callback) {
            int cbval1 = column;
            int cbval2 = static_cast<int>(order);
            qsortfilterproxymodel_sort_callback(this, cbval1, cbval2);
            return;
        }
        QSortFilterProxyModel::sort(column, order);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> mimeTypes() const override {
        if (qsortfilterproxymodel_mimetypes_callback) {
            const char** callback_ret = qsortfilterproxymodel_mimetypes_callback(this);
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
        return QSortFilterProxyModel::mimeTypes();
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (qsortfilterproxymodel_supporteddropactions_callback) {
            int callback_ret = qsortfilterproxymodel_supporteddropactions_callback(this);
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return QSortFilterProxyModel::supportedDropActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool submit() override {
        if (qsortfilterproxymodel_submit_callback) {
            bool callback_ret = qsortfilterproxymodel_submit_callback(this);
            return callback_ret;
        }
        return QSortFilterProxyModel::submit();
    }

    // Virtual method for C ABI access and custom callback
    virtual void revert() override {
        if (qsortfilterproxymodel_revert_callback) {
            qsortfilterproxymodel_revert_callback(this);
            return;
        }
        QSortFilterProxyModel::revert();
    }

    // Virtual method for C ABI access and custom callback
    virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
        if (qsortfilterproxymodel_itemdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            libqt_map /* of int to QVariant* */ callback_ret = qsortfilterproxymodel_itemdata_callback(this, cbval1);
            QMap<int, QVariant> callback_ret_QMap;
            int* callback_ret_karr = static_cast<int*>(callback_ret.keys);
            QVariant** callback_ret_varr = static_cast<QVariant**>(callback_ret.values);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QMap.insert(static_cast<int>(callback_ret_karr[i]), *(callback_ret_varr[i]));
            }
            return callback_ret_QMap;
        }
        return QSortFilterProxyModel::itemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
        if (qsortfilterproxymodel_setitemdata_callback) {
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
            bool callback_ret = qsortfilterproxymodel_setitemdata_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QSortFilterProxyModel::setItemData(index, roles);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool clearItemData(const QModelIndex& index) override {
        if (qsortfilterproxymodel_clearitemdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            bool callback_ret = qsortfilterproxymodel_clearitemdata_callback(this, cbval1);
            return callback_ret;
        }
        return QSortFilterProxyModel::clearItemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
        if (qsortfilterproxymodel_candropmimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qsortfilterproxymodel_candropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return QSortFilterProxyModel::canDropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDragActions() const override {
        if (qsortfilterproxymodel_supporteddragactions_callback) {
            int callback_ret = qsortfilterproxymodel_supporteddragactions_callback(this);
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return QSortFilterProxyModel::supportedDragActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual QHash<int, QByteArray> roleNames() const override {
        if (qsortfilterproxymodel_rolenames_callback) {
            libqt_map /* of int to libqt_string */ callback_ret = qsortfilterproxymodel_rolenames_callback(this);
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
        return QSortFilterProxyModel::roleNames();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (qsortfilterproxymodel_moverows_callback) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceRow;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;
            bool callback_ret = qsortfilterproxymodel_moverows_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return QSortFilterProxyModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (qsortfilterproxymodel_movecolumns_callback) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceColumn;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;
            bool callback_ret = qsortfilterproxymodel_movecolumns_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return QSortFilterProxyModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
        if (qsortfilterproxymodel_multidata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelRoleDataSpan* cbval2 = new QModelRoleDataSpan(roleDataSpan);
            qsortfilterproxymodel_multidata_callback(this, cbval1, cbval2);
            return;
        }
        QSortFilterProxyModel::multiData(index, roleDataSpan);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetInternalData() override {
        if (qsortfilterproxymodel_resetinternaldata_callback) {
            qsortfilterproxymodel_resetinternaldata_callback(this);
            return;
        }
        QSortFilterProxyModel::resetInternalData();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qsortfilterproxymodel_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qsortfilterproxymodel_event_callback(this, cbval1);
            return callback_ret;
        }
        return QSortFilterProxyModel::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qsortfilterproxymodel_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qsortfilterproxymodel_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QSortFilterProxyModel::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qsortfilterproxymodel_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qsortfilterproxymodel_timerevent_callback(this, cbval1);
            return;
        }
        QSortFilterProxyModel::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qsortfilterproxymodel_childevent_callback) {
            QChildEvent* cbval1 = event;
            qsortfilterproxymodel_childevent_callback(this, cbval1);
            return;
        }
        QSortFilterProxyModel::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qsortfilterproxymodel_customevent_callback) {
            QEvent* cbval1 = event;
            qsortfilterproxymodel_customevent_callback(this, cbval1);
            return;
        }
        QSortFilterProxyModel::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qsortfilterproxymodel_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qsortfilterproxymodel_connectnotify_callback(this, cbval1);
            return;
        }
        QSortFilterProxyModel::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qsortfilterproxymodel_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qsortfilterproxymodel_disconnectnotify_callback(this, cbval1);
            return;
        }
        QSortFilterProxyModel::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QSortFilterProxyModel_SuperFilterAcceptsRow(const QSortFilterProxyModel* self, int source_row, const QModelIndex* source_parent);
    friend bool QSortFilterProxyModel_SuperFilterAcceptsColumn(const QSortFilterProxyModel* self, int source_column, const QModelIndex* source_parent);
    friend bool QSortFilterProxyModel_SuperLessThan(const QSortFilterProxyModel* self, const QModelIndex* source_left, const QModelIndex* source_right);
    friend void QSortFilterProxyModel_SuperResetInternalData(QSortFilterProxyModel* self);
    friend void QSortFilterProxyModel_SuperTimerEvent(QSortFilterProxyModel* self, QTimerEvent* event);
    friend void QSortFilterProxyModel_SuperChildEvent(QSortFilterProxyModel* self, QChildEvent* event);
    friend void QSortFilterProxyModel_SuperCustomEvent(QSortFilterProxyModel* self, QEvent* event);
    friend void QSortFilterProxyModel_SuperConnectNotify(QSortFilterProxyModel* self, const QMetaMethod* signal);
    friend void QSortFilterProxyModel_SuperDisconnectNotify(QSortFilterProxyModel* self, const QMetaMethod* signal);
};

#endif
