#pragma once
#ifndef EXTRAS_KIO_LIBKDIRMODEL_HXX
#define EXTRAS_KIO_LIBKDIRMODEL_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KDirModel
class VirtualKDirModel final : public KDirModel {
  public:
    // Virtual class public types (including callbacks and access types)
    using KDirModel_MetaObject_Callback = QMetaObject* (*)(const KDirModel*);
    using KDirModel_Metacast_Callback = void* (*)(KDirModel*, const char*);
    using KDirModel_Metacall_Callback = int (*)(KDirModel*, int, int, void**);
    using KDirModel_CanFetchMore_Callback = bool (*)(const KDirModel*, QModelIndex*);
    using KDirModel_ColumnCount_Callback = int (*)(const KDirModel*, QModelIndex*);
    using KDirModel_Data_Callback = QVariant* (*)(const KDirModel*, QModelIndex*, int);
    using KDirModel_DropMimeData_Callback = bool (*)(KDirModel*, QMimeData*, int, int, int, QModelIndex*);
    using KDirModel_FetchMore_Callback = void (*)(KDirModel*, QModelIndex*);
    using KDirModel_Flags_Callback = int (*)(const KDirModel*, QModelIndex*);
    using KDirModel_HasChildren_Callback = bool (*)(const KDirModel*, QModelIndex*);
    using KDirModel_HeaderData_Callback = QVariant* (*)(const KDirModel*, int, int, int);
    using KDirModel_Index_Callback = QModelIndex* (*)(const KDirModel*, int, int, QModelIndex*);
    using KDirModel_MimeData_Callback = QMimeData* (*)(const KDirModel*, libqt_list /* of QModelIndex* */);
    using KDirModel_MimeTypes_Callback = const char** (*)(const KDirModel*);
    using KDirModel_Parent_Callback = QModelIndex* (*)(const KDirModel*, QModelIndex*);
    using KDirModel_Sibling_Callback = QModelIndex* (*)(const KDirModel*, int, int, QModelIndex*);
    using KDirModel_RowCount_Callback = int (*)(const KDirModel*, QModelIndex*);
    using KDirModel_SetData_Callback = bool (*)(KDirModel*, QModelIndex*, QVariant*, int);
    using KDirModel_Sort_Callback = void (*)(KDirModel*, int, int);
    using KDirModel_RoleNames_Callback = libqt_map /* of int to libqt_string */ (*)(const KDirModel*);
    using KDirModel_SupportedDropActions_Callback = int (*)(const KDirModel*);
    using KDirModel_SetHeaderData_Callback = bool (*)(KDirModel*, int, int, QVariant*, int);
    using KDirModel_ItemData_Callback = libqt_map /* of int to QVariant* */ (*)(const KDirModel*, QModelIndex*);
    using KDirModel_SetItemData_Callback = bool (*)(KDirModel*, QModelIndex*, libqt_map /* of int to QVariant* */);
    using KDirModel_ClearItemData_Callback = bool (*)(KDirModel*, QModelIndex*);
    using KDirModel_CanDropMimeData_Callback = bool (*)(const KDirModel*, QMimeData*, int, int, int, QModelIndex*);
    using KDirModel_SupportedDragActions_Callback = int (*)(const KDirModel*);
    using KDirModel_MoveRows_Callback = bool (*)(KDirModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KDirModel_MoveColumns_Callback = bool (*)(KDirModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KDirModel_Buddy_Callback = QModelIndex* (*)(const KDirModel*, QModelIndex*);
    using KDirModel_Match_Callback = libqt_list /* of QModelIndex* */ (*)(const KDirModel*, QModelIndex*, int, QVariant*, int, int);
    using KDirModel_Span_Callback = QSize* (*)(const KDirModel*, QModelIndex*);
    using KDirModel_MultiData_Callback = void (*)(const KDirModel*, QModelIndex*, QModelRoleDataSpan*);
    using KDirModel_Submit_Callback = bool (*)(KDirModel*);
    using KDirModel_Revert_Callback = void (*)(KDirModel*);
    using KDirModel_ResetInternalData_Callback = void (*)(KDirModel*);
    using KDirModel_Event_Callback = bool (*)(KDirModel*, QEvent*);
    using KDirModel_EventFilter_Callback = bool (*)(KDirModel*, QObject*, QEvent*);
    using KDirModel_TimerEvent_Callback = void (*)(KDirModel*, QTimerEvent*);
    using KDirModel_ChildEvent_Callback = void (*)(KDirModel*, QChildEvent*);
    using KDirModel_CustomEvent_Callback = void (*)(KDirModel*, QEvent*);
    using KDirModel_ConnectNotify_Callback = void (*)(KDirModel*, QMetaMethod*);
    using KDirModel_DisconnectNotify_Callback = void (*)(KDirModel*, QMetaMethod*);
    using KDirModel::beginInsertColumns;
    using KDirModel::beginInsertRows;
    using KDirModel::beginMoveColumns;
    using KDirModel::beginMoveRows;
    using KDirModel::beginRemoveColumns;
    using KDirModel::beginRemoveRows;
    using KDirModel::beginResetModel;
    using KDirModel::changePersistentIndex;
    using KDirModel::changePersistentIndexList;
    using KDirModel::createIndex;
    using KDirModel::decodeData;
    using KDirModel::encodeData;
    using KDirModel::endInsertColumns;
    using KDirModel::endInsertRows;
    using KDirModel::endMoveColumns;
    using KDirModel::endMoveRows;
    using KDirModel::endRemoveColumns;
    using KDirModel::endRemoveRows;
    using KDirModel::endResetModel;
    using KDirModel::isSignalConnected;
    using KDirModel::persistentIndexList;
    using KDirModel::receivers;
    using KDirModel::sender;
    using KDirModel::senderSignalIndex;

    // Instance callback storage
    KDirModel_MetaObject_Callback kdirmodel_metaobject_callback = nullptr;
    KDirModel_Metacast_Callback kdirmodel_metacast_callback = nullptr;
    KDirModel_Metacall_Callback kdirmodel_metacall_callback = nullptr;
    KDirModel_CanFetchMore_Callback kdirmodel_canfetchmore_callback = nullptr;
    KDirModel_ColumnCount_Callback kdirmodel_columncount_callback = nullptr;
    KDirModel_Data_Callback kdirmodel_data_callback = nullptr;
    KDirModel_DropMimeData_Callback kdirmodel_dropmimedata_callback = nullptr;
    KDirModel_FetchMore_Callback kdirmodel_fetchmore_callback = nullptr;
    KDirModel_Flags_Callback kdirmodel_flags_callback = nullptr;
    KDirModel_HasChildren_Callback kdirmodel_haschildren_callback = nullptr;
    KDirModel_HeaderData_Callback kdirmodel_headerdata_callback = nullptr;
    KDirModel_Index_Callback kdirmodel_index_callback = nullptr;
    KDirModel_MimeData_Callback kdirmodel_mimedata_callback = nullptr;
    KDirModel_MimeTypes_Callback kdirmodel_mimetypes_callback = nullptr;
    KDirModel_Parent_Callback kdirmodel_parent_callback = nullptr;
    KDirModel_Sibling_Callback kdirmodel_sibling_callback = nullptr;
    KDirModel_RowCount_Callback kdirmodel_rowcount_callback = nullptr;
    KDirModel_SetData_Callback kdirmodel_setdata_callback = nullptr;
    KDirModel_Sort_Callback kdirmodel_sort_callback = nullptr;
    KDirModel_RoleNames_Callback kdirmodel_rolenames_callback = nullptr;
    KDirModel_SupportedDropActions_Callback kdirmodel_supporteddropactions_callback = nullptr;
    KDirModel_SetHeaderData_Callback kdirmodel_setheaderdata_callback = nullptr;
    KDirModel_ItemData_Callback kdirmodel_itemdata_callback = nullptr;
    KDirModel_SetItemData_Callback kdirmodel_setitemdata_callback = nullptr;
    KDirModel_ClearItemData_Callback kdirmodel_clearitemdata_callback = nullptr;
    KDirModel_CanDropMimeData_Callback kdirmodel_candropmimedata_callback = nullptr;
    KDirModel_SupportedDragActions_Callback kdirmodel_supporteddragactions_callback = nullptr;
    KDirModel_MoveRows_Callback kdirmodel_moverows_callback = nullptr;
    KDirModel_MoveColumns_Callback kdirmodel_movecolumns_callback = nullptr;
    KDirModel_Buddy_Callback kdirmodel_buddy_callback = nullptr;
    KDirModel_Match_Callback kdirmodel_match_callback = nullptr;
    KDirModel_Span_Callback kdirmodel_span_callback = nullptr;
    KDirModel_MultiData_Callback kdirmodel_multidata_callback = nullptr;
    KDirModel_Submit_Callback kdirmodel_submit_callback = nullptr;
    KDirModel_Revert_Callback kdirmodel_revert_callback = nullptr;
    KDirModel_ResetInternalData_Callback kdirmodel_resetinternaldata_callback = nullptr;
    KDirModel_Event_Callback kdirmodel_event_callback = nullptr;
    KDirModel_EventFilter_Callback kdirmodel_eventfilter_callback = nullptr;
    KDirModel_TimerEvent_Callback kdirmodel_timerevent_callback = nullptr;
    KDirModel_ChildEvent_Callback kdirmodel_childevent_callback = nullptr;
    KDirModel_CustomEvent_Callback kdirmodel_customevent_callback = nullptr;
    KDirModel_ConnectNotify_Callback kdirmodel_connectnotify_callback = nullptr;
    KDirModel_DisconnectNotify_Callback kdirmodel_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KDirModel {
        using KDirModel::childEvent;
        using KDirModel::connectNotify;
        using KDirModel::customEvent;
        using KDirModel::disconnectNotify;
        using KDirModel::resetInternalData;
        using KDirModel::timerEvent;
    };

    VirtualKDirModel() : KDirModel() {};
    VirtualKDirModel(QObject* parent) : KDirModel(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kdirmodel_metaobject_callback) {
            QMetaObject* callback_ret = kdirmodel_metaobject_callback(this);
            return callback_ret;
        }
        return KDirModel::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kdirmodel_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kdirmodel_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KDirModel::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kdirmodel_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kdirmodel_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KDirModel::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canFetchMore(const QModelIndex& parent) const override {
        if (kdirmodel_canfetchmore_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = kdirmodel_canfetchmore_callback(this, cbval1);
            return callback_ret;
        }
        return KDirModel::canFetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual int columnCount(const QModelIndex& parent) const override {
        if (kdirmodel_columncount_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int callback_ret = kdirmodel_columncount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KDirModel::columnCount(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(const QModelIndex& index, int role) const override {
        if (kdirmodel_data_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = role;
            QVariant* callback_ret = kdirmodel_data_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KDirModel::data(index, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
        if (kdirmodel_dropmimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = kdirmodel_dropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return KDirModel::dropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void fetchMore(const QModelIndex& parent) override {
        if (kdirmodel_fetchmore_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            kdirmodel_fetchmore_callback(this, cbval1);
            return;
        }
        KDirModel::fetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
        if (kdirmodel_flags_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int callback_ret = kdirmodel_flags_callback(this, cbval1);
            return static_cast<Qt::ItemFlags>(callback_ret);
        }
        return KDirModel::flags(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasChildren(const QModelIndex& parent) const override {
        if (kdirmodel_haschildren_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = kdirmodel_haschildren_callback(this, cbval1);
            return callback_ret;
        }
        return KDirModel::hasChildren(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
        if (kdirmodel_headerdata_callback) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            int cbval3 = role;
            QVariant* callback_ret = kdirmodel_headerdata_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KDirModel::headerData(section, orientation, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
        if (kdirmodel_index_callback) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            QModelIndex* callback_ret = kdirmodel_index_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KDirModel::index(row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* mimeData(const QList<QModelIndex>& indexes) const override {
        if (kdirmodel_mimedata_callback) {
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
            QMimeData* callback_ret = kdirmodel_mimedata_callback(this, cbval1);
            free(indexes_arr);
            return callback_ret;
        }
        return KDirModel::mimeData(indexes);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> mimeTypes() const override {
        if (kdirmodel_mimetypes_callback) {
            const char** callback_ret = kdirmodel_mimetypes_callback(this);
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
        return KDirModel::mimeTypes();
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex parent(const QModelIndex& index) const override {
        if (kdirmodel_parent_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelIndex* callback_ret = kdirmodel_parent_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KDirModel::parent(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex sibling(int row, int column, const QModelIndex& index) const override {
        if (kdirmodel_sibling_callback) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&index_ret);
            QModelIndex* callback_ret = kdirmodel_sibling_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KDirModel::sibling(row, column, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual int rowCount(const QModelIndex& parent) const override {
        if (kdirmodel_rowcount_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int callback_ret = kdirmodel_rowcount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KDirModel::rowCount(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
        if (kdirmodel_setdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            int cbval3 = role;
            bool callback_ret = kdirmodel_setdata_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KDirModel::setData(index, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual void sort(int column, Qt::SortOrder order) override {
        if (kdirmodel_sort_callback) {
            int cbval1 = column;
            int cbval2 = static_cast<int>(order);
            kdirmodel_sort_callback(this, cbval1, cbval2);
            return;
        }
        KDirModel::sort(column, order);
    }

    // Virtual method for C ABI access and custom callback
    virtual QHash<int, QByteArray> roleNames() const override {
        if (kdirmodel_rolenames_callback) {
            libqt_map /* of int to libqt_string */ callback_ret = kdirmodel_rolenames_callback(this);
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
        return KDirModel::roleNames();
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (kdirmodel_supporteddropactions_callback) {
            int callback_ret = kdirmodel_supporteddropactions_callback(this);
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return KDirModel::supportedDropActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
        if (kdirmodel_setheaderdata_callback) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = role;
            bool callback_ret = kdirmodel_setheaderdata_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        }
        return KDirModel::setHeaderData(section, orientation, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
        if (kdirmodel_itemdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            libqt_map /* of int to QVariant* */ callback_ret = kdirmodel_itemdata_callback(this, cbval1);
            QMap<int, QVariant> callback_ret_QMap;
            int* callback_ret_karr = static_cast<int*>(callback_ret.keys);
            QVariant** callback_ret_varr = static_cast<QVariant**>(callback_ret.values);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QMap.insert(static_cast<int>(callback_ret_karr[i]), *(callback_ret_varr[i]));
            }
            return callback_ret_QMap;
        }
        return KDirModel::itemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
        if (kdirmodel_setitemdata_callback) {
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
            bool callback_ret = kdirmodel_setitemdata_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KDirModel::setItemData(index, roles);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool clearItemData(const QModelIndex& index) override {
        if (kdirmodel_clearitemdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            bool callback_ret = kdirmodel_clearitemdata_callback(this, cbval1);
            return callback_ret;
        }
        return KDirModel::clearItemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
        if (kdirmodel_candropmimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = kdirmodel_candropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return KDirModel::canDropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDragActions() const override {
        if (kdirmodel_supporteddragactions_callback) {
            int callback_ret = kdirmodel_supporteddragactions_callback(this);
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return KDirModel::supportedDragActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (kdirmodel_moverows_callback) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceRow;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;
            bool callback_ret = kdirmodel_moverows_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return KDirModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (kdirmodel_movecolumns_callback) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceColumn;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;
            bool callback_ret = kdirmodel_movecolumns_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return KDirModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex buddy(const QModelIndex& index) const override {
        if (kdirmodel_buddy_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelIndex* callback_ret = kdirmodel_buddy_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KDirModel::buddy(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
        if (kdirmodel_match_callback) {
            const QModelIndex& start_ret = start;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&start_ret);
            int cbval2 = role;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = hits;
            int cbval5 = static_cast<int>(flags);
            libqt_list /* of QModelIndex* */ callback_ret = kdirmodel_match_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            QList<QModelIndex> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QModelIndex** callback_ret_arr = static_cast<QModelIndex**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return KDirModel::match(start, role, value, hits, flags);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize span(const QModelIndex& index) const override {
        if (kdirmodel_span_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QSize* callback_ret = kdirmodel_span_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KDirModel::span(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
        if (kdirmodel_multidata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelRoleDataSpan* cbval2 = new QModelRoleDataSpan(roleDataSpan);
            kdirmodel_multidata_callback(this, cbval1, cbval2);
            return;
        }
        KDirModel::multiData(index, roleDataSpan);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool submit() override {
        if (kdirmodel_submit_callback) {
            bool callback_ret = kdirmodel_submit_callback(this);
            return callback_ret;
        }
        return KDirModel::submit();
    }

    // Virtual method for C ABI access and custom callback
    virtual void revert() override {
        if (kdirmodel_revert_callback) {
            kdirmodel_revert_callback(this);
            return;
        }
        KDirModel::revert();
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetInternalData() override {
        if (kdirmodel_resetinternaldata_callback) {
            kdirmodel_resetinternaldata_callback(this);
            return;
        }
        KDirModel::resetInternalData();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kdirmodel_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kdirmodel_event_callback(this, cbval1);
            return callback_ret;
        }
        return KDirModel::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kdirmodel_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kdirmodel_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KDirModel::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kdirmodel_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kdirmodel_timerevent_callback(this, cbval1);
            return;
        }
        KDirModel::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kdirmodel_childevent_callback) {
            QChildEvent* cbval1 = event;
            kdirmodel_childevent_callback(this, cbval1);
            return;
        }
        KDirModel::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kdirmodel_customevent_callback) {
            QEvent* cbval1 = event;
            kdirmodel_customevent_callback(this, cbval1);
            return;
        }
        KDirModel::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kdirmodel_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kdirmodel_connectnotify_callback(this, cbval1);
            return;
        }
        KDirModel::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kdirmodel_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kdirmodel_disconnectnotify_callback(this, cbval1);
            return;
        }
        KDirModel::disconnectNotify(signal);
    }

    // Friend functions
    friend void KDirModel_SuperResetInternalData(KDirModel* self);
    friend void KDirModel_SuperTimerEvent(KDirModel* self, QTimerEvent* event);
    friend void KDirModel_SuperChildEvent(KDirModel* self, QChildEvent* event);
    friend void KDirModel_SuperCustomEvent(KDirModel* self, QEvent* event);
    friend void KDirModel_SuperConnectNotify(KDirModel* self, const QMetaMethod* signal);
    friend void KDirModel_SuperDisconnectNotify(KDirModel* self, const QMetaMethod* signal);
};

#endif
