#pragma once
#ifndef EXTRAS_KITEMMODELS_LIBKDESCENDANTSPROXYMODEL_HXX
#define EXTRAS_KITEMMODELS_LIBKDESCENDANTSPROXYMODEL_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KDescendantsProxyModel
class VirtualKDescendantsProxyModel final : public KDescendantsProxyModel {
  public:
    // Virtual class public types (including callbacks and access types)
    using KDescendantsProxyModel_MetaObject_Callback = QMetaObject* (*)(const KDescendantsProxyModel*);
    using KDescendantsProxyModel_Metacast_Callback = void* (*)(KDescendantsProxyModel*, const char*);
    using KDescendantsProxyModel_Metacall_Callback = int (*)(KDescendantsProxyModel*, int, int, void**);
    using KDescendantsProxyModel_SetSourceModel_Callback = void (*)(KDescendantsProxyModel*, QAbstractItemModel*);
    using KDescendantsProxyModel_MapFromSource_Callback = QModelIndex* (*)(const KDescendantsProxyModel*, QModelIndex*);
    using KDescendantsProxyModel_MapToSource_Callback = QModelIndex* (*)(const KDescendantsProxyModel*, QModelIndex*);
    using KDescendantsProxyModel_Flags_Callback = int (*)(const KDescendantsProxyModel*, QModelIndex*);
    using KDescendantsProxyModel_Data_Callback = QVariant* (*)(const KDescendantsProxyModel*, QModelIndex*, int);
    using KDescendantsProxyModel_RowCount_Callback = int (*)(const KDescendantsProxyModel*, QModelIndex*);
    using KDescendantsProxyModel_HeaderData_Callback = QVariant* (*)(const KDescendantsProxyModel*, int, int, int);
    using KDescendantsProxyModel_MimeData_Callback = QMimeData* (*)(const KDescendantsProxyModel*, libqt_list /* of QModelIndex* */);
    using KDescendantsProxyModel_MimeTypes_Callback = const char** (*)(const KDescendantsProxyModel*);
    using KDescendantsProxyModel_HasChildren_Callback = bool (*)(const KDescendantsProxyModel*, QModelIndex*);
    using KDescendantsProxyModel_Index_Callback = QModelIndex* (*)(const KDescendantsProxyModel*, int, int, QModelIndex*);
    using KDescendantsProxyModel_Parent_Callback = QModelIndex* (*)(const KDescendantsProxyModel*, QModelIndex*);
    using KDescendantsProxyModel_ColumnCount_Callback = int (*)(const KDescendantsProxyModel*, QModelIndex*);
    using KDescendantsProxyModel_RoleNames_Callback = libqt_map /* of int to libqt_string */ (*)(const KDescendantsProxyModel*);
    using KDescendantsProxyModel_SupportedDropActions_Callback = int (*)(const KDescendantsProxyModel*);
    using KDescendantsProxyModel_Match_Callback = libqt_list /* of QModelIndex* */ (*)(const KDescendantsProxyModel*, QModelIndex*, int, QVariant*, int, int);
    using KDescendantsProxyModel_MapSelectionToSource_Callback = QItemSelection* (*)(const KDescendantsProxyModel*, QItemSelection*);
    using KDescendantsProxyModel_MapSelectionFromSource_Callback = QItemSelection* (*)(const KDescendantsProxyModel*, QItemSelection*);
    using KDescendantsProxyModel_Submit_Callback = bool (*)(KDescendantsProxyModel*);
    using KDescendantsProxyModel_Revert_Callback = void (*)(KDescendantsProxyModel*);
    using KDescendantsProxyModel_ItemData_Callback = libqt_map /* of int to QVariant* */ (*)(const KDescendantsProxyModel*, QModelIndex*);
    using KDescendantsProxyModel_SetData_Callback = bool (*)(KDescendantsProxyModel*, QModelIndex*, QVariant*, int);
    using KDescendantsProxyModel_SetItemData_Callback = bool (*)(KDescendantsProxyModel*, QModelIndex*, libqt_map /* of int to QVariant* */);
    using KDescendantsProxyModel_SetHeaderData_Callback = bool (*)(KDescendantsProxyModel*, int, int, QVariant*, int);
    using KDescendantsProxyModel_ClearItemData_Callback = bool (*)(KDescendantsProxyModel*, QModelIndex*);
    using KDescendantsProxyModel_Buddy_Callback = QModelIndex* (*)(const KDescendantsProxyModel*, QModelIndex*);
    using KDescendantsProxyModel_CanFetchMore_Callback = bool (*)(const KDescendantsProxyModel*, QModelIndex*);
    using KDescendantsProxyModel_FetchMore_Callback = void (*)(KDescendantsProxyModel*, QModelIndex*);
    using KDescendantsProxyModel_Sort_Callback = void (*)(KDescendantsProxyModel*, int, int);
    using KDescendantsProxyModel_Span_Callback = QSize* (*)(const KDescendantsProxyModel*, QModelIndex*);
    using KDescendantsProxyModel_Sibling_Callback = QModelIndex* (*)(const KDescendantsProxyModel*, int, int, QModelIndex*);
    using KDescendantsProxyModel_CanDropMimeData_Callback = bool (*)(const KDescendantsProxyModel*, QMimeData*, int, int, int, QModelIndex*);
    using KDescendantsProxyModel_DropMimeData_Callback = bool (*)(KDescendantsProxyModel*, QMimeData*, int, int, int, QModelIndex*);
    using KDescendantsProxyModel_SupportedDragActions_Callback = int (*)(const KDescendantsProxyModel*);
    using KDescendantsProxyModel_InsertRows_Callback = bool (*)(KDescendantsProxyModel*, int, int, QModelIndex*);
    using KDescendantsProxyModel_InsertColumns_Callback = bool (*)(KDescendantsProxyModel*, int, int, QModelIndex*);
    using KDescendantsProxyModel_RemoveRows_Callback = bool (*)(KDescendantsProxyModel*, int, int, QModelIndex*);
    using KDescendantsProxyModel_RemoveColumns_Callback = bool (*)(KDescendantsProxyModel*, int, int, QModelIndex*);
    using KDescendantsProxyModel_MoveRows_Callback = bool (*)(KDescendantsProxyModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KDescendantsProxyModel_MoveColumns_Callback = bool (*)(KDescendantsProxyModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KDescendantsProxyModel_MultiData_Callback = void (*)(const KDescendantsProxyModel*, QModelIndex*, QModelRoleDataSpan*);
    using KDescendantsProxyModel_ResetInternalData_Callback = void (*)(KDescendantsProxyModel*);
    using KDescendantsProxyModel_Event_Callback = bool (*)(KDescendantsProxyModel*, QEvent*);
    using KDescendantsProxyModel_EventFilter_Callback = bool (*)(KDescendantsProxyModel*, QObject*, QEvent*);
    using KDescendantsProxyModel_TimerEvent_Callback = void (*)(KDescendantsProxyModel*, QTimerEvent*);
    using KDescendantsProxyModel_ChildEvent_Callback = void (*)(KDescendantsProxyModel*, QChildEvent*);
    using KDescendantsProxyModel_CustomEvent_Callback = void (*)(KDescendantsProxyModel*, QEvent*);
    using KDescendantsProxyModel_ConnectNotify_Callback = void (*)(KDescendantsProxyModel*, QMetaMethod*);
    using KDescendantsProxyModel_DisconnectNotify_Callback = void (*)(KDescendantsProxyModel*, QMetaMethod*);
    using KDescendantsProxyModel::beginInsertColumns;
    using KDescendantsProxyModel::beginInsertRows;
    using KDescendantsProxyModel::beginMoveColumns;
    using KDescendantsProxyModel::beginMoveRows;
    using KDescendantsProxyModel::beginRemoveColumns;
    using KDescendantsProxyModel::beginRemoveRows;
    using KDescendantsProxyModel::beginResetModel;
    using KDescendantsProxyModel::changePersistentIndex;
    using KDescendantsProxyModel::changePersistentIndexList;
    using KDescendantsProxyModel::createIndex;
    using KDescendantsProxyModel::createSourceIndex;
    using KDescendantsProxyModel::decodeData;
    using KDescendantsProxyModel::encodeData;
    using KDescendantsProxyModel::endInsertColumns;
    using KDescendantsProxyModel::endInsertRows;
    using KDescendantsProxyModel::endMoveColumns;
    using KDescendantsProxyModel::endMoveRows;
    using KDescendantsProxyModel::endRemoveColumns;
    using KDescendantsProxyModel::endRemoveRows;
    using KDescendantsProxyModel::endResetModel;
    using KDescendantsProxyModel::isSignalConnected;
    using KDescendantsProxyModel::persistentIndexList;
    using KDescendantsProxyModel::receivers;
    using KDescendantsProxyModel::sender;
    using KDescendantsProxyModel::senderSignalIndex;

    // Instance callback storage
    KDescendantsProxyModel_MetaObject_Callback kdescendantsproxymodel_metaobject_callback = nullptr;
    KDescendantsProxyModel_Metacast_Callback kdescendantsproxymodel_metacast_callback = nullptr;
    KDescendantsProxyModel_Metacall_Callback kdescendantsproxymodel_metacall_callback = nullptr;
    KDescendantsProxyModel_SetSourceModel_Callback kdescendantsproxymodel_setsourcemodel_callback = nullptr;
    KDescendantsProxyModel_MapFromSource_Callback kdescendantsproxymodel_mapfromsource_callback = nullptr;
    KDescendantsProxyModel_MapToSource_Callback kdescendantsproxymodel_maptosource_callback = nullptr;
    KDescendantsProxyModel_Flags_Callback kdescendantsproxymodel_flags_callback = nullptr;
    KDescendantsProxyModel_Data_Callback kdescendantsproxymodel_data_callback = nullptr;
    KDescendantsProxyModel_RowCount_Callback kdescendantsproxymodel_rowcount_callback = nullptr;
    KDescendantsProxyModel_HeaderData_Callback kdescendantsproxymodel_headerdata_callback = nullptr;
    KDescendantsProxyModel_MimeData_Callback kdescendantsproxymodel_mimedata_callback = nullptr;
    KDescendantsProxyModel_MimeTypes_Callback kdescendantsproxymodel_mimetypes_callback = nullptr;
    KDescendantsProxyModel_HasChildren_Callback kdescendantsproxymodel_haschildren_callback = nullptr;
    KDescendantsProxyModel_Index_Callback kdescendantsproxymodel_index_callback = nullptr;
    KDescendantsProxyModel_Parent_Callback kdescendantsproxymodel_parent_callback = nullptr;
    KDescendantsProxyModel_ColumnCount_Callback kdescendantsproxymodel_columncount_callback = nullptr;
    KDescendantsProxyModel_RoleNames_Callback kdescendantsproxymodel_rolenames_callback = nullptr;
    KDescendantsProxyModel_SupportedDropActions_Callback kdescendantsproxymodel_supporteddropactions_callback = nullptr;
    KDescendantsProxyModel_Match_Callback kdescendantsproxymodel_match_callback = nullptr;
    KDescendantsProxyModel_MapSelectionToSource_Callback kdescendantsproxymodel_mapselectiontosource_callback = nullptr;
    KDescendantsProxyModel_MapSelectionFromSource_Callback kdescendantsproxymodel_mapselectionfromsource_callback = nullptr;
    KDescendantsProxyModel_Submit_Callback kdescendantsproxymodel_submit_callback = nullptr;
    KDescendantsProxyModel_Revert_Callback kdescendantsproxymodel_revert_callback = nullptr;
    KDescendantsProxyModel_ItemData_Callback kdescendantsproxymodel_itemdata_callback = nullptr;
    KDescendantsProxyModel_SetData_Callback kdescendantsproxymodel_setdata_callback = nullptr;
    KDescendantsProxyModel_SetItemData_Callback kdescendantsproxymodel_setitemdata_callback = nullptr;
    KDescendantsProxyModel_SetHeaderData_Callback kdescendantsproxymodel_setheaderdata_callback = nullptr;
    KDescendantsProxyModel_ClearItemData_Callback kdescendantsproxymodel_clearitemdata_callback = nullptr;
    KDescendantsProxyModel_Buddy_Callback kdescendantsproxymodel_buddy_callback = nullptr;
    KDescendantsProxyModel_CanFetchMore_Callback kdescendantsproxymodel_canfetchmore_callback = nullptr;
    KDescendantsProxyModel_FetchMore_Callback kdescendantsproxymodel_fetchmore_callback = nullptr;
    KDescendantsProxyModel_Sort_Callback kdescendantsproxymodel_sort_callback = nullptr;
    KDescendantsProxyModel_Span_Callback kdescendantsproxymodel_span_callback = nullptr;
    KDescendantsProxyModel_Sibling_Callback kdescendantsproxymodel_sibling_callback = nullptr;
    KDescendantsProxyModel_CanDropMimeData_Callback kdescendantsproxymodel_candropmimedata_callback = nullptr;
    KDescendantsProxyModel_DropMimeData_Callback kdescendantsproxymodel_dropmimedata_callback = nullptr;
    KDescendantsProxyModel_SupportedDragActions_Callback kdescendantsproxymodel_supporteddragactions_callback = nullptr;
    KDescendantsProxyModel_InsertRows_Callback kdescendantsproxymodel_insertrows_callback = nullptr;
    KDescendantsProxyModel_InsertColumns_Callback kdescendantsproxymodel_insertcolumns_callback = nullptr;
    KDescendantsProxyModel_RemoveRows_Callback kdescendantsproxymodel_removerows_callback = nullptr;
    KDescendantsProxyModel_RemoveColumns_Callback kdescendantsproxymodel_removecolumns_callback = nullptr;
    KDescendantsProxyModel_MoveRows_Callback kdescendantsproxymodel_moverows_callback = nullptr;
    KDescendantsProxyModel_MoveColumns_Callback kdescendantsproxymodel_movecolumns_callback = nullptr;
    KDescendantsProxyModel_MultiData_Callback kdescendantsproxymodel_multidata_callback = nullptr;
    KDescendantsProxyModel_ResetInternalData_Callback kdescendantsproxymodel_resetinternaldata_callback = nullptr;
    KDescendantsProxyModel_Event_Callback kdescendantsproxymodel_event_callback = nullptr;
    KDescendantsProxyModel_EventFilter_Callback kdescendantsproxymodel_eventfilter_callback = nullptr;
    KDescendantsProxyModel_TimerEvent_Callback kdescendantsproxymodel_timerevent_callback = nullptr;
    KDescendantsProxyModel_ChildEvent_Callback kdescendantsproxymodel_childevent_callback = nullptr;
    KDescendantsProxyModel_CustomEvent_Callback kdescendantsproxymodel_customevent_callback = nullptr;
    KDescendantsProxyModel_ConnectNotify_Callback kdescendantsproxymodel_connectnotify_callback = nullptr;
    KDescendantsProxyModel_DisconnectNotify_Callback kdescendantsproxymodel_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KDescendantsProxyModel {
        using KDescendantsProxyModel::childEvent;
        using KDescendantsProxyModel::connectNotify;
        using KDescendantsProxyModel::customEvent;
        using KDescendantsProxyModel::disconnectNotify;
        using KDescendantsProxyModel::resetInternalData;
        using KDescendantsProxyModel::timerEvent;
    };

    VirtualKDescendantsProxyModel() : KDescendantsProxyModel() {};
    VirtualKDescendantsProxyModel(QObject* parent) : KDescendantsProxyModel(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kdescendantsproxymodel_metaobject_callback) {
            QMetaObject* callback_ret = kdescendantsproxymodel_metaobject_callback(this);
            return callback_ret;
        }
        return KDescendantsProxyModel::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kdescendantsproxymodel_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kdescendantsproxymodel_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KDescendantsProxyModel::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kdescendantsproxymodel_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kdescendantsproxymodel_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KDescendantsProxyModel::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSourceModel(QAbstractItemModel* model) override {
        if (kdescendantsproxymodel_setsourcemodel_callback) {
            QAbstractItemModel* cbval1 = model;
            kdescendantsproxymodel_setsourcemodel_callback(this, cbval1);
            return;
        }
        KDescendantsProxyModel::setSourceModel(model);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex mapFromSource(const QModelIndex& sourceIndex) const override {
        if (kdescendantsproxymodel_mapfromsource_callback) {
            const QModelIndex& sourceIndex_ret = sourceIndex;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceIndex_ret);
            QModelIndex* callback_ret = kdescendantsproxymodel_mapfromsource_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KDescendantsProxyModel::mapFromSource(sourceIndex);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex mapToSource(const QModelIndex& proxyIndex) const override {
        if (kdescendantsproxymodel_maptosource_callback) {
            const QModelIndex& proxyIndex_ret = proxyIndex;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&proxyIndex_ret);
            QModelIndex* callback_ret = kdescendantsproxymodel_maptosource_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KDescendantsProxyModel::mapToSource(proxyIndex);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
        if (kdescendantsproxymodel_flags_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int callback_ret = kdescendantsproxymodel_flags_callback(this, cbval1);
            return static_cast<Qt::ItemFlags>(callback_ret);
        }
        return KDescendantsProxyModel::flags(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(const QModelIndex& index, int role) const override {
        if (kdescendantsproxymodel_data_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = role;
            QVariant* callback_ret = kdescendantsproxymodel_data_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KDescendantsProxyModel::data(index, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual int rowCount(const QModelIndex& parent) const override {
        if (kdescendantsproxymodel_rowcount_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int callback_ret = kdescendantsproxymodel_rowcount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KDescendantsProxyModel::rowCount(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
        if (kdescendantsproxymodel_headerdata_callback) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            int cbval3 = role;
            QVariant* callback_ret = kdescendantsproxymodel_headerdata_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KDescendantsProxyModel::headerData(section, orientation, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* mimeData(const QList<QModelIndex>& indexes) const override {
        if (kdescendantsproxymodel_mimedata_callback) {
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
            QMimeData* callback_ret = kdescendantsproxymodel_mimedata_callback(this, cbval1);
            free(indexes_arr);
            return callback_ret;
        }
        return KDescendantsProxyModel::mimeData(indexes);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> mimeTypes() const override {
        if (kdescendantsproxymodel_mimetypes_callback) {
            const char** callback_ret = kdescendantsproxymodel_mimetypes_callback(this);
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
        return KDescendantsProxyModel::mimeTypes();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasChildren(const QModelIndex& parent) const override {
        if (kdescendantsproxymodel_haschildren_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = kdescendantsproxymodel_haschildren_callback(this, cbval1);
            return callback_ret;
        }
        return KDescendantsProxyModel::hasChildren(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex index(int param1, int param2, const QModelIndex& parent) const override {
        if (kdescendantsproxymodel_index_callback) {
            int cbval1 = param1;
            int cbval2 = param2;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            QModelIndex* callback_ret = kdescendantsproxymodel_index_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KDescendantsProxyModel::index(param1, param2, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex parent(const QModelIndex& param1) const override {
        if (kdescendantsproxymodel_parent_callback) {
            const QModelIndex& param1_ret = param1;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&param1_ret);
            QModelIndex* callback_ret = kdescendantsproxymodel_parent_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KDescendantsProxyModel::parent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int columnCount(const QModelIndex& index) const override {
        if (kdescendantsproxymodel_columncount_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int callback_ret = kdescendantsproxymodel_columncount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KDescendantsProxyModel::columnCount(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QHash<int, QByteArray> roleNames() const override {
        if (kdescendantsproxymodel_rolenames_callback) {
            libqt_map /* of int to libqt_string */ callback_ret = kdescendantsproxymodel_rolenames_callback(this);
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
        return KDescendantsProxyModel::roleNames();
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (kdescendantsproxymodel_supporteddropactions_callback) {
            int callback_ret = kdescendantsproxymodel_supporteddropactions_callback(this);
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return KDescendantsProxyModel::supportedDropActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
        if (kdescendantsproxymodel_match_callback) {
            const QModelIndex& start_ret = start;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&start_ret);
            int cbval2 = role;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = hits;
            int cbval5 = static_cast<int>(flags);
            libqt_list /* of QModelIndex* */ callback_ret = kdescendantsproxymodel_match_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            QList<QModelIndex> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QModelIndex** callback_ret_arr = static_cast<QModelIndex**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return KDescendantsProxyModel::match(start, role, value, hits, flags);
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelection mapSelectionToSource(const QItemSelection& selection) const override {
        if (kdescendantsproxymodel_mapselectiontosource_callback) {
            const QItemSelection& selection_ret = selection;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selection_ret);
            QItemSelection* callback_ret = kdescendantsproxymodel_mapselectiontosource_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KDescendantsProxyModel::mapSelectionToSource(selection);
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelection mapSelectionFromSource(const QItemSelection& selection) const override {
        if (kdescendantsproxymodel_mapselectionfromsource_callback) {
            const QItemSelection& selection_ret = selection;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selection_ret);
            QItemSelection* callback_ret = kdescendantsproxymodel_mapselectionfromsource_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KDescendantsProxyModel::mapSelectionFromSource(selection);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool submit() override {
        if (kdescendantsproxymodel_submit_callback) {
            bool callback_ret = kdescendantsproxymodel_submit_callback(this);
            return callback_ret;
        }
        return KDescendantsProxyModel::submit();
    }

    // Virtual method for C ABI access and custom callback
    virtual void revert() override {
        if (kdescendantsproxymodel_revert_callback) {
            kdescendantsproxymodel_revert_callback(this);
            return;
        }
        KDescendantsProxyModel::revert();
    }

    // Virtual method for C ABI access and custom callback
    virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
        if (kdescendantsproxymodel_itemdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            libqt_map /* of int to QVariant* */ callback_ret = kdescendantsproxymodel_itemdata_callback(this, cbval1);
            QMap<int, QVariant> callback_ret_QMap;
            int* callback_ret_karr = static_cast<int*>(callback_ret.keys);
            QVariant** callback_ret_varr = static_cast<QVariant**>(callback_ret.values);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QMap.insert(static_cast<int>(callback_ret_karr[i]), *(callback_ret_varr[i]));
            }
            return callback_ret_QMap;
        }
        return KDescendantsProxyModel::itemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
        if (kdescendantsproxymodel_setdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            int cbval3 = role;
            bool callback_ret = kdescendantsproxymodel_setdata_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KDescendantsProxyModel::setData(index, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
        if (kdescendantsproxymodel_setitemdata_callback) {
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
            bool callback_ret = kdescendantsproxymodel_setitemdata_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KDescendantsProxyModel::setItemData(index, roles);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
        if (kdescendantsproxymodel_setheaderdata_callback) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = role;
            bool callback_ret = kdescendantsproxymodel_setheaderdata_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        }
        return KDescendantsProxyModel::setHeaderData(section, orientation, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool clearItemData(const QModelIndex& index) override {
        if (kdescendantsproxymodel_clearitemdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            bool callback_ret = kdescendantsproxymodel_clearitemdata_callback(this, cbval1);
            return callback_ret;
        }
        return KDescendantsProxyModel::clearItemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex buddy(const QModelIndex& index) const override {
        if (kdescendantsproxymodel_buddy_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelIndex* callback_ret = kdescendantsproxymodel_buddy_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KDescendantsProxyModel::buddy(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canFetchMore(const QModelIndex& parent) const override {
        if (kdescendantsproxymodel_canfetchmore_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = kdescendantsproxymodel_canfetchmore_callback(this, cbval1);
            return callback_ret;
        }
        return KDescendantsProxyModel::canFetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void fetchMore(const QModelIndex& parent) override {
        if (kdescendantsproxymodel_fetchmore_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            kdescendantsproxymodel_fetchmore_callback(this, cbval1);
            return;
        }
        KDescendantsProxyModel::fetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void sort(int column, Qt::SortOrder order) override {
        if (kdescendantsproxymodel_sort_callback) {
            int cbval1 = column;
            int cbval2 = static_cast<int>(order);
            kdescendantsproxymodel_sort_callback(this, cbval1, cbval2);
            return;
        }
        KDescendantsProxyModel::sort(column, order);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize span(const QModelIndex& index) const override {
        if (kdescendantsproxymodel_span_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QSize* callback_ret = kdescendantsproxymodel_span_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KDescendantsProxyModel::span(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
        if (kdescendantsproxymodel_sibling_callback) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& idx_ret = idx;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&idx_ret);
            QModelIndex* callback_ret = kdescendantsproxymodel_sibling_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KDescendantsProxyModel::sibling(row, column, idx);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
        if (kdescendantsproxymodel_candropmimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = kdescendantsproxymodel_candropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return KDescendantsProxyModel::canDropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
        if (kdescendantsproxymodel_dropmimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = kdescendantsproxymodel_dropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return KDescendantsProxyModel::dropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDragActions() const override {
        if (kdescendantsproxymodel_supporteddragactions_callback) {
            int callback_ret = kdescendantsproxymodel_supporteddragactions_callback(this);
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return KDescendantsProxyModel::supportedDragActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
        if (kdescendantsproxymodel_insertrows_callback) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = kdescendantsproxymodel_insertrows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KDescendantsProxyModel::insertRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
        if (kdescendantsproxymodel_insertcolumns_callback) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = kdescendantsproxymodel_insertcolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KDescendantsProxyModel::insertColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
        if (kdescendantsproxymodel_removerows_callback) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = kdescendantsproxymodel_removerows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KDescendantsProxyModel::removeRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
        if (kdescendantsproxymodel_removecolumns_callback) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = kdescendantsproxymodel_removecolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KDescendantsProxyModel::removeColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (kdescendantsproxymodel_moverows_callback) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceRow;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;
            bool callback_ret = kdescendantsproxymodel_moverows_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return KDescendantsProxyModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (kdescendantsproxymodel_movecolumns_callback) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceColumn;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;
            bool callback_ret = kdescendantsproxymodel_movecolumns_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return KDescendantsProxyModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
        if (kdescendantsproxymodel_multidata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelRoleDataSpan* cbval2 = new QModelRoleDataSpan(roleDataSpan);
            kdescendantsproxymodel_multidata_callback(this, cbval1, cbval2);
            return;
        }
        KDescendantsProxyModel::multiData(index, roleDataSpan);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetInternalData() override {
        if (kdescendantsproxymodel_resetinternaldata_callback) {
            kdescendantsproxymodel_resetinternaldata_callback(this);
            return;
        }
        KDescendantsProxyModel::resetInternalData();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kdescendantsproxymodel_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kdescendantsproxymodel_event_callback(this, cbval1);
            return callback_ret;
        }
        return KDescendantsProxyModel::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kdescendantsproxymodel_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kdescendantsproxymodel_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KDescendantsProxyModel::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kdescendantsproxymodel_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kdescendantsproxymodel_timerevent_callback(this, cbval1);
            return;
        }
        KDescendantsProxyModel::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kdescendantsproxymodel_childevent_callback) {
            QChildEvent* cbval1 = event;
            kdescendantsproxymodel_childevent_callback(this, cbval1);
            return;
        }
        KDescendantsProxyModel::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kdescendantsproxymodel_customevent_callback) {
            QEvent* cbval1 = event;
            kdescendantsproxymodel_customevent_callback(this, cbval1);
            return;
        }
        KDescendantsProxyModel::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kdescendantsproxymodel_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kdescendantsproxymodel_connectnotify_callback(this, cbval1);
            return;
        }
        KDescendantsProxyModel::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kdescendantsproxymodel_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kdescendantsproxymodel_disconnectnotify_callback(this, cbval1);
            return;
        }
        KDescendantsProxyModel::disconnectNotify(signal);
    }

    // Friend functions
    friend void KDescendantsProxyModel_SuperResetInternalData(KDescendantsProxyModel* self);
    friend void KDescendantsProxyModel_SuperTimerEvent(KDescendantsProxyModel* self, QTimerEvent* event);
    friend void KDescendantsProxyModel_SuperChildEvent(KDescendantsProxyModel* self, QChildEvent* event);
    friend void KDescendantsProxyModel_SuperCustomEvent(KDescendantsProxyModel* self, QEvent* event);
    friend void KDescendantsProxyModel_SuperConnectNotify(KDescendantsProxyModel* self, const QMetaMethod* signal);
    friend void KDescendantsProxyModel_SuperDisconnectNotify(KDescendantsProxyModel* self, const QMetaMethod* signal);
};

#endif
