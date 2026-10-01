#pragma once
#ifndef EXTRAS_KITEMMODELS_LIBKEXTRACOLUMNSPROXYMODEL_HXX
#define EXTRAS_KITEMMODELS_LIBKEXTRACOLUMNSPROXYMODEL_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KExtraColumnsProxyModel
class VirtualKExtraColumnsProxyModel : public KExtraColumnsProxyModel {
  public:
    // Virtual class public types (including callbacks and access types)
    using KExtraColumnsProxyModel_MetaObject_Callback = QMetaObject* (*)(const KExtraColumnsProxyModel*);
    using KExtraColumnsProxyModel_Metacast_Callback = void* (*)(KExtraColumnsProxyModel*, const char*);
    using KExtraColumnsProxyModel_Metacall_Callback = int (*)(KExtraColumnsProxyModel*, int, int, void**);
    using KExtraColumnsProxyModel_ExtraColumnData_Callback = QVariant* (*)(const KExtraColumnsProxyModel*, QModelIndex*, int, int, int);
    using KExtraColumnsProxyModel_SetExtraColumnData_Callback = bool (*)(KExtraColumnsProxyModel*, QModelIndex*, int, int, QVariant*, int);
    using KExtraColumnsProxyModel_SetSourceModel_Callback = void (*)(KExtraColumnsProxyModel*, QAbstractItemModel*);
    using KExtraColumnsProxyModel_MapToSource_Callback = QModelIndex* (*)(const KExtraColumnsProxyModel*, QModelIndex*);
    using KExtraColumnsProxyModel_MapSelectionToSource_Callback = QItemSelection* (*)(const KExtraColumnsProxyModel*, QItemSelection*);
    using KExtraColumnsProxyModel_ColumnCount_Callback = int (*)(const KExtraColumnsProxyModel*, QModelIndex*);
    using KExtraColumnsProxyModel_Data_Callback = QVariant* (*)(const KExtraColumnsProxyModel*, QModelIndex*, int);
    using KExtraColumnsProxyModel_SetData_Callback = bool (*)(KExtraColumnsProxyModel*, QModelIndex*, QVariant*, int);
    using KExtraColumnsProxyModel_Sibling_Callback = QModelIndex* (*)(const KExtraColumnsProxyModel*, int, int, QModelIndex*);
    using KExtraColumnsProxyModel_Buddy_Callback = QModelIndex* (*)(const KExtraColumnsProxyModel*, QModelIndex*);
    using KExtraColumnsProxyModel_Flags_Callback = int (*)(const KExtraColumnsProxyModel*, QModelIndex*);
    using KExtraColumnsProxyModel_HasChildren_Callback = bool (*)(const KExtraColumnsProxyModel*, QModelIndex*);
    using KExtraColumnsProxyModel_HeaderData_Callback = QVariant* (*)(const KExtraColumnsProxyModel*, int, int, int);
    using KExtraColumnsProxyModel_Index_Callback = QModelIndex* (*)(const KExtraColumnsProxyModel*, int, int, QModelIndex*);
    using KExtraColumnsProxyModel_Parent_Callback = QModelIndex* (*)(const KExtraColumnsProxyModel*, QModelIndex*);
    using KExtraColumnsProxyModel_MapFromSource_Callback = QModelIndex* (*)(const KExtraColumnsProxyModel*, QModelIndex*);
    using KExtraColumnsProxyModel_RowCount_Callback = int (*)(const KExtraColumnsProxyModel*, QModelIndex*);
    using KExtraColumnsProxyModel_DropMimeData_Callback = bool (*)(KExtraColumnsProxyModel*, QMimeData*, int, int, int, QModelIndex*);
    using KExtraColumnsProxyModel_MapSelectionFromSource_Callback = QItemSelection* (*)(const KExtraColumnsProxyModel*, QItemSelection*);
    using KExtraColumnsProxyModel_Match_Callback = libqt_list /* of QModelIndex* */ (*)(const KExtraColumnsProxyModel*, QModelIndex*, int, QVariant*, int, int);
    using KExtraColumnsProxyModel_InsertColumns_Callback = bool (*)(KExtraColumnsProxyModel*, int, int, QModelIndex*);
    using KExtraColumnsProxyModel_InsertRows_Callback = bool (*)(KExtraColumnsProxyModel*, int, int, QModelIndex*);
    using KExtraColumnsProxyModel_RemoveColumns_Callback = bool (*)(KExtraColumnsProxyModel*, int, int, QModelIndex*);
    using KExtraColumnsProxyModel_RemoveRows_Callback = bool (*)(KExtraColumnsProxyModel*, int, int, QModelIndex*);
    using KExtraColumnsProxyModel_MoveRows_Callback = bool (*)(KExtraColumnsProxyModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KExtraColumnsProxyModel_MoveColumns_Callback = bool (*)(KExtraColumnsProxyModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KExtraColumnsProxyModel_Submit_Callback = bool (*)(KExtraColumnsProxyModel*);
    using KExtraColumnsProxyModel_Revert_Callback = void (*)(KExtraColumnsProxyModel*);
    using KExtraColumnsProxyModel_ItemData_Callback = libqt_map /* of int to QVariant* */ (*)(const KExtraColumnsProxyModel*, QModelIndex*);
    using KExtraColumnsProxyModel_SetItemData_Callback = bool (*)(KExtraColumnsProxyModel*, QModelIndex*, libqt_map /* of int to QVariant* */);
    using KExtraColumnsProxyModel_SetHeaderData_Callback = bool (*)(KExtraColumnsProxyModel*, int, int, QVariant*, int);
    using KExtraColumnsProxyModel_ClearItemData_Callback = bool (*)(KExtraColumnsProxyModel*, QModelIndex*);
    using KExtraColumnsProxyModel_CanFetchMore_Callback = bool (*)(const KExtraColumnsProxyModel*, QModelIndex*);
    using KExtraColumnsProxyModel_FetchMore_Callback = void (*)(KExtraColumnsProxyModel*, QModelIndex*);
    using KExtraColumnsProxyModel_Sort_Callback = void (*)(KExtraColumnsProxyModel*, int, int);
    using KExtraColumnsProxyModel_Span_Callback = QSize* (*)(const KExtraColumnsProxyModel*, QModelIndex*);
    using KExtraColumnsProxyModel_MimeData_Callback = QMimeData* (*)(const KExtraColumnsProxyModel*, libqt_list /* of QModelIndex* */);
    using KExtraColumnsProxyModel_CanDropMimeData_Callback = bool (*)(const KExtraColumnsProxyModel*, QMimeData*, int, int, int, QModelIndex*);
    using KExtraColumnsProxyModel_MimeTypes_Callback = const char** (*)(const KExtraColumnsProxyModel*);
    using KExtraColumnsProxyModel_SupportedDragActions_Callback = int (*)(const KExtraColumnsProxyModel*);
    using KExtraColumnsProxyModel_SupportedDropActions_Callback = int (*)(const KExtraColumnsProxyModel*);
    using KExtraColumnsProxyModel_RoleNames_Callback = libqt_map /* of int to libqt_string */ (*)(const KExtraColumnsProxyModel*);
    using KExtraColumnsProxyModel_MultiData_Callback = void (*)(const KExtraColumnsProxyModel*, QModelIndex*, QModelRoleDataSpan*);
    using KExtraColumnsProxyModel_ResetInternalData_Callback = void (*)(KExtraColumnsProxyModel*);
    using KExtraColumnsProxyModel_Event_Callback = bool (*)(KExtraColumnsProxyModel*, QEvent*);
    using KExtraColumnsProxyModel_EventFilter_Callback = bool (*)(KExtraColumnsProxyModel*, QObject*, QEvent*);
    using KExtraColumnsProxyModel_TimerEvent_Callback = void (*)(KExtraColumnsProxyModel*, QTimerEvent*);
    using KExtraColumnsProxyModel_ChildEvent_Callback = void (*)(KExtraColumnsProxyModel*, QChildEvent*);
    using KExtraColumnsProxyModel_CustomEvent_Callback = void (*)(KExtraColumnsProxyModel*, QEvent*);
    using KExtraColumnsProxyModel_ConnectNotify_Callback = void (*)(KExtraColumnsProxyModel*, QMetaMethod*);
    using KExtraColumnsProxyModel_DisconnectNotify_Callback = void (*)(KExtraColumnsProxyModel*, QMetaMethod*);
    using KExtraColumnsProxyModel::beginInsertColumns;
    using KExtraColumnsProxyModel::beginInsertRows;
    using KExtraColumnsProxyModel::beginMoveColumns;
    using KExtraColumnsProxyModel::beginMoveRows;
    using KExtraColumnsProxyModel::beginRemoveColumns;
    using KExtraColumnsProxyModel::beginRemoveRows;
    using KExtraColumnsProxyModel::beginResetModel;
    using KExtraColumnsProxyModel::changePersistentIndex;
    using KExtraColumnsProxyModel::changePersistentIndexList;
    using KExtraColumnsProxyModel::createIndex;
    using KExtraColumnsProxyModel::createSourceIndex;
    using KExtraColumnsProxyModel::decodeData;
    using KExtraColumnsProxyModel::encodeData;
    using KExtraColumnsProxyModel::endInsertColumns;
    using KExtraColumnsProxyModel::endInsertRows;
    using KExtraColumnsProxyModel::endMoveColumns;
    using KExtraColumnsProxyModel::endMoveRows;
    using KExtraColumnsProxyModel::endRemoveColumns;
    using KExtraColumnsProxyModel::endRemoveRows;
    using KExtraColumnsProxyModel::endResetModel;
    using KExtraColumnsProxyModel::isSignalConnected;
    using KExtraColumnsProxyModel::persistentIndexList;
    using KExtraColumnsProxyModel::receivers;
    using KExtraColumnsProxyModel::sender;
    using KExtraColumnsProxyModel::senderSignalIndex;
    using KExtraColumnsProxyModel::setHandleSourceDataChanges;
    using KExtraColumnsProxyModel::setHandleSourceLayoutChanges;

    // Instance callback storage
    KExtraColumnsProxyModel_MetaObject_Callback kextracolumnsproxymodel_metaobject_callback = nullptr;
    KExtraColumnsProxyModel_Metacast_Callback kextracolumnsproxymodel_metacast_callback = nullptr;
    KExtraColumnsProxyModel_Metacall_Callback kextracolumnsproxymodel_metacall_callback = nullptr;
    KExtraColumnsProxyModel_ExtraColumnData_Callback kextracolumnsproxymodel_extracolumndata_callback = nullptr;
    KExtraColumnsProxyModel_SetExtraColumnData_Callback kextracolumnsproxymodel_setextracolumndata_callback = nullptr;
    KExtraColumnsProxyModel_SetSourceModel_Callback kextracolumnsproxymodel_setsourcemodel_callback = nullptr;
    KExtraColumnsProxyModel_MapToSource_Callback kextracolumnsproxymodel_maptosource_callback = nullptr;
    KExtraColumnsProxyModel_MapSelectionToSource_Callback kextracolumnsproxymodel_mapselectiontosource_callback = nullptr;
    KExtraColumnsProxyModel_ColumnCount_Callback kextracolumnsproxymodel_columncount_callback = nullptr;
    KExtraColumnsProxyModel_Data_Callback kextracolumnsproxymodel_data_callback = nullptr;
    KExtraColumnsProxyModel_SetData_Callback kextracolumnsproxymodel_setdata_callback = nullptr;
    KExtraColumnsProxyModel_Sibling_Callback kextracolumnsproxymodel_sibling_callback = nullptr;
    KExtraColumnsProxyModel_Buddy_Callback kextracolumnsproxymodel_buddy_callback = nullptr;
    KExtraColumnsProxyModel_Flags_Callback kextracolumnsproxymodel_flags_callback = nullptr;
    KExtraColumnsProxyModel_HasChildren_Callback kextracolumnsproxymodel_haschildren_callback = nullptr;
    KExtraColumnsProxyModel_HeaderData_Callback kextracolumnsproxymodel_headerdata_callback = nullptr;
    KExtraColumnsProxyModel_Index_Callback kextracolumnsproxymodel_index_callback = nullptr;
    KExtraColumnsProxyModel_Parent_Callback kextracolumnsproxymodel_parent_callback = nullptr;
    KExtraColumnsProxyModel_MapFromSource_Callback kextracolumnsproxymodel_mapfromsource_callback = nullptr;
    KExtraColumnsProxyModel_RowCount_Callback kextracolumnsproxymodel_rowcount_callback = nullptr;
    KExtraColumnsProxyModel_DropMimeData_Callback kextracolumnsproxymodel_dropmimedata_callback = nullptr;
    KExtraColumnsProxyModel_MapSelectionFromSource_Callback kextracolumnsproxymodel_mapselectionfromsource_callback = nullptr;
    KExtraColumnsProxyModel_Match_Callback kextracolumnsproxymodel_match_callback = nullptr;
    KExtraColumnsProxyModel_InsertColumns_Callback kextracolumnsproxymodel_insertcolumns_callback = nullptr;
    KExtraColumnsProxyModel_InsertRows_Callback kextracolumnsproxymodel_insertrows_callback = nullptr;
    KExtraColumnsProxyModel_RemoveColumns_Callback kextracolumnsproxymodel_removecolumns_callback = nullptr;
    KExtraColumnsProxyModel_RemoveRows_Callback kextracolumnsproxymodel_removerows_callback = nullptr;
    KExtraColumnsProxyModel_MoveRows_Callback kextracolumnsproxymodel_moverows_callback = nullptr;
    KExtraColumnsProxyModel_MoveColumns_Callback kextracolumnsproxymodel_movecolumns_callback = nullptr;
    KExtraColumnsProxyModel_Submit_Callback kextracolumnsproxymodel_submit_callback = nullptr;
    KExtraColumnsProxyModel_Revert_Callback kextracolumnsproxymodel_revert_callback = nullptr;
    KExtraColumnsProxyModel_ItemData_Callback kextracolumnsproxymodel_itemdata_callback = nullptr;
    KExtraColumnsProxyModel_SetItemData_Callback kextracolumnsproxymodel_setitemdata_callback = nullptr;
    KExtraColumnsProxyModel_SetHeaderData_Callback kextracolumnsproxymodel_setheaderdata_callback = nullptr;
    KExtraColumnsProxyModel_ClearItemData_Callback kextracolumnsproxymodel_clearitemdata_callback = nullptr;
    KExtraColumnsProxyModel_CanFetchMore_Callback kextracolumnsproxymodel_canfetchmore_callback = nullptr;
    KExtraColumnsProxyModel_FetchMore_Callback kextracolumnsproxymodel_fetchmore_callback = nullptr;
    KExtraColumnsProxyModel_Sort_Callback kextracolumnsproxymodel_sort_callback = nullptr;
    KExtraColumnsProxyModel_Span_Callback kextracolumnsproxymodel_span_callback = nullptr;
    KExtraColumnsProxyModel_MimeData_Callback kextracolumnsproxymodel_mimedata_callback = nullptr;
    KExtraColumnsProxyModel_CanDropMimeData_Callback kextracolumnsproxymodel_candropmimedata_callback = nullptr;
    KExtraColumnsProxyModel_MimeTypes_Callback kextracolumnsproxymodel_mimetypes_callback = nullptr;
    KExtraColumnsProxyModel_SupportedDragActions_Callback kextracolumnsproxymodel_supporteddragactions_callback = nullptr;
    KExtraColumnsProxyModel_SupportedDropActions_Callback kextracolumnsproxymodel_supporteddropactions_callback = nullptr;
    KExtraColumnsProxyModel_RoleNames_Callback kextracolumnsproxymodel_rolenames_callback = nullptr;
    KExtraColumnsProxyModel_MultiData_Callback kextracolumnsproxymodel_multidata_callback = nullptr;
    KExtraColumnsProxyModel_ResetInternalData_Callback kextracolumnsproxymodel_resetinternaldata_callback = nullptr;
    KExtraColumnsProxyModel_Event_Callback kextracolumnsproxymodel_event_callback = nullptr;
    KExtraColumnsProxyModel_EventFilter_Callback kextracolumnsproxymodel_eventfilter_callback = nullptr;
    KExtraColumnsProxyModel_TimerEvent_Callback kextracolumnsproxymodel_timerevent_callback = nullptr;
    KExtraColumnsProxyModel_ChildEvent_Callback kextracolumnsproxymodel_childevent_callback = nullptr;
    KExtraColumnsProxyModel_CustomEvent_Callback kextracolumnsproxymodel_customevent_callback = nullptr;
    KExtraColumnsProxyModel_ConnectNotify_Callback kextracolumnsproxymodel_connectnotify_callback = nullptr;
    KExtraColumnsProxyModel_DisconnectNotify_Callback kextracolumnsproxymodel_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KExtraColumnsProxyModel {
        using KExtraColumnsProxyModel::childEvent;
        using KExtraColumnsProxyModel::connectNotify;
        using KExtraColumnsProxyModel::customEvent;
        using KExtraColumnsProxyModel::disconnectNotify;
        using KExtraColumnsProxyModel::resetInternalData;
        using KExtraColumnsProxyModel::timerEvent;
    };

    VirtualKExtraColumnsProxyModel() : KExtraColumnsProxyModel() {};
    VirtualKExtraColumnsProxyModel(QObject* parent) : KExtraColumnsProxyModel(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kextracolumnsproxymodel_metaobject_callback) {
            QMetaObject* callback_ret = kextracolumnsproxymodel_metaobject_callback(this);
            return callback_ret;
        }
        return KExtraColumnsProxyModel::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kextracolumnsproxymodel_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kextracolumnsproxymodel_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KExtraColumnsProxyModel::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kextracolumnsproxymodel_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kextracolumnsproxymodel_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KExtraColumnsProxyModel::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant extraColumnData(const QModelIndex& parent, int row, int extraColumn, int role) const override {
        if (kextracolumnsproxymodel_extracolumndata_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = row;
            int cbval3 = extraColumn;
            int cbval4 = role;
            QVariant* callback_ret = kextracolumnsproxymodel_extracolumndata_callback(this, cbval1, cbval2, cbval3, cbval4);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method KExtraColumnsProxyModel::extraColumnData called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setExtraColumnData(const QModelIndex& parent, int row, int extraColumn, const QVariant& data, int role) override {
        if (kextracolumnsproxymodel_setextracolumndata_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = row;
            int cbval3 = extraColumn;
            const QVariant& data_ret = data;
            // Cast returned reference into pointer
            QVariant* cbval4 = const_cast<QVariant*>(&data_ret);
            int cbval5 = role;
            bool callback_ret = kextracolumnsproxymodel_setextracolumndata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return KExtraColumnsProxyModel::setExtraColumnData(parent, row, extraColumn, data, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSourceModel(QAbstractItemModel* model) override {
        if (kextracolumnsproxymodel_setsourcemodel_callback) {
            QAbstractItemModel* cbval1 = model;
            kextracolumnsproxymodel_setsourcemodel_callback(this, cbval1);
            return;
        }
        KExtraColumnsProxyModel::setSourceModel(model);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex mapToSource(const QModelIndex& proxyIndex) const override {
        if (kextracolumnsproxymodel_maptosource_callback) {
            const QModelIndex& proxyIndex_ret = proxyIndex;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&proxyIndex_ret);
            QModelIndex* callback_ret = kextracolumnsproxymodel_maptosource_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KExtraColumnsProxyModel::mapToSource(proxyIndex);
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelection mapSelectionToSource(const QItemSelection& selection) const override {
        if (kextracolumnsproxymodel_mapselectiontosource_callback) {
            const QItemSelection& selection_ret = selection;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selection_ret);
            QItemSelection* callback_ret = kextracolumnsproxymodel_mapselectiontosource_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KExtraColumnsProxyModel::mapSelectionToSource(selection);
    }

    // Virtual method for C ABI access and custom callback
    virtual int columnCount(const QModelIndex& parent) const override {
        if (kextracolumnsproxymodel_columncount_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int callback_ret = kextracolumnsproxymodel_columncount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KExtraColumnsProxyModel::columnCount(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(const QModelIndex& index, int role) const override {
        if (kextracolumnsproxymodel_data_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = role;
            QVariant* callback_ret = kextracolumnsproxymodel_data_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KExtraColumnsProxyModel::data(index, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
        if (kextracolumnsproxymodel_setdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            int cbval3 = role;
            bool callback_ret = kextracolumnsproxymodel_setdata_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KExtraColumnsProxyModel::setData(index, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
        if (kextracolumnsproxymodel_sibling_callback) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& idx_ret = idx;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&idx_ret);
            QModelIndex* callback_ret = kextracolumnsproxymodel_sibling_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KExtraColumnsProxyModel::sibling(row, column, idx);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex buddy(const QModelIndex& index) const override {
        if (kextracolumnsproxymodel_buddy_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelIndex* callback_ret = kextracolumnsproxymodel_buddy_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KExtraColumnsProxyModel::buddy(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
        if (kextracolumnsproxymodel_flags_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int callback_ret = kextracolumnsproxymodel_flags_callback(this, cbval1);
            return static_cast<Qt::ItemFlags>(callback_ret);
        }
        return KExtraColumnsProxyModel::flags(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasChildren(const QModelIndex& index) const override {
        if (kextracolumnsproxymodel_haschildren_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            bool callback_ret = kextracolumnsproxymodel_haschildren_callback(this, cbval1);
            return callback_ret;
        }
        return KExtraColumnsProxyModel::hasChildren(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
        if (kextracolumnsproxymodel_headerdata_callback) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            int cbval3 = role;
            QVariant* callback_ret = kextracolumnsproxymodel_headerdata_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KExtraColumnsProxyModel::headerData(section, orientation, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
        if (kextracolumnsproxymodel_index_callback) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            QModelIndex* callback_ret = kextracolumnsproxymodel_index_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KExtraColumnsProxyModel::index(row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex parent(const QModelIndex& child) const override {
        if (kextracolumnsproxymodel_parent_callback) {
            const QModelIndex& child_ret = child;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&child_ret);
            QModelIndex* callback_ret = kextracolumnsproxymodel_parent_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KExtraColumnsProxyModel::parent(child);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex mapFromSource(const QModelIndex& sourceIndex) const override {
        if (kextracolumnsproxymodel_mapfromsource_callback) {
            const QModelIndex& sourceIndex_ret = sourceIndex;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceIndex_ret);
            QModelIndex* callback_ret = kextracolumnsproxymodel_mapfromsource_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KExtraColumnsProxyModel::mapFromSource(sourceIndex);
    }

    // Virtual method for C ABI access and custom callback
    virtual int rowCount(const QModelIndex& parent) const override {
        if (kextracolumnsproxymodel_rowcount_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int callback_ret = kextracolumnsproxymodel_rowcount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KExtraColumnsProxyModel::rowCount(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
        if (kextracolumnsproxymodel_dropmimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = kextracolumnsproxymodel_dropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return KExtraColumnsProxyModel::dropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelection mapSelectionFromSource(const QItemSelection& selection) const override {
        if (kextracolumnsproxymodel_mapselectionfromsource_callback) {
            const QItemSelection& selection_ret = selection;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selection_ret);
            QItemSelection* callback_ret = kextracolumnsproxymodel_mapselectionfromsource_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KExtraColumnsProxyModel::mapSelectionFromSource(selection);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
        if (kextracolumnsproxymodel_match_callback) {
            const QModelIndex& start_ret = start;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&start_ret);
            int cbval2 = role;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = hits;
            int cbval5 = static_cast<int>(flags);
            libqt_list /* of QModelIndex* */ callback_ret = kextracolumnsproxymodel_match_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            QList<QModelIndex> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QModelIndex** callback_ret_arr = static_cast<QModelIndex**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return KExtraColumnsProxyModel::match(start, role, value, hits, flags);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
        if (kextracolumnsproxymodel_insertcolumns_callback) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = kextracolumnsproxymodel_insertcolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KExtraColumnsProxyModel::insertColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
        if (kextracolumnsproxymodel_insertrows_callback) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = kextracolumnsproxymodel_insertrows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KExtraColumnsProxyModel::insertRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
        if (kextracolumnsproxymodel_removecolumns_callback) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = kextracolumnsproxymodel_removecolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KExtraColumnsProxyModel::removeColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
        if (kextracolumnsproxymodel_removerows_callback) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = kextracolumnsproxymodel_removerows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KExtraColumnsProxyModel::removeRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (kextracolumnsproxymodel_moverows_callback) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceRow;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;
            bool callback_ret = kextracolumnsproxymodel_moverows_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return KExtraColumnsProxyModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (kextracolumnsproxymodel_movecolumns_callback) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceColumn;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;
            bool callback_ret = kextracolumnsproxymodel_movecolumns_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return KExtraColumnsProxyModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool submit() override {
        if (kextracolumnsproxymodel_submit_callback) {
            bool callback_ret = kextracolumnsproxymodel_submit_callback(this);
            return callback_ret;
        }
        return KExtraColumnsProxyModel::submit();
    }

    // Virtual method for C ABI access and custom callback
    virtual void revert() override {
        if (kextracolumnsproxymodel_revert_callback) {
            kextracolumnsproxymodel_revert_callback(this);
            return;
        }
        KExtraColumnsProxyModel::revert();
    }

    // Virtual method for C ABI access and custom callback
    virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
        if (kextracolumnsproxymodel_itemdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            libqt_map /* of int to QVariant* */ callback_ret = kextracolumnsproxymodel_itemdata_callback(this, cbval1);
            QMap<int, QVariant> callback_ret_QMap;
            int* callback_ret_karr = static_cast<int*>(callback_ret.keys);
            QVariant** callback_ret_varr = static_cast<QVariant**>(callback_ret.values);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QMap.insert(static_cast<int>(callback_ret_karr[i]), *(callback_ret_varr[i]));
            }
            return callback_ret_QMap;
        }
        return KExtraColumnsProxyModel::itemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
        if (kextracolumnsproxymodel_setitemdata_callback) {
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
            bool callback_ret = kextracolumnsproxymodel_setitemdata_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KExtraColumnsProxyModel::setItemData(index, roles);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
        if (kextracolumnsproxymodel_setheaderdata_callback) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = role;
            bool callback_ret = kextracolumnsproxymodel_setheaderdata_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        }
        return KExtraColumnsProxyModel::setHeaderData(section, orientation, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool clearItemData(const QModelIndex& index) override {
        if (kextracolumnsproxymodel_clearitemdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            bool callback_ret = kextracolumnsproxymodel_clearitemdata_callback(this, cbval1);
            return callback_ret;
        }
        return KExtraColumnsProxyModel::clearItemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canFetchMore(const QModelIndex& parent) const override {
        if (kextracolumnsproxymodel_canfetchmore_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = kextracolumnsproxymodel_canfetchmore_callback(this, cbval1);
            return callback_ret;
        }
        return KExtraColumnsProxyModel::canFetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void fetchMore(const QModelIndex& parent) override {
        if (kextracolumnsproxymodel_fetchmore_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            kextracolumnsproxymodel_fetchmore_callback(this, cbval1);
            return;
        }
        KExtraColumnsProxyModel::fetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void sort(int column, Qt::SortOrder order) override {
        if (kextracolumnsproxymodel_sort_callback) {
            int cbval1 = column;
            int cbval2 = static_cast<int>(order);
            kextracolumnsproxymodel_sort_callback(this, cbval1, cbval2);
            return;
        }
        KExtraColumnsProxyModel::sort(column, order);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize span(const QModelIndex& index) const override {
        if (kextracolumnsproxymodel_span_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QSize* callback_ret = kextracolumnsproxymodel_span_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KExtraColumnsProxyModel::span(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* mimeData(const QList<QModelIndex>& indexes) const override {
        if (kextracolumnsproxymodel_mimedata_callback) {
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
            QMimeData* callback_ret = kextracolumnsproxymodel_mimedata_callback(this, cbval1);
            free(indexes_arr);
            return callback_ret;
        }
        return KExtraColumnsProxyModel::mimeData(indexes);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
        if (kextracolumnsproxymodel_candropmimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = kextracolumnsproxymodel_candropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return KExtraColumnsProxyModel::canDropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> mimeTypes() const override {
        if (kextracolumnsproxymodel_mimetypes_callback) {
            const char** callback_ret = kextracolumnsproxymodel_mimetypes_callback(this);
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
        return KExtraColumnsProxyModel::mimeTypes();
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDragActions() const override {
        if (kextracolumnsproxymodel_supporteddragactions_callback) {
            int callback_ret = kextracolumnsproxymodel_supporteddragactions_callback(this);
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return KExtraColumnsProxyModel::supportedDragActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (kextracolumnsproxymodel_supporteddropactions_callback) {
            int callback_ret = kextracolumnsproxymodel_supporteddropactions_callback(this);
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return KExtraColumnsProxyModel::supportedDropActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual QHash<int, QByteArray> roleNames() const override {
        if (kextracolumnsproxymodel_rolenames_callback) {
            libqt_map /* of int to libqt_string */ callback_ret = kextracolumnsproxymodel_rolenames_callback(this);
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
        return KExtraColumnsProxyModel::roleNames();
    }

    // Virtual method for C ABI access and custom callback
    virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
        if (kextracolumnsproxymodel_multidata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelRoleDataSpan* cbval2 = new QModelRoleDataSpan(roleDataSpan);
            kextracolumnsproxymodel_multidata_callback(this, cbval1, cbval2);
            return;
        }
        KExtraColumnsProxyModel::multiData(index, roleDataSpan);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetInternalData() override {
        if (kextracolumnsproxymodel_resetinternaldata_callback) {
            kextracolumnsproxymodel_resetinternaldata_callback(this);
            return;
        }
        KExtraColumnsProxyModel::resetInternalData();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kextracolumnsproxymodel_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kextracolumnsproxymodel_event_callback(this, cbval1);
            return callback_ret;
        }
        return KExtraColumnsProxyModel::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kextracolumnsproxymodel_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kextracolumnsproxymodel_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KExtraColumnsProxyModel::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kextracolumnsproxymodel_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kextracolumnsproxymodel_timerevent_callback(this, cbval1);
            return;
        }
        KExtraColumnsProxyModel::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kextracolumnsproxymodel_childevent_callback) {
            QChildEvent* cbval1 = event;
            kextracolumnsproxymodel_childevent_callback(this, cbval1);
            return;
        }
        KExtraColumnsProxyModel::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kextracolumnsproxymodel_customevent_callback) {
            QEvent* cbval1 = event;
            kextracolumnsproxymodel_customevent_callback(this, cbval1);
            return;
        }
        KExtraColumnsProxyModel::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kextracolumnsproxymodel_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kextracolumnsproxymodel_connectnotify_callback(this, cbval1);
            return;
        }
        KExtraColumnsProxyModel::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kextracolumnsproxymodel_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kextracolumnsproxymodel_disconnectnotify_callback(this, cbval1);
            return;
        }
        KExtraColumnsProxyModel::disconnectNotify(signal);
    }

    // Friend functions
    friend void KExtraColumnsProxyModel_SuperResetInternalData(KExtraColumnsProxyModel* self);
    friend void KExtraColumnsProxyModel_SuperTimerEvent(KExtraColumnsProxyModel* self, QTimerEvent* event);
    friend void KExtraColumnsProxyModel_SuperChildEvent(KExtraColumnsProxyModel* self, QChildEvent* event);
    friend void KExtraColumnsProxyModel_SuperCustomEvent(KExtraColumnsProxyModel* self, QEvent* event);
    friend void KExtraColumnsProxyModel_SuperConnectNotify(KExtraColumnsProxyModel* self, const QMetaMethod* signal);
    friend void KExtraColumnsProxyModel_SuperDisconnectNotify(KExtraColumnsProxyModel* self, const QMetaMethod* signal);
};

#endif
