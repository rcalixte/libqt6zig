#pragma once
#ifndef EXTRAS_KNEWSTUFF_LIBPROVIDERSMODEL_HXX
#define EXTRAS_KNEWSTUFF_LIBPROVIDERSMODEL_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KNSCore::ProvidersModel
class VirtualKNSCoreProvidersModel final : public KNSCore::ProvidersModel {
  public:
    // Virtual class public types (including callbacks and access types)
    using KNSCore__ProvidersModel_MetaObject_Callback = QMetaObject* (*)(const KNSCore__ProvidersModel*);
    using KNSCore__ProvidersModel_Metacast_Callback = void* (*)(KNSCore__ProvidersModel*, const char*);
    using KNSCore__ProvidersModel_Metacall_Callback = int (*)(KNSCore__ProvidersModel*, int, int, void**);
    using KNSCore__ProvidersModel_RoleNames_Callback = libqt_map /* of int to libqt_string */ (*)(const KNSCore__ProvidersModel*);
    using KNSCore__ProvidersModel_Data_Callback = QVariant* (*)(const KNSCore__ProvidersModel*, QModelIndex*, int);
    using KNSCore__ProvidersModel_RowCount_Callback = int (*)(const KNSCore__ProvidersModel*, QModelIndex*);
    using KNSCore__ProvidersModel_Index_Callback = QModelIndex* (*)(const KNSCore__ProvidersModel*, int, int, QModelIndex*);
    using KNSCore__ProvidersModel_Sibling_Callback = QModelIndex* (*)(const KNSCore__ProvidersModel*, int, int, QModelIndex*);
    using KNSCore__ProvidersModel_DropMimeData_Callback = bool (*)(KNSCore__ProvidersModel*, QMimeData*, int, int, int, QModelIndex*);
    using KNSCore__ProvidersModel_Flags_Callback = int (*)(const KNSCore__ProvidersModel*, QModelIndex*);
    using KNSCore__ProvidersModel_SetData_Callback = bool (*)(KNSCore__ProvidersModel*, QModelIndex*, QVariant*, int);
    using KNSCore__ProvidersModel_HeaderData_Callback = QVariant* (*)(const KNSCore__ProvidersModel*, int, int, int);
    using KNSCore__ProvidersModel_SetHeaderData_Callback = bool (*)(KNSCore__ProvidersModel*, int, int, QVariant*, int);
    using KNSCore__ProvidersModel_ItemData_Callback = libqt_map /* of int to QVariant* */ (*)(const KNSCore__ProvidersModel*, QModelIndex*);
    using KNSCore__ProvidersModel_SetItemData_Callback = bool (*)(KNSCore__ProvidersModel*, QModelIndex*, libqt_map /* of int to QVariant* */);
    using KNSCore__ProvidersModel_ClearItemData_Callback = bool (*)(KNSCore__ProvidersModel*, QModelIndex*);
    using KNSCore__ProvidersModel_MimeTypes_Callback = const char** (*)(const KNSCore__ProvidersModel*);
    using KNSCore__ProvidersModel_MimeData_Callback = QMimeData* (*)(const KNSCore__ProvidersModel*, libqt_list /* of QModelIndex* */);
    using KNSCore__ProvidersModel_CanDropMimeData_Callback = bool (*)(const KNSCore__ProvidersModel*, QMimeData*, int, int, int, QModelIndex*);
    using KNSCore__ProvidersModel_SupportedDropActions_Callback = int (*)(const KNSCore__ProvidersModel*);
    using KNSCore__ProvidersModel_SupportedDragActions_Callback = int (*)(const KNSCore__ProvidersModel*);
    using KNSCore__ProvidersModel_InsertRows_Callback = bool (*)(KNSCore__ProvidersModel*, int, int, QModelIndex*);
    using KNSCore__ProvidersModel_InsertColumns_Callback = bool (*)(KNSCore__ProvidersModel*, int, int, QModelIndex*);
    using KNSCore__ProvidersModel_RemoveRows_Callback = bool (*)(KNSCore__ProvidersModel*, int, int, QModelIndex*);
    using KNSCore__ProvidersModel_RemoveColumns_Callback = bool (*)(KNSCore__ProvidersModel*, int, int, QModelIndex*);
    using KNSCore__ProvidersModel_MoveRows_Callback = bool (*)(KNSCore__ProvidersModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KNSCore__ProvidersModel_MoveColumns_Callback = bool (*)(KNSCore__ProvidersModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KNSCore__ProvidersModel_FetchMore_Callback = void (*)(KNSCore__ProvidersModel*, QModelIndex*);
    using KNSCore__ProvidersModel_CanFetchMore_Callback = bool (*)(const KNSCore__ProvidersModel*, QModelIndex*);
    using KNSCore__ProvidersModel_Sort_Callback = void (*)(KNSCore__ProvidersModel*, int, int);
    using KNSCore__ProvidersModel_Buddy_Callback = QModelIndex* (*)(const KNSCore__ProvidersModel*, QModelIndex*);
    using KNSCore__ProvidersModel_Match_Callback = libqt_list /* of QModelIndex* */ (*)(const KNSCore__ProvidersModel*, QModelIndex*, int, QVariant*, int, int);
    using KNSCore__ProvidersModel_Span_Callback = QSize* (*)(const KNSCore__ProvidersModel*, QModelIndex*);
    using KNSCore__ProvidersModel_MultiData_Callback = void (*)(const KNSCore__ProvidersModel*, QModelIndex*, QModelRoleDataSpan*);
    using KNSCore__ProvidersModel_Submit_Callback = bool (*)(KNSCore__ProvidersModel*);
    using KNSCore__ProvidersModel_Revert_Callback = void (*)(KNSCore__ProvidersModel*);
    using KNSCore__ProvidersModel_ResetInternalData_Callback = void (*)(KNSCore__ProvidersModel*);
    using KNSCore__ProvidersModel_Event_Callback = bool (*)(KNSCore__ProvidersModel*, QEvent*);
    using KNSCore__ProvidersModel_EventFilter_Callback = bool (*)(KNSCore__ProvidersModel*, QObject*, QEvent*);
    using KNSCore__ProvidersModel_TimerEvent_Callback = void (*)(KNSCore__ProvidersModel*, QTimerEvent*);
    using KNSCore__ProvidersModel_ChildEvent_Callback = void (*)(KNSCore__ProvidersModel*, QChildEvent*);
    using KNSCore__ProvidersModel_CustomEvent_Callback = void (*)(KNSCore__ProvidersModel*, QEvent*);
    using KNSCore__ProvidersModel_ConnectNotify_Callback = void (*)(KNSCore__ProvidersModel*, QMetaMethod*);
    using KNSCore__ProvidersModel_DisconnectNotify_Callback = void (*)(KNSCore__ProvidersModel*, QMetaMethod*);
    using KNSCore::ProvidersModel::beginInsertColumns;
    using KNSCore::ProvidersModel::beginInsertRows;
    using KNSCore::ProvidersModel::beginMoveColumns;
    using KNSCore::ProvidersModel::beginMoveRows;
    using KNSCore::ProvidersModel::beginRemoveColumns;
    using KNSCore::ProvidersModel::beginRemoveRows;
    using KNSCore::ProvidersModel::beginResetModel;
    using KNSCore::ProvidersModel::changePersistentIndex;
    using KNSCore::ProvidersModel::changePersistentIndexList;
    using KNSCore::ProvidersModel::createIndex;
    using KNSCore::ProvidersModel::decodeData;
    using KNSCore::ProvidersModel::encodeData;
    using KNSCore::ProvidersModel::endInsertColumns;
    using KNSCore::ProvidersModel::endInsertRows;
    using KNSCore::ProvidersModel::endMoveColumns;
    using KNSCore::ProvidersModel::endMoveRows;
    using KNSCore::ProvidersModel::endRemoveColumns;
    using KNSCore::ProvidersModel::endRemoveRows;
    using KNSCore::ProvidersModel::endResetModel;
    using KNSCore::ProvidersModel::isSignalConnected;
    using KNSCore::ProvidersModel::persistentIndexList;
    using KNSCore::ProvidersModel::receivers;
    using KNSCore::ProvidersModel::sender;
    using KNSCore::ProvidersModel::senderSignalIndex;

    // Instance callback storage
    KNSCore__ProvidersModel_MetaObject_Callback knscore__providersmodel_metaobject_callback = nullptr;
    KNSCore__ProvidersModel_Metacast_Callback knscore__providersmodel_metacast_callback = nullptr;
    KNSCore__ProvidersModel_Metacall_Callback knscore__providersmodel_metacall_callback = nullptr;
    KNSCore__ProvidersModel_RoleNames_Callback knscore__providersmodel_rolenames_callback = nullptr;
    KNSCore__ProvidersModel_Data_Callback knscore__providersmodel_data_callback = nullptr;
    KNSCore__ProvidersModel_RowCount_Callback knscore__providersmodel_rowcount_callback = nullptr;
    KNSCore__ProvidersModel_Index_Callback knscore__providersmodel_index_callback = nullptr;
    KNSCore__ProvidersModel_Sibling_Callback knscore__providersmodel_sibling_callback = nullptr;
    KNSCore__ProvidersModel_DropMimeData_Callback knscore__providersmodel_dropmimedata_callback = nullptr;
    KNSCore__ProvidersModel_Flags_Callback knscore__providersmodel_flags_callback = nullptr;
    KNSCore__ProvidersModel_SetData_Callback knscore__providersmodel_setdata_callback = nullptr;
    KNSCore__ProvidersModel_HeaderData_Callback knscore__providersmodel_headerdata_callback = nullptr;
    KNSCore__ProvidersModel_SetHeaderData_Callback knscore__providersmodel_setheaderdata_callback = nullptr;
    KNSCore__ProvidersModel_ItemData_Callback knscore__providersmodel_itemdata_callback = nullptr;
    KNSCore__ProvidersModel_SetItemData_Callback knscore__providersmodel_setitemdata_callback = nullptr;
    KNSCore__ProvidersModel_ClearItemData_Callback knscore__providersmodel_clearitemdata_callback = nullptr;
    KNSCore__ProvidersModel_MimeTypes_Callback knscore__providersmodel_mimetypes_callback = nullptr;
    KNSCore__ProvidersModel_MimeData_Callback knscore__providersmodel_mimedata_callback = nullptr;
    KNSCore__ProvidersModel_CanDropMimeData_Callback knscore__providersmodel_candropmimedata_callback = nullptr;
    KNSCore__ProvidersModel_SupportedDropActions_Callback knscore__providersmodel_supporteddropactions_callback = nullptr;
    KNSCore__ProvidersModel_SupportedDragActions_Callback knscore__providersmodel_supporteddragactions_callback = nullptr;
    KNSCore__ProvidersModel_InsertRows_Callback knscore__providersmodel_insertrows_callback = nullptr;
    KNSCore__ProvidersModel_InsertColumns_Callback knscore__providersmodel_insertcolumns_callback = nullptr;
    KNSCore__ProvidersModel_RemoveRows_Callback knscore__providersmodel_removerows_callback = nullptr;
    KNSCore__ProvidersModel_RemoveColumns_Callback knscore__providersmodel_removecolumns_callback = nullptr;
    KNSCore__ProvidersModel_MoveRows_Callback knscore__providersmodel_moverows_callback = nullptr;
    KNSCore__ProvidersModel_MoveColumns_Callback knscore__providersmodel_movecolumns_callback = nullptr;
    KNSCore__ProvidersModel_FetchMore_Callback knscore__providersmodel_fetchmore_callback = nullptr;
    KNSCore__ProvidersModel_CanFetchMore_Callback knscore__providersmodel_canfetchmore_callback = nullptr;
    KNSCore__ProvidersModel_Sort_Callback knscore__providersmodel_sort_callback = nullptr;
    KNSCore__ProvidersModel_Buddy_Callback knscore__providersmodel_buddy_callback = nullptr;
    KNSCore__ProvidersModel_Match_Callback knscore__providersmodel_match_callback = nullptr;
    KNSCore__ProvidersModel_Span_Callback knscore__providersmodel_span_callback = nullptr;
    KNSCore__ProvidersModel_MultiData_Callback knscore__providersmodel_multidata_callback = nullptr;
    KNSCore__ProvidersModel_Submit_Callback knscore__providersmodel_submit_callback = nullptr;
    KNSCore__ProvidersModel_Revert_Callback knscore__providersmodel_revert_callback = nullptr;
    KNSCore__ProvidersModel_ResetInternalData_Callback knscore__providersmodel_resetinternaldata_callback = nullptr;
    KNSCore__ProvidersModel_Event_Callback knscore__providersmodel_event_callback = nullptr;
    KNSCore__ProvidersModel_EventFilter_Callback knscore__providersmodel_eventfilter_callback = nullptr;
    KNSCore__ProvidersModel_TimerEvent_Callback knscore__providersmodel_timerevent_callback = nullptr;
    KNSCore__ProvidersModel_ChildEvent_Callback knscore__providersmodel_childevent_callback = nullptr;
    KNSCore__ProvidersModel_CustomEvent_Callback knscore__providersmodel_customevent_callback = nullptr;
    KNSCore__ProvidersModel_ConnectNotify_Callback knscore__providersmodel_connectnotify_callback = nullptr;
    KNSCore__ProvidersModel_DisconnectNotify_Callback knscore__providersmodel_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KNSCore::ProvidersModel {
        using KNSCore::ProvidersModel::childEvent;
        using KNSCore::ProvidersModel::connectNotify;
        using KNSCore::ProvidersModel::customEvent;
        using KNSCore::ProvidersModel::disconnectNotify;
        using KNSCore::ProvidersModel::resetInternalData;
        using KNSCore::ProvidersModel::timerEvent;
    };

    VirtualKNSCoreProvidersModel() : KNSCore::ProvidersModel() {};
    VirtualKNSCoreProvidersModel(QObject* parent) : KNSCore::ProvidersModel(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (knscore__providersmodel_metaobject_callback) {
            QMetaObject* callback_ret = knscore__providersmodel_metaobject_callback(this);
            return callback_ret;
        }
        return KNSCore__ProvidersModel::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (knscore__providersmodel_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = knscore__providersmodel_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KNSCore__ProvidersModel::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (knscore__providersmodel_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = knscore__providersmodel_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KNSCore__ProvidersModel::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QHash<int, QByteArray> roleNames() const override {
        if (knscore__providersmodel_rolenames_callback) {
            libqt_map /* of int to libqt_string */ callback_ret = knscore__providersmodel_rolenames_callback(this);
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
        return KNSCore__ProvidersModel::roleNames();
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(const QModelIndex& index, int role) const override {
        if (knscore__providersmodel_data_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = role;
            QVariant* callback_ret = knscore__providersmodel_data_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KNSCore__ProvidersModel::data(index, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual int rowCount(const QModelIndex& parent) const override {
        if (knscore__providersmodel_rowcount_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int callback_ret = knscore__providersmodel_rowcount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KNSCore__ProvidersModel::rowCount(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
        if (knscore__providersmodel_index_callback) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            QModelIndex* callback_ret = knscore__providersmodel_index_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KNSCore__ProvidersModel::index(row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
        if (knscore__providersmodel_sibling_callback) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& idx_ret = idx;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&idx_ret);
            QModelIndex* callback_ret = knscore__providersmodel_sibling_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KNSCore__ProvidersModel::sibling(row, column, idx);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
        if (knscore__providersmodel_dropmimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = knscore__providersmodel_dropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return KNSCore__ProvidersModel::dropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
        if (knscore__providersmodel_flags_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int callback_ret = knscore__providersmodel_flags_callback(this, cbval1);
            return static_cast<Qt::ItemFlags>(callback_ret);
        }
        return KNSCore__ProvidersModel::flags(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
        if (knscore__providersmodel_setdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            int cbval3 = role;
            bool callback_ret = knscore__providersmodel_setdata_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KNSCore__ProvidersModel::setData(index, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
        if (knscore__providersmodel_headerdata_callback) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            int cbval3 = role;
            QVariant* callback_ret = knscore__providersmodel_headerdata_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KNSCore__ProvidersModel::headerData(section, orientation, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
        if (knscore__providersmodel_setheaderdata_callback) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = role;
            bool callback_ret = knscore__providersmodel_setheaderdata_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        }
        return KNSCore__ProvidersModel::setHeaderData(section, orientation, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
        if (knscore__providersmodel_itemdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            libqt_map /* of int to QVariant* */ callback_ret = knscore__providersmodel_itemdata_callback(this, cbval1);
            QMap<int, QVariant> callback_ret_QMap;
            int* callback_ret_karr = static_cast<int*>(callback_ret.keys);
            QVariant** callback_ret_varr = static_cast<QVariant**>(callback_ret.values);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QMap.insert(static_cast<int>(callback_ret_karr[i]), *(callback_ret_varr[i]));
            }
            return callback_ret_QMap;
        }
        return KNSCore__ProvidersModel::itemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
        if (knscore__providersmodel_setitemdata_callback) {
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
            bool callback_ret = knscore__providersmodel_setitemdata_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KNSCore__ProvidersModel::setItemData(index, roles);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool clearItemData(const QModelIndex& index) override {
        if (knscore__providersmodel_clearitemdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            bool callback_ret = knscore__providersmodel_clearitemdata_callback(this, cbval1);
            return callback_ret;
        }
        return KNSCore__ProvidersModel::clearItemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> mimeTypes() const override {
        if (knscore__providersmodel_mimetypes_callback) {
            const char** callback_ret = knscore__providersmodel_mimetypes_callback(this);
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
        return KNSCore__ProvidersModel::mimeTypes();
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* mimeData(const QList<QModelIndex>& indexes) const override {
        if (knscore__providersmodel_mimedata_callback) {
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
            QMimeData* callback_ret = knscore__providersmodel_mimedata_callback(this, cbval1);
            free(indexes_arr);
            return callback_ret;
        }
        return KNSCore__ProvidersModel::mimeData(indexes);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
        if (knscore__providersmodel_candropmimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = knscore__providersmodel_candropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return KNSCore__ProvidersModel::canDropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (knscore__providersmodel_supporteddropactions_callback) {
            int callback_ret = knscore__providersmodel_supporteddropactions_callback(this);
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return KNSCore__ProvidersModel::supportedDropActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDragActions() const override {
        if (knscore__providersmodel_supporteddragactions_callback) {
            int callback_ret = knscore__providersmodel_supporteddragactions_callback(this);
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return KNSCore__ProvidersModel::supportedDragActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
        if (knscore__providersmodel_insertrows_callback) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = knscore__providersmodel_insertrows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KNSCore__ProvidersModel::insertRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
        if (knscore__providersmodel_insertcolumns_callback) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = knscore__providersmodel_insertcolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KNSCore__ProvidersModel::insertColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
        if (knscore__providersmodel_removerows_callback) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = knscore__providersmodel_removerows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KNSCore__ProvidersModel::removeRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
        if (knscore__providersmodel_removecolumns_callback) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = knscore__providersmodel_removecolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KNSCore__ProvidersModel::removeColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (knscore__providersmodel_moverows_callback) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceRow;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;
            bool callback_ret = knscore__providersmodel_moverows_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return KNSCore__ProvidersModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (knscore__providersmodel_movecolumns_callback) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceColumn;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;
            bool callback_ret = knscore__providersmodel_movecolumns_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return KNSCore__ProvidersModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual void fetchMore(const QModelIndex& parent) override {
        if (knscore__providersmodel_fetchmore_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            knscore__providersmodel_fetchmore_callback(this, cbval1);
            return;
        }
        KNSCore__ProvidersModel::fetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canFetchMore(const QModelIndex& parent) const override {
        if (knscore__providersmodel_canfetchmore_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = knscore__providersmodel_canfetchmore_callback(this, cbval1);
            return callback_ret;
        }
        return KNSCore__ProvidersModel::canFetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void sort(int column, Qt::SortOrder order) override {
        if (knscore__providersmodel_sort_callback) {
            int cbval1 = column;
            int cbval2 = static_cast<int>(order);
            knscore__providersmodel_sort_callback(this, cbval1, cbval2);
            return;
        }
        KNSCore__ProvidersModel::sort(column, order);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex buddy(const QModelIndex& index) const override {
        if (knscore__providersmodel_buddy_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelIndex* callback_ret = knscore__providersmodel_buddy_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KNSCore__ProvidersModel::buddy(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
        if (knscore__providersmodel_match_callback) {
            const QModelIndex& start_ret = start;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&start_ret);
            int cbval2 = role;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = hits;
            int cbval5 = static_cast<int>(flags);
            libqt_list /* of QModelIndex* */ callback_ret = knscore__providersmodel_match_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            QList<QModelIndex> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QModelIndex** callback_ret_arr = static_cast<QModelIndex**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return KNSCore__ProvidersModel::match(start, role, value, hits, flags);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize span(const QModelIndex& index) const override {
        if (knscore__providersmodel_span_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QSize* callback_ret = knscore__providersmodel_span_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KNSCore__ProvidersModel::span(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
        if (knscore__providersmodel_multidata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelRoleDataSpan* cbval2 = new QModelRoleDataSpan(roleDataSpan);
            knscore__providersmodel_multidata_callback(this, cbval1, cbval2);
            return;
        }
        KNSCore__ProvidersModel::multiData(index, roleDataSpan);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool submit() override {
        if (knscore__providersmodel_submit_callback) {
            bool callback_ret = knscore__providersmodel_submit_callback(this);
            return callback_ret;
        }
        return KNSCore__ProvidersModel::submit();
    }

    // Virtual method for C ABI access and custom callback
    virtual void revert() override {
        if (knscore__providersmodel_revert_callback) {
            knscore__providersmodel_revert_callback(this);
            return;
        }
        KNSCore__ProvidersModel::revert();
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetInternalData() override {
        if (knscore__providersmodel_resetinternaldata_callback) {
            knscore__providersmodel_resetinternaldata_callback(this);
            return;
        }
        KNSCore__ProvidersModel::resetInternalData();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (knscore__providersmodel_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = knscore__providersmodel_event_callback(this, cbval1);
            return callback_ret;
        }
        return KNSCore__ProvidersModel::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (knscore__providersmodel_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = knscore__providersmodel_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KNSCore__ProvidersModel::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (knscore__providersmodel_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            knscore__providersmodel_timerevent_callback(this, cbval1);
            return;
        }
        KNSCore__ProvidersModel::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (knscore__providersmodel_childevent_callback) {
            QChildEvent* cbval1 = event;
            knscore__providersmodel_childevent_callback(this, cbval1);
            return;
        }
        KNSCore__ProvidersModel::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (knscore__providersmodel_customevent_callback) {
            QEvent* cbval1 = event;
            knscore__providersmodel_customevent_callback(this, cbval1);
            return;
        }
        KNSCore__ProvidersModel::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (knscore__providersmodel_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            knscore__providersmodel_connectnotify_callback(this, cbval1);
            return;
        }
        KNSCore__ProvidersModel::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (knscore__providersmodel_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            knscore__providersmodel_disconnectnotify_callback(this, cbval1);
            return;
        }
        KNSCore__ProvidersModel::disconnectNotify(signal);
    }

    // Friend functions
    friend void KNSCore__ProvidersModel_SuperResetInternalData(KNSCore::ProvidersModel* self);
    friend void KNSCore__ProvidersModel_SuperTimerEvent(KNSCore::ProvidersModel* self, QTimerEvent* event);
    friend void KNSCore__ProvidersModel_SuperChildEvent(KNSCore::ProvidersModel* self, QChildEvent* event);
    friend void KNSCore__ProvidersModel_SuperCustomEvent(KNSCore::ProvidersModel* self, QEvent* event);
    friend void KNSCore__ProvidersModel_SuperConnectNotify(KNSCore::ProvidersModel* self, const QMetaMethod* signal);
    friend void KNSCore__ProvidersModel_SuperDisconnectNotify(KNSCore::ProvidersModel* self, const QMetaMethod* signal);
};

#endif
