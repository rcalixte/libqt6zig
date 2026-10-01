#pragma once
#ifndef EXTRAS_KIO_LIBKDIRSORTFILTERPROXYMODEL_HXX
#define EXTRAS_KIO_LIBKDIRSORTFILTERPROXYMODEL_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KDirSortFilterProxyModel
class VirtualKDirSortFilterProxyModel final : public KDirSortFilterProxyModel {
  public:
    // Virtual class public types (including callbacks and access types)
    using KDirSortFilterProxyModel_MetaObject_Callback = QMetaObject* (*)(const KDirSortFilterProxyModel*);
    using KDirSortFilterProxyModel_Metacast_Callback = void* (*)(KDirSortFilterProxyModel*, const char*);
    using KDirSortFilterProxyModel_Metacall_Callback = int (*)(KDirSortFilterProxyModel*, int, int, void**);
    using KDirSortFilterProxyModel_HasChildren_Callback = bool (*)(const KDirSortFilterProxyModel*, QModelIndex*);
    using KDirSortFilterProxyModel_CanFetchMore_Callback = bool (*)(const KDirSortFilterProxyModel*, QModelIndex*);
    using KDirSortFilterProxyModel_SubSortLessThan_Callback = bool (*)(const KDirSortFilterProxyModel*, QModelIndex*, QModelIndex*);
    using KDirSortFilterProxyModel_Sort_Callback = void (*)(KDirSortFilterProxyModel*, int, int);
    using KDirSortFilterProxyModel_LessThan_Callback = bool (*)(const KDirSortFilterProxyModel*, QModelIndex*, QModelIndex*);
    using KDirSortFilterProxyModel_CompareCategories_Callback = int (*)(const KDirSortFilterProxyModel*, QModelIndex*, QModelIndex*);
    using KDirSortFilterProxyModel_SetSourceModel_Callback = void (*)(KDirSortFilterProxyModel*, QAbstractItemModel*);
    using KDirSortFilterProxyModel_MapToSource_Callback = QModelIndex* (*)(const KDirSortFilterProxyModel*, QModelIndex*);
    using KDirSortFilterProxyModel_MapFromSource_Callback = QModelIndex* (*)(const KDirSortFilterProxyModel*, QModelIndex*);
    using KDirSortFilterProxyModel_MapSelectionToSource_Callback = QItemSelection* (*)(const KDirSortFilterProxyModel*, QItemSelection*);
    using KDirSortFilterProxyModel_MapSelectionFromSource_Callback = QItemSelection* (*)(const KDirSortFilterProxyModel*, QItemSelection*);
    using KDirSortFilterProxyModel_FilterAcceptsRow_Callback = bool (*)(const KDirSortFilterProxyModel*, int, QModelIndex*);
    using KDirSortFilterProxyModel_FilterAcceptsColumn_Callback = bool (*)(const KDirSortFilterProxyModel*, int, QModelIndex*);
    using KDirSortFilterProxyModel_Index_Callback = QModelIndex* (*)(const KDirSortFilterProxyModel*, int, int, QModelIndex*);
    using KDirSortFilterProxyModel_Parent_Callback = QModelIndex* (*)(const KDirSortFilterProxyModel*, QModelIndex*);
    using KDirSortFilterProxyModel_Sibling_Callback = QModelIndex* (*)(const KDirSortFilterProxyModel*, int, int, QModelIndex*);
    using KDirSortFilterProxyModel_RowCount_Callback = int (*)(const KDirSortFilterProxyModel*, QModelIndex*);
    using KDirSortFilterProxyModel_ColumnCount_Callback = int (*)(const KDirSortFilterProxyModel*, QModelIndex*);
    using KDirSortFilterProxyModel_Data_Callback = QVariant* (*)(const KDirSortFilterProxyModel*, QModelIndex*, int);
    using KDirSortFilterProxyModel_SetData_Callback = bool (*)(KDirSortFilterProxyModel*, QModelIndex*, QVariant*, int);
    using KDirSortFilterProxyModel_HeaderData_Callback = QVariant* (*)(const KDirSortFilterProxyModel*, int, int, int);
    using KDirSortFilterProxyModel_SetHeaderData_Callback = bool (*)(KDirSortFilterProxyModel*, int, int, QVariant*, int);
    using KDirSortFilterProxyModel_MimeData_Callback = QMimeData* (*)(const KDirSortFilterProxyModel*, libqt_list /* of QModelIndex* */);
    using KDirSortFilterProxyModel_DropMimeData_Callback = bool (*)(KDirSortFilterProxyModel*, QMimeData*, int, int, int, QModelIndex*);
    using KDirSortFilterProxyModel_InsertRows_Callback = bool (*)(KDirSortFilterProxyModel*, int, int, QModelIndex*);
    using KDirSortFilterProxyModel_InsertColumns_Callback = bool (*)(KDirSortFilterProxyModel*, int, int, QModelIndex*);
    using KDirSortFilterProxyModel_RemoveRows_Callback = bool (*)(KDirSortFilterProxyModel*, int, int, QModelIndex*);
    using KDirSortFilterProxyModel_RemoveColumns_Callback = bool (*)(KDirSortFilterProxyModel*, int, int, QModelIndex*);
    using KDirSortFilterProxyModel_FetchMore_Callback = void (*)(KDirSortFilterProxyModel*, QModelIndex*);
    using KDirSortFilterProxyModel_Flags_Callback = int (*)(const KDirSortFilterProxyModel*, QModelIndex*);
    using KDirSortFilterProxyModel_Buddy_Callback = QModelIndex* (*)(const KDirSortFilterProxyModel*, QModelIndex*);
    using KDirSortFilterProxyModel_Match_Callback = libqt_list /* of QModelIndex* */ (*)(const KDirSortFilterProxyModel*, QModelIndex*, int, QVariant*, int, int);
    using KDirSortFilterProxyModel_Span_Callback = QSize* (*)(const KDirSortFilterProxyModel*, QModelIndex*);
    using KDirSortFilterProxyModel_MimeTypes_Callback = const char** (*)(const KDirSortFilterProxyModel*);
    using KDirSortFilterProxyModel_SupportedDropActions_Callback = int (*)(const KDirSortFilterProxyModel*);
    using KDirSortFilterProxyModel_Submit_Callback = bool (*)(KDirSortFilterProxyModel*);
    using KDirSortFilterProxyModel_Revert_Callback = void (*)(KDirSortFilterProxyModel*);
    using KDirSortFilterProxyModel_ItemData_Callback = libqt_map /* of int to QVariant* */ (*)(const KDirSortFilterProxyModel*, QModelIndex*);
    using KDirSortFilterProxyModel_SetItemData_Callback = bool (*)(KDirSortFilterProxyModel*, QModelIndex*, libqt_map /* of int to QVariant* */);
    using KDirSortFilterProxyModel_ClearItemData_Callback = bool (*)(KDirSortFilterProxyModel*, QModelIndex*);
    using KDirSortFilterProxyModel_CanDropMimeData_Callback = bool (*)(const KDirSortFilterProxyModel*, QMimeData*, int, int, int, QModelIndex*);
    using KDirSortFilterProxyModel_SupportedDragActions_Callback = int (*)(const KDirSortFilterProxyModel*);
    using KDirSortFilterProxyModel_RoleNames_Callback = libqt_map /* of int to libqt_string */ (*)(const KDirSortFilterProxyModel*);
    using KDirSortFilterProxyModel_MoveRows_Callback = bool (*)(KDirSortFilterProxyModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KDirSortFilterProxyModel_MoveColumns_Callback = bool (*)(KDirSortFilterProxyModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KDirSortFilterProxyModel_MultiData_Callback = void (*)(const KDirSortFilterProxyModel*, QModelIndex*, QModelRoleDataSpan*);
    using KDirSortFilterProxyModel_ResetInternalData_Callback = void (*)(KDirSortFilterProxyModel*);
    using KDirSortFilterProxyModel_Event_Callback = bool (*)(KDirSortFilterProxyModel*, QEvent*);
    using KDirSortFilterProxyModel_EventFilter_Callback = bool (*)(KDirSortFilterProxyModel*, QObject*, QEvent*);
    using KDirSortFilterProxyModel_TimerEvent_Callback = void (*)(KDirSortFilterProxyModel*, QTimerEvent*);
    using KDirSortFilterProxyModel_ChildEvent_Callback = void (*)(KDirSortFilterProxyModel*, QChildEvent*);
    using KDirSortFilterProxyModel_CustomEvent_Callback = void (*)(KDirSortFilterProxyModel*, QEvent*);
    using KDirSortFilterProxyModel_ConnectNotify_Callback = void (*)(KDirSortFilterProxyModel*, QMetaMethod*);
    using KDirSortFilterProxyModel_DisconnectNotify_Callback = void (*)(KDirSortFilterProxyModel*, QMetaMethod*);
    using KDirSortFilterProxyModel::beginInsertColumns;
    using KDirSortFilterProxyModel::beginInsertRows;
    using KDirSortFilterProxyModel::beginMoveColumns;
    using KDirSortFilterProxyModel::beginMoveRows;
    using KDirSortFilterProxyModel::beginRemoveColumns;
    using KDirSortFilterProxyModel::beginRemoveRows;
    using KDirSortFilterProxyModel::beginResetModel;
    using KDirSortFilterProxyModel::changePersistentIndex;
    using KDirSortFilterProxyModel::changePersistentIndexList;
    using KDirSortFilterProxyModel::createIndex;
    using KDirSortFilterProxyModel::createSourceIndex;
    using KDirSortFilterProxyModel::decodeData;
    using KDirSortFilterProxyModel::encodeData;
    using KDirSortFilterProxyModel::endInsertColumns;
    using KDirSortFilterProxyModel::endInsertRows;
    using KDirSortFilterProxyModel::endMoveColumns;
    using KDirSortFilterProxyModel::endMoveRows;
    using KDirSortFilterProxyModel::endRemoveColumns;
    using KDirSortFilterProxyModel::endRemoveRows;
    using KDirSortFilterProxyModel::endResetModel;
    using KDirSortFilterProxyModel::invalidateColumnsFilter;
    using KDirSortFilterProxyModel::invalidateFilter;
    using KDirSortFilterProxyModel::invalidateRowsFilter;
    using KDirSortFilterProxyModel::isSignalConnected;
    using KDirSortFilterProxyModel::persistentIndexList;
    using KDirSortFilterProxyModel::receivers;
    using KDirSortFilterProxyModel::sender;
    using KDirSortFilterProxyModel::senderSignalIndex;

    // Instance callback storage
    KDirSortFilterProxyModel_MetaObject_Callback kdirsortfilterproxymodel_metaobject_callback = nullptr;
    KDirSortFilterProxyModel_Metacast_Callback kdirsortfilterproxymodel_metacast_callback = nullptr;
    KDirSortFilterProxyModel_Metacall_Callback kdirsortfilterproxymodel_metacall_callback = nullptr;
    KDirSortFilterProxyModel_HasChildren_Callback kdirsortfilterproxymodel_haschildren_callback = nullptr;
    KDirSortFilterProxyModel_CanFetchMore_Callback kdirsortfilterproxymodel_canfetchmore_callback = nullptr;
    KDirSortFilterProxyModel_SubSortLessThan_Callback kdirsortfilterproxymodel_subsortlessthan_callback = nullptr;
    KDirSortFilterProxyModel_Sort_Callback kdirsortfilterproxymodel_sort_callback = nullptr;
    KDirSortFilterProxyModel_LessThan_Callback kdirsortfilterproxymodel_lessthan_callback = nullptr;
    KDirSortFilterProxyModel_CompareCategories_Callback kdirsortfilterproxymodel_comparecategories_callback = nullptr;
    KDirSortFilterProxyModel_SetSourceModel_Callback kdirsortfilterproxymodel_setsourcemodel_callback = nullptr;
    KDirSortFilterProxyModel_MapToSource_Callback kdirsortfilterproxymodel_maptosource_callback = nullptr;
    KDirSortFilterProxyModel_MapFromSource_Callback kdirsortfilterproxymodel_mapfromsource_callback = nullptr;
    KDirSortFilterProxyModel_MapSelectionToSource_Callback kdirsortfilterproxymodel_mapselectiontosource_callback = nullptr;
    KDirSortFilterProxyModel_MapSelectionFromSource_Callback kdirsortfilterproxymodel_mapselectionfromsource_callback = nullptr;
    KDirSortFilterProxyModel_FilterAcceptsRow_Callback kdirsortfilterproxymodel_filteracceptsrow_callback = nullptr;
    KDirSortFilterProxyModel_FilterAcceptsColumn_Callback kdirsortfilterproxymodel_filteracceptscolumn_callback = nullptr;
    KDirSortFilterProxyModel_Index_Callback kdirsortfilterproxymodel_index_callback = nullptr;
    KDirSortFilterProxyModel_Parent_Callback kdirsortfilterproxymodel_parent_callback = nullptr;
    KDirSortFilterProxyModel_Sibling_Callback kdirsortfilterproxymodel_sibling_callback = nullptr;
    KDirSortFilterProxyModel_RowCount_Callback kdirsortfilterproxymodel_rowcount_callback = nullptr;
    KDirSortFilterProxyModel_ColumnCount_Callback kdirsortfilterproxymodel_columncount_callback = nullptr;
    KDirSortFilterProxyModel_Data_Callback kdirsortfilterproxymodel_data_callback = nullptr;
    KDirSortFilterProxyModel_SetData_Callback kdirsortfilterproxymodel_setdata_callback = nullptr;
    KDirSortFilterProxyModel_HeaderData_Callback kdirsortfilterproxymodel_headerdata_callback = nullptr;
    KDirSortFilterProxyModel_SetHeaderData_Callback kdirsortfilterproxymodel_setheaderdata_callback = nullptr;
    KDirSortFilterProxyModel_MimeData_Callback kdirsortfilterproxymodel_mimedata_callback = nullptr;
    KDirSortFilterProxyModel_DropMimeData_Callback kdirsortfilterproxymodel_dropmimedata_callback = nullptr;
    KDirSortFilterProxyModel_InsertRows_Callback kdirsortfilterproxymodel_insertrows_callback = nullptr;
    KDirSortFilterProxyModel_InsertColumns_Callback kdirsortfilterproxymodel_insertcolumns_callback = nullptr;
    KDirSortFilterProxyModel_RemoveRows_Callback kdirsortfilterproxymodel_removerows_callback = nullptr;
    KDirSortFilterProxyModel_RemoveColumns_Callback kdirsortfilterproxymodel_removecolumns_callback = nullptr;
    KDirSortFilterProxyModel_FetchMore_Callback kdirsortfilterproxymodel_fetchmore_callback = nullptr;
    KDirSortFilterProxyModel_Flags_Callback kdirsortfilterproxymodel_flags_callback = nullptr;
    KDirSortFilterProxyModel_Buddy_Callback kdirsortfilterproxymodel_buddy_callback = nullptr;
    KDirSortFilterProxyModel_Match_Callback kdirsortfilterproxymodel_match_callback = nullptr;
    KDirSortFilterProxyModel_Span_Callback kdirsortfilterproxymodel_span_callback = nullptr;
    KDirSortFilterProxyModel_MimeTypes_Callback kdirsortfilterproxymodel_mimetypes_callback = nullptr;
    KDirSortFilterProxyModel_SupportedDropActions_Callback kdirsortfilterproxymodel_supporteddropactions_callback = nullptr;
    KDirSortFilterProxyModel_Submit_Callback kdirsortfilterproxymodel_submit_callback = nullptr;
    KDirSortFilterProxyModel_Revert_Callback kdirsortfilterproxymodel_revert_callback = nullptr;
    KDirSortFilterProxyModel_ItemData_Callback kdirsortfilterproxymodel_itemdata_callback = nullptr;
    KDirSortFilterProxyModel_SetItemData_Callback kdirsortfilterproxymodel_setitemdata_callback = nullptr;
    KDirSortFilterProxyModel_ClearItemData_Callback kdirsortfilterproxymodel_clearitemdata_callback = nullptr;
    KDirSortFilterProxyModel_CanDropMimeData_Callback kdirsortfilterproxymodel_candropmimedata_callback = nullptr;
    KDirSortFilterProxyModel_SupportedDragActions_Callback kdirsortfilterproxymodel_supporteddragactions_callback = nullptr;
    KDirSortFilterProxyModel_RoleNames_Callback kdirsortfilterproxymodel_rolenames_callback = nullptr;
    KDirSortFilterProxyModel_MoveRows_Callback kdirsortfilterproxymodel_moverows_callback = nullptr;
    KDirSortFilterProxyModel_MoveColumns_Callback kdirsortfilterproxymodel_movecolumns_callback = nullptr;
    KDirSortFilterProxyModel_MultiData_Callback kdirsortfilterproxymodel_multidata_callback = nullptr;
    KDirSortFilterProxyModel_ResetInternalData_Callback kdirsortfilterproxymodel_resetinternaldata_callback = nullptr;
    KDirSortFilterProxyModel_Event_Callback kdirsortfilterproxymodel_event_callback = nullptr;
    KDirSortFilterProxyModel_EventFilter_Callback kdirsortfilterproxymodel_eventfilter_callback = nullptr;
    KDirSortFilterProxyModel_TimerEvent_Callback kdirsortfilterproxymodel_timerevent_callback = nullptr;
    KDirSortFilterProxyModel_ChildEvent_Callback kdirsortfilterproxymodel_childevent_callback = nullptr;
    KDirSortFilterProxyModel_CustomEvent_Callback kdirsortfilterproxymodel_customevent_callback = nullptr;
    KDirSortFilterProxyModel_ConnectNotify_Callback kdirsortfilterproxymodel_connectnotify_callback = nullptr;
    KDirSortFilterProxyModel_DisconnectNotify_Callback kdirsortfilterproxymodel_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KDirSortFilterProxyModel {
        using KDirSortFilterProxyModel::childEvent;
        using KDirSortFilterProxyModel::compareCategories;
        using KDirSortFilterProxyModel::connectNotify;
        using KDirSortFilterProxyModel::customEvent;
        using KDirSortFilterProxyModel::disconnectNotify;
        using KDirSortFilterProxyModel::filterAcceptsColumn;
        using KDirSortFilterProxyModel::filterAcceptsRow;
        using KDirSortFilterProxyModel::lessThan;
        using KDirSortFilterProxyModel::resetInternalData;
        using KDirSortFilterProxyModel::subSortLessThan;
        using KDirSortFilterProxyModel::timerEvent;
    };

    VirtualKDirSortFilterProxyModel() : KDirSortFilterProxyModel() {};
    VirtualKDirSortFilterProxyModel(QObject* parent) : KDirSortFilterProxyModel(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kdirsortfilterproxymodel_metaobject_callback) {
            QMetaObject* callback_ret = kdirsortfilterproxymodel_metaobject_callback(this);
            return callback_ret;
        }
        return KDirSortFilterProxyModel::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kdirsortfilterproxymodel_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kdirsortfilterproxymodel_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KDirSortFilterProxyModel::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kdirsortfilterproxymodel_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kdirsortfilterproxymodel_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KDirSortFilterProxyModel::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasChildren(const QModelIndex& parent) const override {
        if (kdirsortfilterproxymodel_haschildren_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = kdirsortfilterproxymodel_haschildren_callback(this, cbval1);
            return callback_ret;
        }
        return KDirSortFilterProxyModel::hasChildren(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canFetchMore(const QModelIndex& parent) const override {
        if (kdirsortfilterproxymodel_canfetchmore_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = kdirsortfilterproxymodel_canfetchmore_callback(this, cbval1);
            return callback_ret;
        }
        return KDirSortFilterProxyModel::canFetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool subSortLessThan(const QModelIndex& left, const QModelIndex& right) const override {
        if (kdirsortfilterproxymodel_subsortlessthan_callback) {
            const QModelIndex& left_ret = left;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&left_ret);
            const QModelIndex& right_ret = right;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&right_ret);
            bool callback_ret = kdirsortfilterproxymodel_subsortlessthan_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KDirSortFilterProxyModel::subSortLessThan(left, right);
    }

    // Virtual method for C ABI access and custom callback
    virtual void sort(int column, Qt::SortOrder order) override {
        if (kdirsortfilterproxymodel_sort_callback) {
            int cbval1 = column;
            int cbval2 = static_cast<int>(order);
            kdirsortfilterproxymodel_sort_callback(this, cbval1, cbval2);
            return;
        }
        KDirSortFilterProxyModel::sort(column, order);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool lessThan(const QModelIndex& left, const QModelIndex& right) const override {
        if (kdirsortfilterproxymodel_lessthan_callback) {
            const QModelIndex& left_ret = left;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&left_ret);
            const QModelIndex& right_ret = right;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&right_ret);
            bool callback_ret = kdirsortfilterproxymodel_lessthan_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KDirSortFilterProxyModel::lessThan(left, right);
    }

    // Virtual method for C ABI access and custom callback
    virtual int compareCategories(const QModelIndex& left, const QModelIndex& right) const override {
        if (kdirsortfilterproxymodel_comparecategories_callback) {
            const QModelIndex& left_ret = left;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&left_ret);
            const QModelIndex& right_ret = right;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&right_ret);
            int callback_ret = kdirsortfilterproxymodel_comparecategories_callback(this, cbval1, cbval2);
            return static_cast<int>(callback_ret);
        }
        return KDirSortFilterProxyModel::compareCategories(left, right);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSourceModel(QAbstractItemModel* sourceModel) override {
        if (kdirsortfilterproxymodel_setsourcemodel_callback) {
            QAbstractItemModel* cbval1 = sourceModel;
            kdirsortfilterproxymodel_setsourcemodel_callback(this, cbval1);
            return;
        }
        KDirSortFilterProxyModel::setSourceModel(sourceModel);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex mapToSource(const QModelIndex& proxyIndex) const override {
        if (kdirsortfilterproxymodel_maptosource_callback) {
            const QModelIndex& proxyIndex_ret = proxyIndex;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&proxyIndex_ret);
            QModelIndex* callback_ret = kdirsortfilterproxymodel_maptosource_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KDirSortFilterProxyModel::mapToSource(proxyIndex);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex mapFromSource(const QModelIndex& sourceIndex) const override {
        if (kdirsortfilterproxymodel_mapfromsource_callback) {
            const QModelIndex& sourceIndex_ret = sourceIndex;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceIndex_ret);
            QModelIndex* callback_ret = kdirsortfilterproxymodel_mapfromsource_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KDirSortFilterProxyModel::mapFromSource(sourceIndex);
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelection mapSelectionToSource(const QItemSelection& proxySelection) const override {
        if (kdirsortfilterproxymodel_mapselectiontosource_callback) {
            const QItemSelection& proxySelection_ret = proxySelection;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&proxySelection_ret);
            QItemSelection* callback_ret = kdirsortfilterproxymodel_mapselectiontosource_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KDirSortFilterProxyModel::mapSelectionToSource(proxySelection);
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelection mapSelectionFromSource(const QItemSelection& sourceSelection) const override {
        if (kdirsortfilterproxymodel_mapselectionfromsource_callback) {
            const QItemSelection& sourceSelection_ret = sourceSelection;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&sourceSelection_ret);
            QItemSelection* callback_ret = kdirsortfilterproxymodel_mapselectionfromsource_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KDirSortFilterProxyModel::mapSelectionFromSource(sourceSelection);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool filterAcceptsRow(int source_row, const QModelIndex& source_parent) const override {
        if (kdirsortfilterproxymodel_filteracceptsrow_callback) {
            int cbval1 = source_row;
            const QModelIndex& source_parent_ret = source_parent;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&source_parent_ret);
            bool callback_ret = kdirsortfilterproxymodel_filteracceptsrow_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KDirSortFilterProxyModel::filterAcceptsRow(source_row, source_parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool filterAcceptsColumn(int source_column, const QModelIndex& source_parent) const override {
        if (kdirsortfilterproxymodel_filteracceptscolumn_callback) {
            int cbval1 = source_column;
            const QModelIndex& source_parent_ret = source_parent;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&source_parent_ret);
            bool callback_ret = kdirsortfilterproxymodel_filteracceptscolumn_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KDirSortFilterProxyModel::filterAcceptsColumn(source_column, source_parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
        if (kdirsortfilterproxymodel_index_callback) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            QModelIndex* callback_ret = kdirsortfilterproxymodel_index_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KDirSortFilterProxyModel::index(row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex parent(const QModelIndex& child) const override {
        if (kdirsortfilterproxymodel_parent_callback) {
            const QModelIndex& child_ret = child;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&child_ret);
            QModelIndex* callback_ret = kdirsortfilterproxymodel_parent_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KDirSortFilterProxyModel::parent(child);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
        if (kdirsortfilterproxymodel_sibling_callback) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& idx_ret = idx;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&idx_ret);
            QModelIndex* callback_ret = kdirsortfilterproxymodel_sibling_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KDirSortFilterProxyModel::sibling(row, column, idx);
    }

    // Virtual method for C ABI access and custom callback
    virtual int rowCount(const QModelIndex& parent) const override {
        if (kdirsortfilterproxymodel_rowcount_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int callback_ret = kdirsortfilterproxymodel_rowcount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KDirSortFilterProxyModel::rowCount(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual int columnCount(const QModelIndex& parent) const override {
        if (kdirsortfilterproxymodel_columncount_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int callback_ret = kdirsortfilterproxymodel_columncount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KDirSortFilterProxyModel::columnCount(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(const QModelIndex& index, int role) const override {
        if (kdirsortfilterproxymodel_data_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = role;
            QVariant* callback_ret = kdirsortfilterproxymodel_data_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KDirSortFilterProxyModel::data(index, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
        if (kdirsortfilterproxymodel_setdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            int cbval3 = role;
            bool callback_ret = kdirsortfilterproxymodel_setdata_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KDirSortFilterProxyModel::setData(index, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
        if (kdirsortfilterproxymodel_headerdata_callback) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            int cbval3 = role;
            QVariant* callback_ret = kdirsortfilterproxymodel_headerdata_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KDirSortFilterProxyModel::headerData(section, orientation, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
        if (kdirsortfilterproxymodel_setheaderdata_callback) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = role;
            bool callback_ret = kdirsortfilterproxymodel_setheaderdata_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        }
        return KDirSortFilterProxyModel::setHeaderData(section, orientation, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* mimeData(const QList<QModelIndex>& indexes) const override {
        if (kdirsortfilterproxymodel_mimedata_callback) {
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
            QMimeData* callback_ret = kdirsortfilterproxymodel_mimedata_callback(this, cbval1);
            free(indexes_arr);
            return callback_ret;
        }
        return KDirSortFilterProxyModel::mimeData(indexes);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
        if (kdirsortfilterproxymodel_dropmimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = kdirsortfilterproxymodel_dropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return KDirSortFilterProxyModel::dropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
        if (kdirsortfilterproxymodel_insertrows_callback) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = kdirsortfilterproxymodel_insertrows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KDirSortFilterProxyModel::insertRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
        if (kdirsortfilterproxymodel_insertcolumns_callback) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = kdirsortfilterproxymodel_insertcolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KDirSortFilterProxyModel::insertColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
        if (kdirsortfilterproxymodel_removerows_callback) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = kdirsortfilterproxymodel_removerows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KDirSortFilterProxyModel::removeRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
        if (kdirsortfilterproxymodel_removecolumns_callback) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = kdirsortfilterproxymodel_removecolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KDirSortFilterProxyModel::removeColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void fetchMore(const QModelIndex& parent) override {
        if (kdirsortfilterproxymodel_fetchmore_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            kdirsortfilterproxymodel_fetchmore_callback(this, cbval1);
            return;
        }
        KDirSortFilterProxyModel::fetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
        if (kdirsortfilterproxymodel_flags_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int callback_ret = kdirsortfilterproxymodel_flags_callback(this, cbval1);
            return static_cast<Qt::ItemFlags>(callback_ret);
        }
        return KDirSortFilterProxyModel::flags(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex buddy(const QModelIndex& index) const override {
        if (kdirsortfilterproxymodel_buddy_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelIndex* callback_ret = kdirsortfilterproxymodel_buddy_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KDirSortFilterProxyModel::buddy(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
        if (kdirsortfilterproxymodel_match_callback) {
            const QModelIndex& start_ret = start;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&start_ret);
            int cbval2 = role;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = hits;
            int cbval5 = static_cast<int>(flags);
            libqt_list /* of QModelIndex* */ callback_ret = kdirsortfilterproxymodel_match_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            QList<QModelIndex> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QModelIndex** callback_ret_arr = static_cast<QModelIndex**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return KDirSortFilterProxyModel::match(start, role, value, hits, flags);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize span(const QModelIndex& index) const override {
        if (kdirsortfilterproxymodel_span_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QSize* callback_ret = kdirsortfilterproxymodel_span_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KDirSortFilterProxyModel::span(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> mimeTypes() const override {
        if (kdirsortfilterproxymodel_mimetypes_callback) {
            const char** callback_ret = kdirsortfilterproxymodel_mimetypes_callback(this);
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
        return KDirSortFilterProxyModel::mimeTypes();
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (kdirsortfilterproxymodel_supporteddropactions_callback) {
            int callback_ret = kdirsortfilterproxymodel_supporteddropactions_callback(this);
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return KDirSortFilterProxyModel::supportedDropActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool submit() override {
        if (kdirsortfilterproxymodel_submit_callback) {
            bool callback_ret = kdirsortfilterproxymodel_submit_callback(this);
            return callback_ret;
        }
        return KDirSortFilterProxyModel::submit();
    }

    // Virtual method for C ABI access and custom callback
    virtual void revert() override {
        if (kdirsortfilterproxymodel_revert_callback) {
            kdirsortfilterproxymodel_revert_callback(this);
            return;
        }
        KDirSortFilterProxyModel::revert();
    }

    // Virtual method for C ABI access and custom callback
    virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
        if (kdirsortfilterproxymodel_itemdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            libqt_map /* of int to QVariant* */ callback_ret = kdirsortfilterproxymodel_itemdata_callback(this, cbval1);
            QMap<int, QVariant> callback_ret_QMap;
            int* callback_ret_karr = static_cast<int*>(callback_ret.keys);
            QVariant** callback_ret_varr = static_cast<QVariant**>(callback_ret.values);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QMap.insert(static_cast<int>(callback_ret_karr[i]), *(callback_ret_varr[i]));
            }
            return callback_ret_QMap;
        }
        return KDirSortFilterProxyModel::itemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
        if (kdirsortfilterproxymodel_setitemdata_callback) {
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
            bool callback_ret = kdirsortfilterproxymodel_setitemdata_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KDirSortFilterProxyModel::setItemData(index, roles);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool clearItemData(const QModelIndex& index) override {
        if (kdirsortfilterproxymodel_clearitemdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            bool callback_ret = kdirsortfilterproxymodel_clearitemdata_callback(this, cbval1);
            return callback_ret;
        }
        return KDirSortFilterProxyModel::clearItemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
        if (kdirsortfilterproxymodel_candropmimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = kdirsortfilterproxymodel_candropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return KDirSortFilterProxyModel::canDropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDragActions() const override {
        if (kdirsortfilterproxymodel_supporteddragactions_callback) {
            int callback_ret = kdirsortfilterproxymodel_supporteddragactions_callback(this);
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return KDirSortFilterProxyModel::supportedDragActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual QHash<int, QByteArray> roleNames() const override {
        if (kdirsortfilterproxymodel_rolenames_callback) {
            libqt_map /* of int to libqt_string */ callback_ret = kdirsortfilterproxymodel_rolenames_callback(this);
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
        return KDirSortFilterProxyModel::roleNames();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (kdirsortfilterproxymodel_moverows_callback) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceRow;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;
            bool callback_ret = kdirsortfilterproxymodel_moverows_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return KDirSortFilterProxyModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (kdirsortfilterproxymodel_movecolumns_callback) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceColumn;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;
            bool callback_ret = kdirsortfilterproxymodel_movecolumns_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return KDirSortFilterProxyModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
        if (kdirsortfilterproxymodel_multidata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelRoleDataSpan* cbval2 = new QModelRoleDataSpan(roleDataSpan);
            kdirsortfilterproxymodel_multidata_callback(this, cbval1, cbval2);
            return;
        }
        KDirSortFilterProxyModel::multiData(index, roleDataSpan);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetInternalData() override {
        if (kdirsortfilterproxymodel_resetinternaldata_callback) {
            kdirsortfilterproxymodel_resetinternaldata_callback(this);
            return;
        }
        KDirSortFilterProxyModel::resetInternalData();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kdirsortfilterproxymodel_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kdirsortfilterproxymodel_event_callback(this, cbval1);
            return callback_ret;
        }
        return KDirSortFilterProxyModel::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kdirsortfilterproxymodel_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kdirsortfilterproxymodel_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KDirSortFilterProxyModel::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kdirsortfilterproxymodel_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kdirsortfilterproxymodel_timerevent_callback(this, cbval1);
            return;
        }
        KDirSortFilterProxyModel::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kdirsortfilterproxymodel_childevent_callback) {
            QChildEvent* cbval1 = event;
            kdirsortfilterproxymodel_childevent_callback(this, cbval1);
            return;
        }
        KDirSortFilterProxyModel::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kdirsortfilterproxymodel_customevent_callback) {
            QEvent* cbval1 = event;
            kdirsortfilterproxymodel_customevent_callback(this, cbval1);
            return;
        }
        KDirSortFilterProxyModel::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kdirsortfilterproxymodel_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kdirsortfilterproxymodel_connectnotify_callback(this, cbval1);
            return;
        }
        KDirSortFilterProxyModel::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kdirsortfilterproxymodel_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kdirsortfilterproxymodel_disconnectnotify_callback(this, cbval1);
            return;
        }
        KDirSortFilterProxyModel::disconnectNotify(signal);
    }

    // Friend functions
    friend bool KDirSortFilterProxyModel_SuperSubSortLessThan(const KDirSortFilterProxyModel* self, const QModelIndex* left, const QModelIndex* right);
    friend bool KDirSortFilterProxyModel_SuperLessThan(const KDirSortFilterProxyModel* self, const QModelIndex* left, const QModelIndex* right);
    friend int KDirSortFilterProxyModel_SuperCompareCategories(const KDirSortFilterProxyModel* self, const QModelIndex* left, const QModelIndex* right);
    friend bool KDirSortFilterProxyModel_SuperFilterAcceptsRow(const KDirSortFilterProxyModel* self, int source_row, const QModelIndex* source_parent);
    friend bool KDirSortFilterProxyModel_SuperFilterAcceptsColumn(const KDirSortFilterProxyModel* self, int source_column, const QModelIndex* source_parent);
    friend void KDirSortFilterProxyModel_SuperResetInternalData(KDirSortFilterProxyModel* self);
    friend void KDirSortFilterProxyModel_SuperTimerEvent(KDirSortFilterProxyModel* self, QTimerEvent* event);
    friend void KDirSortFilterProxyModel_SuperChildEvent(KDirSortFilterProxyModel* self, QChildEvent* event);
    friend void KDirSortFilterProxyModel_SuperCustomEvent(KDirSortFilterProxyModel* self, QEvent* event);
    friend void KDirSortFilterProxyModel_SuperConnectNotify(KDirSortFilterProxyModel* self, const QMetaMethod* signal);
    friend void KDirSortFilterProxyModel_SuperDisconnectNotify(KDirSortFilterProxyModel* self, const QMetaMethod* signal);
};

#endif
