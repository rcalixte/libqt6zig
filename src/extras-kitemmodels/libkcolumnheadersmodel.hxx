#pragma once
#ifndef EXTRAS_KITEMMODELS_LIBKCOLUMNHEADERSMODEL_HXX
#define EXTRAS_KITEMMODELS_LIBKCOLUMNHEADERSMODEL_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KColumnHeadersModel
class VirtualKColumnHeadersModel final : public KColumnHeadersModel {
  public:
    // Virtual class public types (including callbacks and access types)
    using KColumnHeadersModel_MetaObject_Callback = QMetaObject* (*)(const KColumnHeadersModel*);
    using KColumnHeadersModel_Metacast_Callback = void* (*)(KColumnHeadersModel*, const char*);
    using KColumnHeadersModel_Metacall_Callback = int (*)(KColumnHeadersModel*, int, int, void**);
    using KColumnHeadersModel_RowCount_Callback = int (*)(const KColumnHeadersModel*, QModelIndex*);
    using KColumnHeadersModel_Data_Callback = QVariant* (*)(const KColumnHeadersModel*, QModelIndex*, int);
    using KColumnHeadersModel_RoleNames_Callback = libqt_map /* of int to libqt_string */ (*)(const KColumnHeadersModel*);
    using KColumnHeadersModel_Index_Callback = QModelIndex* (*)(const KColumnHeadersModel*, int, int, QModelIndex*);
    using KColumnHeadersModel_Sibling_Callback = QModelIndex* (*)(const KColumnHeadersModel*, int, int, QModelIndex*);
    using KColumnHeadersModel_DropMimeData_Callback = bool (*)(KColumnHeadersModel*, QMimeData*, int, int, int, QModelIndex*);
    using KColumnHeadersModel_Flags_Callback = int (*)(const KColumnHeadersModel*, QModelIndex*);
    using KColumnHeadersModel_SetData_Callback = bool (*)(KColumnHeadersModel*, QModelIndex*, QVariant*, int);
    using KColumnHeadersModel_HeaderData_Callback = QVariant* (*)(const KColumnHeadersModel*, int, int, int);
    using KColumnHeadersModel_SetHeaderData_Callback = bool (*)(KColumnHeadersModel*, int, int, QVariant*, int);
    using KColumnHeadersModel_ItemData_Callback = libqt_map /* of int to QVariant* */ (*)(const KColumnHeadersModel*, QModelIndex*);
    using KColumnHeadersModel_SetItemData_Callback = bool (*)(KColumnHeadersModel*, QModelIndex*, libqt_map /* of int to QVariant* */);
    using KColumnHeadersModel_ClearItemData_Callback = bool (*)(KColumnHeadersModel*, QModelIndex*);
    using KColumnHeadersModel_MimeTypes_Callback = const char** (*)(const KColumnHeadersModel*);
    using KColumnHeadersModel_MimeData_Callback = QMimeData* (*)(const KColumnHeadersModel*, libqt_list /* of QModelIndex* */);
    using KColumnHeadersModel_CanDropMimeData_Callback = bool (*)(const KColumnHeadersModel*, QMimeData*, int, int, int, QModelIndex*);
    using KColumnHeadersModel_SupportedDropActions_Callback = int (*)(const KColumnHeadersModel*);
    using KColumnHeadersModel_SupportedDragActions_Callback = int (*)(const KColumnHeadersModel*);
    using KColumnHeadersModel_InsertRows_Callback = bool (*)(KColumnHeadersModel*, int, int, QModelIndex*);
    using KColumnHeadersModel_InsertColumns_Callback = bool (*)(KColumnHeadersModel*, int, int, QModelIndex*);
    using KColumnHeadersModel_RemoveRows_Callback = bool (*)(KColumnHeadersModel*, int, int, QModelIndex*);
    using KColumnHeadersModel_RemoveColumns_Callback = bool (*)(KColumnHeadersModel*, int, int, QModelIndex*);
    using KColumnHeadersModel_MoveRows_Callback = bool (*)(KColumnHeadersModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KColumnHeadersModel_MoveColumns_Callback = bool (*)(KColumnHeadersModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KColumnHeadersModel_FetchMore_Callback = void (*)(KColumnHeadersModel*, QModelIndex*);
    using KColumnHeadersModel_CanFetchMore_Callback = bool (*)(const KColumnHeadersModel*, QModelIndex*);
    using KColumnHeadersModel_Sort_Callback = void (*)(KColumnHeadersModel*, int, int);
    using KColumnHeadersModel_Buddy_Callback = QModelIndex* (*)(const KColumnHeadersModel*, QModelIndex*);
    using KColumnHeadersModel_Match_Callback = libqt_list /* of QModelIndex* */ (*)(const KColumnHeadersModel*, QModelIndex*, int, QVariant*, int, int);
    using KColumnHeadersModel_Span_Callback = QSize* (*)(const KColumnHeadersModel*, QModelIndex*);
    using KColumnHeadersModel_MultiData_Callback = void (*)(const KColumnHeadersModel*, QModelIndex*, QModelRoleDataSpan*);
    using KColumnHeadersModel_Submit_Callback = bool (*)(KColumnHeadersModel*);
    using KColumnHeadersModel_Revert_Callback = void (*)(KColumnHeadersModel*);
    using KColumnHeadersModel_ResetInternalData_Callback = void (*)(KColumnHeadersModel*);
    using KColumnHeadersModel_Event_Callback = bool (*)(KColumnHeadersModel*, QEvent*);
    using KColumnHeadersModel_EventFilter_Callback = bool (*)(KColumnHeadersModel*, QObject*, QEvent*);
    using KColumnHeadersModel_TimerEvent_Callback = void (*)(KColumnHeadersModel*, QTimerEvent*);
    using KColumnHeadersModel_ChildEvent_Callback = void (*)(KColumnHeadersModel*, QChildEvent*);
    using KColumnHeadersModel_CustomEvent_Callback = void (*)(KColumnHeadersModel*, QEvent*);
    using KColumnHeadersModel_ConnectNotify_Callback = void (*)(KColumnHeadersModel*, QMetaMethod*);
    using KColumnHeadersModel_DisconnectNotify_Callback = void (*)(KColumnHeadersModel*, QMetaMethod*);
    using KColumnHeadersModel::beginInsertColumns;
    using KColumnHeadersModel::beginInsertRows;
    using KColumnHeadersModel::beginMoveColumns;
    using KColumnHeadersModel::beginMoveRows;
    using KColumnHeadersModel::beginRemoveColumns;
    using KColumnHeadersModel::beginRemoveRows;
    using KColumnHeadersModel::beginResetModel;
    using KColumnHeadersModel::changePersistentIndex;
    using KColumnHeadersModel::changePersistentIndexList;
    using KColumnHeadersModel::createIndex;
    using KColumnHeadersModel::decodeData;
    using KColumnHeadersModel::encodeData;
    using KColumnHeadersModel::endInsertColumns;
    using KColumnHeadersModel::endInsertRows;
    using KColumnHeadersModel::endMoveColumns;
    using KColumnHeadersModel::endMoveRows;
    using KColumnHeadersModel::endRemoveColumns;
    using KColumnHeadersModel::endRemoveRows;
    using KColumnHeadersModel::endResetModel;
    using KColumnHeadersModel::isSignalConnected;
    using KColumnHeadersModel::persistentIndexList;
    using KColumnHeadersModel::receivers;
    using KColumnHeadersModel::sender;
    using KColumnHeadersModel::senderSignalIndex;

    // Instance callback storage
    KColumnHeadersModel_MetaObject_Callback kcolumnheadersmodel_metaobject_callback = nullptr;
    KColumnHeadersModel_Metacast_Callback kcolumnheadersmodel_metacast_callback = nullptr;
    KColumnHeadersModel_Metacall_Callback kcolumnheadersmodel_metacall_callback = nullptr;
    KColumnHeadersModel_RowCount_Callback kcolumnheadersmodel_rowcount_callback = nullptr;
    KColumnHeadersModel_Data_Callback kcolumnheadersmodel_data_callback = nullptr;
    KColumnHeadersModel_RoleNames_Callback kcolumnheadersmodel_rolenames_callback = nullptr;
    KColumnHeadersModel_Index_Callback kcolumnheadersmodel_index_callback = nullptr;
    KColumnHeadersModel_Sibling_Callback kcolumnheadersmodel_sibling_callback = nullptr;
    KColumnHeadersModel_DropMimeData_Callback kcolumnheadersmodel_dropmimedata_callback = nullptr;
    KColumnHeadersModel_Flags_Callback kcolumnheadersmodel_flags_callback = nullptr;
    KColumnHeadersModel_SetData_Callback kcolumnheadersmodel_setdata_callback = nullptr;
    KColumnHeadersModel_HeaderData_Callback kcolumnheadersmodel_headerdata_callback = nullptr;
    KColumnHeadersModel_SetHeaderData_Callback kcolumnheadersmodel_setheaderdata_callback = nullptr;
    KColumnHeadersModel_ItemData_Callback kcolumnheadersmodel_itemdata_callback = nullptr;
    KColumnHeadersModel_SetItemData_Callback kcolumnheadersmodel_setitemdata_callback = nullptr;
    KColumnHeadersModel_ClearItemData_Callback kcolumnheadersmodel_clearitemdata_callback = nullptr;
    KColumnHeadersModel_MimeTypes_Callback kcolumnheadersmodel_mimetypes_callback = nullptr;
    KColumnHeadersModel_MimeData_Callback kcolumnheadersmodel_mimedata_callback = nullptr;
    KColumnHeadersModel_CanDropMimeData_Callback kcolumnheadersmodel_candropmimedata_callback = nullptr;
    KColumnHeadersModel_SupportedDropActions_Callback kcolumnheadersmodel_supporteddropactions_callback = nullptr;
    KColumnHeadersModel_SupportedDragActions_Callback kcolumnheadersmodel_supporteddragactions_callback = nullptr;
    KColumnHeadersModel_InsertRows_Callback kcolumnheadersmodel_insertrows_callback = nullptr;
    KColumnHeadersModel_InsertColumns_Callback kcolumnheadersmodel_insertcolumns_callback = nullptr;
    KColumnHeadersModel_RemoveRows_Callback kcolumnheadersmodel_removerows_callback = nullptr;
    KColumnHeadersModel_RemoveColumns_Callback kcolumnheadersmodel_removecolumns_callback = nullptr;
    KColumnHeadersModel_MoveRows_Callback kcolumnheadersmodel_moverows_callback = nullptr;
    KColumnHeadersModel_MoveColumns_Callback kcolumnheadersmodel_movecolumns_callback = nullptr;
    KColumnHeadersModel_FetchMore_Callback kcolumnheadersmodel_fetchmore_callback = nullptr;
    KColumnHeadersModel_CanFetchMore_Callback kcolumnheadersmodel_canfetchmore_callback = nullptr;
    KColumnHeadersModel_Sort_Callback kcolumnheadersmodel_sort_callback = nullptr;
    KColumnHeadersModel_Buddy_Callback kcolumnheadersmodel_buddy_callback = nullptr;
    KColumnHeadersModel_Match_Callback kcolumnheadersmodel_match_callback = nullptr;
    KColumnHeadersModel_Span_Callback kcolumnheadersmodel_span_callback = nullptr;
    KColumnHeadersModel_MultiData_Callback kcolumnheadersmodel_multidata_callback = nullptr;
    KColumnHeadersModel_Submit_Callback kcolumnheadersmodel_submit_callback = nullptr;
    KColumnHeadersModel_Revert_Callback kcolumnheadersmodel_revert_callback = nullptr;
    KColumnHeadersModel_ResetInternalData_Callback kcolumnheadersmodel_resetinternaldata_callback = nullptr;
    KColumnHeadersModel_Event_Callback kcolumnheadersmodel_event_callback = nullptr;
    KColumnHeadersModel_EventFilter_Callback kcolumnheadersmodel_eventfilter_callback = nullptr;
    KColumnHeadersModel_TimerEvent_Callback kcolumnheadersmodel_timerevent_callback = nullptr;
    KColumnHeadersModel_ChildEvent_Callback kcolumnheadersmodel_childevent_callback = nullptr;
    KColumnHeadersModel_CustomEvent_Callback kcolumnheadersmodel_customevent_callback = nullptr;
    KColumnHeadersModel_ConnectNotify_Callback kcolumnheadersmodel_connectnotify_callback = nullptr;
    KColumnHeadersModel_DisconnectNotify_Callback kcolumnheadersmodel_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KColumnHeadersModel {
        using KColumnHeadersModel::childEvent;
        using KColumnHeadersModel::connectNotify;
        using KColumnHeadersModel::customEvent;
        using KColumnHeadersModel::disconnectNotify;
        using KColumnHeadersModel::resetInternalData;
        using KColumnHeadersModel::timerEvent;
    };

    VirtualKColumnHeadersModel() : KColumnHeadersModel() {};
    VirtualKColumnHeadersModel(QObject* parent) : KColumnHeadersModel(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kcolumnheadersmodel_metaobject_callback) {
            QMetaObject* callback_ret = kcolumnheadersmodel_metaobject_callback(this);
            return callback_ret;
        }
        return KColumnHeadersModel::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kcolumnheadersmodel_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kcolumnheadersmodel_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KColumnHeadersModel::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kcolumnheadersmodel_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kcolumnheadersmodel_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KColumnHeadersModel::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual int rowCount(const QModelIndex& parent) const override {
        if (kcolumnheadersmodel_rowcount_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int callback_ret = kcolumnheadersmodel_rowcount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KColumnHeadersModel::rowCount(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(const QModelIndex& index, int role) const override {
        if (kcolumnheadersmodel_data_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = role;
            QVariant* callback_ret = kcolumnheadersmodel_data_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KColumnHeadersModel::data(index, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual QHash<int, QByteArray> roleNames() const override {
        if (kcolumnheadersmodel_rolenames_callback) {
            libqt_map /* of int to libqt_string */ callback_ret = kcolumnheadersmodel_rolenames_callback(this);
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
        return KColumnHeadersModel::roleNames();
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
        if (kcolumnheadersmodel_index_callback) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            QModelIndex* callback_ret = kcolumnheadersmodel_index_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KColumnHeadersModel::index(row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
        if (kcolumnheadersmodel_sibling_callback) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& idx_ret = idx;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&idx_ret);
            QModelIndex* callback_ret = kcolumnheadersmodel_sibling_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KColumnHeadersModel::sibling(row, column, idx);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
        if (kcolumnheadersmodel_dropmimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = kcolumnheadersmodel_dropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return KColumnHeadersModel::dropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
        if (kcolumnheadersmodel_flags_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int callback_ret = kcolumnheadersmodel_flags_callback(this, cbval1);
            return static_cast<Qt::ItemFlags>(callback_ret);
        }
        return KColumnHeadersModel::flags(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
        if (kcolumnheadersmodel_setdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            int cbval3 = role;
            bool callback_ret = kcolumnheadersmodel_setdata_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KColumnHeadersModel::setData(index, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
        if (kcolumnheadersmodel_headerdata_callback) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            int cbval3 = role;
            QVariant* callback_ret = kcolumnheadersmodel_headerdata_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KColumnHeadersModel::headerData(section, orientation, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
        if (kcolumnheadersmodel_setheaderdata_callback) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = role;
            bool callback_ret = kcolumnheadersmodel_setheaderdata_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        }
        return KColumnHeadersModel::setHeaderData(section, orientation, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
        if (kcolumnheadersmodel_itemdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            libqt_map /* of int to QVariant* */ callback_ret = kcolumnheadersmodel_itemdata_callback(this, cbval1);
            QMap<int, QVariant> callback_ret_QMap;
            int* callback_ret_karr = static_cast<int*>(callback_ret.keys);
            QVariant** callback_ret_varr = static_cast<QVariant**>(callback_ret.values);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QMap.insert(static_cast<int>(callback_ret_karr[i]), *(callback_ret_varr[i]));
            }
            return callback_ret_QMap;
        }
        return KColumnHeadersModel::itemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
        if (kcolumnheadersmodel_setitemdata_callback) {
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
            bool callback_ret = kcolumnheadersmodel_setitemdata_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KColumnHeadersModel::setItemData(index, roles);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool clearItemData(const QModelIndex& index) override {
        if (kcolumnheadersmodel_clearitemdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            bool callback_ret = kcolumnheadersmodel_clearitemdata_callback(this, cbval1);
            return callback_ret;
        }
        return KColumnHeadersModel::clearItemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> mimeTypes() const override {
        if (kcolumnheadersmodel_mimetypes_callback) {
            const char** callback_ret = kcolumnheadersmodel_mimetypes_callback(this);
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
        return KColumnHeadersModel::mimeTypes();
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* mimeData(const QList<QModelIndex>& indexes) const override {
        if (kcolumnheadersmodel_mimedata_callback) {
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
            QMimeData* callback_ret = kcolumnheadersmodel_mimedata_callback(this, cbval1);
            free(indexes_arr);
            return callback_ret;
        }
        return KColumnHeadersModel::mimeData(indexes);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
        if (kcolumnheadersmodel_candropmimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = kcolumnheadersmodel_candropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return KColumnHeadersModel::canDropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (kcolumnheadersmodel_supporteddropactions_callback) {
            int callback_ret = kcolumnheadersmodel_supporteddropactions_callback(this);
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return KColumnHeadersModel::supportedDropActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDragActions() const override {
        if (kcolumnheadersmodel_supporteddragactions_callback) {
            int callback_ret = kcolumnheadersmodel_supporteddragactions_callback(this);
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return KColumnHeadersModel::supportedDragActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
        if (kcolumnheadersmodel_insertrows_callback) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = kcolumnheadersmodel_insertrows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KColumnHeadersModel::insertRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
        if (kcolumnheadersmodel_insertcolumns_callback) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = kcolumnheadersmodel_insertcolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KColumnHeadersModel::insertColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
        if (kcolumnheadersmodel_removerows_callback) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = kcolumnheadersmodel_removerows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KColumnHeadersModel::removeRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
        if (kcolumnheadersmodel_removecolumns_callback) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = kcolumnheadersmodel_removecolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KColumnHeadersModel::removeColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (kcolumnheadersmodel_moverows_callback) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceRow;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;
            bool callback_ret = kcolumnheadersmodel_moverows_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return KColumnHeadersModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (kcolumnheadersmodel_movecolumns_callback) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceColumn;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;
            bool callback_ret = kcolumnheadersmodel_movecolumns_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return KColumnHeadersModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual void fetchMore(const QModelIndex& parent) override {
        if (kcolumnheadersmodel_fetchmore_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            kcolumnheadersmodel_fetchmore_callback(this, cbval1);
            return;
        }
        KColumnHeadersModel::fetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canFetchMore(const QModelIndex& parent) const override {
        if (kcolumnheadersmodel_canfetchmore_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = kcolumnheadersmodel_canfetchmore_callback(this, cbval1);
            return callback_ret;
        }
        return KColumnHeadersModel::canFetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void sort(int column, Qt::SortOrder order) override {
        if (kcolumnheadersmodel_sort_callback) {
            int cbval1 = column;
            int cbval2 = static_cast<int>(order);
            kcolumnheadersmodel_sort_callback(this, cbval1, cbval2);
            return;
        }
        KColumnHeadersModel::sort(column, order);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex buddy(const QModelIndex& index) const override {
        if (kcolumnheadersmodel_buddy_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelIndex* callback_ret = kcolumnheadersmodel_buddy_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KColumnHeadersModel::buddy(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
        if (kcolumnheadersmodel_match_callback) {
            const QModelIndex& start_ret = start;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&start_ret);
            int cbval2 = role;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = hits;
            int cbval5 = static_cast<int>(flags);
            libqt_list /* of QModelIndex* */ callback_ret = kcolumnheadersmodel_match_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            QList<QModelIndex> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QModelIndex** callback_ret_arr = static_cast<QModelIndex**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return KColumnHeadersModel::match(start, role, value, hits, flags);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize span(const QModelIndex& index) const override {
        if (kcolumnheadersmodel_span_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QSize* callback_ret = kcolumnheadersmodel_span_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KColumnHeadersModel::span(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
        if (kcolumnheadersmodel_multidata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelRoleDataSpan* cbval2 = new QModelRoleDataSpan(roleDataSpan);
            kcolumnheadersmodel_multidata_callback(this, cbval1, cbval2);
            return;
        }
        KColumnHeadersModel::multiData(index, roleDataSpan);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool submit() override {
        if (kcolumnheadersmodel_submit_callback) {
            bool callback_ret = kcolumnheadersmodel_submit_callback(this);
            return callback_ret;
        }
        return KColumnHeadersModel::submit();
    }

    // Virtual method for C ABI access and custom callback
    virtual void revert() override {
        if (kcolumnheadersmodel_revert_callback) {
            kcolumnheadersmodel_revert_callback(this);
            return;
        }
        KColumnHeadersModel::revert();
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetInternalData() override {
        if (kcolumnheadersmodel_resetinternaldata_callback) {
            kcolumnheadersmodel_resetinternaldata_callback(this);
            return;
        }
        KColumnHeadersModel::resetInternalData();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kcolumnheadersmodel_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kcolumnheadersmodel_event_callback(this, cbval1);
            return callback_ret;
        }
        return KColumnHeadersModel::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kcolumnheadersmodel_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kcolumnheadersmodel_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KColumnHeadersModel::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kcolumnheadersmodel_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kcolumnheadersmodel_timerevent_callback(this, cbval1);
            return;
        }
        KColumnHeadersModel::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kcolumnheadersmodel_childevent_callback) {
            QChildEvent* cbval1 = event;
            kcolumnheadersmodel_childevent_callback(this, cbval1);
            return;
        }
        KColumnHeadersModel::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kcolumnheadersmodel_customevent_callback) {
            QEvent* cbval1 = event;
            kcolumnheadersmodel_customevent_callback(this, cbval1);
            return;
        }
        KColumnHeadersModel::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kcolumnheadersmodel_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kcolumnheadersmodel_connectnotify_callback(this, cbval1);
            return;
        }
        KColumnHeadersModel::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kcolumnheadersmodel_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kcolumnheadersmodel_disconnectnotify_callback(this, cbval1);
            return;
        }
        KColumnHeadersModel::disconnectNotify(signal);
    }

    // Friend functions
    friend void KColumnHeadersModel_SuperResetInternalData(KColumnHeadersModel* self);
    friend void KColumnHeadersModel_SuperTimerEvent(KColumnHeadersModel* self, QTimerEvent* event);
    friend void KColumnHeadersModel_SuperChildEvent(KColumnHeadersModel* self, QChildEvent* event);
    friend void KColumnHeadersModel_SuperCustomEvent(KColumnHeadersModel* self, QEvent* event);
    friend void KColumnHeadersModel_SuperConnectNotify(KColumnHeadersModel* self, const QMetaMethod* signal);
    friend void KColumnHeadersModel_SuperDisconnectNotify(KColumnHeadersModel* self, const QMetaMethod* signal);
};

#endif
