#pragma once
#ifndef EXTRAS_KITEMMODELS_LIBKCHECKABLEPROXYMODEL_HXX
#define EXTRAS_KITEMMODELS_LIBKCHECKABLEPROXYMODEL_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KCheckableProxyModel
class VirtualKCheckableProxyModel final : public KCheckableProxyModel {
  public:
    // Virtual class public types (including callbacks and access types)
    using KCheckableProxyModel_MetaObject_Callback = QMetaObject* (*)(const KCheckableProxyModel*);
    using KCheckableProxyModel_Metacast_Callback = void* (*)(KCheckableProxyModel*, const char*);
    using KCheckableProxyModel_Metacall_Callback = int (*)(KCheckableProxyModel*, int, int, void**);
    using KCheckableProxyModel_Flags_Callback = int (*)(const KCheckableProxyModel*, QModelIndex*);
    using KCheckableProxyModel_Data_Callback = QVariant* (*)(const KCheckableProxyModel*, QModelIndex*, int);
    using KCheckableProxyModel_SetData_Callback = bool (*)(KCheckableProxyModel*, QModelIndex*, QVariant*, int);
    using KCheckableProxyModel_SetSourceModel_Callback = void (*)(KCheckableProxyModel*, QAbstractItemModel*);
    using KCheckableProxyModel_RoleNames_Callback = libqt_map /* of int to libqt_string */ (*)(const KCheckableProxyModel*);
    using KCheckableProxyModel_Select_Callback = bool (*)(KCheckableProxyModel*, QItemSelection*, int);
    using KCheckableProxyModel_ColumnCount_Callback = int (*)(const KCheckableProxyModel*, QModelIndex*);
    using KCheckableProxyModel_Index_Callback = QModelIndex* (*)(const KCheckableProxyModel*, int, int, QModelIndex*);
    using KCheckableProxyModel_MapFromSource_Callback = QModelIndex* (*)(const KCheckableProxyModel*, QModelIndex*);
    using KCheckableProxyModel_MapToSource_Callback = QModelIndex* (*)(const KCheckableProxyModel*, QModelIndex*);
    using KCheckableProxyModel_Parent_Callback = QModelIndex* (*)(const KCheckableProxyModel*, QModelIndex*);
    using KCheckableProxyModel_RowCount_Callback = int (*)(const KCheckableProxyModel*, QModelIndex*);
    using KCheckableProxyModel_HeaderData_Callback = QVariant* (*)(const KCheckableProxyModel*, int, int, int);
    using KCheckableProxyModel_DropMimeData_Callback = bool (*)(KCheckableProxyModel*, QMimeData*, int, int, int, QModelIndex*);
    using KCheckableProxyModel_Sibling_Callback = QModelIndex* (*)(const KCheckableProxyModel*, int, int, QModelIndex*);
    using KCheckableProxyModel_MapSelectionFromSource_Callback = QItemSelection* (*)(const KCheckableProxyModel*, QItemSelection*);
    using KCheckableProxyModel_MapSelectionToSource_Callback = QItemSelection* (*)(const KCheckableProxyModel*, QItemSelection*);
    using KCheckableProxyModel_Match_Callback = libqt_list /* of QModelIndex* */ (*)(const KCheckableProxyModel*, QModelIndex*, int, QVariant*, int, int);
    using KCheckableProxyModel_InsertColumns_Callback = bool (*)(KCheckableProxyModel*, int, int, QModelIndex*);
    using KCheckableProxyModel_InsertRows_Callback = bool (*)(KCheckableProxyModel*, int, int, QModelIndex*);
    using KCheckableProxyModel_RemoveColumns_Callback = bool (*)(KCheckableProxyModel*, int, int, QModelIndex*);
    using KCheckableProxyModel_RemoveRows_Callback = bool (*)(KCheckableProxyModel*, int, int, QModelIndex*);
    using KCheckableProxyModel_MoveRows_Callback = bool (*)(KCheckableProxyModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KCheckableProxyModel_MoveColumns_Callback = bool (*)(KCheckableProxyModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KCheckableProxyModel_Submit_Callback = bool (*)(KCheckableProxyModel*);
    using KCheckableProxyModel_Revert_Callback = void (*)(KCheckableProxyModel*);
    using KCheckableProxyModel_ItemData_Callback = libqt_map /* of int to QVariant* */ (*)(const KCheckableProxyModel*, QModelIndex*);
    using KCheckableProxyModel_SetItemData_Callback = bool (*)(KCheckableProxyModel*, QModelIndex*, libqt_map /* of int to QVariant* */);
    using KCheckableProxyModel_SetHeaderData_Callback = bool (*)(KCheckableProxyModel*, int, int, QVariant*, int);
    using KCheckableProxyModel_ClearItemData_Callback = bool (*)(KCheckableProxyModel*, QModelIndex*);
    using KCheckableProxyModel_Buddy_Callback = QModelIndex* (*)(const KCheckableProxyModel*, QModelIndex*);
    using KCheckableProxyModel_CanFetchMore_Callback = bool (*)(const KCheckableProxyModel*, QModelIndex*);
    using KCheckableProxyModel_FetchMore_Callback = void (*)(KCheckableProxyModel*, QModelIndex*);
    using KCheckableProxyModel_Sort_Callback = void (*)(KCheckableProxyModel*, int, int);
    using KCheckableProxyModel_Span_Callback = QSize* (*)(const KCheckableProxyModel*, QModelIndex*);
    using KCheckableProxyModel_HasChildren_Callback = bool (*)(const KCheckableProxyModel*, QModelIndex*);
    using KCheckableProxyModel_MimeData_Callback = QMimeData* (*)(const KCheckableProxyModel*, libqt_list /* of QModelIndex* */);
    using KCheckableProxyModel_CanDropMimeData_Callback = bool (*)(const KCheckableProxyModel*, QMimeData*, int, int, int, QModelIndex*);
    using KCheckableProxyModel_MimeTypes_Callback = const char** (*)(const KCheckableProxyModel*);
    using KCheckableProxyModel_SupportedDragActions_Callback = int (*)(const KCheckableProxyModel*);
    using KCheckableProxyModel_SupportedDropActions_Callback = int (*)(const KCheckableProxyModel*);
    using KCheckableProxyModel_MultiData_Callback = void (*)(const KCheckableProxyModel*, QModelIndex*, QModelRoleDataSpan*);
    using KCheckableProxyModel_ResetInternalData_Callback = void (*)(KCheckableProxyModel*);
    using KCheckableProxyModel_Event_Callback = bool (*)(KCheckableProxyModel*, QEvent*);
    using KCheckableProxyModel_EventFilter_Callback = bool (*)(KCheckableProxyModel*, QObject*, QEvent*);
    using KCheckableProxyModel_TimerEvent_Callback = void (*)(KCheckableProxyModel*, QTimerEvent*);
    using KCheckableProxyModel_ChildEvent_Callback = void (*)(KCheckableProxyModel*, QChildEvent*);
    using KCheckableProxyModel_CustomEvent_Callback = void (*)(KCheckableProxyModel*, QEvent*);
    using KCheckableProxyModel_ConnectNotify_Callback = void (*)(KCheckableProxyModel*, QMetaMethod*);
    using KCheckableProxyModel_DisconnectNotify_Callback = void (*)(KCheckableProxyModel*, QMetaMethod*);
    using KCheckableProxyModel::beginInsertColumns;
    using KCheckableProxyModel::beginInsertRows;
    using KCheckableProxyModel::beginMoveColumns;
    using KCheckableProxyModel::beginMoveRows;
    using KCheckableProxyModel::beginRemoveColumns;
    using KCheckableProxyModel::beginRemoveRows;
    using KCheckableProxyModel::beginResetModel;
    using KCheckableProxyModel::changePersistentIndex;
    using KCheckableProxyModel::changePersistentIndexList;
    using KCheckableProxyModel::createIndex;
    using KCheckableProxyModel::createSourceIndex;
    using KCheckableProxyModel::decodeData;
    using KCheckableProxyModel::encodeData;
    using KCheckableProxyModel::endInsertColumns;
    using KCheckableProxyModel::endInsertRows;
    using KCheckableProxyModel::endMoveColumns;
    using KCheckableProxyModel::endMoveRows;
    using KCheckableProxyModel::endRemoveColumns;
    using KCheckableProxyModel::endRemoveRows;
    using KCheckableProxyModel::endResetModel;
    using KCheckableProxyModel::isSignalConnected;
    using KCheckableProxyModel::persistentIndexList;
    using KCheckableProxyModel::receivers;
    using KCheckableProxyModel::sender;
    using KCheckableProxyModel::senderSignalIndex;
    using KCheckableProxyModel::setHandleSourceDataChanges;
    using KCheckableProxyModel::setHandleSourceLayoutChanges;

    // Instance callback storage
    KCheckableProxyModel_MetaObject_Callback kcheckableproxymodel_metaobject_callback = nullptr;
    KCheckableProxyModel_Metacast_Callback kcheckableproxymodel_metacast_callback = nullptr;
    KCheckableProxyModel_Metacall_Callback kcheckableproxymodel_metacall_callback = nullptr;
    KCheckableProxyModel_Flags_Callback kcheckableproxymodel_flags_callback = nullptr;
    KCheckableProxyModel_Data_Callback kcheckableproxymodel_data_callback = nullptr;
    KCheckableProxyModel_SetData_Callback kcheckableproxymodel_setdata_callback = nullptr;
    KCheckableProxyModel_SetSourceModel_Callback kcheckableproxymodel_setsourcemodel_callback = nullptr;
    KCheckableProxyModel_RoleNames_Callback kcheckableproxymodel_rolenames_callback = nullptr;
    KCheckableProxyModel_Select_Callback kcheckableproxymodel_select_callback = nullptr;
    KCheckableProxyModel_ColumnCount_Callback kcheckableproxymodel_columncount_callback = nullptr;
    KCheckableProxyModel_Index_Callback kcheckableproxymodel_index_callback = nullptr;
    KCheckableProxyModel_MapFromSource_Callback kcheckableproxymodel_mapfromsource_callback = nullptr;
    KCheckableProxyModel_MapToSource_Callback kcheckableproxymodel_maptosource_callback = nullptr;
    KCheckableProxyModel_Parent_Callback kcheckableproxymodel_parent_callback = nullptr;
    KCheckableProxyModel_RowCount_Callback kcheckableproxymodel_rowcount_callback = nullptr;
    KCheckableProxyModel_HeaderData_Callback kcheckableproxymodel_headerdata_callback = nullptr;
    KCheckableProxyModel_DropMimeData_Callback kcheckableproxymodel_dropmimedata_callback = nullptr;
    KCheckableProxyModel_Sibling_Callback kcheckableproxymodel_sibling_callback = nullptr;
    KCheckableProxyModel_MapSelectionFromSource_Callback kcheckableproxymodel_mapselectionfromsource_callback = nullptr;
    KCheckableProxyModel_MapSelectionToSource_Callback kcheckableproxymodel_mapselectiontosource_callback = nullptr;
    KCheckableProxyModel_Match_Callback kcheckableproxymodel_match_callback = nullptr;
    KCheckableProxyModel_InsertColumns_Callback kcheckableproxymodel_insertcolumns_callback = nullptr;
    KCheckableProxyModel_InsertRows_Callback kcheckableproxymodel_insertrows_callback = nullptr;
    KCheckableProxyModel_RemoveColumns_Callback kcheckableproxymodel_removecolumns_callback = nullptr;
    KCheckableProxyModel_RemoveRows_Callback kcheckableproxymodel_removerows_callback = nullptr;
    KCheckableProxyModel_MoveRows_Callback kcheckableproxymodel_moverows_callback = nullptr;
    KCheckableProxyModel_MoveColumns_Callback kcheckableproxymodel_movecolumns_callback = nullptr;
    KCheckableProxyModel_Submit_Callback kcheckableproxymodel_submit_callback = nullptr;
    KCheckableProxyModel_Revert_Callback kcheckableproxymodel_revert_callback = nullptr;
    KCheckableProxyModel_ItemData_Callback kcheckableproxymodel_itemdata_callback = nullptr;
    KCheckableProxyModel_SetItemData_Callback kcheckableproxymodel_setitemdata_callback = nullptr;
    KCheckableProxyModel_SetHeaderData_Callback kcheckableproxymodel_setheaderdata_callback = nullptr;
    KCheckableProxyModel_ClearItemData_Callback kcheckableproxymodel_clearitemdata_callback = nullptr;
    KCheckableProxyModel_Buddy_Callback kcheckableproxymodel_buddy_callback = nullptr;
    KCheckableProxyModel_CanFetchMore_Callback kcheckableproxymodel_canfetchmore_callback = nullptr;
    KCheckableProxyModel_FetchMore_Callback kcheckableproxymodel_fetchmore_callback = nullptr;
    KCheckableProxyModel_Sort_Callback kcheckableproxymodel_sort_callback = nullptr;
    KCheckableProxyModel_Span_Callback kcheckableproxymodel_span_callback = nullptr;
    KCheckableProxyModel_HasChildren_Callback kcheckableproxymodel_haschildren_callback = nullptr;
    KCheckableProxyModel_MimeData_Callback kcheckableproxymodel_mimedata_callback = nullptr;
    KCheckableProxyModel_CanDropMimeData_Callback kcheckableproxymodel_candropmimedata_callback = nullptr;
    KCheckableProxyModel_MimeTypes_Callback kcheckableproxymodel_mimetypes_callback = nullptr;
    KCheckableProxyModel_SupportedDragActions_Callback kcheckableproxymodel_supporteddragactions_callback = nullptr;
    KCheckableProxyModel_SupportedDropActions_Callback kcheckableproxymodel_supporteddropactions_callback = nullptr;
    KCheckableProxyModel_MultiData_Callback kcheckableproxymodel_multidata_callback = nullptr;
    KCheckableProxyModel_ResetInternalData_Callback kcheckableproxymodel_resetinternaldata_callback = nullptr;
    KCheckableProxyModel_Event_Callback kcheckableproxymodel_event_callback = nullptr;
    KCheckableProxyModel_EventFilter_Callback kcheckableproxymodel_eventfilter_callback = nullptr;
    KCheckableProxyModel_TimerEvent_Callback kcheckableproxymodel_timerevent_callback = nullptr;
    KCheckableProxyModel_ChildEvent_Callback kcheckableproxymodel_childevent_callback = nullptr;
    KCheckableProxyModel_CustomEvent_Callback kcheckableproxymodel_customevent_callback = nullptr;
    KCheckableProxyModel_ConnectNotify_Callback kcheckableproxymodel_connectnotify_callback = nullptr;
    KCheckableProxyModel_DisconnectNotify_Callback kcheckableproxymodel_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KCheckableProxyModel {
        using KCheckableProxyModel::childEvent;
        using KCheckableProxyModel::connectNotify;
        using KCheckableProxyModel::customEvent;
        using KCheckableProxyModel::disconnectNotify;
        using KCheckableProxyModel::resetInternalData;
        using KCheckableProxyModel::select;
        using KCheckableProxyModel::timerEvent;
    };

    VirtualKCheckableProxyModel() : KCheckableProxyModel() {};
    VirtualKCheckableProxyModel(QObject* parent) : KCheckableProxyModel(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kcheckableproxymodel_metaobject_callback) {
            QMetaObject* callback_ret = kcheckableproxymodel_metaobject_callback(this);
            return callback_ret;
        }
        return KCheckableProxyModel::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kcheckableproxymodel_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kcheckableproxymodel_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KCheckableProxyModel::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kcheckableproxymodel_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kcheckableproxymodel_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KCheckableProxyModel::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
        if (kcheckableproxymodel_flags_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int callback_ret = kcheckableproxymodel_flags_callback(this, cbval1);
            return static_cast<Qt::ItemFlags>(callback_ret);
        }
        return KCheckableProxyModel::flags(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(const QModelIndex& index, int role) const override {
        if (kcheckableproxymodel_data_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = role;
            QVariant* callback_ret = kcheckableproxymodel_data_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KCheckableProxyModel::data(index, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
        if (kcheckableproxymodel_setdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            int cbval3 = role;
            bool callback_ret = kcheckableproxymodel_setdata_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KCheckableProxyModel::setData(index, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSourceModel(QAbstractItemModel* sourceModel) override {
        if (kcheckableproxymodel_setsourcemodel_callback) {
            QAbstractItemModel* cbval1 = sourceModel;
            kcheckableproxymodel_setsourcemodel_callback(this, cbval1);
            return;
        }
        KCheckableProxyModel::setSourceModel(sourceModel);
    }

    // Virtual method for C ABI access and custom callback
    virtual QHash<int, QByteArray> roleNames() const override {
        if (kcheckableproxymodel_rolenames_callback) {
            libqt_map /* of int to libqt_string */ callback_ret = kcheckableproxymodel_rolenames_callback(this);
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
        return KCheckableProxyModel::roleNames();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool select(const QItemSelection& selection, QItemSelectionModel::SelectionFlags command) override {
        if (kcheckableproxymodel_select_callback) {
            const QItemSelection& selection_ret = selection;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selection_ret);
            int cbval2 = static_cast<int>(command);
            bool callback_ret = kcheckableproxymodel_select_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KCheckableProxyModel::select(selection, command);
    }

    // Virtual method for C ABI access and custom callback
    virtual int columnCount(const QModelIndex& parent) const override {
        if (kcheckableproxymodel_columncount_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int callback_ret = kcheckableproxymodel_columncount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KCheckableProxyModel::columnCount(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
        if (kcheckableproxymodel_index_callback) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            QModelIndex* callback_ret = kcheckableproxymodel_index_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KCheckableProxyModel::index(row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex mapFromSource(const QModelIndex& sourceIndex) const override {
        if (kcheckableproxymodel_mapfromsource_callback) {
            const QModelIndex& sourceIndex_ret = sourceIndex;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceIndex_ret);
            QModelIndex* callback_ret = kcheckableproxymodel_mapfromsource_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KCheckableProxyModel::mapFromSource(sourceIndex);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex mapToSource(const QModelIndex& proxyIndex) const override {
        if (kcheckableproxymodel_maptosource_callback) {
            const QModelIndex& proxyIndex_ret = proxyIndex;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&proxyIndex_ret);
            QModelIndex* callback_ret = kcheckableproxymodel_maptosource_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KCheckableProxyModel::mapToSource(proxyIndex);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex parent(const QModelIndex& child) const override {
        if (kcheckableproxymodel_parent_callback) {
            const QModelIndex& child_ret = child;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&child_ret);
            QModelIndex* callback_ret = kcheckableproxymodel_parent_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KCheckableProxyModel::parent(child);
    }

    // Virtual method for C ABI access and custom callback
    virtual int rowCount(const QModelIndex& parent) const override {
        if (kcheckableproxymodel_rowcount_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int callback_ret = kcheckableproxymodel_rowcount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KCheckableProxyModel::rowCount(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
        if (kcheckableproxymodel_headerdata_callback) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            int cbval3 = role;
            QVariant* callback_ret = kcheckableproxymodel_headerdata_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KCheckableProxyModel::headerData(section, orientation, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
        if (kcheckableproxymodel_dropmimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = kcheckableproxymodel_dropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return KCheckableProxyModel::dropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
        if (kcheckableproxymodel_sibling_callback) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& idx_ret = idx;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&idx_ret);
            QModelIndex* callback_ret = kcheckableproxymodel_sibling_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KCheckableProxyModel::sibling(row, column, idx);
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelection mapSelectionFromSource(const QItemSelection& selection) const override {
        if (kcheckableproxymodel_mapselectionfromsource_callback) {
            const QItemSelection& selection_ret = selection;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selection_ret);
            QItemSelection* callback_ret = kcheckableproxymodel_mapselectionfromsource_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KCheckableProxyModel::mapSelectionFromSource(selection);
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelection mapSelectionToSource(const QItemSelection& selection) const override {
        if (kcheckableproxymodel_mapselectiontosource_callback) {
            const QItemSelection& selection_ret = selection;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selection_ret);
            QItemSelection* callback_ret = kcheckableproxymodel_mapselectiontosource_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KCheckableProxyModel::mapSelectionToSource(selection);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
        if (kcheckableproxymodel_match_callback) {
            const QModelIndex& start_ret = start;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&start_ret);
            int cbval2 = role;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = hits;
            int cbval5 = static_cast<int>(flags);
            libqt_list /* of QModelIndex* */ callback_ret = kcheckableproxymodel_match_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            QList<QModelIndex> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QModelIndex** callback_ret_arr = static_cast<QModelIndex**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return KCheckableProxyModel::match(start, role, value, hits, flags);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
        if (kcheckableproxymodel_insertcolumns_callback) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = kcheckableproxymodel_insertcolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KCheckableProxyModel::insertColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
        if (kcheckableproxymodel_insertrows_callback) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = kcheckableproxymodel_insertrows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KCheckableProxyModel::insertRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
        if (kcheckableproxymodel_removecolumns_callback) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = kcheckableproxymodel_removecolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KCheckableProxyModel::removeColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
        if (kcheckableproxymodel_removerows_callback) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = kcheckableproxymodel_removerows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KCheckableProxyModel::removeRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (kcheckableproxymodel_moverows_callback) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceRow;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;
            bool callback_ret = kcheckableproxymodel_moverows_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return KCheckableProxyModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (kcheckableproxymodel_movecolumns_callback) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceColumn;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;
            bool callback_ret = kcheckableproxymodel_movecolumns_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return KCheckableProxyModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool submit() override {
        if (kcheckableproxymodel_submit_callback) {
            bool callback_ret = kcheckableproxymodel_submit_callback(this);
            return callback_ret;
        }
        return KCheckableProxyModel::submit();
    }

    // Virtual method for C ABI access and custom callback
    virtual void revert() override {
        if (kcheckableproxymodel_revert_callback) {
            kcheckableproxymodel_revert_callback(this);
            return;
        }
        KCheckableProxyModel::revert();
    }

    // Virtual method for C ABI access and custom callback
    virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
        if (kcheckableproxymodel_itemdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            libqt_map /* of int to QVariant* */ callback_ret = kcheckableproxymodel_itemdata_callback(this, cbval1);
            QMap<int, QVariant> callback_ret_QMap;
            int* callback_ret_karr = static_cast<int*>(callback_ret.keys);
            QVariant** callback_ret_varr = static_cast<QVariant**>(callback_ret.values);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QMap.insert(static_cast<int>(callback_ret_karr[i]), *(callback_ret_varr[i]));
            }
            return callback_ret_QMap;
        }
        return KCheckableProxyModel::itemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
        if (kcheckableproxymodel_setitemdata_callback) {
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
            bool callback_ret = kcheckableproxymodel_setitemdata_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KCheckableProxyModel::setItemData(index, roles);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
        if (kcheckableproxymodel_setheaderdata_callback) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = role;
            bool callback_ret = kcheckableproxymodel_setheaderdata_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        }
        return KCheckableProxyModel::setHeaderData(section, orientation, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool clearItemData(const QModelIndex& index) override {
        if (kcheckableproxymodel_clearitemdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            bool callback_ret = kcheckableproxymodel_clearitemdata_callback(this, cbval1);
            return callback_ret;
        }
        return KCheckableProxyModel::clearItemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex buddy(const QModelIndex& index) const override {
        if (kcheckableproxymodel_buddy_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelIndex* callback_ret = kcheckableproxymodel_buddy_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KCheckableProxyModel::buddy(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canFetchMore(const QModelIndex& parent) const override {
        if (kcheckableproxymodel_canfetchmore_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = kcheckableproxymodel_canfetchmore_callback(this, cbval1);
            return callback_ret;
        }
        return KCheckableProxyModel::canFetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void fetchMore(const QModelIndex& parent) override {
        if (kcheckableproxymodel_fetchmore_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            kcheckableproxymodel_fetchmore_callback(this, cbval1);
            return;
        }
        KCheckableProxyModel::fetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void sort(int column, Qt::SortOrder order) override {
        if (kcheckableproxymodel_sort_callback) {
            int cbval1 = column;
            int cbval2 = static_cast<int>(order);
            kcheckableproxymodel_sort_callback(this, cbval1, cbval2);
            return;
        }
        KCheckableProxyModel::sort(column, order);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize span(const QModelIndex& index) const override {
        if (kcheckableproxymodel_span_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QSize* callback_ret = kcheckableproxymodel_span_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KCheckableProxyModel::span(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasChildren(const QModelIndex& parent) const override {
        if (kcheckableproxymodel_haschildren_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = kcheckableproxymodel_haschildren_callback(this, cbval1);
            return callback_ret;
        }
        return KCheckableProxyModel::hasChildren(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* mimeData(const QList<QModelIndex>& indexes) const override {
        if (kcheckableproxymodel_mimedata_callback) {
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
            QMimeData* callback_ret = kcheckableproxymodel_mimedata_callback(this, cbval1);
            free(indexes_arr);
            return callback_ret;
        }
        return KCheckableProxyModel::mimeData(indexes);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
        if (kcheckableproxymodel_candropmimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = kcheckableproxymodel_candropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return KCheckableProxyModel::canDropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> mimeTypes() const override {
        if (kcheckableproxymodel_mimetypes_callback) {
            const char** callback_ret = kcheckableproxymodel_mimetypes_callback(this);
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
        return KCheckableProxyModel::mimeTypes();
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDragActions() const override {
        if (kcheckableproxymodel_supporteddragactions_callback) {
            int callback_ret = kcheckableproxymodel_supporteddragactions_callback(this);
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return KCheckableProxyModel::supportedDragActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (kcheckableproxymodel_supporteddropactions_callback) {
            int callback_ret = kcheckableproxymodel_supporteddropactions_callback(this);
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return KCheckableProxyModel::supportedDropActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
        if (kcheckableproxymodel_multidata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelRoleDataSpan* cbval2 = new QModelRoleDataSpan(roleDataSpan);
            kcheckableproxymodel_multidata_callback(this, cbval1, cbval2);
            return;
        }
        KCheckableProxyModel::multiData(index, roleDataSpan);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetInternalData() override {
        if (kcheckableproxymodel_resetinternaldata_callback) {
            kcheckableproxymodel_resetinternaldata_callback(this);
            return;
        }
        KCheckableProxyModel::resetInternalData();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kcheckableproxymodel_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kcheckableproxymodel_event_callback(this, cbval1);
            return callback_ret;
        }
        return KCheckableProxyModel::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kcheckableproxymodel_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kcheckableproxymodel_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KCheckableProxyModel::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kcheckableproxymodel_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kcheckableproxymodel_timerevent_callback(this, cbval1);
            return;
        }
        KCheckableProxyModel::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kcheckableproxymodel_childevent_callback) {
            QChildEvent* cbval1 = event;
            kcheckableproxymodel_childevent_callback(this, cbval1);
            return;
        }
        KCheckableProxyModel::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kcheckableproxymodel_customevent_callback) {
            QEvent* cbval1 = event;
            kcheckableproxymodel_customevent_callback(this, cbval1);
            return;
        }
        KCheckableProxyModel::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kcheckableproxymodel_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kcheckableproxymodel_connectnotify_callback(this, cbval1);
            return;
        }
        KCheckableProxyModel::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kcheckableproxymodel_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kcheckableproxymodel_disconnectnotify_callback(this, cbval1);
            return;
        }
        KCheckableProxyModel::disconnectNotify(signal);
    }

    // Friend functions
    friend bool KCheckableProxyModel_SuperSelect(KCheckableProxyModel* self, const QItemSelection* selection, int command);
    friend void KCheckableProxyModel_SuperResetInternalData(KCheckableProxyModel* self);
    friend void KCheckableProxyModel_SuperTimerEvent(KCheckableProxyModel* self, QTimerEvent* event);
    friend void KCheckableProxyModel_SuperChildEvent(KCheckableProxyModel* self, QChildEvent* event);
    friend void KCheckableProxyModel_SuperCustomEvent(KCheckableProxyModel* self, QEvent* event);
    friend void KCheckableProxyModel_SuperConnectNotify(KCheckableProxyModel* self, const QMetaMethod* signal);
    friend void KCheckableProxyModel_SuperDisconnectNotify(KCheckableProxyModel* self, const QMetaMethod* signal);
};

#endif
