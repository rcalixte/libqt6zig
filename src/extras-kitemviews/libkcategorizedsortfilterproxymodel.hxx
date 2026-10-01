#pragma once
#ifndef EXTRAS_KITEMVIEWS_LIBKCATEGORIZEDSORTFILTERPROXYMODEL_HXX
#define EXTRAS_KITEMVIEWS_LIBKCATEGORIZEDSORTFILTERPROXYMODEL_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KCategorizedSortFilterProxyModel
class VirtualKCategorizedSortFilterProxyModel final : public KCategorizedSortFilterProxyModel {
  public:
    // Virtual class public types (including callbacks and access types)
    using KCategorizedSortFilterProxyModel_MetaObject_Callback = QMetaObject* (*)(const KCategorizedSortFilterProxyModel*);
    using KCategorizedSortFilterProxyModel_Metacast_Callback = void* (*)(KCategorizedSortFilterProxyModel*, const char*);
    using KCategorizedSortFilterProxyModel_Metacall_Callback = int (*)(KCategorizedSortFilterProxyModel*, int, int, void**);
    using KCategorizedSortFilterProxyModel_Sort_Callback = void (*)(KCategorizedSortFilterProxyModel*, int, int);
    using KCategorizedSortFilterProxyModel_LessThan_Callback = bool (*)(const KCategorizedSortFilterProxyModel*, QModelIndex*, QModelIndex*);
    using KCategorizedSortFilterProxyModel_SubSortLessThan_Callback = bool (*)(const KCategorizedSortFilterProxyModel*, QModelIndex*, QModelIndex*);
    using KCategorizedSortFilterProxyModel_CompareCategories_Callback = int (*)(const KCategorizedSortFilterProxyModel*, QModelIndex*, QModelIndex*);
    using KCategorizedSortFilterProxyModel_SetSourceModel_Callback = void (*)(KCategorizedSortFilterProxyModel*, QAbstractItemModel*);
    using KCategorizedSortFilterProxyModel_MapToSource_Callback = QModelIndex* (*)(const KCategorizedSortFilterProxyModel*, QModelIndex*);
    using KCategorizedSortFilterProxyModel_MapFromSource_Callback = QModelIndex* (*)(const KCategorizedSortFilterProxyModel*, QModelIndex*);
    using KCategorizedSortFilterProxyModel_MapSelectionToSource_Callback = QItemSelection* (*)(const KCategorizedSortFilterProxyModel*, QItemSelection*);
    using KCategorizedSortFilterProxyModel_MapSelectionFromSource_Callback = QItemSelection* (*)(const KCategorizedSortFilterProxyModel*, QItemSelection*);
    using KCategorizedSortFilterProxyModel_FilterAcceptsRow_Callback = bool (*)(const KCategorizedSortFilterProxyModel*, int, QModelIndex*);
    using KCategorizedSortFilterProxyModel_FilterAcceptsColumn_Callback = bool (*)(const KCategorizedSortFilterProxyModel*, int, QModelIndex*);
    using KCategorizedSortFilterProxyModel_Index_Callback = QModelIndex* (*)(const KCategorizedSortFilterProxyModel*, int, int, QModelIndex*);
    using KCategorizedSortFilterProxyModel_Parent_Callback = QModelIndex* (*)(const KCategorizedSortFilterProxyModel*, QModelIndex*);
    using KCategorizedSortFilterProxyModel_Sibling_Callback = QModelIndex* (*)(const KCategorizedSortFilterProxyModel*, int, int, QModelIndex*);
    using KCategorizedSortFilterProxyModel_RowCount_Callback = int (*)(const KCategorizedSortFilterProxyModel*, QModelIndex*);
    using KCategorizedSortFilterProxyModel_ColumnCount_Callback = int (*)(const KCategorizedSortFilterProxyModel*, QModelIndex*);
    using KCategorizedSortFilterProxyModel_HasChildren_Callback = bool (*)(const KCategorizedSortFilterProxyModel*, QModelIndex*);
    using KCategorizedSortFilterProxyModel_Data_Callback = QVariant* (*)(const KCategorizedSortFilterProxyModel*, QModelIndex*, int);
    using KCategorizedSortFilterProxyModel_SetData_Callback = bool (*)(KCategorizedSortFilterProxyModel*, QModelIndex*, QVariant*, int);
    using KCategorizedSortFilterProxyModel_HeaderData_Callback = QVariant* (*)(const KCategorizedSortFilterProxyModel*, int, int, int);
    using KCategorizedSortFilterProxyModel_SetHeaderData_Callback = bool (*)(KCategorizedSortFilterProxyModel*, int, int, QVariant*, int);
    using KCategorizedSortFilterProxyModel_MimeData_Callback = QMimeData* (*)(const KCategorizedSortFilterProxyModel*, libqt_list /* of QModelIndex* */);
    using KCategorizedSortFilterProxyModel_DropMimeData_Callback = bool (*)(KCategorizedSortFilterProxyModel*, QMimeData*, int, int, int, QModelIndex*);
    using KCategorizedSortFilterProxyModel_InsertRows_Callback = bool (*)(KCategorizedSortFilterProxyModel*, int, int, QModelIndex*);
    using KCategorizedSortFilterProxyModel_InsertColumns_Callback = bool (*)(KCategorizedSortFilterProxyModel*, int, int, QModelIndex*);
    using KCategorizedSortFilterProxyModel_RemoveRows_Callback = bool (*)(KCategorizedSortFilterProxyModel*, int, int, QModelIndex*);
    using KCategorizedSortFilterProxyModel_RemoveColumns_Callback = bool (*)(KCategorizedSortFilterProxyModel*, int, int, QModelIndex*);
    using KCategorizedSortFilterProxyModel_FetchMore_Callback = void (*)(KCategorizedSortFilterProxyModel*, QModelIndex*);
    using KCategorizedSortFilterProxyModel_CanFetchMore_Callback = bool (*)(const KCategorizedSortFilterProxyModel*, QModelIndex*);
    using KCategorizedSortFilterProxyModel_Flags_Callback = int (*)(const KCategorizedSortFilterProxyModel*, QModelIndex*);
    using KCategorizedSortFilterProxyModel_Buddy_Callback = QModelIndex* (*)(const KCategorizedSortFilterProxyModel*, QModelIndex*);
    using KCategorizedSortFilterProxyModel_Match_Callback = libqt_list /* of QModelIndex* */ (*)(const KCategorizedSortFilterProxyModel*, QModelIndex*, int, QVariant*, int, int);
    using KCategorizedSortFilterProxyModel_Span_Callback = QSize* (*)(const KCategorizedSortFilterProxyModel*, QModelIndex*);
    using KCategorizedSortFilterProxyModel_MimeTypes_Callback = const char** (*)(const KCategorizedSortFilterProxyModel*);
    using KCategorizedSortFilterProxyModel_SupportedDropActions_Callback = int (*)(const KCategorizedSortFilterProxyModel*);
    using KCategorizedSortFilterProxyModel_Submit_Callback = bool (*)(KCategorizedSortFilterProxyModel*);
    using KCategorizedSortFilterProxyModel_Revert_Callback = void (*)(KCategorizedSortFilterProxyModel*);
    using KCategorizedSortFilterProxyModel_ItemData_Callback = libqt_map /* of int to QVariant* */ (*)(const KCategorizedSortFilterProxyModel*, QModelIndex*);
    using KCategorizedSortFilterProxyModel_SetItemData_Callback = bool (*)(KCategorizedSortFilterProxyModel*, QModelIndex*, libqt_map /* of int to QVariant* */);
    using KCategorizedSortFilterProxyModel_ClearItemData_Callback = bool (*)(KCategorizedSortFilterProxyModel*, QModelIndex*);
    using KCategorizedSortFilterProxyModel_CanDropMimeData_Callback = bool (*)(const KCategorizedSortFilterProxyModel*, QMimeData*, int, int, int, QModelIndex*);
    using KCategorizedSortFilterProxyModel_SupportedDragActions_Callback = int (*)(const KCategorizedSortFilterProxyModel*);
    using KCategorizedSortFilterProxyModel_RoleNames_Callback = libqt_map /* of int to libqt_string */ (*)(const KCategorizedSortFilterProxyModel*);
    using KCategorizedSortFilterProxyModel_MoveRows_Callback = bool (*)(KCategorizedSortFilterProxyModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KCategorizedSortFilterProxyModel_MoveColumns_Callback = bool (*)(KCategorizedSortFilterProxyModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KCategorizedSortFilterProxyModel_MultiData_Callback = void (*)(const KCategorizedSortFilterProxyModel*, QModelIndex*, QModelRoleDataSpan*);
    using KCategorizedSortFilterProxyModel_ResetInternalData_Callback = void (*)(KCategorizedSortFilterProxyModel*);
    using KCategorizedSortFilterProxyModel_Event_Callback = bool (*)(KCategorizedSortFilterProxyModel*, QEvent*);
    using KCategorizedSortFilterProxyModel_EventFilter_Callback = bool (*)(KCategorizedSortFilterProxyModel*, QObject*, QEvent*);
    using KCategorizedSortFilterProxyModel_TimerEvent_Callback = void (*)(KCategorizedSortFilterProxyModel*, QTimerEvent*);
    using KCategorizedSortFilterProxyModel_ChildEvent_Callback = void (*)(KCategorizedSortFilterProxyModel*, QChildEvent*);
    using KCategorizedSortFilterProxyModel_CustomEvent_Callback = void (*)(KCategorizedSortFilterProxyModel*, QEvent*);
    using KCategorizedSortFilterProxyModel_ConnectNotify_Callback = void (*)(KCategorizedSortFilterProxyModel*, QMetaMethod*);
    using KCategorizedSortFilterProxyModel_DisconnectNotify_Callback = void (*)(KCategorizedSortFilterProxyModel*, QMetaMethod*);
    using KCategorizedSortFilterProxyModel::beginInsertColumns;
    using KCategorizedSortFilterProxyModel::beginInsertRows;
    using KCategorizedSortFilterProxyModel::beginMoveColumns;
    using KCategorizedSortFilterProxyModel::beginMoveRows;
    using KCategorizedSortFilterProxyModel::beginRemoveColumns;
    using KCategorizedSortFilterProxyModel::beginRemoveRows;
    using KCategorizedSortFilterProxyModel::beginResetModel;
    using KCategorizedSortFilterProxyModel::changePersistentIndex;
    using KCategorizedSortFilterProxyModel::changePersistentIndexList;
    using KCategorizedSortFilterProxyModel::createIndex;
    using KCategorizedSortFilterProxyModel::createSourceIndex;
    using KCategorizedSortFilterProxyModel::decodeData;
    using KCategorizedSortFilterProxyModel::encodeData;
    using KCategorizedSortFilterProxyModel::endInsertColumns;
    using KCategorizedSortFilterProxyModel::endInsertRows;
    using KCategorizedSortFilterProxyModel::endMoveColumns;
    using KCategorizedSortFilterProxyModel::endMoveRows;
    using KCategorizedSortFilterProxyModel::endRemoveColumns;
    using KCategorizedSortFilterProxyModel::endRemoveRows;
    using KCategorizedSortFilterProxyModel::endResetModel;
    using KCategorizedSortFilterProxyModel::invalidateColumnsFilter;
    using KCategorizedSortFilterProxyModel::invalidateFilter;
    using KCategorizedSortFilterProxyModel::invalidateRowsFilter;
    using KCategorizedSortFilterProxyModel::isSignalConnected;
    using KCategorizedSortFilterProxyModel::persistentIndexList;
    using KCategorizedSortFilterProxyModel::receivers;
    using KCategorizedSortFilterProxyModel::sender;
    using KCategorizedSortFilterProxyModel::senderSignalIndex;

    // Instance callback storage
    KCategorizedSortFilterProxyModel_MetaObject_Callback kcategorizedsortfilterproxymodel_metaobject_callback = nullptr;
    KCategorizedSortFilterProxyModel_Metacast_Callback kcategorizedsortfilterproxymodel_metacast_callback = nullptr;
    KCategorizedSortFilterProxyModel_Metacall_Callback kcategorizedsortfilterproxymodel_metacall_callback = nullptr;
    KCategorizedSortFilterProxyModel_Sort_Callback kcategorizedsortfilterproxymodel_sort_callback = nullptr;
    KCategorizedSortFilterProxyModel_LessThan_Callback kcategorizedsortfilterproxymodel_lessthan_callback = nullptr;
    KCategorizedSortFilterProxyModel_SubSortLessThan_Callback kcategorizedsortfilterproxymodel_subsortlessthan_callback = nullptr;
    KCategorizedSortFilterProxyModel_CompareCategories_Callback kcategorizedsortfilterproxymodel_comparecategories_callback = nullptr;
    KCategorizedSortFilterProxyModel_SetSourceModel_Callback kcategorizedsortfilterproxymodel_setsourcemodel_callback = nullptr;
    KCategorizedSortFilterProxyModel_MapToSource_Callback kcategorizedsortfilterproxymodel_maptosource_callback = nullptr;
    KCategorizedSortFilterProxyModel_MapFromSource_Callback kcategorizedsortfilterproxymodel_mapfromsource_callback = nullptr;
    KCategorizedSortFilterProxyModel_MapSelectionToSource_Callback kcategorizedsortfilterproxymodel_mapselectiontosource_callback = nullptr;
    KCategorizedSortFilterProxyModel_MapSelectionFromSource_Callback kcategorizedsortfilterproxymodel_mapselectionfromsource_callback = nullptr;
    KCategorizedSortFilterProxyModel_FilterAcceptsRow_Callback kcategorizedsortfilterproxymodel_filteracceptsrow_callback = nullptr;
    KCategorizedSortFilterProxyModel_FilterAcceptsColumn_Callback kcategorizedsortfilterproxymodel_filteracceptscolumn_callback = nullptr;
    KCategorizedSortFilterProxyModel_Index_Callback kcategorizedsortfilterproxymodel_index_callback = nullptr;
    KCategorizedSortFilterProxyModel_Parent_Callback kcategorizedsortfilterproxymodel_parent_callback = nullptr;
    KCategorizedSortFilterProxyModel_Sibling_Callback kcategorizedsortfilterproxymodel_sibling_callback = nullptr;
    KCategorizedSortFilterProxyModel_RowCount_Callback kcategorizedsortfilterproxymodel_rowcount_callback = nullptr;
    KCategorizedSortFilterProxyModel_ColumnCount_Callback kcategorizedsortfilterproxymodel_columncount_callback = nullptr;
    KCategorizedSortFilterProxyModel_HasChildren_Callback kcategorizedsortfilterproxymodel_haschildren_callback = nullptr;
    KCategorizedSortFilterProxyModel_Data_Callback kcategorizedsortfilterproxymodel_data_callback = nullptr;
    KCategorizedSortFilterProxyModel_SetData_Callback kcategorizedsortfilterproxymodel_setdata_callback = nullptr;
    KCategorizedSortFilterProxyModel_HeaderData_Callback kcategorizedsortfilterproxymodel_headerdata_callback = nullptr;
    KCategorizedSortFilterProxyModel_SetHeaderData_Callback kcategorizedsortfilterproxymodel_setheaderdata_callback = nullptr;
    KCategorizedSortFilterProxyModel_MimeData_Callback kcategorizedsortfilterproxymodel_mimedata_callback = nullptr;
    KCategorizedSortFilterProxyModel_DropMimeData_Callback kcategorizedsortfilterproxymodel_dropmimedata_callback = nullptr;
    KCategorizedSortFilterProxyModel_InsertRows_Callback kcategorizedsortfilterproxymodel_insertrows_callback = nullptr;
    KCategorizedSortFilterProxyModel_InsertColumns_Callback kcategorizedsortfilterproxymodel_insertcolumns_callback = nullptr;
    KCategorizedSortFilterProxyModel_RemoveRows_Callback kcategorizedsortfilterproxymodel_removerows_callback = nullptr;
    KCategorizedSortFilterProxyModel_RemoveColumns_Callback kcategorizedsortfilterproxymodel_removecolumns_callback = nullptr;
    KCategorizedSortFilterProxyModel_FetchMore_Callback kcategorizedsortfilterproxymodel_fetchmore_callback = nullptr;
    KCategorizedSortFilterProxyModel_CanFetchMore_Callback kcategorizedsortfilterproxymodel_canfetchmore_callback = nullptr;
    KCategorizedSortFilterProxyModel_Flags_Callback kcategorizedsortfilterproxymodel_flags_callback = nullptr;
    KCategorizedSortFilterProxyModel_Buddy_Callback kcategorizedsortfilterproxymodel_buddy_callback = nullptr;
    KCategorizedSortFilterProxyModel_Match_Callback kcategorizedsortfilterproxymodel_match_callback = nullptr;
    KCategorizedSortFilterProxyModel_Span_Callback kcategorizedsortfilterproxymodel_span_callback = nullptr;
    KCategorizedSortFilterProxyModel_MimeTypes_Callback kcategorizedsortfilterproxymodel_mimetypes_callback = nullptr;
    KCategorizedSortFilterProxyModel_SupportedDropActions_Callback kcategorizedsortfilterproxymodel_supporteddropactions_callback = nullptr;
    KCategorizedSortFilterProxyModel_Submit_Callback kcategorizedsortfilterproxymodel_submit_callback = nullptr;
    KCategorizedSortFilterProxyModel_Revert_Callback kcategorizedsortfilterproxymodel_revert_callback = nullptr;
    KCategorizedSortFilterProxyModel_ItemData_Callback kcategorizedsortfilterproxymodel_itemdata_callback = nullptr;
    KCategorizedSortFilterProxyModel_SetItemData_Callback kcategorizedsortfilterproxymodel_setitemdata_callback = nullptr;
    KCategorizedSortFilterProxyModel_ClearItemData_Callback kcategorizedsortfilterproxymodel_clearitemdata_callback = nullptr;
    KCategorizedSortFilterProxyModel_CanDropMimeData_Callback kcategorizedsortfilterproxymodel_candropmimedata_callback = nullptr;
    KCategorizedSortFilterProxyModel_SupportedDragActions_Callback kcategorizedsortfilterproxymodel_supporteddragactions_callback = nullptr;
    KCategorizedSortFilterProxyModel_RoleNames_Callback kcategorizedsortfilterproxymodel_rolenames_callback = nullptr;
    KCategorizedSortFilterProxyModel_MoveRows_Callback kcategorizedsortfilterproxymodel_moverows_callback = nullptr;
    KCategorizedSortFilterProxyModel_MoveColumns_Callback kcategorizedsortfilterproxymodel_movecolumns_callback = nullptr;
    KCategorizedSortFilterProxyModel_MultiData_Callback kcategorizedsortfilterproxymodel_multidata_callback = nullptr;
    KCategorizedSortFilterProxyModel_ResetInternalData_Callback kcategorizedsortfilterproxymodel_resetinternaldata_callback = nullptr;
    KCategorizedSortFilterProxyModel_Event_Callback kcategorizedsortfilterproxymodel_event_callback = nullptr;
    KCategorizedSortFilterProxyModel_EventFilter_Callback kcategorizedsortfilterproxymodel_eventfilter_callback = nullptr;
    KCategorizedSortFilterProxyModel_TimerEvent_Callback kcategorizedsortfilterproxymodel_timerevent_callback = nullptr;
    KCategorizedSortFilterProxyModel_ChildEvent_Callback kcategorizedsortfilterproxymodel_childevent_callback = nullptr;
    KCategorizedSortFilterProxyModel_CustomEvent_Callback kcategorizedsortfilterproxymodel_customevent_callback = nullptr;
    KCategorizedSortFilterProxyModel_ConnectNotify_Callback kcategorizedsortfilterproxymodel_connectnotify_callback = nullptr;
    KCategorizedSortFilterProxyModel_DisconnectNotify_Callback kcategorizedsortfilterproxymodel_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KCategorizedSortFilterProxyModel {
        using KCategorizedSortFilterProxyModel::childEvent;
        using KCategorizedSortFilterProxyModel::compareCategories;
        using KCategorizedSortFilterProxyModel::connectNotify;
        using KCategorizedSortFilterProxyModel::customEvent;
        using KCategorizedSortFilterProxyModel::disconnectNotify;
        using KCategorizedSortFilterProxyModel::filterAcceptsColumn;
        using KCategorizedSortFilterProxyModel::filterAcceptsRow;
        using KCategorizedSortFilterProxyModel::lessThan;
        using KCategorizedSortFilterProxyModel::resetInternalData;
        using KCategorizedSortFilterProxyModel::subSortLessThan;
        using KCategorizedSortFilterProxyModel::timerEvent;
    };

    VirtualKCategorizedSortFilterProxyModel() : KCategorizedSortFilterProxyModel() {};
    VirtualKCategorizedSortFilterProxyModel(QObject* parent) : KCategorizedSortFilterProxyModel(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kcategorizedsortfilterproxymodel_metaobject_callback) {
            QMetaObject* callback_ret = kcategorizedsortfilterproxymodel_metaobject_callback(this);
            return callback_ret;
        }
        return KCategorizedSortFilterProxyModel::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kcategorizedsortfilterproxymodel_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kcategorizedsortfilterproxymodel_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KCategorizedSortFilterProxyModel::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kcategorizedsortfilterproxymodel_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kcategorizedsortfilterproxymodel_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KCategorizedSortFilterProxyModel::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void sort(int column, Qt::SortOrder order) override {
        if (kcategorizedsortfilterproxymodel_sort_callback) {
            int cbval1 = column;
            int cbval2 = static_cast<int>(order);
            kcategorizedsortfilterproxymodel_sort_callback(this, cbval1, cbval2);
            return;
        }
        KCategorizedSortFilterProxyModel::sort(column, order);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool lessThan(const QModelIndex& left, const QModelIndex& right) const override {
        if (kcategorizedsortfilterproxymodel_lessthan_callback) {
            const QModelIndex& left_ret = left;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&left_ret);
            const QModelIndex& right_ret = right;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&right_ret);
            bool callback_ret = kcategorizedsortfilterproxymodel_lessthan_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KCategorizedSortFilterProxyModel::lessThan(left, right);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool subSortLessThan(const QModelIndex& left, const QModelIndex& right) const override {
        if (kcategorizedsortfilterproxymodel_subsortlessthan_callback) {
            const QModelIndex& left_ret = left;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&left_ret);
            const QModelIndex& right_ret = right;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&right_ret);
            bool callback_ret = kcategorizedsortfilterproxymodel_subsortlessthan_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KCategorizedSortFilterProxyModel::subSortLessThan(left, right);
    }

    // Virtual method for C ABI access and custom callback
    virtual int compareCategories(const QModelIndex& left, const QModelIndex& right) const override {
        if (kcategorizedsortfilterproxymodel_comparecategories_callback) {
            const QModelIndex& left_ret = left;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&left_ret);
            const QModelIndex& right_ret = right;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&right_ret);
            int callback_ret = kcategorizedsortfilterproxymodel_comparecategories_callback(this, cbval1, cbval2);
            return static_cast<int>(callback_ret);
        }
        return KCategorizedSortFilterProxyModel::compareCategories(left, right);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSourceModel(QAbstractItemModel* sourceModel) override {
        if (kcategorizedsortfilterproxymodel_setsourcemodel_callback) {
            QAbstractItemModel* cbval1 = sourceModel;
            kcategorizedsortfilterproxymodel_setsourcemodel_callback(this, cbval1);
            return;
        }
        KCategorizedSortFilterProxyModel::setSourceModel(sourceModel);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex mapToSource(const QModelIndex& proxyIndex) const override {
        if (kcategorizedsortfilterproxymodel_maptosource_callback) {
            const QModelIndex& proxyIndex_ret = proxyIndex;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&proxyIndex_ret);
            QModelIndex* callback_ret = kcategorizedsortfilterproxymodel_maptosource_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KCategorizedSortFilterProxyModel::mapToSource(proxyIndex);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex mapFromSource(const QModelIndex& sourceIndex) const override {
        if (kcategorizedsortfilterproxymodel_mapfromsource_callback) {
            const QModelIndex& sourceIndex_ret = sourceIndex;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceIndex_ret);
            QModelIndex* callback_ret = kcategorizedsortfilterproxymodel_mapfromsource_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KCategorizedSortFilterProxyModel::mapFromSource(sourceIndex);
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelection mapSelectionToSource(const QItemSelection& proxySelection) const override {
        if (kcategorizedsortfilterproxymodel_mapselectiontosource_callback) {
            const QItemSelection& proxySelection_ret = proxySelection;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&proxySelection_ret);
            QItemSelection* callback_ret = kcategorizedsortfilterproxymodel_mapselectiontosource_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KCategorizedSortFilterProxyModel::mapSelectionToSource(proxySelection);
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelection mapSelectionFromSource(const QItemSelection& sourceSelection) const override {
        if (kcategorizedsortfilterproxymodel_mapselectionfromsource_callback) {
            const QItemSelection& sourceSelection_ret = sourceSelection;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&sourceSelection_ret);
            QItemSelection* callback_ret = kcategorizedsortfilterproxymodel_mapselectionfromsource_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KCategorizedSortFilterProxyModel::mapSelectionFromSource(sourceSelection);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool filterAcceptsRow(int source_row, const QModelIndex& source_parent) const override {
        if (kcategorizedsortfilterproxymodel_filteracceptsrow_callback) {
            int cbval1 = source_row;
            const QModelIndex& source_parent_ret = source_parent;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&source_parent_ret);
            bool callback_ret = kcategorizedsortfilterproxymodel_filteracceptsrow_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KCategorizedSortFilterProxyModel::filterAcceptsRow(source_row, source_parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool filterAcceptsColumn(int source_column, const QModelIndex& source_parent) const override {
        if (kcategorizedsortfilterproxymodel_filteracceptscolumn_callback) {
            int cbval1 = source_column;
            const QModelIndex& source_parent_ret = source_parent;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&source_parent_ret);
            bool callback_ret = kcategorizedsortfilterproxymodel_filteracceptscolumn_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KCategorizedSortFilterProxyModel::filterAcceptsColumn(source_column, source_parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
        if (kcategorizedsortfilterproxymodel_index_callback) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            QModelIndex* callback_ret = kcategorizedsortfilterproxymodel_index_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KCategorizedSortFilterProxyModel::index(row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex parent(const QModelIndex& child) const override {
        if (kcategorizedsortfilterproxymodel_parent_callback) {
            const QModelIndex& child_ret = child;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&child_ret);
            QModelIndex* callback_ret = kcategorizedsortfilterproxymodel_parent_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KCategorizedSortFilterProxyModel::parent(child);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
        if (kcategorizedsortfilterproxymodel_sibling_callback) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& idx_ret = idx;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&idx_ret);
            QModelIndex* callback_ret = kcategorizedsortfilterproxymodel_sibling_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KCategorizedSortFilterProxyModel::sibling(row, column, idx);
    }

    // Virtual method for C ABI access and custom callback
    virtual int rowCount(const QModelIndex& parent) const override {
        if (kcategorizedsortfilterproxymodel_rowcount_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int callback_ret = kcategorizedsortfilterproxymodel_rowcount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KCategorizedSortFilterProxyModel::rowCount(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual int columnCount(const QModelIndex& parent) const override {
        if (kcategorizedsortfilterproxymodel_columncount_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int callback_ret = kcategorizedsortfilterproxymodel_columncount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KCategorizedSortFilterProxyModel::columnCount(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasChildren(const QModelIndex& parent) const override {
        if (kcategorizedsortfilterproxymodel_haschildren_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = kcategorizedsortfilterproxymodel_haschildren_callback(this, cbval1);
            return callback_ret;
        }
        return KCategorizedSortFilterProxyModel::hasChildren(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(const QModelIndex& index, int role) const override {
        if (kcategorizedsortfilterproxymodel_data_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = role;
            QVariant* callback_ret = kcategorizedsortfilterproxymodel_data_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KCategorizedSortFilterProxyModel::data(index, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
        if (kcategorizedsortfilterproxymodel_setdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            int cbval3 = role;
            bool callback_ret = kcategorizedsortfilterproxymodel_setdata_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KCategorizedSortFilterProxyModel::setData(index, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
        if (kcategorizedsortfilterproxymodel_headerdata_callback) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            int cbval3 = role;
            QVariant* callback_ret = kcategorizedsortfilterproxymodel_headerdata_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KCategorizedSortFilterProxyModel::headerData(section, orientation, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
        if (kcategorizedsortfilterproxymodel_setheaderdata_callback) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = role;
            bool callback_ret = kcategorizedsortfilterproxymodel_setheaderdata_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        }
        return KCategorizedSortFilterProxyModel::setHeaderData(section, orientation, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* mimeData(const QList<QModelIndex>& indexes) const override {
        if (kcategorizedsortfilterproxymodel_mimedata_callback) {
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
            QMimeData* callback_ret = kcategorizedsortfilterproxymodel_mimedata_callback(this, cbval1);
            free(indexes_arr);
            return callback_ret;
        }
        return KCategorizedSortFilterProxyModel::mimeData(indexes);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
        if (kcategorizedsortfilterproxymodel_dropmimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = kcategorizedsortfilterproxymodel_dropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return KCategorizedSortFilterProxyModel::dropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
        if (kcategorizedsortfilterproxymodel_insertrows_callback) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = kcategorizedsortfilterproxymodel_insertrows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KCategorizedSortFilterProxyModel::insertRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
        if (kcategorizedsortfilterproxymodel_insertcolumns_callback) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = kcategorizedsortfilterproxymodel_insertcolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KCategorizedSortFilterProxyModel::insertColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
        if (kcategorizedsortfilterproxymodel_removerows_callback) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = kcategorizedsortfilterproxymodel_removerows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KCategorizedSortFilterProxyModel::removeRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
        if (kcategorizedsortfilterproxymodel_removecolumns_callback) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = kcategorizedsortfilterproxymodel_removecolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KCategorizedSortFilterProxyModel::removeColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void fetchMore(const QModelIndex& parent) override {
        if (kcategorizedsortfilterproxymodel_fetchmore_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            kcategorizedsortfilterproxymodel_fetchmore_callback(this, cbval1);
            return;
        }
        KCategorizedSortFilterProxyModel::fetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canFetchMore(const QModelIndex& parent) const override {
        if (kcategorizedsortfilterproxymodel_canfetchmore_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = kcategorizedsortfilterproxymodel_canfetchmore_callback(this, cbval1);
            return callback_ret;
        }
        return KCategorizedSortFilterProxyModel::canFetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
        if (kcategorizedsortfilterproxymodel_flags_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int callback_ret = kcategorizedsortfilterproxymodel_flags_callback(this, cbval1);
            return static_cast<Qt::ItemFlags>(callback_ret);
        }
        return KCategorizedSortFilterProxyModel::flags(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex buddy(const QModelIndex& index) const override {
        if (kcategorizedsortfilterproxymodel_buddy_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelIndex* callback_ret = kcategorizedsortfilterproxymodel_buddy_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KCategorizedSortFilterProxyModel::buddy(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
        if (kcategorizedsortfilterproxymodel_match_callback) {
            const QModelIndex& start_ret = start;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&start_ret);
            int cbval2 = role;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = hits;
            int cbval5 = static_cast<int>(flags);
            libqt_list /* of QModelIndex* */ callback_ret = kcategorizedsortfilterproxymodel_match_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            QList<QModelIndex> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QModelIndex** callback_ret_arr = static_cast<QModelIndex**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return KCategorizedSortFilterProxyModel::match(start, role, value, hits, flags);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize span(const QModelIndex& index) const override {
        if (kcategorizedsortfilterproxymodel_span_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QSize* callback_ret = kcategorizedsortfilterproxymodel_span_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KCategorizedSortFilterProxyModel::span(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> mimeTypes() const override {
        if (kcategorizedsortfilterproxymodel_mimetypes_callback) {
            const char** callback_ret = kcategorizedsortfilterproxymodel_mimetypes_callback(this);
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
        return KCategorizedSortFilterProxyModel::mimeTypes();
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (kcategorizedsortfilterproxymodel_supporteddropactions_callback) {
            int callback_ret = kcategorizedsortfilterproxymodel_supporteddropactions_callback(this);
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return KCategorizedSortFilterProxyModel::supportedDropActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool submit() override {
        if (kcategorizedsortfilterproxymodel_submit_callback) {
            bool callback_ret = kcategorizedsortfilterproxymodel_submit_callback(this);
            return callback_ret;
        }
        return KCategorizedSortFilterProxyModel::submit();
    }

    // Virtual method for C ABI access and custom callback
    virtual void revert() override {
        if (kcategorizedsortfilterproxymodel_revert_callback) {
            kcategorizedsortfilterproxymodel_revert_callback(this);
            return;
        }
        KCategorizedSortFilterProxyModel::revert();
    }

    // Virtual method for C ABI access and custom callback
    virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
        if (kcategorizedsortfilterproxymodel_itemdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            libqt_map /* of int to QVariant* */ callback_ret = kcategorizedsortfilterproxymodel_itemdata_callback(this, cbval1);
            QMap<int, QVariant> callback_ret_QMap;
            int* callback_ret_karr = static_cast<int*>(callback_ret.keys);
            QVariant** callback_ret_varr = static_cast<QVariant**>(callback_ret.values);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QMap.insert(static_cast<int>(callback_ret_karr[i]), *(callback_ret_varr[i]));
            }
            return callback_ret_QMap;
        }
        return KCategorizedSortFilterProxyModel::itemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
        if (kcategorizedsortfilterproxymodel_setitemdata_callback) {
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
            bool callback_ret = kcategorizedsortfilterproxymodel_setitemdata_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KCategorizedSortFilterProxyModel::setItemData(index, roles);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool clearItemData(const QModelIndex& index) override {
        if (kcategorizedsortfilterproxymodel_clearitemdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            bool callback_ret = kcategorizedsortfilterproxymodel_clearitemdata_callback(this, cbval1);
            return callback_ret;
        }
        return KCategorizedSortFilterProxyModel::clearItemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
        if (kcategorizedsortfilterproxymodel_candropmimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = kcategorizedsortfilterproxymodel_candropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return KCategorizedSortFilterProxyModel::canDropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDragActions() const override {
        if (kcategorizedsortfilterproxymodel_supporteddragactions_callback) {
            int callback_ret = kcategorizedsortfilterproxymodel_supporteddragactions_callback(this);
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return KCategorizedSortFilterProxyModel::supportedDragActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual QHash<int, QByteArray> roleNames() const override {
        if (kcategorizedsortfilterproxymodel_rolenames_callback) {
            libqt_map /* of int to libqt_string */ callback_ret = kcategorizedsortfilterproxymodel_rolenames_callback(this);
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
        return KCategorizedSortFilterProxyModel::roleNames();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (kcategorizedsortfilterproxymodel_moverows_callback) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceRow;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;
            bool callback_ret = kcategorizedsortfilterproxymodel_moverows_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return KCategorizedSortFilterProxyModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (kcategorizedsortfilterproxymodel_movecolumns_callback) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceColumn;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;
            bool callback_ret = kcategorizedsortfilterproxymodel_movecolumns_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return KCategorizedSortFilterProxyModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
        if (kcategorizedsortfilterproxymodel_multidata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelRoleDataSpan* cbval2 = new QModelRoleDataSpan(roleDataSpan);
            kcategorizedsortfilterproxymodel_multidata_callback(this, cbval1, cbval2);
            return;
        }
        KCategorizedSortFilterProxyModel::multiData(index, roleDataSpan);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetInternalData() override {
        if (kcategorizedsortfilterproxymodel_resetinternaldata_callback) {
            kcategorizedsortfilterproxymodel_resetinternaldata_callback(this);
            return;
        }
        KCategorizedSortFilterProxyModel::resetInternalData();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kcategorizedsortfilterproxymodel_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kcategorizedsortfilterproxymodel_event_callback(this, cbval1);
            return callback_ret;
        }
        return KCategorizedSortFilterProxyModel::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kcategorizedsortfilterproxymodel_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kcategorizedsortfilterproxymodel_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KCategorizedSortFilterProxyModel::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kcategorizedsortfilterproxymodel_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kcategorizedsortfilterproxymodel_timerevent_callback(this, cbval1);
            return;
        }
        KCategorizedSortFilterProxyModel::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kcategorizedsortfilterproxymodel_childevent_callback) {
            QChildEvent* cbval1 = event;
            kcategorizedsortfilterproxymodel_childevent_callback(this, cbval1);
            return;
        }
        KCategorizedSortFilterProxyModel::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kcategorizedsortfilterproxymodel_customevent_callback) {
            QEvent* cbval1 = event;
            kcategorizedsortfilterproxymodel_customevent_callback(this, cbval1);
            return;
        }
        KCategorizedSortFilterProxyModel::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kcategorizedsortfilterproxymodel_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kcategorizedsortfilterproxymodel_connectnotify_callback(this, cbval1);
            return;
        }
        KCategorizedSortFilterProxyModel::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kcategorizedsortfilterproxymodel_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kcategorizedsortfilterproxymodel_disconnectnotify_callback(this, cbval1);
            return;
        }
        KCategorizedSortFilterProxyModel::disconnectNotify(signal);
    }

    // Friend functions
    friend bool KCategorizedSortFilterProxyModel_SuperLessThan(const KCategorizedSortFilterProxyModel* self, const QModelIndex* left, const QModelIndex* right);
    friend bool KCategorizedSortFilterProxyModel_SuperSubSortLessThan(const KCategorizedSortFilterProxyModel* self, const QModelIndex* left, const QModelIndex* right);
    friend int KCategorizedSortFilterProxyModel_SuperCompareCategories(const KCategorizedSortFilterProxyModel* self, const QModelIndex* left, const QModelIndex* right);
    friend bool KCategorizedSortFilterProxyModel_SuperFilterAcceptsRow(const KCategorizedSortFilterProxyModel* self, int source_row, const QModelIndex* source_parent);
    friend bool KCategorizedSortFilterProxyModel_SuperFilterAcceptsColumn(const KCategorizedSortFilterProxyModel* self, int source_column, const QModelIndex* source_parent);
    friend void KCategorizedSortFilterProxyModel_SuperResetInternalData(KCategorizedSortFilterProxyModel* self);
    friend void KCategorizedSortFilterProxyModel_SuperTimerEvent(KCategorizedSortFilterProxyModel* self, QTimerEvent* event);
    friend void KCategorizedSortFilterProxyModel_SuperChildEvent(KCategorizedSortFilterProxyModel* self, QChildEvent* event);
    friend void KCategorizedSortFilterProxyModel_SuperCustomEvent(KCategorizedSortFilterProxyModel* self, QEvent* event);
    friend void KCategorizedSortFilterProxyModel_SuperConnectNotify(KCategorizedSortFilterProxyModel* self, const QMetaMethod* signal);
    friend void KCategorizedSortFilterProxyModel_SuperDisconnectNotify(KCategorizedSortFilterProxyModel* self, const QMetaMethod* signal);
};

#endif
