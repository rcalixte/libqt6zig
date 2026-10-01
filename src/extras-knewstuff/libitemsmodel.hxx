#pragma once
#ifndef EXTRAS_KNEWSTUFF_LIBITEMSMODEL_HXX
#define EXTRAS_KNEWSTUFF_LIBITEMSMODEL_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KNSCore::ItemsModel
class VirtualKNSCoreItemsModel final : public KNSCore::ItemsModel {
  public:
    // Virtual class public types (including callbacks and access types)
    using KNSCore__ItemsModel_MetaObject_Callback = QMetaObject* (*)(const KNSCore__ItemsModel*);
    using KNSCore__ItemsModel_Metacast_Callback = void* (*)(KNSCore__ItemsModel*, const char*);
    using KNSCore__ItemsModel_Metacall_Callback = int (*)(KNSCore__ItemsModel*, int, int, void**);
    using KNSCore__ItemsModel_RowCount_Callback = int (*)(const KNSCore__ItemsModel*, QModelIndex*);
    using KNSCore__ItemsModel_Data_Callback = QVariant* (*)(const KNSCore__ItemsModel*, QModelIndex*, int);
    using KNSCore__ItemsModel_Index_Callback = QModelIndex* (*)(const KNSCore__ItemsModel*, int, int, QModelIndex*);
    using KNSCore__ItemsModel_Sibling_Callback = QModelIndex* (*)(const KNSCore__ItemsModel*, int, int, QModelIndex*);
    using KNSCore__ItemsModel_DropMimeData_Callback = bool (*)(KNSCore__ItemsModel*, QMimeData*, int, int, int, QModelIndex*);
    using KNSCore__ItemsModel_Flags_Callback = int (*)(const KNSCore__ItemsModel*, QModelIndex*);
    using KNSCore__ItemsModel_SetData_Callback = bool (*)(KNSCore__ItemsModel*, QModelIndex*, QVariant*, int);
    using KNSCore__ItemsModel_HeaderData_Callback = QVariant* (*)(const KNSCore__ItemsModel*, int, int, int);
    using KNSCore__ItemsModel_SetHeaderData_Callback = bool (*)(KNSCore__ItemsModel*, int, int, QVariant*, int);
    using KNSCore__ItemsModel_ItemData_Callback = libqt_map /* of int to QVariant* */ (*)(const KNSCore__ItemsModel*, QModelIndex*);
    using KNSCore__ItemsModel_SetItemData_Callback = bool (*)(KNSCore__ItemsModel*, QModelIndex*, libqt_map /* of int to QVariant* */);
    using KNSCore__ItemsModel_ClearItemData_Callback = bool (*)(KNSCore__ItemsModel*, QModelIndex*);
    using KNSCore__ItemsModel_MimeTypes_Callback = const char** (*)(const KNSCore__ItemsModel*);
    using KNSCore__ItemsModel_MimeData_Callback = QMimeData* (*)(const KNSCore__ItemsModel*, libqt_list /* of QModelIndex* */);
    using KNSCore__ItemsModel_CanDropMimeData_Callback = bool (*)(const KNSCore__ItemsModel*, QMimeData*, int, int, int, QModelIndex*);
    using KNSCore__ItemsModel_SupportedDropActions_Callback = int (*)(const KNSCore__ItemsModel*);
    using KNSCore__ItemsModel_SupportedDragActions_Callback = int (*)(const KNSCore__ItemsModel*);
    using KNSCore__ItemsModel_InsertRows_Callback = bool (*)(KNSCore__ItemsModel*, int, int, QModelIndex*);
    using KNSCore__ItemsModel_InsertColumns_Callback = bool (*)(KNSCore__ItemsModel*, int, int, QModelIndex*);
    using KNSCore__ItemsModel_RemoveRows_Callback = bool (*)(KNSCore__ItemsModel*, int, int, QModelIndex*);
    using KNSCore__ItemsModel_RemoveColumns_Callback = bool (*)(KNSCore__ItemsModel*, int, int, QModelIndex*);
    using KNSCore__ItemsModel_MoveRows_Callback = bool (*)(KNSCore__ItemsModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KNSCore__ItemsModel_MoveColumns_Callback = bool (*)(KNSCore__ItemsModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KNSCore__ItemsModel_FetchMore_Callback = void (*)(KNSCore__ItemsModel*, QModelIndex*);
    using KNSCore__ItemsModel_CanFetchMore_Callback = bool (*)(const KNSCore__ItemsModel*, QModelIndex*);
    using KNSCore__ItemsModel_Sort_Callback = void (*)(KNSCore__ItemsModel*, int, int);
    using KNSCore__ItemsModel_Buddy_Callback = QModelIndex* (*)(const KNSCore__ItemsModel*, QModelIndex*);
    using KNSCore__ItemsModel_Match_Callback = libqt_list /* of QModelIndex* */ (*)(const KNSCore__ItemsModel*, QModelIndex*, int, QVariant*, int, int);
    using KNSCore__ItemsModel_Span_Callback = QSize* (*)(const KNSCore__ItemsModel*, QModelIndex*);
    using KNSCore__ItemsModel_RoleNames_Callback = libqt_map /* of int to libqt_string */ (*)(const KNSCore__ItemsModel*);
    using KNSCore__ItemsModel_MultiData_Callback = void (*)(const KNSCore__ItemsModel*, QModelIndex*, QModelRoleDataSpan*);
    using KNSCore__ItemsModel_Submit_Callback = bool (*)(KNSCore__ItemsModel*);
    using KNSCore__ItemsModel_Revert_Callback = void (*)(KNSCore__ItemsModel*);
    using KNSCore__ItemsModel_ResetInternalData_Callback = void (*)(KNSCore__ItemsModel*);
    using KNSCore__ItemsModel_Event_Callback = bool (*)(KNSCore__ItemsModel*, QEvent*);
    using KNSCore__ItemsModel_EventFilter_Callback = bool (*)(KNSCore__ItemsModel*, QObject*, QEvent*);
    using KNSCore__ItemsModel_TimerEvent_Callback = void (*)(KNSCore__ItemsModel*, QTimerEvent*);
    using KNSCore__ItemsModel_ChildEvent_Callback = void (*)(KNSCore__ItemsModel*, QChildEvent*);
    using KNSCore__ItemsModel_CustomEvent_Callback = void (*)(KNSCore__ItemsModel*, QEvent*);
    using KNSCore__ItemsModel_ConnectNotify_Callback = void (*)(KNSCore__ItemsModel*, QMetaMethod*);
    using KNSCore__ItemsModel_DisconnectNotify_Callback = void (*)(KNSCore__ItemsModel*, QMetaMethod*);
    using KNSCore::ItemsModel::beginInsertColumns;
    using KNSCore::ItemsModel::beginInsertRows;
    using KNSCore::ItemsModel::beginMoveColumns;
    using KNSCore::ItemsModel::beginMoveRows;
    using KNSCore::ItemsModel::beginRemoveColumns;
    using KNSCore::ItemsModel::beginRemoveRows;
    using KNSCore::ItemsModel::beginResetModel;
    using KNSCore::ItemsModel::changePersistentIndex;
    using KNSCore::ItemsModel::changePersistentIndexList;
    using KNSCore::ItemsModel::createIndex;
    using KNSCore::ItemsModel::decodeData;
    using KNSCore::ItemsModel::encodeData;
    using KNSCore::ItemsModel::endInsertColumns;
    using KNSCore::ItemsModel::endInsertRows;
    using KNSCore::ItemsModel::endMoveColumns;
    using KNSCore::ItemsModel::endMoveRows;
    using KNSCore::ItemsModel::endRemoveColumns;
    using KNSCore::ItemsModel::endRemoveRows;
    using KNSCore::ItemsModel::endResetModel;
    using KNSCore::ItemsModel::isSignalConnected;
    using KNSCore::ItemsModel::persistentIndexList;
    using KNSCore::ItemsModel::receivers;
    using KNSCore::ItemsModel::sender;
    using KNSCore::ItemsModel::senderSignalIndex;

    // Instance callback storage
    KNSCore__ItemsModel_MetaObject_Callback knscore__itemsmodel_metaobject_callback = nullptr;
    KNSCore__ItemsModel_Metacast_Callback knscore__itemsmodel_metacast_callback = nullptr;
    KNSCore__ItemsModel_Metacall_Callback knscore__itemsmodel_metacall_callback = nullptr;
    KNSCore__ItemsModel_RowCount_Callback knscore__itemsmodel_rowcount_callback = nullptr;
    KNSCore__ItemsModel_Data_Callback knscore__itemsmodel_data_callback = nullptr;
    KNSCore__ItemsModel_Index_Callback knscore__itemsmodel_index_callback = nullptr;
    KNSCore__ItemsModel_Sibling_Callback knscore__itemsmodel_sibling_callback = nullptr;
    KNSCore__ItemsModel_DropMimeData_Callback knscore__itemsmodel_dropmimedata_callback = nullptr;
    KNSCore__ItemsModel_Flags_Callback knscore__itemsmodel_flags_callback = nullptr;
    KNSCore__ItemsModel_SetData_Callback knscore__itemsmodel_setdata_callback = nullptr;
    KNSCore__ItemsModel_HeaderData_Callback knscore__itemsmodel_headerdata_callback = nullptr;
    KNSCore__ItemsModel_SetHeaderData_Callback knscore__itemsmodel_setheaderdata_callback = nullptr;
    KNSCore__ItemsModel_ItemData_Callback knscore__itemsmodel_itemdata_callback = nullptr;
    KNSCore__ItemsModel_SetItemData_Callback knscore__itemsmodel_setitemdata_callback = nullptr;
    KNSCore__ItemsModel_ClearItemData_Callback knscore__itemsmodel_clearitemdata_callback = nullptr;
    KNSCore__ItemsModel_MimeTypes_Callback knscore__itemsmodel_mimetypes_callback = nullptr;
    KNSCore__ItemsModel_MimeData_Callback knscore__itemsmodel_mimedata_callback = nullptr;
    KNSCore__ItemsModel_CanDropMimeData_Callback knscore__itemsmodel_candropmimedata_callback = nullptr;
    KNSCore__ItemsModel_SupportedDropActions_Callback knscore__itemsmodel_supporteddropactions_callback = nullptr;
    KNSCore__ItemsModel_SupportedDragActions_Callback knscore__itemsmodel_supporteddragactions_callback = nullptr;
    KNSCore__ItemsModel_InsertRows_Callback knscore__itemsmodel_insertrows_callback = nullptr;
    KNSCore__ItemsModel_InsertColumns_Callback knscore__itemsmodel_insertcolumns_callback = nullptr;
    KNSCore__ItemsModel_RemoveRows_Callback knscore__itemsmodel_removerows_callback = nullptr;
    KNSCore__ItemsModel_RemoveColumns_Callback knscore__itemsmodel_removecolumns_callback = nullptr;
    KNSCore__ItemsModel_MoveRows_Callback knscore__itemsmodel_moverows_callback = nullptr;
    KNSCore__ItemsModel_MoveColumns_Callback knscore__itemsmodel_movecolumns_callback = nullptr;
    KNSCore__ItemsModel_FetchMore_Callback knscore__itemsmodel_fetchmore_callback = nullptr;
    KNSCore__ItemsModel_CanFetchMore_Callback knscore__itemsmodel_canfetchmore_callback = nullptr;
    KNSCore__ItemsModel_Sort_Callback knscore__itemsmodel_sort_callback = nullptr;
    KNSCore__ItemsModel_Buddy_Callback knscore__itemsmodel_buddy_callback = nullptr;
    KNSCore__ItemsModel_Match_Callback knscore__itemsmodel_match_callback = nullptr;
    KNSCore__ItemsModel_Span_Callback knscore__itemsmodel_span_callback = nullptr;
    KNSCore__ItemsModel_RoleNames_Callback knscore__itemsmodel_rolenames_callback = nullptr;
    KNSCore__ItemsModel_MultiData_Callback knscore__itemsmodel_multidata_callback = nullptr;
    KNSCore__ItemsModel_Submit_Callback knscore__itemsmodel_submit_callback = nullptr;
    KNSCore__ItemsModel_Revert_Callback knscore__itemsmodel_revert_callback = nullptr;
    KNSCore__ItemsModel_ResetInternalData_Callback knscore__itemsmodel_resetinternaldata_callback = nullptr;
    KNSCore__ItemsModel_Event_Callback knscore__itemsmodel_event_callback = nullptr;
    KNSCore__ItemsModel_EventFilter_Callback knscore__itemsmodel_eventfilter_callback = nullptr;
    KNSCore__ItemsModel_TimerEvent_Callback knscore__itemsmodel_timerevent_callback = nullptr;
    KNSCore__ItemsModel_ChildEvent_Callback knscore__itemsmodel_childevent_callback = nullptr;
    KNSCore__ItemsModel_CustomEvent_Callback knscore__itemsmodel_customevent_callback = nullptr;
    KNSCore__ItemsModel_ConnectNotify_Callback knscore__itemsmodel_connectnotify_callback = nullptr;
    KNSCore__ItemsModel_DisconnectNotify_Callback knscore__itemsmodel_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KNSCore::ItemsModel {
        using KNSCore::ItemsModel::childEvent;
        using KNSCore::ItemsModel::connectNotify;
        using KNSCore::ItemsModel::customEvent;
        using KNSCore::ItemsModel::disconnectNotify;
        using KNSCore::ItemsModel::resetInternalData;
        using KNSCore::ItemsModel::timerEvent;
    };

    VirtualKNSCoreItemsModel(KNSCore::EngineBase* engine) : KNSCore::ItemsModel(engine) {};
    VirtualKNSCoreItemsModel(KNSCore::EngineBase* engine, QObject* parent) : KNSCore::ItemsModel(engine, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (knscore__itemsmodel_metaobject_callback) {
            QMetaObject* callback_ret = knscore__itemsmodel_metaobject_callback(this);
            return callback_ret;
        }
        return KNSCore__ItemsModel::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (knscore__itemsmodel_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = knscore__itemsmodel_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KNSCore__ItemsModel::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (knscore__itemsmodel_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = knscore__itemsmodel_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KNSCore__ItemsModel::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual int rowCount(const QModelIndex& parent) const override {
        if (knscore__itemsmodel_rowcount_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int callback_ret = knscore__itemsmodel_rowcount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KNSCore__ItemsModel::rowCount(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(const QModelIndex& index, int role) const override {
        if (knscore__itemsmodel_data_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = role;
            QVariant* callback_ret = knscore__itemsmodel_data_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KNSCore__ItemsModel::data(index, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
        if (knscore__itemsmodel_index_callback) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            QModelIndex* callback_ret = knscore__itemsmodel_index_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KNSCore__ItemsModel::index(row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
        if (knscore__itemsmodel_sibling_callback) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& idx_ret = idx;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&idx_ret);
            QModelIndex* callback_ret = knscore__itemsmodel_sibling_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KNSCore__ItemsModel::sibling(row, column, idx);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
        if (knscore__itemsmodel_dropmimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = knscore__itemsmodel_dropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return KNSCore__ItemsModel::dropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
        if (knscore__itemsmodel_flags_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int callback_ret = knscore__itemsmodel_flags_callback(this, cbval1);
            return static_cast<Qt::ItemFlags>(callback_ret);
        }
        return KNSCore__ItemsModel::flags(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
        if (knscore__itemsmodel_setdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            int cbval3 = role;
            bool callback_ret = knscore__itemsmodel_setdata_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KNSCore__ItemsModel::setData(index, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
        if (knscore__itemsmodel_headerdata_callback) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            int cbval3 = role;
            QVariant* callback_ret = knscore__itemsmodel_headerdata_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KNSCore__ItemsModel::headerData(section, orientation, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
        if (knscore__itemsmodel_setheaderdata_callback) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = role;
            bool callback_ret = knscore__itemsmodel_setheaderdata_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        }
        return KNSCore__ItemsModel::setHeaderData(section, orientation, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
        if (knscore__itemsmodel_itemdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            libqt_map /* of int to QVariant* */ callback_ret = knscore__itemsmodel_itemdata_callback(this, cbval1);
            QMap<int, QVariant> callback_ret_QMap;
            int* callback_ret_karr = static_cast<int*>(callback_ret.keys);
            QVariant** callback_ret_varr = static_cast<QVariant**>(callback_ret.values);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QMap.insert(static_cast<int>(callback_ret_karr[i]), *(callback_ret_varr[i]));
            }
            return callback_ret_QMap;
        }
        return KNSCore__ItemsModel::itemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
        if (knscore__itemsmodel_setitemdata_callback) {
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
            bool callback_ret = knscore__itemsmodel_setitemdata_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KNSCore__ItemsModel::setItemData(index, roles);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool clearItemData(const QModelIndex& index) override {
        if (knscore__itemsmodel_clearitemdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            bool callback_ret = knscore__itemsmodel_clearitemdata_callback(this, cbval1);
            return callback_ret;
        }
        return KNSCore__ItemsModel::clearItemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> mimeTypes() const override {
        if (knscore__itemsmodel_mimetypes_callback) {
            const char** callback_ret = knscore__itemsmodel_mimetypes_callback(this);
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
        return KNSCore__ItemsModel::mimeTypes();
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* mimeData(const QList<QModelIndex>& indexes) const override {
        if (knscore__itemsmodel_mimedata_callback) {
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
            QMimeData* callback_ret = knscore__itemsmodel_mimedata_callback(this, cbval1);
            free(indexes_arr);
            return callback_ret;
        }
        return KNSCore__ItemsModel::mimeData(indexes);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
        if (knscore__itemsmodel_candropmimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = knscore__itemsmodel_candropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return KNSCore__ItemsModel::canDropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (knscore__itemsmodel_supporteddropactions_callback) {
            int callback_ret = knscore__itemsmodel_supporteddropactions_callback(this);
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return KNSCore__ItemsModel::supportedDropActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDragActions() const override {
        if (knscore__itemsmodel_supporteddragactions_callback) {
            int callback_ret = knscore__itemsmodel_supporteddragactions_callback(this);
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return KNSCore__ItemsModel::supportedDragActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
        if (knscore__itemsmodel_insertrows_callback) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = knscore__itemsmodel_insertrows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KNSCore__ItemsModel::insertRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
        if (knscore__itemsmodel_insertcolumns_callback) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = knscore__itemsmodel_insertcolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KNSCore__ItemsModel::insertColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
        if (knscore__itemsmodel_removerows_callback) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = knscore__itemsmodel_removerows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KNSCore__ItemsModel::removeRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
        if (knscore__itemsmodel_removecolumns_callback) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = knscore__itemsmodel_removecolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KNSCore__ItemsModel::removeColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (knscore__itemsmodel_moverows_callback) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceRow;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;
            bool callback_ret = knscore__itemsmodel_moverows_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return KNSCore__ItemsModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (knscore__itemsmodel_movecolumns_callback) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceColumn;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;
            bool callback_ret = knscore__itemsmodel_movecolumns_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return KNSCore__ItemsModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual void fetchMore(const QModelIndex& parent) override {
        if (knscore__itemsmodel_fetchmore_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            knscore__itemsmodel_fetchmore_callback(this, cbval1);
            return;
        }
        KNSCore__ItemsModel::fetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canFetchMore(const QModelIndex& parent) const override {
        if (knscore__itemsmodel_canfetchmore_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = knscore__itemsmodel_canfetchmore_callback(this, cbval1);
            return callback_ret;
        }
        return KNSCore__ItemsModel::canFetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void sort(int column, Qt::SortOrder order) override {
        if (knscore__itemsmodel_sort_callback) {
            int cbval1 = column;
            int cbval2 = static_cast<int>(order);
            knscore__itemsmodel_sort_callback(this, cbval1, cbval2);
            return;
        }
        KNSCore__ItemsModel::sort(column, order);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex buddy(const QModelIndex& index) const override {
        if (knscore__itemsmodel_buddy_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelIndex* callback_ret = knscore__itemsmodel_buddy_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KNSCore__ItemsModel::buddy(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
        if (knscore__itemsmodel_match_callback) {
            const QModelIndex& start_ret = start;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&start_ret);
            int cbval2 = role;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = hits;
            int cbval5 = static_cast<int>(flags);
            libqt_list /* of QModelIndex* */ callback_ret = knscore__itemsmodel_match_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            QList<QModelIndex> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QModelIndex** callback_ret_arr = static_cast<QModelIndex**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return KNSCore__ItemsModel::match(start, role, value, hits, flags);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize span(const QModelIndex& index) const override {
        if (knscore__itemsmodel_span_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QSize* callback_ret = knscore__itemsmodel_span_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KNSCore__ItemsModel::span(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QHash<int, QByteArray> roleNames() const override {
        if (knscore__itemsmodel_rolenames_callback) {
            libqt_map /* of int to libqt_string */ callback_ret = knscore__itemsmodel_rolenames_callback(this);
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
        return KNSCore__ItemsModel::roleNames();
    }

    // Virtual method for C ABI access and custom callback
    virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
        if (knscore__itemsmodel_multidata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelRoleDataSpan* cbval2 = new QModelRoleDataSpan(roleDataSpan);
            knscore__itemsmodel_multidata_callback(this, cbval1, cbval2);
            return;
        }
        KNSCore__ItemsModel::multiData(index, roleDataSpan);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool submit() override {
        if (knscore__itemsmodel_submit_callback) {
            bool callback_ret = knscore__itemsmodel_submit_callback(this);
            return callback_ret;
        }
        return KNSCore__ItemsModel::submit();
    }

    // Virtual method for C ABI access and custom callback
    virtual void revert() override {
        if (knscore__itemsmodel_revert_callback) {
            knscore__itemsmodel_revert_callback(this);
            return;
        }
        KNSCore__ItemsModel::revert();
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetInternalData() override {
        if (knscore__itemsmodel_resetinternaldata_callback) {
            knscore__itemsmodel_resetinternaldata_callback(this);
            return;
        }
        KNSCore__ItemsModel::resetInternalData();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (knscore__itemsmodel_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = knscore__itemsmodel_event_callback(this, cbval1);
            return callback_ret;
        }
        return KNSCore__ItemsModel::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (knscore__itemsmodel_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = knscore__itemsmodel_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KNSCore__ItemsModel::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (knscore__itemsmodel_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            knscore__itemsmodel_timerevent_callback(this, cbval1);
            return;
        }
        KNSCore__ItemsModel::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (knscore__itemsmodel_childevent_callback) {
            QChildEvent* cbval1 = event;
            knscore__itemsmodel_childevent_callback(this, cbval1);
            return;
        }
        KNSCore__ItemsModel::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (knscore__itemsmodel_customevent_callback) {
            QEvent* cbval1 = event;
            knscore__itemsmodel_customevent_callback(this, cbval1);
            return;
        }
        KNSCore__ItemsModel::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (knscore__itemsmodel_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            knscore__itemsmodel_connectnotify_callback(this, cbval1);
            return;
        }
        KNSCore__ItemsModel::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (knscore__itemsmodel_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            knscore__itemsmodel_disconnectnotify_callback(this, cbval1);
            return;
        }
        KNSCore__ItemsModel::disconnectNotify(signal);
    }

    // Friend functions
    friend void KNSCore__ItemsModel_SuperResetInternalData(KNSCore::ItemsModel* self);
    friend void KNSCore__ItemsModel_SuperTimerEvent(KNSCore::ItemsModel* self, QTimerEvent* event);
    friend void KNSCore__ItemsModel_SuperChildEvent(KNSCore::ItemsModel* self, QChildEvent* event);
    friend void KNSCore__ItemsModel_SuperCustomEvent(KNSCore::ItemsModel* self, QEvent* event);
    friend void KNSCore__ItemsModel_SuperConnectNotify(KNSCore::ItemsModel* self, const QMetaMethod* signal);
    friend void KNSCore__ItemsModel_SuperDisconnectNotify(KNSCore::ItemsModel* self, const QMetaMethod* signal);
};

#endif
