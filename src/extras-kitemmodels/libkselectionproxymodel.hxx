#pragma once
#ifndef EXTRAS_KITEMMODELS_LIBKSELECTIONPROXYMODEL_HXX
#define EXTRAS_KITEMMODELS_LIBKSELECTIONPROXYMODEL_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KSelectionProxyModel
class VirtualKSelectionProxyModel final : public KSelectionProxyModel {
  public:
    // Virtual class public types (including callbacks and access types)
    using KSelectionProxyModel_MetaObject_Callback = QMetaObject* (*)(const KSelectionProxyModel*);
    using KSelectionProxyModel_Metacast_Callback = void* (*)(KSelectionProxyModel*, const char*);
    using KSelectionProxyModel_Metacall_Callback = int (*)(KSelectionProxyModel*, int, int, void**);
    using KSelectionProxyModel_SetSourceModel_Callback = void (*)(KSelectionProxyModel*, QAbstractItemModel*);
    using KSelectionProxyModel_MapFromSource_Callback = QModelIndex* (*)(const KSelectionProxyModel*, QModelIndex*);
    using KSelectionProxyModel_MapToSource_Callback = QModelIndex* (*)(const KSelectionProxyModel*, QModelIndex*);
    using KSelectionProxyModel_MapSelectionFromSource_Callback = QItemSelection* (*)(const KSelectionProxyModel*, QItemSelection*);
    using KSelectionProxyModel_MapSelectionToSource_Callback = QItemSelection* (*)(const KSelectionProxyModel*, QItemSelection*);
    using KSelectionProxyModel_Flags_Callback = int (*)(const KSelectionProxyModel*, QModelIndex*);
    using KSelectionProxyModel_Data_Callback = QVariant* (*)(const KSelectionProxyModel*, QModelIndex*, int);
    using KSelectionProxyModel_RowCount_Callback = int (*)(const KSelectionProxyModel*, QModelIndex*);
    using KSelectionProxyModel_HeaderData_Callback = QVariant* (*)(const KSelectionProxyModel*, int, int, int);
    using KSelectionProxyModel_MimeData_Callback = QMimeData* (*)(const KSelectionProxyModel*, libqt_list /* of QModelIndex* */);
    using KSelectionProxyModel_MimeTypes_Callback = const char** (*)(const KSelectionProxyModel*);
    using KSelectionProxyModel_SupportedDropActions_Callback = int (*)(const KSelectionProxyModel*);
    using KSelectionProxyModel_DropMimeData_Callback = bool (*)(KSelectionProxyModel*, QMimeData*, int, int, int, QModelIndex*);
    using KSelectionProxyModel_HasChildren_Callback = bool (*)(const KSelectionProxyModel*, QModelIndex*);
    using KSelectionProxyModel_Index_Callback = QModelIndex* (*)(const KSelectionProxyModel*, int, int, QModelIndex*);
    using KSelectionProxyModel_Parent_Callback = QModelIndex* (*)(const KSelectionProxyModel*, QModelIndex*);
    using KSelectionProxyModel_ColumnCount_Callback = int (*)(const KSelectionProxyModel*, QModelIndex*);
    using KSelectionProxyModel_Match_Callback = libqt_list /* of QModelIndex* */ (*)(const KSelectionProxyModel*, QModelIndex*, int, QVariant*, int, int);
    using KSelectionProxyModel_Submit_Callback = bool (*)(KSelectionProxyModel*);
    using KSelectionProxyModel_Revert_Callback = void (*)(KSelectionProxyModel*);
    using KSelectionProxyModel_ItemData_Callback = libqt_map /* of int to QVariant* */ (*)(const KSelectionProxyModel*, QModelIndex*);
    using KSelectionProxyModel_SetData_Callback = bool (*)(KSelectionProxyModel*, QModelIndex*, QVariant*, int);
    using KSelectionProxyModel_SetItemData_Callback = bool (*)(KSelectionProxyModel*, QModelIndex*, libqt_map /* of int to QVariant* */);
    using KSelectionProxyModel_SetHeaderData_Callback = bool (*)(KSelectionProxyModel*, int, int, QVariant*, int);
    using KSelectionProxyModel_ClearItemData_Callback = bool (*)(KSelectionProxyModel*, QModelIndex*);
    using KSelectionProxyModel_Buddy_Callback = QModelIndex* (*)(const KSelectionProxyModel*, QModelIndex*);
    using KSelectionProxyModel_CanFetchMore_Callback = bool (*)(const KSelectionProxyModel*, QModelIndex*);
    using KSelectionProxyModel_FetchMore_Callback = void (*)(KSelectionProxyModel*, QModelIndex*);
    using KSelectionProxyModel_Sort_Callback = void (*)(KSelectionProxyModel*, int, int);
    using KSelectionProxyModel_Span_Callback = QSize* (*)(const KSelectionProxyModel*, QModelIndex*);
    using KSelectionProxyModel_Sibling_Callback = QModelIndex* (*)(const KSelectionProxyModel*, int, int, QModelIndex*);
    using KSelectionProxyModel_CanDropMimeData_Callback = bool (*)(const KSelectionProxyModel*, QMimeData*, int, int, int, QModelIndex*);
    using KSelectionProxyModel_SupportedDragActions_Callback = int (*)(const KSelectionProxyModel*);
    using KSelectionProxyModel_RoleNames_Callback = libqt_map /* of int to libqt_string */ (*)(const KSelectionProxyModel*);
    using KSelectionProxyModel_InsertRows_Callback = bool (*)(KSelectionProxyModel*, int, int, QModelIndex*);
    using KSelectionProxyModel_InsertColumns_Callback = bool (*)(KSelectionProxyModel*, int, int, QModelIndex*);
    using KSelectionProxyModel_RemoveRows_Callback = bool (*)(KSelectionProxyModel*, int, int, QModelIndex*);
    using KSelectionProxyModel_RemoveColumns_Callback = bool (*)(KSelectionProxyModel*, int, int, QModelIndex*);
    using KSelectionProxyModel_MoveRows_Callback = bool (*)(KSelectionProxyModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KSelectionProxyModel_MoveColumns_Callback = bool (*)(KSelectionProxyModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KSelectionProxyModel_MultiData_Callback = void (*)(const KSelectionProxyModel*, QModelIndex*, QModelRoleDataSpan*);
    using KSelectionProxyModel_ResetInternalData_Callback = void (*)(KSelectionProxyModel*);
    using KSelectionProxyModel_Event_Callback = bool (*)(KSelectionProxyModel*, QEvent*);
    using KSelectionProxyModel_EventFilter_Callback = bool (*)(KSelectionProxyModel*, QObject*, QEvent*);
    using KSelectionProxyModel_TimerEvent_Callback = void (*)(KSelectionProxyModel*, QTimerEvent*);
    using KSelectionProxyModel_ChildEvent_Callback = void (*)(KSelectionProxyModel*, QChildEvent*);
    using KSelectionProxyModel_CustomEvent_Callback = void (*)(KSelectionProxyModel*, QEvent*);
    using KSelectionProxyModel_ConnectNotify_Callback = void (*)(KSelectionProxyModel*, QMetaMethod*);
    using KSelectionProxyModel_DisconnectNotify_Callback = void (*)(KSelectionProxyModel*, QMetaMethod*);
    using KSelectionProxyModel::beginInsertColumns;
    using KSelectionProxyModel::beginInsertRows;
    using KSelectionProxyModel::beginMoveColumns;
    using KSelectionProxyModel::beginMoveRows;
    using KSelectionProxyModel::beginRemoveColumns;
    using KSelectionProxyModel::beginRemoveRows;
    using KSelectionProxyModel::beginResetModel;
    using KSelectionProxyModel::changePersistentIndex;
    using KSelectionProxyModel::changePersistentIndexList;
    using KSelectionProxyModel::createIndex;
    using KSelectionProxyModel::createSourceIndex;
    using KSelectionProxyModel::decodeData;
    using KSelectionProxyModel::encodeData;
    using KSelectionProxyModel::endInsertColumns;
    using KSelectionProxyModel::endInsertRows;
    using KSelectionProxyModel::endMoveColumns;
    using KSelectionProxyModel::endMoveRows;
    using KSelectionProxyModel::endRemoveColumns;
    using KSelectionProxyModel::endRemoveRows;
    using KSelectionProxyModel::endResetModel;
    using KSelectionProxyModel::isSignalConnected;
    using KSelectionProxyModel::persistentIndexList;
    using KSelectionProxyModel::receivers;
    using KSelectionProxyModel::sender;
    using KSelectionProxyModel::senderSignalIndex;
    using KSelectionProxyModel::sourceRootIndexes;

    // Instance callback storage
    KSelectionProxyModel_MetaObject_Callback kselectionproxymodel_metaobject_callback = nullptr;
    KSelectionProxyModel_Metacast_Callback kselectionproxymodel_metacast_callback = nullptr;
    KSelectionProxyModel_Metacall_Callback kselectionproxymodel_metacall_callback = nullptr;
    KSelectionProxyModel_SetSourceModel_Callback kselectionproxymodel_setsourcemodel_callback = nullptr;
    KSelectionProxyModel_MapFromSource_Callback kselectionproxymodel_mapfromsource_callback = nullptr;
    KSelectionProxyModel_MapToSource_Callback kselectionproxymodel_maptosource_callback = nullptr;
    KSelectionProxyModel_MapSelectionFromSource_Callback kselectionproxymodel_mapselectionfromsource_callback = nullptr;
    KSelectionProxyModel_MapSelectionToSource_Callback kselectionproxymodel_mapselectiontosource_callback = nullptr;
    KSelectionProxyModel_Flags_Callback kselectionproxymodel_flags_callback = nullptr;
    KSelectionProxyModel_Data_Callback kselectionproxymodel_data_callback = nullptr;
    KSelectionProxyModel_RowCount_Callback kselectionproxymodel_rowcount_callback = nullptr;
    KSelectionProxyModel_HeaderData_Callback kselectionproxymodel_headerdata_callback = nullptr;
    KSelectionProxyModel_MimeData_Callback kselectionproxymodel_mimedata_callback = nullptr;
    KSelectionProxyModel_MimeTypes_Callback kselectionproxymodel_mimetypes_callback = nullptr;
    KSelectionProxyModel_SupportedDropActions_Callback kselectionproxymodel_supporteddropactions_callback = nullptr;
    KSelectionProxyModel_DropMimeData_Callback kselectionproxymodel_dropmimedata_callback = nullptr;
    KSelectionProxyModel_HasChildren_Callback kselectionproxymodel_haschildren_callback = nullptr;
    KSelectionProxyModel_Index_Callback kselectionproxymodel_index_callback = nullptr;
    KSelectionProxyModel_Parent_Callback kselectionproxymodel_parent_callback = nullptr;
    KSelectionProxyModel_ColumnCount_Callback kselectionproxymodel_columncount_callback = nullptr;
    KSelectionProxyModel_Match_Callback kselectionproxymodel_match_callback = nullptr;
    KSelectionProxyModel_Submit_Callback kselectionproxymodel_submit_callback = nullptr;
    KSelectionProxyModel_Revert_Callback kselectionproxymodel_revert_callback = nullptr;
    KSelectionProxyModel_ItemData_Callback kselectionproxymodel_itemdata_callback = nullptr;
    KSelectionProxyModel_SetData_Callback kselectionproxymodel_setdata_callback = nullptr;
    KSelectionProxyModel_SetItemData_Callback kselectionproxymodel_setitemdata_callback = nullptr;
    KSelectionProxyModel_SetHeaderData_Callback kselectionproxymodel_setheaderdata_callback = nullptr;
    KSelectionProxyModel_ClearItemData_Callback kselectionproxymodel_clearitemdata_callback = nullptr;
    KSelectionProxyModel_Buddy_Callback kselectionproxymodel_buddy_callback = nullptr;
    KSelectionProxyModel_CanFetchMore_Callback kselectionproxymodel_canfetchmore_callback = nullptr;
    KSelectionProxyModel_FetchMore_Callback kselectionproxymodel_fetchmore_callback = nullptr;
    KSelectionProxyModel_Sort_Callback kselectionproxymodel_sort_callback = nullptr;
    KSelectionProxyModel_Span_Callback kselectionproxymodel_span_callback = nullptr;
    KSelectionProxyModel_Sibling_Callback kselectionproxymodel_sibling_callback = nullptr;
    KSelectionProxyModel_CanDropMimeData_Callback kselectionproxymodel_candropmimedata_callback = nullptr;
    KSelectionProxyModel_SupportedDragActions_Callback kselectionproxymodel_supporteddragactions_callback = nullptr;
    KSelectionProxyModel_RoleNames_Callback kselectionproxymodel_rolenames_callback = nullptr;
    KSelectionProxyModel_InsertRows_Callback kselectionproxymodel_insertrows_callback = nullptr;
    KSelectionProxyModel_InsertColumns_Callback kselectionproxymodel_insertcolumns_callback = nullptr;
    KSelectionProxyModel_RemoveRows_Callback kselectionproxymodel_removerows_callback = nullptr;
    KSelectionProxyModel_RemoveColumns_Callback kselectionproxymodel_removecolumns_callback = nullptr;
    KSelectionProxyModel_MoveRows_Callback kselectionproxymodel_moverows_callback = nullptr;
    KSelectionProxyModel_MoveColumns_Callback kselectionproxymodel_movecolumns_callback = nullptr;
    KSelectionProxyModel_MultiData_Callback kselectionproxymodel_multidata_callback = nullptr;
    KSelectionProxyModel_ResetInternalData_Callback kselectionproxymodel_resetinternaldata_callback = nullptr;
    KSelectionProxyModel_Event_Callback kselectionproxymodel_event_callback = nullptr;
    KSelectionProxyModel_EventFilter_Callback kselectionproxymodel_eventfilter_callback = nullptr;
    KSelectionProxyModel_TimerEvent_Callback kselectionproxymodel_timerevent_callback = nullptr;
    KSelectionProxyModel_ChildEvent_Callback kselectionproxymodel_childevent_callback = nullptr;
    KSelectionProxyModel_CustomEvent_Callback kselectionproxymodel_customevent_callback = nullptr;
    KSelectionProxyModel_ConnectNotify_Callback kselectionproxymodel_connectnotify_callback = nullptr;
    KSelectionProxyModel_DisconnectNotify_Callback kselectionproxymodel_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KSelectionProxyModel {
        using KSelectionProxyModel::childEvent;
        using KSelectionProxyModel::connectNotify;
        using KSelectionProxyModel::customEvent;
        using KSelectionProxyModel::disconnectNotify;
        using KSelectionProxyModel::resetInternalData;
        using KSelectionProxyModel::timerEvent;
    };

    VirtualKSelectionProxyModel(QItemSelectionModel* selectionModel) : KSelectionProxyModel(selectionModel) {};
    VirtualKSelectionProxyModel() : KSelectionProxyModel() {};
    VirtualKSelectionProxyModel(QItemSelectionModel* selectionModel, QObject* parent) : KSelectionProxyModel(selectionModel, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kselectionproxymodel_metaobject_callback) {
            QMetaObject* callback_ret = kselectionproxymodel_metaobject_callback(this);
            return callback_ret;
        }
        return KSelectionProxyModel::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kselectionproxymodel_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kselectionproxymodel_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KSelectionProxyModel::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kselectionproxymodel_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kselectionproxymodel_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KSelectionProxyModel::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSourceModel(QAbstractItemModel* sourceModel) override {
        if (kselectionproxymodel_setsourcemodel_callback) {
            QAbstractItemModel* cbval1 = sourceModel;
            kselectionproxymodel_setsourcemodel_callback(this, cbval1);
            return;
        }
        KSelectionProxyModel::setSourceModel(sourceModel);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex mapFromSource(const QModelIndex& sourceIndex) const override {
        if (kselectionproxymodel_mapfromsource_callback) {
            const QModelIndex& sourceIndex_ret = sourceIndex;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceIndex_ret);
            QModelIndex* callback_ret = kselectionproxymodel_mapfromsource_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KSelectionProxyModel::mapFromSource(sourceIndex);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex mapToSource(const QModelIndex& proxyIndex) const override {
        if (kselectionproxymodel_maptosource_callback) {
            const QModelIndex& proxyIndex_ret = proxyIndex;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&proxyIndex_ret);
            QModelIndex* callback_ret = kselectionproxymodel_maptosource_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KSelectionProxyModel::mapToSource(proxyIndex);
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelection mapSelectionFromSource(const QItemSelection& selection) const override {
        if (kselectionproxymodel_mapselectionfromsource_callback) {
            const QItemSelection& selection_ret = selection;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selection_ret);
            QItemSelection* callback_ret = kselectionproxymodel_mapselectionfromsource_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KSelectionProxyModel::mapSelectionFromSource(selection);
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelection mapSelectionToSource(const QItemSelection& selection) const override {
        if (kselectionproxymodel_mapselectiontosource_callback) {
            const QItemSelection& selection_ret = selection;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selection_ret);
            QItemSelection* callback_ret = kselectionproxymodel_mapselectiontosource_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KSelectionProxyModel::mapSelectionToSource(selection);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
        if (kselectionproxymodel_flags_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int callback_ret = kselectionproxymodel_flags_callback(this, cbval1);
            return static_cast<Qt::ItemFlags>(callback_ret);
        }
        return KSelectionProxyModel::flags(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(const QModelIndex& index, int role) const override {
        if (kselectionproxymodel_data_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = role;
            QVariant* callback_ret = kselectionproxymodel_data_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KSelectionProxyModel::data(index, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual int rowCount(const QModelIndex& parent) const override {
        if (kselectionproxymodel_rowcount_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int callback_ret = kselectionproxymodel_rowcount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KSelectionProxyModel::rowCount(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
        if (kselectionproxymodel_headerdata_callback) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            int cbval3 = role;
            QVariant* callback_ret = kselectionproxymodel_headerdata_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KSelectionProxyModel::headerData(section, orientation, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* mimeData(const QList<QModelIndex>& indexes) const override {
        if (kselectionproxymodel_mimedata_callback) {
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
            QMimeData* callback_ret = kselectionproxymodel_mimedata_callback(this, cbval1);
            free(indexes_arr);
            return callback_ret;
        }
        return KSelectionProxyModel::mimeData(indexes);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> mimeTypes() const override {
        if (kselectionproxymodel_mimetypes_callback) {
            const char** callback_ret = kselectionproxymodel_mimetypes_callback(this);
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
        return KSelectionProxyModel::mimeTypes();
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (kselectionproxymodel_supporteddropactions_callback) {
            int callback_ret = kselectionproxymodel_supporteddropactions_callback(this);
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return KSelectionProxyModel::supportedDropActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
        if (kselectionproxymodel_dropmimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = kselectionproxymodel_dropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return KSelectionProxyModel::dropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasChildren(const QModelIndex& parent) const override {
        if (kselectionproxymodel_haschildren_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = kselectionproxymodel_haschildren_callback(this, cbval1);
            return callback_ret;
        }
        return KSelectionProxyModel::hasChildren(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex index(int param1, int param2, const QModelIndex& param3) const override {
        if (kselectionproxymodel_index_callback) {
            int cbval1 = param1;
            int cbval2 = param2;
            const QModelIndex& param3_ret = param3;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&param3_ret);
            QModelIndex* callback_ret = kselectionproxymodel_index_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KSelectionProxyModel::index(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex parent(const QModelIndex& param1) const override {
        if (kselectionproxymodel_parent_callback) {
            const QModelIndex& param1_ret = param1;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&param1_ret);
            QModelIndex* callback_ret = kselectionproxymodel_parent_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KSelectionProxyModel::parent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int columnCount(const QModelIndex& param1) const override {
        if (kselectionproxymodel_columncount_callback) {
            const QModelIndex& param1_ret = param1;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&param1_ret);
            int callback_ret = kselectionproxymodel_columncount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KSelectionProxyModel::columnCount(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
        if (kselectionproxymodel_match_callback) {
            const QModelIndex& start_ret = start;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&start_ret);
            int cbval2 = role;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = hits;
            int cbval5 = static_cast<int>(flags);
            libqt_list /* of QModelIndex* */ callback_ret = kselectionproxymodel_match_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            QList<QModelIndex> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QModelIndex** callback_ret_arr = static_cast<QModelIndex**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return KSelectionProxyModel::match(start, role, value, hits, flags);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool submit() override {
        if (kselectionproxymodel_submit_callback) {
            bool callback_ret = kselectionproxymodel_submit_callback(this);
            return callback_ret;
        }
        return KSelectionProxyModel::submit();
    }

    // Virtual method for C ABI access and custom callback
    virtual void revert() override {
        if (kselectionproxymodel_revert_callback) {
            kselectionproxymodel_revert_callback(this);
            return;
        }
        KSelectionProxyModel::revert();
    }

    // Virtual method for C ABI access and custom callback
    virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
        if (kselectionproxymodel_itemdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            libqt_map /* of int to QVariant* */ callback_ret = kselectionproxymodel_itemdata_callback(this, cbval1);
            QMap<int, QVariant> callback_ret_QMap;
            int* callback_ret_karr = static_cast<int*>(callback_ret.keys);
            QVariant** callback_ret_varr = static_cast<QVariant**>(callback_ret.values);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QMap.insert(static_cast<int>(callback_ret_karr[i]), *(callback_ret_varr[i]));
            }
            return callback_ret_QMap;
        }
        return KSelectionProxyModel::itemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
        if (kselectionproxymodel_setdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            int cbval3 = role;
            bool callback_ret = kselectionproxymodel_setdata_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KSelectionProxyModel::setData(index, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
        if (kselectionproxymodel_setitemdata_callback) {
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
            bool callback_ret = kselectionproxymodel_setitemdata_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KSelectionProxyModel::setItemData(index, roles);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
        if (kselectionproxymodel_setheaderdata_callback) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = role;
            bool callback_ret = kselectionproxymodel_setheaderdata_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        }
        return KSelectionProxyModel::setHeaderData(section, orientation, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool clearItemData(const QModelIndex& index) override {
        if (kselectionproxymodel_clearitemdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            bool callback_ret = kselectionproxymodel_clearitemdata_callback(this, cbval1);
            return callback_ret;
        }
        return KSelectionProxyModel::clearItemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex buddy(const QModelIndex& index) const override {
        if (kselectionproxymodel_buddy_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelIndex* callback_ret = kselectionproxymodel_buddy_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KSelectionProxyModel::buddy(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canFetchMore(const QModelIndex& parent) const override {
        if (kselectionproxymodel_canfetchmore_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = kselectionproxymodel_canfetchmore_callback(this, cbval1);
            return callback_ret;
        }
        return KSelectionProxyModel::canFetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void fetchMore(const QModelIndex& parent) override {
        if (kselectionproxymodel_fetchmore_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            kselectionproxymodel_fetchmore_callback(this, cbval1);
            return;
        }
        KSelectionProxyModel::fetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void sort(int column, Qt::SortOrder order) override {
        if (kselectionproxymodel_sort_callback) {
            int cbval1 = column;
            int cbval2 = static_cast<int>(order);
            kselectionproxymodel_sort_callback(this, cbval1, cbval2);
            return;
        }
        KSelectionProxyModel::sort(column, order);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize span(const QModelIndex& index) const override {
        if (kselectionproxymodel_span_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QSize* callback_ret = kselectionproxymodel_span_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KSelectionProxyModel::span(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
        if (kselectionproxymodel_sibling_callback) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& idx_ret = idx;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&idx_ret);
            QModelIndex* callback_ret = kselectionproxymodel_sibling_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KSelectionProxyModel::sibling(row, column, idx);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
        if (kselectionproxymodel_candropmimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = kselectionproxymodel_candropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return KSelectionProxyModel::canDropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDragActions() const override {
        if (kselectionproxymodel_supporteddragactions_callback) {
            int callback_ret = kselectionproxymodel_supporteddragactions_callback(this);
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return KSelectionProxyModel::supportedDragActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual QHash<int, QByteArray> roleNames() const override {
        if (kselectionproxymodel_rolenames_callback) {
            libqt_map /* of int to libqt_string */ callback_ret = kselectionproxymodel_rolenames_callback(this);
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
        return KSelectionProxyModel::roleNames();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
        if (kselectionproxymodel_insertrows_callback) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = kselectionproxymodel_insertrows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KSelectionProxyModel::insertRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
        if (kselectionproxymodel_insertcolumns_callback) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = kselectionproxymodel_insertcolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KSelectionProxyModel::insertColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
        if (kselectionproxymodel_removerows_callback) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = kselectionproxymodel_removerows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KSelectionProxyModel::removeRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
        if (kselectionproxymodel_removecolumns_callback) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = kselectionproxymodel_removecolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KSelectionProxyModel::removeColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (kselectionproxymodel_moverows_callback) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceRow;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;
            bool callback_ret = kselectionproxymodel_moverows_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return KSelectionProxyModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (kselectionproxymodel_movecolumns_callback) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceColumn;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;
            bool callback_ret = kselectionproxymodel_movecolumns_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return KSelectionProxyModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
        if (kselectionproxymodel_multidata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelRoleDataSpan* cbval2 = new QModelRoleDataSpan(roleDataSpan);
            kselectionproxymodel_multidata_callback(this, cbval1, cbval2);
            return;
        }
        KSelectionProxyModel::multiData(index, roleDataSpan);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetInternalData() override {
        if (kselectionproxymodel_resetinternaldata_callback) {
            kselectionproxymodel_resetinternaldata_callback(this);
            return;
        }
        KSelectionProxyModel::resetInternalData();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kselectionproxymodel_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kselectionproxymodel_event_callback(this, cbval1);
            return callback_ret;
        }
        return KSelectionProxyModel::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kselectionproxymodel_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kselectionproxymodel_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KSelectionProxyModel::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kselectionproxymodel_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kselectionproxymodel_timerevent_callback(this, cbval1);
            return;
        }
        KSelectionProxyModel::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kselectionproxymodel_childevent_callback) {
            QChildEvent* cbval1 = event;
            kselectionproxymodel_childevent_callback(this, cbval1);
            return;
        }
        KSelectionProxyModel::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kselectionproxymodel_customevent_callback) {
            QEvent* cbval1 = event;
            kselectionproxymodel_customevent_callback(this, cbval1);
            return;
        }
        KSelectionProxyModel::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kselectionproxymodel_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kselectionproxymodel_connectnotify_callback(this, cbval1);
            return;
        }
        KSelectionProxyModel::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kselectionproxymodel_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kselectionproxymodel_disconnectnotify_callback(this, cbval1);
            return;
        }
        KSelectionProxyModel::disconnectNotify(signal);
    }

    // Friend functions
    friend void KSelectionProxyModel_SuperResetInternalData(KSelectionProxyModel* self);
    friend void KSelectionProxyModel_SuperTimerEvent(KSelectionProxyModel* self, QTimerEvent* event);
    friend void KSelectionProxyModel_SuperChildEvent(KSelectionProxyModel* self, QChildEvent* event);
    friend void KSelectionProxyModel_SuperCustomEvent(KSelectionProxyModel* self, QEvent* event);
    friend void KSelectionProxyModel_SuperConnectNotify(KSelectionProxyModel* self, const QMetaMethod* signal);
    friend void KSelectionProxyModel_SuperDisconnectNotify(KSelectionProxyModel* self, const QMetaMethod* signal);
};

#endif
